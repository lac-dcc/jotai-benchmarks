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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/ * processor_set_t ;
typedef  TYPE_1__* processor_set_load_info_t ;
typedef  scalar_t__ processor_set_info_t ;
typedef  scalar_t__ mach_msg_type_number_t ;
typedef  int /*<<< orphan*/  kern_return_t ;
struct TYPE_2__ {int /*<<< orphan*/  thread_count; int /*<<< orphan*/  task_count; int /*<<< orphan*/  load_average; int /*<<< orphan*/  mach_factor; } ;

/* Variables and functions */
 int /*<<< orphan*/  KERN_FAILURE ; 
 int /*<<< orphan*/  KERN_INVALID_ARGUMENT ; 
 int /*<<< orphan*/  KERN_INVALID_PROCESSOR_SET ; 
 int /*<<< orphan*/  KERN_SUCCESS ; 
 int PROCESSOR_SET_LOAD_INFO ; 
 scalar_t__ PROCESSOR_SET_LOAD_INFO_COUNT ; 
 int /*<<< orphan*/ * PROCESSOR_SET_NULL ; 
 int /*<<< orphan*/  pset0 ; 
 int /*<<< orphan*/  sched_load_average ; 
 int /*<<< orphan*/  sched_mach_factor ; 
 int /*<<< orphan*/  tasks_count ; 
 int /*<<< orphan*/  threads_count ; 

kern_return_t 
processor_set_statistics(
	processor_set_t         pset,
	int                     flavor,
	processor_set_info_t    info,
	mach_msg_type_number_t	*count)
{
	if (pset == PROCESSOR_SET_NULL || pset != &pset0)
		return (KERN_INVALID_PROCESSOR_SET);

	if (flavor == PROCESSOR_SET_LOAD_INFO) {
		processor_set_load_info_t     load_info;

		if (*count < PROCESSOR_SET_LOAD_INFO_COUNT)
			return(KERN_FAILURE);

		load_info = (processor_set_load_info_t) info;

		load_info->mach_factor = sched_mach_factor;
		load_info->load_average = sched_load_average;

		load_info->task_count = tasks_count;
		load_info->thread_count = threads_count;

		*count = PROCESSOR_SET_LOAD_INFO_COUNT;
		return(KERN_SUCCESS);
	}

	return(KERN_INVALID_ARGUMENT);
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
          int flavor = 100;
          long info = 100;
          int _len_pset0 = 1;
          int * pset = (int *) malloc(_len_pset0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pset0; _i0++) {
            pset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_count0 = 1;
          long * count = (long *) malloc(_len_count0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_count0; _i0++) {
            count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = processor_set_statistics(pset,flavor,info,count);
          printf("%d\n", benchRet); 
          free(pset);
          free(count);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
