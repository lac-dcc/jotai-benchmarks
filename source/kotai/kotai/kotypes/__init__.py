#!/usr/bin/env python3
# =========================================================================== #

from typing import Callable, Final, Generic, Iterator, Iterable, NamedTuple, Literal, Any, TypeAlias, TypeGuard, TypeVar, final
from enum import Enum
from pathlib import Path
import subprocess as sp
import logging

def noop(*args: Any, **kwargs: Any): pass


# ----------------------------------- Logging ------------------------------- #
'''
Reference:
https://docs.python.org/3/library/logging.html

Tutorial:
https://docs.python.org/3/howto/logging.html

You better read the above, since I didn't. I just came up with some twisted
hackery to avoid calling expensive functions when we're not logging stuff.
'''

#https://docs.python.org/3.10/howto/logging.html#logging-levels
LogLevel = Literal['critical', 'error', 'warning', 'info', 'debug']
'''Valid log levels (except NOTSET, since there's no function for it)'''

_RealLog: Final[dict[LogLevel, Callable[..., None]]] = {
    'critical' : logging.critical,  # 50
    'error'    : logging.error,     # 40
    'warning'  : logging.warning,   # 30
    'info'     : logging.info,      # 20
    'debug'    : logging.debug,     # 10
}
_FakeLog: Final[dict[LogLevel, Callable[..., None]]] = {
    'critical' : noop,
    'error'    : noop,
    'warning'  : noop,
    'info'     : noop,
    'debug'    : noop,
}

Log: dict[LogLevel, Callable[..., None]]
'''
If logging is enabled, maps a string `'foo'` to the function `logging.foo(...)`

If logging is disabled, maps `foo` to a noop.

In both cases, `'foo'` must be a valid logging level, all lowercase.
'''

def setLog(on: bool) -> None:
    global Log
    if on: Log = _RealLog
    else : Log = _FakeLog


# ---------------------------------- Konstrain ------------------------------ #

KonstrainExecType = Literal['', 'all', 'int-bounds', 'big-arr', 'big-arr-10x', 'linked', 'dlinked', 'bintree', 'empty']
'''String literals representing the "ExecTypes" we accept from the user'''

KonstrainExecTypes: Final[list[KonstrainExecType]] = [
    'int-bounds',
    'big-arr',
    'big-arr-10x',
    'linked',
    'dlinked', 
    'bintree',
    'empty'
]
'''List of all non-abstract (implemented) KonstrainExecTypes'''


# ------------------------------------ CComp -------------------------------- #

# String literals representing OptLevels we accept from the user
OptLevel = Literal['', 'all', 'O0', 'O1', 'O2', 'O3', 'Ofast', 'Os', 'Oz',]

# List of all non-abstract (implemented) OptLevels
OptLevels: Final[list[OptLevel]] = ['O0', 'O1', 'O2', 'O3', 'Ofast',
                                    'Os', 'Oz',]


# ------------------------------------ Error -------------------------------- #

@final
class ExitCode(Enum):

    @final
    def __bool__(self): return bool(self.value)
    def __str__(self): return '[exit: success]' if self else '[exit: failure]'
    def __repr__(self): return '[exit: success]' if self else '[exit: failure]'

    #@final
    #class __ExitCode_OK:
    #    def __bool__(self): return True
#
    #@final
    #class __ExitCode_ERR:
    #    def __bool__(self): return False

    OK:  Final  = True
    ERR: Final  = False


# Aliases
Success: TypeAlias = Literal[ExitCode.OK]
"""Type representing Success"""

Failure: TypeAlias = Literal[ExitCode.ERR]
"""Type representing Failure"""

success: Final[Success] = ExitCode.OK
'''Value representing success'''

failure: Final[Failure] = ExitCode.ERR
'''Value representing failure'''

class CaseBenchInfo:
    __slots__ = (
                 'switchNum',
                 'content',
                 'auxFunction',
                 )

    def __init__ (self,
                  switchNum: int,
                  content: str,
                  auxFunction:str
                 ) -> None:

        self.switchNum: int = switchNum
        self.content: str   = content
        self.auxFunction: str = auxFunction

class BenchInfo:
    __slots__ = (
                 'cFilePath',
                 'fnName',
                 'ketList',
                 'optLevelList',
                 'exitCodes',
                 'descriptor',
                 'benchCases',
                 'benchFunction',
                 'caseStdout',
                 )

    def __init__(self,
                 cFilePath: Path,
                 fnName: str                                                    | None = None,
                 ketList: list[KonstrainExecType]                               | None = None,
                 optLevelList: list[OptLevel]                                   | None = None,
                 exitCodes: dict[Any, ExitCode]                                 | None = None,
                 descriptor: str                                                | None = None,
                 benchCases: dict[Path, dict[Any, CaseBenchInfo]]               | None = None,
                 benchFunction: str                                             | None = None,
                 caseStdout: dict[KonstrainExecType, str]                       | None = None,
            ) -> None:

        self.cFilePath: Path = cFilePath
        if _GUARD_fnName(fnName):               self.fnName = fnName
        else: self.fnName = ''

        if _GUARD_ketList(ketList):             self.ketList = ketList
        else: self.ketList = []

        if _GUARD_optLevelList(optLevelList):   self.optLevelList = optLevelList
        else: self.optLevelList = []

        if _GUARD_exitCodes(exitCodes):         self.exitCodes = exitCodes
        else: self.exitCodes = {}

        if _GUARD_descriptor(descriptor):       self.descriptor = descriptor
        else: self.descriptor = ''

        if _GUARD_benchCases(benchCases):       self.benchCases = benchCases
        else: self.benchCases = {}

        if _GUARD_benchFunction(benchFunction): self.benchFunction = benchFunction
        else: self.benchFunction = ''

        if _GUARD_caseStdout(caseStdout):      self.caseStdout = caseStdout
        else: self.caseStdout = {}


    def __bool__(self): return any(self.exitCodes.values())

    def setExitCodes(self, exitCodes: dict[Any, ExitCode]) -> None:
        self.exitCodes |= exitCodes

    def setBenchCases(self, benchCases: dict[Path, dict[KonstrainExecType, CaseBenchInfo]]) -> None:
        self.benchCases = benchCases

    def Err(self, key: Any, logmsg: str = '', level: LogLevel = 'debug'):
        self.exitCodes = {key: failure}
        if logmsg: Log[level](logmsg)
        return self

    def setCaseStdout(self, caseStdout: dict[KonstrainExecType, str]) -> None:
        self.caseStdout |= caseStdout


def _GUARD_fnName          (result: str | None)                                                 -> TypeGuard[str]                                                   : return result != None
def _GUARD_ketList         (result: list[KonstrainExecType] | None)                             -> TypeGuard[list[KonstrainExecType]]                               : return result != None
def _GUARD_optLevelList    (result: list[OptLevel] | None)                                      -> TypeGuard[list[OptLevel]]                                        : return result != None
def _GUARD_exitCodes       (result: dict[Any, ExitCode] | None)                                 -> TypeGuard[dict[Any, ExitCode]]                                   : return result != None
def _GUARD_descriptor      (result: str | None)                                                 -> TypeGuard[str]                                                   : return result != None
def _GUARD_benchCases      (result: dict[Path, dict[Any, CaseBenchInfo]] | None)                -> TypeGuard[dict[Path, dict[Any, CaseBenchInfo]]]                  : return result != None
def _GUARD_benchFunction   (result: str | None)                                                 -> TypeGuard[str]                                                   : return result != None
def _GUARD_auxFunction     (result: str | None)                                                 -> TypeGuard[str]                                                   : return result != None
def _GUARD_caseStdout      (result: dict[KonstrainExecType, str] | None)                        -> TypeGuard[dict[KonstrainExecType, str]]                          : return result != None
'''
fnName: str = None,
ketList: list[KonstrainExecType] = None,
optLevelList: list[OptLevel] = None,
exitCodes: dict[Any, ExitCode] = None,
descriptor: str = None,
benchCases: dict[Path, dict[KonstrainExecType, CaseBenchInfo]] = None,
benchFunction: str = None,
auxFunction: str = None,
'''

# TypeGuard for BenchInfo
def valid(result: BenchInfo | ExitCode) -> TypeGuard[BenchInfo] : return bool(result)

def foo(result: BenchInfo | Failure) -> str:
    if valid(result):
        return 'valid'
    else:
        return 'invalid'

SysExitCode = ExitCode | str

# CmdResult just models (result,errcode) as (str,int)
class CmdResult(NamedTuple):
    msg: str
    err: ExitCode = failure


# When returning, if logging is desired, this allows `return logret(msg, ret)`
def logret(msg: Any, ret: CmdResult = CmdResult(''),
           level: LogLevel = 'error') -> CmdResult:
    ''' Calls logging.<level> with msg and propagates ret'''
    Log[level](f'{msg}')
    return ret


class LogThen:

    @staticmethod
    def Ok(msg: str, level: LogLevel = 'info') -> Success:
        Log[level](f'{msg}')
        return success

    @staticmethod
    def Err(msg: str, level: LogLevel = 'error') -> Failure:
        Log[level](f'{msg}')
        return failure


def out2file(ret: CmdResult, ofpath: Path, breakLines: bool) -> CmdResult:
    try:
        with open(ofpath, 'w+', encoding='utf-8') as fout:

            if breakLines:
                txt = [ line+'\n' for l
                        in ret.msg.replace('\r','').split('\n')
                        if (line := l.strip(' ,')) ]
                fout.writelines(txt)

            else:
                fout.write(ret.msg)

    # Common exceptions(s): OSError, ValueError, IOError
    except Exception as e:
        return logret(e)
    else:
        return ret


def runproc(proc_args: list[str], timeout: float,
            ofpath: Path | None = None, breakLines: bool = False) -> CmdResult:
    '''
    Wrapper to subprocces.run that tries to: run, decode, write, return
    Exceptions raised are converted to error-values

    - runs command with args and a timeout, provided in proc_args and timeout
    - decodes the result
    - writes it to ofpath when defined, and
    - returns it with the proper ExitCode
    '''

    try: proc = sp.Popen(proc_args, text=True, close_fds=True,
                         stdout=sp.PIPE, stderr=sp.PIPE, encoding='utf-8')

    # Common exceptions(s): OSError, ValueError
    except Exception as e:
        return logret(e)

    # Common exceptions(s): TimeoutExpired
    try: proc.communicate(timeout=timeout)
    except Exception as e: logging.error(f'{e}:"{proc.args}"')

    proc.kill()  # After this point, proc.returncode can't be None
    out, err = proc.communicate()  # Results

    if out: logging.debug(f'{out=}')
    if err: logging.error(f'{err=}')

    res = CmdResult(
        out,
        failure if proc.returncode else success
    )

    return out2file(res, ofpath, breakLines) if ofpath else res

# --------------------------- Run kcc commands ---------------------------- #
def runprocKcc(proc_args: list[str], timeout: float,
            ofpath: Path | None = None, breakLines: bool = False) -> CmdResult:

    returnError = success   
                                             
    try: proc = sp.run(proc_args,  # no shell wrapper
            timeout=timeout, stdout=sp.PIPE, stderr = sp.PIPE,
    encoding='utf8')

    
    except sp.TimeoutExpired:
        print('timeout')
        res = CmdResult(
            '',
            failure
        )
        return out2file(res, ofpath, breakLines) if ofpath else res

    if 'Undefined' in proc.stderr or 'error' in proc.stderr or proc.returncode: 
        print('undefined')
        returnError = failure

    res = CmdResult(
        proc.stderr,
        returnError
    )

    return out2file(res, ofpath, breakLines) if ofpath else res


_T_co = TypeVar("_T_co", covariant=True)
_T1 = TypeVar("_T1")
_T2 = TypeVar("_T2")
class unzip(Iterator[_T_co], Generic[_T_co]):
    '''
    Opposite of zip(), as the example shows:
    ```
    res = [(out, err) for out, err in fn(...)]
    >>> [(out0, err0), (out1, err1), (out2, err2)]

    [_ for _ in unzip(res)]
    >>> [(out0, out1, out2), (err0, err1, err2)]
    ```

    You can also see this as "transpose", however it was made for and only
    tested for [N,2] -> [2,N] dimensions. The type checker will likely complain
    for other values.

    See https://github.com/python/typeshed/blob/master/stdlib/builtins.pyi for
    ideas on how to extend the type annotations if you need it.
    '''
    def __new__(cls, iterable: Iterable[tuple[_T1 | _T2]]
                ) -> Iterable[ Iterable[_T1 | _T2] ]:
        return zip(*iterable)


# =========================================================================== #
