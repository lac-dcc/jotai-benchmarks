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
struct TYPE_2__ {scalar_t__ singlestep_syscall; } ;
struct task_struct {TYPE_1__ thread; int /*<<< orphan*/  ptrace; } ;

/* Variables and functions */
 int /*<<< orphan*/  PT_DTRACE ; 

void user_disable_single_step(struct task_struct *child)
{
	child->ptrace &= ~PT_DTRACE;
	child->thread.singlestep_syscall = 0;

#ifdef SUBARCH_SET_SINGLESTEPPING
	SUBARCH_SET_SINGLESTEPPING(child, 0);
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
          int _len_child0 = 1;
          struct task_struct * child = (struct task_struct *) malloc(_len_child0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_child0; _i0++) {
            child[_i0].thread.singlestep_syscall = ((-2 * (next_i()%2)) + 1) * next_i();
        child[_i0].ptrace = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          user_disable_single_step(child);
          free(child);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
