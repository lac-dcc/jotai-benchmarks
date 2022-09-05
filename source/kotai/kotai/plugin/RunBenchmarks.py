#!/usr/bin/env python3
# =========================================================================== #

from pathlib import Path
from shutil import which

from kotai.kotypes import CmdResult, runproc, failure, runprocKcc

# --------------------------------------------------------------------------- #

class Run:

    # ---------------------------- Static attrs. ---------------------------- #

    exe: dict[str, Path] = {
        'valgrind':        Path('/usr/local/bin/valgrind'),
        'cfggrind_asmmap': Path('cfggrind_asmmap'),
        'cfggrind_info':   Path('cfggrind_info'),
    }

    timeout: float = 10.0

    # ---------------------------- Member attrs. ---------------------------- #

    __slots__ = (
        'binPath',
        'benchFn',
        'mapFilePath',
        'cfgOutFilePath',
        'cfggInfoOutPath',
    )

    # ----------------------------------------------------------------------- #
    def __init__(self, binPath: Path, benchFn: str):
        self.binPath = b if (b := which(binPath)) else ''
        self.benchFn = benchFn

        ''' path/to/benchName.d/benchName_optFlag.map '''
        self.mapFilePath: Path = Path(str(self.binPath) + '.map')

        ''' path/to/benchName.d/benchName_optFlag.cfg '''
        self.cfgOutFilePath: Path = Path(str(self.binPath) + '.cfg')

        ''' path/to/benchName.d/benchName_optFlag.map '''
        self.cfggInfoOutPath: Path = Path(str(self.binPath) + '.info')


    # ---------------------------Run Valgrinf and CFGGring-------------------------------- #

    def _run_cfggrind_asmmap(self, timeout: float, *args: str) -> CmdResult:
        proc_args = [
            f'{Run.exe["cfggrind_asmmap"]}',
            f'{self.binPath}',
        ]
        #print(f'cfgg_asmmap: {proc_args}')
        return runproc(proc_args, timeout, ofpath=self.mapFilePath)


    def _run_valgrind_memcheck(self, timeout: float, *args: str) -> CmdResult:
        proc_args = [
            f'{Run.exe["valgrind"]}',
            '--tool=memcheck',
            '--error-exitcode=1',
            f'{self.binPath}',
        ] + [args[0]]  # e.g., switch-case 'idx'
        # print(f'valgrind: {proc_args}')
        return runproc(proc_args, timeout)


    def _run_valgrind(self, timeout: float, *args: str) -> CmdResult:
        self.cfgOutFilePath = Path(str(self.cfgOutFilePath).replace('.cfg', f'_{args[1]}.cfg', 1))
        proc_args = [
            f'{Run.exe["valgrind"]}',
            '--tool=cfggrind',
            f'--cfg-outfile={self.cfgOutFilePath}',
            f'--instrs-map={self.mapFilePath}',
            f'{self.binPath}',
        ] + [args[0]]  # e.g., switch-case 'idx'
        # print(f'valgrind: {proc_args}')
        return runproc(proc_args, timeout)


    def _run_cfggrind_info(self, timeout: float, *args: str) -> CmdResult:
        self.cfggInfoOutPath = Path(str(self.cfggInfoOutPath).replace('.info', f'_{args[1]}.info', 1))
        proc_args = [
            f'{Run.exe["cfggrind_info"]}',
            '-f', f'{Path(self.binPath).name}::{self.benchFn}',
            '-s', 'functions',
            '-m', 'json',
            f'{self.cfgOutFilePath}'
        ] 
        #print(f'cfgg_info: {proc_args}')
        return runproc(proc_args, timeout, ofpath=self.cfggInfoOutPath)


    def runcmd(self, *args: str) -> CmdResult:
        cfggMapRes = self._run_cfggrind_asmmap(Run.timeout, *args)
        if cfggMapRes.err == failure:
            # print("map error")
            return cfggMapRes

        valgrindMemcheckRes = self._run_valgrind_memcheck(Run.timeout, *args)
        if valgrindMemcheckRes.err == failure:
            # print(valgrindMemcheckRes)
            # print(f"memcheck")
            return valgrindMemcheckRes

        valgrindRes = self._run_valgrind(Run.timeout, *args)
        if valgrindRes.err == failure:
            # print("cfg valgrind error")
            return valgrindRes

        cfggrindRes = self._run_cfggrind_info(Run.timeout, *args)
        if cfggrindRes.err == failure:
            return cfggrindRes

        return valgrindRes

    # --------------------------- Run with fsanitize ---------------------------- #

    def _run_sanitize(self, timeout: float, *args: str) -> CmdResult:
        proc_args = [
            f'{self.binPath}',
        ] + [*args]  
        return runproc(proc_args, timeout)
    

    def runcmdFsanitize(self, *args: str) -> CmdResult:
        sanitize = self._run_sanitize(Run.timeout, *args)
        return sanitize

    # --------------------------- Run with kcc ------------------------------ #

    def _run_kcc(self, timeout: float, *args: str) -> CmdResult:
        proc_args = [
            f'{self.binPath}',
        ] + [*args]  
        return runprocKcc(proc_args, timeout)
    

    def runcmdKcc(self, *args: str) -> CmdResult:
        kcc = self._run_kcc(1, *args)
        return kcc


# =========================================================================== #
