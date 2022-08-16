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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  TYPE_1__* workq_threadreq_t ;
struct priority_queue {int dummy; } ;
struct workqueue {struct priority_queue wq_constrained_queue; struct priority_queue wq_overcommit_queue; struct priority_queue wq_special_queue; } ;
struct TYPE_3__ {int tr_flags; } ;

/* Variables and functions */
 int TR_FLAG_OVERCOMMIT ; 
 int TR_FLAG_WL_OUTSIDE_QOS ; 

__attribute__((used)) static inline struct priority_queue *
workq_priority_queue_for_req(struct workqueue *wq, workq_threadreq_t req)
{
	if (req->tr_flags & TR_FLAG_WL_OUTSIDE_QOS) {
		return &wq->wq_special_queue;
	} else if (req->tr_flags & TR_FLAG_OVERCOMMIT) {
		return &wq->wq_overcommit_queue;
	} else {
		return &wq->wq_constrained_queue;
	}
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
            wq[_i0].wq_constrained_queue.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        wq[_i0].wq_overcommit_queue.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        wq[_i0].wq_special_queue.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_req0 = 1;
          struct TYPE_3__ * req = (struct TYPE_3__ *) malloc(_len_req0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0].tr_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct priority_queue * benchRet = workq_priority_queue_for_req(wq,req);
          printf("%d\n", (*benchRet).dummy);
          free(wq);
          free(req);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
