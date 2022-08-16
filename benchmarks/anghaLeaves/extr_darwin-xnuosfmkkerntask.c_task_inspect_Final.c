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
typedef  int /*<<< orphan*/  task_inspect_t ;
typedef  int /*<<< orphan*/  task_inspect_info_t ;
typedef  int /*<<< orphan*/  task_inspect_flavor_t ;
typedef  int /*<<< orphan*/  mach_msg_type_number_t ;
typedef  int /*<<< orphan*/  kern_return_t ;

/* Variables and functions */
 int /*<<< orphan*/  KERN_NOT_SUPPORTED ; 

kern_return_t
task_inspect(task_inspect_t task_insp, task_inspect_flavor_t flavor,
		task_inspect_info_t info_out, mach_msg_type_number_t *size_in_out)
{
#if MONOTONIC
	task_t task = (task_t)task_insp;
	kern_return_t kr = KERN_SUCCESS;
	mach_msg_type_number_t size;

	if (task == TASK_NULL) {
		return KERN_INVALID_ARGUMENT;
	}

	size = *size_in_out;

	switch (flavor) {
	case TASK_INSPECT_BASIC_COUNTS: {
		struct task_inspect_basic_counts *bc;
		uint64_t task_counts[MT_CORE_NFIXED];

		if (size < TASK_INSPECT_BASIC_COUNTS_COUNT) {
			kr = KERN_INVALID_ARGUMENT;
			break;
		}

		mt_fixed_task_counts(task, task_counts);
		bc = (struct task_inspect_basic_counts *)info_out;
#ifdef MT_CORE_INSTRS
		bc->instructions = task_counts[MT_CORE_INSTRS];
#else /* defined(MT_CORE_INSTRS) */
		bc->instructions = 0;
#endif /* !defined(MT_CORE_INSTRS) */
		bc->cycles = task_counts[MT_CORE_CYCLES];
		size = TASK_INSPECT_BASIC_COUNTS_COUNT;
		break;
	}
	default:
		kr = KERN_INVALID_ARGUMENT;
		break;
	}

	if (kr == KERN_SUCCESS) {
		*size_in_out = size;
	}
	return kr;
#else /* MONOTONIC */
#pragma unused(task_insp, flavor, info_out, size_in_out)
	return KERN_NOT_SUPPORTED;
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
          int task_insp = 100;
          int flavor = 100;
          int info_out = 100;
          int _len_size_in_out0 = 1;
          int * size_in_out = (int *) malloc(_len_size_in_out0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_size_in_out0; _i0++) {
            size_in_out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = task_inspect(task_insp,flavor,info_out,size_in_out);
          printf("%d\n", benchRet); 
          free(size_in_out);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int task_insp = 10;
          int flavor = 10;
          int info_out = 10;
          int _len_size_in_out0 = 100;
          int * size_in_out = (int *) malloc(_len_size_in_out0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_size_in_out0; _i0++) {
            size_in_out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = task_inspect(task_insp,flavor,info_out,size_in_out);
          printf("%d\n", benchRet); 
          free(size_in_out);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
