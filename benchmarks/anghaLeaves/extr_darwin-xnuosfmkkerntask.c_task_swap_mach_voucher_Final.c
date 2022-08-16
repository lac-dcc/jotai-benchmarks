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
typedef  scalar_t__ task_t ;
typedef  int /*<<< orphan*/  kern_return_t ;
typedef  int /*<<< orphan*/  ipc_voucher_t ;

/* Variables and functions */
 int /*<<< orphan*/  KERN_INVALID_TASK ; 
 int /*<<< orphan*/  KERN_SUCCESS ; 
 scalar_t__ TASK_NULL ; 

kern_return_t
task_swap_mach_voucher(
	task_t			task,
	ipc_voucher_t		new_voucher,
	ipc_voucher_t		*in_out_old_voucher)
{
	if (TASK_NULL == task)
		return KERN_INVALID_TASK;

	*in_out_old_voucher = new_voucher;
	return KERN_SUCCESS;
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
          long task = 100;
          int new_voucher = 100;
          int _len_in_out_old_voucher0 = 1;
          int * in_out_old_voucher = (int *) malloc(_len_in_out_old_voucher0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_in_out_old_voucher0; _i0++) {
            in_out_old_voucher[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = task_swap_mach_voucher(task,new_voucher,in_out_old_voucher);
          printf("%d\n", benchRet); 
          free(in_out_old_voucher);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long task = 10;
          int new_voucher = 10;
          int _len_in_out_old_voucher0 = 100;
          int * in_out_old_voucher = (int *) malloc(_len_in_out_old_voucher0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_in_out_old_voucher0; _i0++) {
            in_out_old_voucher[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = task_swap_mach_voucher(task,new_voucher,in_out_old_voucher);
          printf("%d\n", benchRet); 
          free(in_out_old_voucher);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
