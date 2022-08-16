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
struct task_struct {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int copy_io(unsigned long clone_flags, struct task_struct *tsk)
{
#ifdef CONFIG_BLOCK
	struct io_context *ioc = current->io_context;
	struct io_context *new_ioc;

	if (!ioc)
		return 0;
	/*
	 * Share io context with parent, if CLONE_IO is set
	 */
	if (clone_flags & CLONE_IO) {
		ioc_task_link(ioc);
		tsk->io_context = ioc;
	} else if (ioprio_valid(ioc->ioprio)) {
		new_ioc = get_task_io_context(tsk, GFP_KERNEL, NUMA_NO_NODE);
		if (unlikely(!new_ioc))
			return -ENOMEM;

		new_ioc->ioprio = ioc->ioprio;
		put_io_context(new_ioc);
	}
#endif
	return 0;
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
          unsigned long clone_flags = 100;
          int _len_tsk0 = 1;
          struct task_struct * tsk = (struct task_struct *) malloc(_len_tsk0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_tsk0; _i0++) {
            tsk[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = copy_io(clone_flags,tsk);
          printf("%d\n", benchRet); 
          free(tsk);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned long clone_flags = 10;
          int _len_tsk0 = 100;
          struct task_struct * tsk = (struct task_struct *) malloc(_len_tsk0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_tsk0; _i0++) {
            tsk[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = copy_io(clone_flags,tsk);
          printf("%d\n", benchRet); 
          free(tsk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
