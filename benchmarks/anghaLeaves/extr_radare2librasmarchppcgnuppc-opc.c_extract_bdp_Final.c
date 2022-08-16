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
typedef  int ppc_cpu_t ;

/* Variables and functions */
 int PPC_OPCODE_POWER4 ; 

__attribute__((used)) static long
extract_bdp (unsigned long insn,
	     ppc_cpu_t dialect,
	     int *invalid)
{
  if ((dialect & PPC_OPCODE_POWER4) == 0)
    {
	  if (((insn & (1 << 21)) == 0) == ((insn & (1 << 15)) == 0)) {
		  *invalid = 1;
	  }
    }
  else
    {
	    if ((insn & (0x17 << 21)) != (0x07 << 21) && (insn & (0x1d << 21)) != (0x19 << 21)) {
		    *invalid = 1;
	    }
    }

  return ((insn & 0xfffc) ^ 0x8000) - 0x8000;
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
          unsigned long insn = 100;
          int dialect = 100;
          int _len_invalid0 = 1;
          int * invalid = (int *) malloc(_len_invalid0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_invalid0; _i0++) {
            invalid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = extract_bdp(insn,dialect,invalid);
          printf("%ld\n", benchRet); 
          free(invalid);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned long insn = 10;
          int dialect = 10;
          int _len_invalid0 = 100;
          int * invalid = (int *) malloc(_len_invalid0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_invalid0; _i0++) {
            invalid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = extract_bdp(insn,dialect,invalid);
          printf("%ld\n", benchRet); 
          free(invalid);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
