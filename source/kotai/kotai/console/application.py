#!/usr/bin/env python3
# =========================================================================== #

import argparse
import logging
import csv
from pathlib import Path
from multiprocessing import Pool
from typing import Any
from pprint import pprint


from kotai.constraints.recursiveStructs import _getRecursiveConstraints, has_rec_params
from kotai.constraints.basicConstraints import _getBasicConstraints
from kotai.benchInfo.GetBenchInfo import GetBenchInfo
from kotai.plugin.PrintDescriptors import PrintDescriptors
from kotai.plugin.Jotai import Jotai
from kotai.plugin.CompileBenchmarks import Compile
from kotai.plugin.RunBenchmarks import Run
from kotai.templates.benchmark import GenBenchTemplatePrefix, randGenerator, GenBenchTemplateMainBegin, GenBenchTemplateMainEnd, genSwitch, GenBenchSwitchBegin, GenBenchSwitchEnd, usage, genSwitchCFG
from kotai.kotypes import BenchInfo, CaseBenchInfo, Failure, ExitCode, LogThen, OptLevel, OptLevels, SysExitCode, ConstrainExecTypes, setLog, success, failure, valid
from kotai.logconf import logFmt, sep


class Application:

    # maxtasksperchild (passed to mp.Pool ctor)
    mtpc: int = 16

    def __init__(self, ) -> None:

        # Attribute type annotation
        self.clean: bool
        self.inputdir: list[str]
        self.nproc: int
        self.chunksize: int
        self.optLevels: list[OptLevel] = []
        self.ketList: list[str] = []
        self.logfile: str
        self.includeCFGInfo: bool
        self.addTimeRoutine: bool


        self.args = argparse.Namespace()
        cli = argparse.ArgumentParser(
            prog='python -m kotai',
            description='Jotai options'
        )

        cli.add_argument('-c', '--clean',     action='store_true', default=False)
        cli.add_argument('--no-log',          action='store_true', default=False)
        cli.add_argument('-i', '--inputdir',  type=str, nargs='+', required=True)
        cli.add_argument('-j', '--nproc',     type=int, default=8)
        cli.add_argument('-J', '--chunksize', type=int, default=-1)
        cli.add_argument('-K',                type=str, nargs='+', default='all')
        cli.add_argument('-o', '--optLevel',  type=str, nargs='+', choices=OptLevels, default='O0')
        cli.add_argument('-L', '--logfile',   default='./output/jotai.log')
        cli.add_argument('-s', '--CFGinfo',   action='store_true', default=False)
        cli.add_argument('-t', '--time',      action='store_true', default=False)


        cli.parse_args(namespace=self.args)

        # [-i]
        self.inputBenchmarks = [P for p in self.args.inputdir
                                  if (P := Path(p)).exists()]

        # [-j]
        self.nproc      = (self.args.nproc if self.args.nproc > 1
                           else 1)

        # [-J]
        self.chunksize  = (self.args.chunksize if self.args.chunksize > 1
                           else 64)

        # [-K]
        if 'all' in self.args.K:
            self.ketList = ConstrainExecTypes
        else:
            self.ketList = (kets if (kets := [ket for ket in self.args.K])
                              else ['all'])

        # [--optLevel]
        if 'all' in self.args.optLevel:
            self.optLevels = list(OptLevels)
        else:
            self.optLevels = (opts if (opts := [opt for opt in self.args.optLevel if opt in OptLevels])
                              else ['O0'])

        self.includeCFGInfo = self.args.CFGinfo
        self.addTimeRoutine = self.args.time

        if self.args.no_log:
            # [--no-log] Disable logging
            logger = logging.getLogger()
            logger.propagate = False
            logger.disabled = True
            setLog(False)
        else:
            # [-L] Logging defaults
            setLog(True)
            logging.basicConfig(
                filename=self.args.logfile,
                filemode='w+',
                format=logFmt,
                level=logging.DEBUG
            )
            logging.debug(f'{self.args=}')


    def start(self, ) -> SysExitCode:
        return _start(self)  # Defined at the end of this file

# --------------------------------------------------------------------------- #


# Deletes the files generated by this program on a previous run
def _cleanFn(pArgs: BenchInfo) -> ExitCode:
    cFileMetaDir = pArgs.cFilePath.with_suffix('.d')
    genFiles     = cFileMetaDir.glob('*')

    # For each file inside the bench.d folder
    for file in genFiles:

        # Delete it
        try: file.unlink(missing_ok=True)
        except Exception as e:
            logging.error(f'{e}: {file}')
            continue

    # Finally, delete the .d folder
    try: cFileMetaDir.rmdir()
    except Exception as e:
        return LogThen.Err(f'{e}: {cFileMetaDir}')

    return LogThen.Ok(f'Deleted {cFileMetaDir}')


def getFnName(descriptor: str) -> str | Failure:
    '''
    Called by _genDescriptor to retrieve the fn name found in the benchmark.
    The name is important because we gather stats later with:
    $ cfggrind_info -f "benchBinPath::fnName" -s functions ...
    '''

    tokens = [t for t in descriptor.split() if t]

    if 'no-params' in tokens:        return failure
    if tokens.count('function') > 1: return failure

    # The fn name is the token after the 'function' keyword
    # The -1 excludes the last token, to avoid IndexError when we +1
    try: fn = '' + tokens[tokens.index('function', 0, -1) + 1]
    except Exception:                return failure
    else:                            return fn


# Worker function mapped in a multiprocessing.Pool to run PrintDescriptors
def _genDescriptor(pArgs: BenchInfo) -> BenchInfo:

    cFilePath = pArgs.cFilePath

    msg, err = PrintDescriptors(cFilePath).runcmd()

    # If the PrintDescriptors plugin fails, return before creating the file
    if err == failure:
        return pArgs.Err('descriptor', f'PrintDescriptors [{cFilePath}]:"{msg=}"')

    # If the fnName isn't found, return before creating the file
    if (fnName := getFnName(msg)) == failure:
        return pArgs.Err('descriptor', f'{fnName=}')

    # Creates the output dir for the current cFile
    cFileMetaDir = cFilePath.with_suffix('.d')
    try: cFileMetaDir.mkdir(parents=True, exist_ok=True)
    except Exception as e:
        return pArgs.Err('descriptor', f'{e}: PrintDescriptors [{cFileMetaDir}]')

    # Creates the descriptor file
    descriptorPath = cFileMetaDir / 'descriptor'
    try:
        with open(descriptorPath, 'w', encoding='utf-8') as descFile:
            descFile.write(msg)
    except Exception as e:
        return pArgs.Err('descriptor', f'{e}: PrintDescriptors [{descriptorPath}]')

    return BenchInfo(pArgs.cFilePath,
                     fnName=fnName,
                     ketList=pArgs.ketList,
                     optLevelList=pArgs.optLevelList,
                     exitCodes={'descriptor': success},
                     descriptor = msg,
                     includeCFGInfo = pArgs.includeCFGInfo,
                     addTimeRoutine = pArgs.addTimeRoutine)


# Worker function mapped in a multiprocessing.Pool to generate basic constraints
def _runBasicConstraints(pArgs: BenchInfo) -> BenchInfo:

    cFilePath              = pArgs.cFilePath
    cFileMetaDir           = cFilePath.with_suffix('.d')
    descriptorPath         = cFileMetaDir / 'descriptor'

    emptyDescriptor = False
    exitCodes: dict[Any, ExitCode] = {}

    basicConstraints = [x for x in ['int-bounds', 'big-arr', 'big-arr-10x', 'empty'] if x in pArgs.ketList]
    for c in basicConstraints:
        if c == 'empty':
            desc = ''
            emptyDescriptor = True
        else:
            desc = _getBasicConstraints(pArgs, c)

        if desc or emptyDescriptor:
            try:
                with open(str(cFileMetaDir) + "/constraint_" + c, "w") as constraint_file:
                    try: 
                        constraint_file.write(desc)
                        constraint_file.close()
                    except Exception as e:
                        exitCodes[c] = failure
                        continue
            except Exception as e:
                exitCodes[c] = failure
                continue

            exitCodes[c] = success
            emptyDescriptor = False
        else:
            exitCodes[c] = failure

    pArgs.setExitCodes(exitCodes)
    return pArgs

# Worker function mapped in a multiprocessing.Pool to generate recursive constraints
def _runRecursiveConstraints(pArgs: BenchInfo) -> BenchInfo:
    
    descriptor = pArgs.descriptor
    exitCodes: dict[Any, ExitCode] = {}
    cFilePath              = pArgs.cFilePath
    cFileMetaDir           = cFilePath.with_suffix('.d')


    skel_list = [x for x in ['linked', 'dlinked', 'bintree'] if x in pArgs.ketList]
    recursive_params = has_rec_params(descriptor)
    if recursive_params:
        for s in skel_list:
            rec_constraint = _getRecursiveConstraints(recursive_params, s)
            # print(rec_constraint)
            if rec_constraint: 
                try:
                    with open(str(cFileMetaDir) + "/constraint_" + s, "w") as constraint_file:
                        try: 
                            constraint_file.write(rec_constraint)
                            constraint_file.close()
                        except Exception as e:
                            exitCodes[s] = failure
                            continue
                except Exception as e:
                    exitCodes[s] = failure
                    continue

                exitCodes[s] = success
                
            else:
                exitCodes[s] = failure
    else:
        for s in skel_list:
            exitCodes[s] = failure

    pArgs.setExitCodes(exitCodes)
    return pArgs



# Worker function mapped in a multiprocessing.Pool to generate test benchmark
def _runJotai(pArgs: BenchInfo) -> BenchInfo:
    '''
    Creates genBenchFile: a main() entry point to the original benchmark.

    Individual sections of the result are added to a buffer, which is only
    stored to disk (genBenchFile) if every step was successful.

    The headers, defines and typedefs are added to the buffer, then Jotai is
    used to generate the mainFn body (as a string), which declares and
    initializes variables needed by the benchFn.
    '''

    cFilePath = pArgs.cFilePath

    # buffer <- includes, defines, typedefs and runtime info placeholder
    genBuffer = GenBenchTemplatePrefix
    genBuffer += randGenerator

    try:
        with open(cFilePath, 'r', encoding='utf-8') as cFileHandle:
            pArgs.benchFunction = cFileHandle.read()
    except Exception as e:
        return pArgs.Err('Jotai', f'{e}')

    cFileMetaDir    = cFilePath.with_suffix('.d')
    descriptorPath  = cFileMetaDir / 'descriptor'

    jotaiSwitchCase = ''
    genSwitchList: list[tuple[int, str, str, ExitCode, str]] = []
    usageCases: list[tuple[int, str]] = []

    
    for idx, ket in enumerate(pArgs.ketList):
        if ket in pArgs.exitCodes and pArgs.exitCodes[ket] == failure:
            continue

        constraintsPath = cFileMetaDir / f'constraint_{ket}'

        # Jotai's result
        if(pArgs.addTimeRoutine):
            jotaiResult, err = Jotai(constraintsPath, descriptorPath).runcmd('time')
        else:
            jotaiResult, err = Jotai(constraintsPath, descriptorPath).runcmd()

        # If error: returns before creating the genbench file
        if err == failure:
            print('error ' + ket)
            pArgs.setExitCodes({ket: failure})
            continue
        else:
            pArgs.setExitCodes({ket: success})


        # If recursive, separate jotai results
        
        match jotaiResult.split('/*RV_DELIM*/'):
            case [recFunc, decl]:  
                recFunction = recFunc;
                jotaiSwitchCase = decl

            case [decl]:
                recFunction = ""
                jotaiSwitchCase = decl

        genSwitchList += [(idx, ket, jotaiSwitchCase, err, recFunction)]
        usageCases += [(idx, ket)]

    genBuffer += usage(usageCases)
    genBuffer += pArgs.benchFunction
    genBuffer += f'\n\n{sep}\n'


    if not genSwitchList:
        return pArgs.Err('Jotai', 'Jotai: Complete failure')

    switchCases = ""
    aux_functions = ""

    aux_function_set = set()
    for sw in genSwitchList:
        idx, ket, out, err, aux_func = sw
        if(aux_func not in aux_function_set):
            aux_function_set.add(aux_func)
            aux_functions += aux_func

        switchCases += genSwitch(idx, out, ket)
        pArgs.benchCases[ket] = CaseBenchInfo(idx, out, aux_func)


    genBuffer += aux_functions
    genBuffer += GenBenchTemplateMainBegin
    genBuffer += GenBenchSwitchBegin
    genBuffer += switchCases

    genBuffer += GenBenchSwitchEnd
    genBuffer += GenBenchTemplateMainEnd

    # Creates the genBench file and writes the buffer to it
    genBenchPath = cFileMetaDir / f'{cFilePath.stem}.c'
    try:
        with open(genBenchPath, 'w', encoding='utf-8') as genBenchFile:
            try: 
                genBenchFile.write(genBuffer)
                genBenchFile.close()
            except Exception as e:
                return pArgs.Err('Jotai', f'{e}')
    except Exception as e:
        return pArgs.Err('Jotai', f'{e}')

    # pArgs.setExitCodes({'jotai': success})
    return pArgs

# Compile benchmark with fsanitiza
def _compileGenBenchFsanitize(pArgs: BenchInfo) -> BenchInfo:
    cFilePath    = pArgs.cFilePath
    optLevelList = pArgs.optLevelList
    cFileMetaDir = cFilePath.with_suffix('.d')
    genBenchPath = cFileMetaDir / f'{cFilePath.stem}.c'
    
    optResList: list[tuple[OptLevel, ExitCode]] = []
    for opt in optLevelList:
        genBinPath   = cFileMetaDir / f'{cFilePath.stem}_fsanitize_{opt}'
        # Compiles the genBench into a binary
        _, err = Compile(opt, ofile=genBinPath, ifile=genBenchPath).runcmdFsanitize()

        if err == failure:
            print("compile error")
            pArgs.setExitCodes({opt: failure})
            continue
        optResList += [(opt, err), ]

    if not optResList:
        return pArgs.Err('Compile', 'Compile: Fsanitize Complete failure')
    return pArgs


def _runWithFsanitize(pArgs: BenchInfo) -> BenchInfo:
    cFilePath              = pArgs.cFilePath
    ketList                = pArgs.ketList
    optLevelList           = pArgs.optLevelList
    cFileMetaDir           = cFilePath.with_suffix('.d')

    ''' Runs binary compiled with Fsanitize'''
    runResList: list[tuple[str, OptLevel, str, ExitCode]] = []
    for opt in optLevelList:
        if opt in pArgs.exitCodes and pArgs.exitCodes[opt] == failure:
            continue

        #if opt in pArgs.exitCodes:
        genBinPath = cFileMetaDir / f'{cFilePath.stem}_fsanitize_{opt}'
        for ket in ketList:
            
            if ket in pArgs.exitCodes and pArgs.exitCodes[ket] == failure:
                continue
            result, err = Run(genBinPath, pArgs.fnName).runcmdFsanitize(str(pArgs.benchCases[ket].switchNum))
        
            if err == failure:
                print("run error")
                pArgs.setExitCodes({ket: failure})
                continue

            runResList += [(pArgs.fnName, opt, ket, err)]

    if not runResList:
        return pArgs.Err('Run', 'Run: Fsanitize Complete failure')
    return pArgs

# Compile benchmark without fsanitize to run with Valgrind and CFG later
def _compileGenBench(pArgs: BenchInfo) -> BenchInfo:
    cFilePath    = pArgs.cFilePath
    optLevelList = pArgs.optLevelList
    cFileMetaDir = cFilePath.with_suffix('.d')
    genBenchPath = cFileMetaDir / f'{cFilePath.stem}.c'
    
    optResList: list[tuple[OptLevel, ExitCode]] = []
    for opt in optLevelList:
        genBinPath   = cFileMetaDir / f'{cFilePath.stem}_{opt}'
        # Compiles the genBench into a binary
        _, err = Compile(opt, ofile=genBinPath, ifile=genBenchPath).runcmd()

        if err == failure:
            pArgs.setExitCodes({opt: failure})
            continue
        optResList += [(opt, err), ]

    if not optResList:
        return pArgs.Err('Compile', 'Compile: Complete failure')
    return pArgs


def _runCFGgrind(pArgs: BenchInfo) -> BenchInfo:
    cFilePath              = pArgs.cFilePath
    ketList                = pArgs.ketList
    optLevelList           = pArgs.optLevelList
    cFileMetaDir           = cFilePath.with_suffix('.d')

    caseStdout: dict[str, str] = {}
    ''' Runs valgrind-memcheck, cfgg-asmmap, valgrind-cfgg and cfgg-info '''
    runResList: list[tuple[str, OptLevel, str, ExitCode]] = []
    for opt in optLevelList:
        if opt in pArgs.exitCodes and pArgs.exitCodes[opt] == failure:
            continue

        #if opt in pArgs.exitCodes:
        genBinPath = cFileMetaDir / f'{cFilePath.stem}_{opt}'
        for ket in ketList:
            
            if ket in pArgs.exitCodes and pArgs.exitCodes[ket] == failure:
                continue

            result, err = Run(genBinPath, pArgs.fnName).runcmd(str(pArgs.benchCases[ket].switchNum), ket)
            if err == failure:
                print('CFG error')
                pArgs.setExitCodes({ket: failure})
                #pArgs.setBenchCasesError(cFilePath, ket)
                continue

            result = result.rstrip()
            if ket not in caseStdout:
                # print only primitive types
                if result and '{{other_type}}' not in result:
                    if not pArgs.addTimeRoutine:
                        caseStdout[ket+opt] = result
                    else:
                        result = result.split("\n",1)
                        if len(result) > 1:
                            caseStdout[ket+opt] = result[1]

            
            runResList += [(pArgs.fnName, opt, ket, err)]

    if not runResList:
        return pArgs.Err('Run', 'Run: Complete failure')
    pArgs.setCaseStdout(caseStdout)
    return pArgs

# Compile benchmark with kcc
def _compileKcc(pArgs: BenchInfo) -> BenchInfo:
    cFilePath    = pArgs.cFilePath
    optLevelList = pArgs.optLevelList
    cFileMetaDir = cFilePath.with_suffix('.d')
    genBenchPath = cFileMetaDir / f'{cFilePath.stem}.c'
    
    optResList: list[tuple[OptLevel, ExitCode]] = []
    for opt in optLevelList:
        genBinPath   = cFileMetaDir / f'{cFilePath.stem}_kcc_{opt}'
        # Compiles the genBench into a binary
        _, err = Compile(opt, ofile=genBinPath, ifile=genBenchPath).runcmdKcc()

        if err == failure:
            print('kcc compile error')
            pArgs.setExitCodes({opt: failure})
            continue
        optResList += [(opt, err), ]

    if not optResList:
        return pArgs.Err('Kcc', 'Kcc: Complete failure')
    return pArgs

def _runWithKcc(pArgs: BenchInfo) -> BenchInfo:
    cFilePath              = pArgs.cFilePath
    ketList                = pArgs.ketList
    optLevelList           = pArgs.optLevelList
    cFileMetaDir           = cFilePath.with_suffix('.d')

    ''' Runs binary compiled with Kcc'''
    runResList: list[tuple[str, OptLevel, str, ExitCode]] = []
    for opt in optLevelList:
        if opt in pArgs.exitCodes and pArgs.exitCodes[opt] == failure:
            continue

        #if opt in pArgs.exitCodes:
        genBinPath = cFileMetaDir / f'{cFilePath.stem}_kcc_{opt}'
        for ket in ketList:
            
            if ket in pArgs.exitCodes and pArgs.exitCodes[ket] == failure:
                continue
            result, err = Run(genBinPath, pArgs.fnName).runcmdKcc(str(pArgs.benchCases[ket].switchNum))
            
            if err == failure:
                print("kcc run error")
                pArgs.setExitCodes({ket: failure})
                continue

            runResList += [(pArgs.fnName, opt, ket, err)]

    if not runResList:
        return pArgs.Err('Run', 'Run: Kcc Complete failure')
    return pArgs

def _extractCFGInfo(pArgs: BenchInfo, ket: str):
    cFilePath = pArgs.cFilePath
    cFileMetaDir    = cFilePath.with_suffix('.d')

    ket_opt_patterns = {}
    cfg_info = {}
    for o in pArgs.optLevelList:
        ket_opt_patterns[o] = '*' + o + '_' + ket + '.info'
    
    info_ket_opt_Paths = {ket_opt: list(cFileMetaDir.glob(path)) for ket_opt, path in ket_opt_patterns.items()}
    for ket_opt, paths in info_ket_opt_Paths.items():
        desiredCols = ['static_instructions_' + ket_opt, 'dynamic_instructions_' + ket_opt]
        res = [GetBenchInfo(cFilePath, pArgs.optLevelList, pArgs.ketList).parseInfo(p) for p in paths]
        cfg_info[ket_opt] = [GetBenchInfo(cFilePath, pArgs.optLevelList, pArgs.ketList).flattenCfgInfo(r, desiredCols, ket_opt) for r in res if r]
    
    str_cfg_info = ''
    for o in pArgs.optLevelList:
        for item in cfg_info[o]:
            for key, value in item.items():
                str_cfg_info =  str_cfg_info + '          // ' + key + ' : ' + str(value) + '\n'
        str_cfg_info += '          // ------------------------------- \n'


    pArgs.benchCases[ket].CFGinfo = str_cfg_info


# Generate final benchmark (filter out errors and undefined behaviour)
def _createFinalBench(pArgs: BenchInfo) -> BenchInfo:


    cFilePath = pArgs.cFilePath
    cFileMetaDir    = cFilePath.with_suffix('.d')
    switchBuffer = ""
    aux_function = ""
    usageCases: list[tuple[int, str]] = []

    switch_count = 0
    aux_function_set = set()


    for ket in pArgs.ketList:
        if ket in pArgs.exitCodes and pArgs.exitCodes[ket] == failure:
            continue

        _extractCFGInfo(pArgs, ket)

        pArgs.benchCases[ket].switchNum = switch_count
        usageCases += [(switch_count , ket)]

        
        if(pArgs.benchCases[ket].auxFunction not in aux_function_set):
            aux_function_set.add(pArgs.benchCases[ket].auxFunction)
            aux_function += pArgs.benchCases[ket].auxFunction

        if pArgs.includeCFGInfo:
            switchBuffer += genSwitchCFG(pArgs.benchCases[ket].switchNum , pArgs.benchCases[ket].content, ket, pArgs.benchCases[ket].CFGinfo)
        else:
            switchBuffer += genSwitch(pArgs.benchCases[ket].switchNum , pArgs.benchCases[ket].content, ket)
        
        switch_count += 1

    genBuffer = GenBenchTemplatePrefix
    genBuffer += randGenerator
    genBuffer += usage(usageCases)
    genBuffer += pArgs.benchFunction
    genBuffer += f'\n\n{sep}\n\n'
    if aux_function:
        genBuffer += aux_function
        genBuffer += f'\n\n{sep}\n\n'
    genBuffer += GenBenchTemplateMainBegin
    genBuffer += GenBenchSwitchBegin
    genBuffer += switchBuffer
    genBuffer += GenBenchSwitchEnd
    genBuffer += GenBenchTemplateMainEnd

    # Creates the genBench file and writes the buffer to it
    genBenchPath = cFileMetaDir / f'{cFilePath.stem}_Final.c'
    try:
        with open(genBenchPath, 'w', encoding='utf-8') as genBenchFile:
            try: genBenchFile.write(genBuffer)
            except Exception as e:
                return pArgs.Err('JotaiFinal', f'{e}')
    except Exception as e:
        return pArgs.Err('JotaiFinal', f'{e}')
    
    return pArgs


def _start(self: Application, ) -> SysExitCode:

    
    #For each directory passed with -i/--inputdir, do:
    for benchDir in self.inputBenchmarks:

        #self.optLevelList
        pArgs = [BenchInfo(cf, ketList=self.ketList, optLevelList=self.optLevels, includeCFGInfo=self.includeCFGInfo, addTimeRoutine=self.addTimeRoutine) for cf in benchDir.glob('*.c')]
    
        # [-c] Deletes 
        if self.args.clean:
            with Pool(self.nproc) as pool:
                pool.imap_unordered(_cleanFn, pArgs, len(pArgs) // self.nproc // 2 + 1)
                pool.close()
                pool.join()
            return success


        with Pool(self.nproc) as pool:

            # ---------------------------- Gen descriptor. ---------------------------- #
            resGenDesc = [r for r in pool.imap_unordered(_genDescriptor, pArgs, self.chunksize) if valid(r)]
            if not resGenDesc:
                return '[PrintDescriptors] No descriptors were generated'

            # ---------------------------- Gen Constraints. ---------------------------- #
            resCons = [r for r in pool.imap_unordered(_runBasicConstraints, resGenDesc, self.chunksize) if valid(r)]
            if not resCons:
                return '[Constrain] No constraints were generated'

            if('linked' in self.ketList or 'dlinked' in self.ketList or 'bintree' in self.ketList):
                resLinked = [r for r in pool.imap_unordered(_runRecursiveConstraints, resCons, self.chunksize) if valid(r)]
            else:
                resLinked = resCons

            # ---------------------------- Gen test benchmark ---------------------------- #         
            resJotai = [r for r in pool.imap_unordered(_runJotai, resLinked, self.chunksize) if valid(r)]
            #print(resJotai)
            if not resJotai:
                print( '[Jotai] No benchmarks with entry points were generated')

            # ---------------------------- Compile and run with Fsanitize ---------------------------- #


            resClangFsanitize = [r for r in pool.imap_unordered(_compileGenBenchFsanitize, resJotai, self.chunksize) if valid(r)]
            if not resClangFsanitize:
                return '[Compile] No benchmarks with entry points compiled successfully with Fsanitize' 

            resFsanitize = [r for r in pool.imap_unordered(_runWithFsanitize, resClangFsanitize, self.chunksize) if valid(r)]
            if not resFsanitize:
                print('fsanitize')
                return '[runFsanitize] No binary executed successfully'


            # ---------------------------- Compile and run with Clang and valgrind ---------------------------- #

            resClang = [r for r in pool.imap_unordered(_compileGenBench, resFsanitize, self.chunksize) if valid(r)]

            if not resClang:
                return '[Clang] No benchmarks with entry points compiled successfully'

            resValgrind = [r for r in pool.imap_unordered(_runCFGgrind, resClang, self.chunksize) if valid(r)]
            if not resValgrind:
                print('valgrind')
                return '[Valgrind] No binary executed successfully'
            # ---------------------------- Compile and run with Kcc ---------------------------- #  

            # resCompileKcc = [r for r in pool.imap_unordered(_compileKcc, resValgrind, self.chunksize) if valid(r)]

            # if not resCompileKcc:
            #     return '[Kcc] No benchmarks with entry points compiled successfully'

            # resRunKcc = [r for r in pool.imap_unordered(_runWithKcc, resCompileKcc, self.chunksize) if valid(r)]
            # if not resRunKcc:
            #     print('kcc')
            #     return '[kcc] No binary executed successfully'

            # ---------------------------- Gen final benchmark ---------------------------- #

            resFinal = [r for r in pool.imap_unordered(_createFinalBench, resValgrind, self.chunksize) if valid(r)]
            if not resFinal:
                return '[Final benchmark] No file created'
            else:
            
            # ---------------------------- Gen output file ---------------------------- #
                with open('output/caseStdout.csv', 'w', encoding='utf-8') as caseStdoutFile:
                    nameAndCases = ['filename'] + [ket+opt for ket in self.ketList for opt in self.optLevels]
                    caseWriter = csv.DictWriter(caseStdoutFile, fieldnames=nameAndCases)
                    records = []
                    for r in resFinal:
                        records += [{
                            'filename': str(r.cFilePath)
                        } | {
                            ket+opt:
                            r.caseStdout[ket+opt] if ket+opt in r.caseStdout else 'NA'
                            for ket in self.ketList for opt in self.optLevels
                        }]

                    caseWriter.writeheader()
                    caseWriter.writerows(records)
            
            # ---------------------------- Gen switch cases ---------------------------- #

                caseNumbers = []

                with open('output/switchCases.csv', 'w', encoding='utf-8') as switchCaseFile:
                    sCases = ['filename'] + [ket for ket in self.ketList]
                    sCaseWriter = csv.DictWriter(switchCaseFile, fieldnames=sCases)
                    for r in resFinal:
                        caseNumbers += [{
                        'filename' : str(r.cFilePath)
                            } | { ket: r.benchCases[ket].switchNum if r.exitCodes[ket] != failure else 'NA'
                            for ket in self.ketList
                        }]
                    sCaseWriter.writeheader()
                    sCaseWriter.writerows(caseNumbers)

                print(len(resFinal))

            pool.close()
            pool.join()

    print('\n\nResults: \n')
    GetBenchInfo(self.args.inputdir, self.optLevels, self.ketList).runcmd()
    return success


def main() -> SysExitCode:
    return Application().start()



# =========================================================================== #
