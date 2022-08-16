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
typedef  int /*<<< orphan*/  task_t ;
typedef  int /*<<< orphan*/  rusage_info_current ;

/* Variables and functions */

void
fill_task_monotonic_rusage(task_t task, rusage_info_current *ri)
{
#if MONOTONIC
	if (!mt_core_supported) {
		return;
	}

	assert(task != TASK_NULL);

	uint64_t counts[MT_CORE_NFIXED] = {};
	mt_fixed_task_counts(task, counts);
#ifdef MT_CORE_INSTRS
	ri->ri_instructions = counts[MT_CORE_INSTRS];
#endif /* defined(MT_CORE_INSTRS) */
	ri->ri_cycles = counts[MT_CORE_CYCLES];
#else /* MONOTONIC */
#pragma unused(task, ri)
#endif /* !MONOTONIC */
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
          int task = 100;
          int _len_ri0 = 1;
          int * ri = (int *) malloc(_len_ri0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ri0; _i0++) {
            ri[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fill_task_monotonic_rusage(task,ri);
          free(ri);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int task = 10;
          int _len_ri0 = 100;
          int * ri = (int *) malloc(_len_ri0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ri0; _i0++) {
            ri[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fill_task_monotonic_rusage(task,ri);
          free(ri);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
