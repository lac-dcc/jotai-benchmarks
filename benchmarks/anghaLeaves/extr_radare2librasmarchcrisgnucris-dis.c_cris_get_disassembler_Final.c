// ========================================================================= //

// includes
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "limits.h"
#include "float.h"



#define JOTAI_NUM_RANDS_ 25

const unsigned rand_primes[JOTAI_NUM_RANDS_] = {179, 103, 479, 647, 229, 37, 271, 557, 263, 607, 18743, 50359, 21929, 48757, 98179, 12907, 52937, 64579, 49957, 52567, 507163, 149939, 412157, 680861, 757751};

int next_i() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr-10x\n\
\n\
");

}


// ------------------------------------------------------------------------- //

#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */

/* Type definitions */
typedef  int /*<<< orphan*/  disassembler_ftype ;
typedef  int /*<<< orphan*/  bfd ;

/* Variables and functions */
 int /*<<< orphan*/  print_insn_crisv32_without_register_prefix ; 

disassembler_ftype
cris_get_disassembler (bfd *abfd)
{
#if CR16_SUPPORTS_CPU
const int mode = 0; // V32 by default
  /* If there's no bfd in sight, we return what is valid as input in all
     contexts if fed back to the assembler: disassembly *with* register
     prefix.  Unfortunately this will be totally wrong for v32.  */
if (!abfd) {
	return print_insn_cris_with_register_prefix;
}

if (bfd_get_symbol_leading_char (abfd) == 0) {
	switch (mode) {
	case 0: // V32
		return print_insn_crisv32_with_register_prefix;
	case 1: // V10_V32
		return print_insn_crisv10_v32_with_register_prefix;
	default:

		/* We default to v10.  This may be specifically specified in the
	 bfd mach, but is also the default setting.  */
		return print_insn_cris_with_register_prefix;
	}
    }

switch (mode) {
case 0: // V32
  //if (bfd_get_mach (abfd) == bfd_mach_cris_v32)
    return print_insn_crisv32_without_register_prefix;
case 1: // V10_V32
  //if (bfd_get_mach (abfd) == bfd_mach_cris_v10_v32)
    return print_insn_crisv10_v32_without_register_prefix;
default:
  return print_insn_cris_without_register_prefix;
}
#else
	return print_insn_crisv32_without_register_prefix;
#endif
}


// ------------------------------------------------------------------------- //




// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // int-bounds
    case 0:
    {
          int _len_abfd0 = 1;
          int * abfd = (int *) malloc(_len_abfd0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_abfd0; _i0++) {
            abfd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cris_get_disassembler(abfd);
          printf("%d\n", benchRet); 
          free(abfd);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_abfd0 = 100;
          int * abfd = (int *) malloc(_len_abfd0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_abfd0; _i0++) {
            abfd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cris_get_disassembler(abfd);
          printf("%d\n", benchRet); 
          free(abfd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
