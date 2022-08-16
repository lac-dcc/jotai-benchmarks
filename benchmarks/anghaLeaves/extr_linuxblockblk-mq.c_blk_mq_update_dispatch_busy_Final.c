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
struct blk_mq_hw_ctx {unsigned int dispatch_busy; TYPE_1__* queue; } ;
struct TYPE_2__ {scalar_t__ elevator; } ;

/* Variables and functions */
 int BLK_MQ_DISPATCH_BUSY_EWMA_FACTOR ; 
 int BLK_MQ_DISPATCH_BUSY_EWMA_WEIGHT ; 

__attribute__((used)) static void blk_mq_update_dispatch_busy(struct blk_mq_hw_ctx *hctx, bool busy)
{
	unsigned int ewma;

	if (hctx->queue->elevator)
		return;

	ewma = hctx->dispatch_busy;

	if (!ewma && !busy)
		return;

	ewma *= BLK_MQ_DISPATCH_BUSY_EWMA_WEIGHT - 1;
	if (busy)
		ewma += 1 << BLK_MQ_DISPATCH_BUSY_EWMA_FACTOR;
	ewma /= BLK_MQ_DISPATCH_BUSY_EWMA_WEIGHT;

	hctx->dispatch_busy = ewma;
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
          int busy = 100;
          int _len_hctx0 = 1;
          struct blk_mq_hw_ctx * hctx = (struct blk_mq_hw_ctx *) malloc(_len_hctx0*sizeof(struct blk_mq_hw_ctx));
          for(int _i0 = 0; _i0 < _len_hctx0; _i0++) {
            hctx[_i0].dispatch_busy = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hctx__i0__queue0 = 1;
          hctx[_i0].queue = (struct TYPE_2__ *) malloc(_len_hctx__i0__queue0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hctx__i0__queue0; _j0++) {
            hctx[_i0].queue->elevator = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          blk_mq_update_dispatch_busy(hctx,busy);
          for(int _aux = 0; _aux < _len_hctx0; _aux++) {
          free(hctx[_aux].queue);
          }
          free(hctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
