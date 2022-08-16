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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ uint64_t ;
typedef  scalar_t__ uint16_t ;
struct workqueue {scalar_t__ wq_thidlecount; } ;
struct TYPE_2__ {scalar_t__ abstime; } ;

/* Variables and functions */
 scalar_t__ wq_death_max_load ; 
 scalar_t__ wq_max_constrained_threads ; 
 TYPE_1__ wq_reduce_pool_window ; 

__attribute__((used)) static inline uint64_t
workq_kill_delay_for_idle_thread(struct workqueue *wq)
{
	uint64_t delay = wq_reduce_pool_window.abstime;
	uint16_t idle = wq->wq_thidlecount;

	/*
	 * If we have less than wq_death_max_load threads, have a 5s timer.
	 *
	 * For the next wq_max_constrained_threads ones, decay linearly from
	 * from 5s to 50ms.
	 */
	if (idle <= wq_death_max_load) {
		return delay;
	}

	if (wq_max_constrained_threads > idle - wq_death_max_load) {
		delay *= (wq_max_constrained_threads - (idle - wq_death_max_load));
	}
	return delay / wq_max_constrained_threads;
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
          int _len_wq0 = 1;
          struct workqueue * wq = (struct workqueue *) malloc(_len_wq0*sizeof(struct workqueue));
          for(int _i0 = 0; _i0 < _len_wq0; _i0++) {
            wq[_i0].wq_thidlecount = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = workq_kill_delay_for_idle_thread(wq);
          printf("%ld\n", benchRet); 
          free(wq);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_wq0 = 100;
          struct workqueue * wq = (struct workqueue *) malloc(_len_wq0*sizeof(struct workqueue));
          for(int _i0 = 0; _i0 < _len_wq0; _i0++) {
            wq[_i0].wq_thidlecount = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = workq_kill_delay_for_idle_thread(wq);
          printf("%ld\n", benchRet); 
          free(wq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
