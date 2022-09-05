#!/usr/bin/env python3
# =========================================================================== #

import logging
from pathlib import Path

from kotai.kotypes import CmdResult, runproc

# --------------------------------------------------------------------------- #

class Jotai():

    # ---------------------------- Static attrs. ---------------------------- #

    exe: dict[str, Path] = {
        'jotai': Path('./build/lib/Jotai'),
    }

    timeout: float = 3.0

    # ---------------------------- Member attrs. ---------------------------- #

    __slots__ = (
        'constraintsPath',
        'descriptorPath',
    )

    # ----------------------------------------------------------------------- #
    def __init__(self, constraintsPath: Path, descriptorPath: Path,):
        self.constraintsPath: Path = constraintsPath
        self.descriptorPath:  Path = descriptorPath
    # ----------------------------------------------------------------------- #

    def runcmd(self, *args: str) -> CmdResult:
        proc_args = [
            f'{Jotai.exe["jotai"]}',
            f'{self.constraintsPath}',
            f'{self.descriptorPath}',
        ] + [*args]
        logging.info(f'Running jotai with {self.constraintsPath=}, '
                     f'{self.descriptorPath=}')

        return runproc(proc_args, Jotai.timeout)



# =========================================================================== #
