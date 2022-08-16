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
struct task_struct {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline void
fire_sched_out_preempt_notifiers(struct task_struct *curr,
				 struct task_struct *next)
{
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
          int _len_curr0 = 1;
          struct task_struct * curr = (struct task_struct *) malloc(_len_curr0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_curr0; _i0++) {
            curr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_next0 = 1;
          struct task_struct * next = (struct task_struct *) malloc(_len_next0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_next0; _i0++) {
            next[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fire_sched_out_preempt_notifiers(curr,next);
          free(curr);
          free(next);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
