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
typedef  int uint64_t ;
typedef  int /*<<< orphan*/  dtrace_vstate_t ;
typedef  int /*<<< orphan*/  dtrace_mstate_t ;

/* Variables and functions */

uint64_t
dtrace_getarg(int arg, int aframes, dtrace_mstate_t *mstate, dtrace_vstate_t *vstate)
{
#pragma unused(arg, aframes, mstate, vstate)
#if 0
	/* XXX ARMTODO */
  	uint64_t val;
	uintptr_t *fp = (uintptr_t *)__builtin_frame_address(0);
	uintptr_t *stack;
	uintptr_t pc;
	int i;

	for (i = 1; i <= aframes; i++) {
		fp = fp[0];
		pc = fp[1];

		if (dtrace_invop_callsite_pre != NULL
			&& pc  >  (uintptr_t)dtrace_invop_callsite_pre
			&& pc  <= (uintptr_t)dtrace_invop_callsite_post) {
 			/*
 			 * If we pass through the invalid op handler, we will
 			 * use the pointer that it passed to the stack as the
 			 * second argument to dtrace_invop() as the pointer to
 			 * the frame we're hunting for.
 			 */

 			stack = (uintptr_t *)&fp[1]; /* Find marshalled arguments */
 			fp = (struct frame *)stack[1]; /* Grab *second* argument */
 			stack = (uintptr_t *)&fp[1]; /* Find marshalled arguments */
 			DTRACE_CPUFLAG_SET(CPU_DTRACE_NOFAULT);
 			val = (uint64_t)(stack[arg]);
 			DTRACE_CPUFLAG_CLEAR(CPU_DTRACE_NOFAULT);
 			return val;
 		}
	}

	/*
	 * Arrive here when provider has called dtrace_probe directly.
	 */
	stack = (uintptr_t *)&fp[1]; /* Find marshalled arguments */
	stack++; /* Advance past probeID */

	DTRACE_CPUFLAG_SET(CPU_DTRACE_NOFAULT);
	val = *(((uint64_t *)stack) + arg); /* dtrace_probe arguments arg0 .. arg4 are 64bits wide */
	DTRACE_CPUFLAG_CLEAR(CPU_DTRACE_NOFAULT);
	return (val);
#endif
	return 0xfeedfacedeafbeadLL;
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
          int arg = 100;
          int aframes = 100;
          int _len_mstate0 = 1;
          int * mstate = (int *) malloc(_len_mstate0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mstate0; _i0++) {
            mstate[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vstate0 = 1;
          int * vstate = (int *) malloc(_len_vstate0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_vstate0; _i0++) {
            vstate[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dtrace_getarg(arg,aframes,mstate,vstate);
          printf("%d\n", benchRet); 
          free(mstate);
          free(vstate);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
