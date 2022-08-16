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
typedef  scalar_t__ u64 ;
struct sched_dl_entity {scalar_t__ dl_bw; } ;
struct TYPE_2__ {scalar_t__ this_bw; scalar_t__ running_bw; scalar_t__ bw_ratio; scalar_t__ extra_bw; } ;
struct rq {TYPE_1__ dl; } ;

/* Variables and functions */
 scalar_t__ BW_SHIFT ; 
 scalar_t__ BW_UNIT ; 
 scalar_t__ RATIO_SHIFT ; 

__attribute__((used)) static u64 grub_reclaim(u64 delta, struct rq *rq, struct sched_dl_entity *dl_se)
{
	u64 u_inact = rq->dl.this_bw - rq->dl.running_bw; /* Utot - Uact */
	u64 u_act;
	u64 u_act_min = (dl_se->dl_bw * rq->dl.bw_ratio) >> RATIO_SHIFT;

	/*
	 * Instead of computing max{u * bw_ratio, (1 - u_inact - u_extra)},
	 * we compare u_inact + rq->dl.extra_bw with
	 * 1 - (u * rq->dl.bw_ratio >> RATIO_SHIFT), because
	 * u_inact + rq->dl.extra_bw can be larger than
	 * 1 * (so, 1 - u_inact - rq->dl.extra_bw would be negative
	 * leading to wrong results)
	 */
	if (u_inact + rq->dl.extra_bw > BW_UNIT - u_act_min)
		u_act = u_act_min;
	else
		u_act = BW_UNIT - u_inact - rq->dl.extra_bw;

	return (delta * u_act) >> BW_SHIFT;
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
          long delta = 100;
          int _len_rq0 = 1;
          struct rq * rq = (struct rq *) malloc(_len_rq0*sizeof(struct rq));
          for(int _i0 = 0; _i0 < _len_rq0; _i0++) {
            rq[_i0].dl.this_bw = ((-2 * (next_i()%2)) + 1) * next_i();
        rq[_i0].dl.running_bw = ((-2 * (next_i()%2)) + 1) * next_i();
        rq[_i0].dl.bw_ratio = ((-2 * (next_i()%2)) + 1) * next_i();
        rq[_i0].dl.extra_bw = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dl_se0 = 1;
          struct sched_dl_entity * dl_se = (struct sched_dl_entity *) malloc(_len_dl_se0*sizeof(struct sched_dl_entity));
          for(int _i0 = 0; _i0 < _len_dl_se0; _i0++) {
            dl_se[_i0].dl_bw = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = grub_reclaim(delta,rq,dl_se);
          printf("%ld\n", benchRet); 
          free(rq);
          free(dl_se);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
