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
struct task_struct {int curr_ret_stack; TYPE_1__* ret_stack; } ;
struct TYPE_2__ {unsigned long ret; } ;

/* Variables and functions */
 scalar_t__ return_to_handler ; 

unsigned long ftrace_graph_ret_addr(struct task_struct *task, int *idx,
				    unsigned long ret, unsigned long *retp)
{
	int task_idx;

	if (ret != (unsigned long)return_to_handler)
		return ret;

	task_idx = task->curr_ret_stack;

	if (!task->ret_stack || task_idx < *idx)
		return ret;

	task_idx -= *idx;
	(*idx)++;

	return task->ret_stack[task_idx].ret;
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
          unsigned long ret = 100;
          int _len_task0 = 1;
          struct task_struct * task = (struct task_struct *) malloc(_len_task0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_task0; _i0++) {
            task[_i0].curr_ret_stack = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_task__i0__ret_stack0 = 1;
          task[_i0].ret_stack = (struct TYPE_2__ *) malloc(_len_task__i0__ret_stack0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_task__i0__ret_stack0; _j0++) {
            task[_i0].ret_stack->ret = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_idx0 = 1;
          int * idx = (int *) malloc(_len_idx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_idx0; _i0++) {
            idx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_retp0 = 1;
          unsigned long * retp = (unsigned long *) malloc(_len_retp0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_retp0; _i0++) {
            retp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = ftrace_graph_ret_addr(task,idx,ret,retp);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_task0; _aux++) {
          free(task[_aux].ret_stack);
          }
          free(task);
          free(idx);
          free(retp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
