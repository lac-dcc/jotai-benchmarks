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
struct rq {long nr_running; long calc_load_active; scalar_t__ nr_uninterruptible; } ;

/* Variables and functions */

long calc_load_fold_active(struct rq *this_rq, long adjust)
{
	long nr_active, delta = 0;

	nr_active = this_rq->nr_running - adjust;
	nr_active += (long)this_rq->nr_uninterruptible;

	if (nr_active != this_rq->calc_load_active) {
		delta = nr_active - this_rq->calc_load_active;
		this_rq->calc_load_active = nr_active;
	}

	return delta;
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
          long adjust = 100;
          int _len_this_rq0 = 1;
          struct rq * this_rq = (struct rq *) malloc(_len_this_rq0*sizeof(struct rq));
          for(int _i0 = 0; _i0 < _len_this_rq0; _i0++) {
            this_rq[_i0].nr_running = ((-2 * (next_i()%2)) + 1) * next_i();
        this_rq[_i0].calc_load_active = ((-2 * (next_i()%2)) + 1) * next_i();
        this_rq[_i0].nr_uninterruptible = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = calc_load_fold_active(this_rq,adjust);
          printf("%ld\n", benchRet); 
          free(this_rq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
