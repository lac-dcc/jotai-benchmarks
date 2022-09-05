#!/usr/bin/env python3
# =========================================================================== #

from pathlib import Path

from kotai.kotypes import CmdResult, runproc

class PrintDescriptors():

    # ---------------------------- Static attrs. ---------------------------- #

    exe: dict[str, Path] = {
        'clang':   Path('clang'),
        'libPath': Path('./build/lib/libPrintDescriptors.so'),
    }

    timeout: float = 3.0

    # ---------------------------- Member attrs. ---------------------------- #

    __slots__ = (
        'ifile',
    )

    def __init__(self, ifile: Path,):
        self.ifile = ifile


    def runcmd(self, *args: str) -> CmdResult:
        proc_args = [
            f'{PrintDescriptors.exe["clang"]}',
            '-cc1',
            '-load',
            f'{PrintDescriptors.exe["libPath"]}',
            '-plugin',
            'print-descriptors',
            f'{self.ifile}',
        ] + [*args]
        return runproc(proc_args, timeout=PrintDescriptors.timeout)



# =========================================================================== #
