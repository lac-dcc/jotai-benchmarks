from kotai.kotypes import KonstrainExecType
from kotai.logconf import sep, src_sep

indent = '    '

runtimeInfoPlaceholder = '// [JOTAI-RUNTIME-INFO] //'

GenBenchTemplatePrefix: str = (f'''{src_sep}\n'''
'''
// includes
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "limits.h"
#include "float.h"
''')

randGenerator: str = '''\n\n
#define JOTAI_NUM_RANDS_ 25

const unsigned rand_primes[JOTAI_NUM_RANDS_] = {179, 103, 479, 647, 229, 37, 271, 557, 263, 607, 18743, 50359, 21929, 48757, 98179, 12907, 52937, 64579, 49957, 52567, 507163, 149939, 412157, 680861, 757751};

int next_i() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} \n\n'''


def usage(usageCases:list[tuple[int, KonstrainExecType]]):
    return (f'''
// Usage menu
void usage() {{
    printf("%s", "Usage:\\n\\
    prog [ARGS]\\n\\
\\nARGS:\\n\\
{f''.join([f'    {idx:>4}            {line}{chr(92)}n{chr(92)}{chr(10)}' for idx, line in usageCases])}\\n\\
");

}}


{sep}\n\n'''
    )

GenBenchTemplateMainBegin: str = (
    'int main(int argc, char *argv[]) {\n\n'
)

GenBenchTemplateMainEnd: str = (
    f'\n{indent}return 0;\n'
    '}\n'
)

GenBenchSwitchBegin: str = (
    f'{indent}if (argc != 2) {{\n'
    f'{indent*2}usage();\n'
    f'{indent*2}return 1;\n'
    f'{indent}}}\n\n'
    #f'{indent}srand(10);\n\n'
    f'{indent}int opt = atoi(argv[1]);\n'
    f'{indent}switch(opt) ''{\n\n'
)
GenBenchSwitchEnd: str = (
    f'\n{indent}''default:\n'
    f'{indent*2}usage();\n'
    f'{indent*2}break;\n'
    f'\n{indent}}}\n'
)

def fenSwitch(idx: int, out: str, ketDesc: str = '') -> str:
    return (
        f"""{f'{indent}// {ketDesc}' if ketDesc else ''}\n"""
        f'{indent}case {idx}:\n'
        f'{indent}''{\n'
        f'{indent*2}{out}\n'
        f'{indent*2}break;\n'
        f'{indent}''}\n'
    )

def genSwitch(idx: int, out: str, ketDesc: str = '') -> str:
    return (
        f"""{f'{indent}// {ketDesc}' if ketDesc else ''}\n"""
        f'{indent}case {idx}:\n'
        f'{indent}''{\n'
        f"""{f''.join([f'{indent*2}{line}{chr(10)}' for line in out.split(chr(10))])}"""
        f'{indent*2}break;\n'
        f'{indent}''}\n'
    )
