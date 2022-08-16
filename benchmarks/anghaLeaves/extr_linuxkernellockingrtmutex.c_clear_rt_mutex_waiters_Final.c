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
struct rt_mutex {struct task_struct* owner; } ;

/* Variables and functions */
 unsigned long RT_MUTEX_HAS_WAITERS ; 

__attribute__((used)) static inline void clear_rt_mutex_waiters(struct rt_mutex *lock)
{
	lock->owner = (struct task_struct *)
			((unsigned long)lock->owner & ~RT_MUTEX_HAS_WAITERS);
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
          int _len_lock0 = 1;
          struct rt_mutex * lock = (struct rt_mutex *) malloc(_len_lock0*sizeof(struct rt_mutex));
          for(int _i0 = 0; _i0 < _len_lock0; _i0++) {
              int _len_lock__i0__owner0 = 1;
          lock[_i0].owner = (struct task_struct *) malloc(_len_lock__i0__owner0*sizeof(struct task_struct));
          for(int _j0 = 0; _j0 < _len_lock__i0__owner0; _j0++) {
            lock[_i0].owner->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          clear_rt_mutex_waiters(lock);
          for(int _aux = 0; _aux < _len_lock0; _aux++) {
          free(lock[_aux].owner);
          }
          free(lock);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
