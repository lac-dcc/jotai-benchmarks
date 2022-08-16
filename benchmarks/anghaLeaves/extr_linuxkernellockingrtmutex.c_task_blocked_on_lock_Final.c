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
struct task_struct {TYPE_1__* pi_blocked_on; } ;
struct rt_mutex {int dummy; } ;
struct TYPE_2__ {struct rt_mutex* lock; } ;

/* Variables and functions */

__attribute__((used)) static inline struct rt_mutex *task_blocked_on_lock(struct task_struct *p)
{
	return p->pi_blocked_on ? p->pi_blocked_on->lock : NULL;
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
          int _len_p0 = 1;
          struct task_struct * p = (struct task_struct *) malloc(_len_p0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__pi_blocked_on0 = 1;
          p[_i0].pi_blocked_on = (struct TYPE_2__ *) malloc(_len_p__i0__pi_blocked_on0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_p__i0__pi_blocked_on0; _j0++) {
              int _len_p__i0__pi_blocked_on_lock0 = 1;
          p[_i0].pi_blocked_on->lock = (struct rt_mutex *) malloc(_len_p__i0__pi_blocked_on_lock0*sizeof(struct rt_mutex));
          for(int _j0 = 0; _j0 < _len_p__i0__pi_blocked_on_lock0; _j0++) {
            p[_i0].pi_blocked_on->lock->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct rt_mutex * benchRet = task_blocked_on_lock(p);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].pi_blocked_on);
          }
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
