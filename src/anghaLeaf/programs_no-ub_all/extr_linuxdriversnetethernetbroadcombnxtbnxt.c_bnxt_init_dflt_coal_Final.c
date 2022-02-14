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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct bnxt_coal {int coal_ticks; int coal_bufs; int coal_ticks_irq; int coal_bufs_irq; int idle_thresh; int bufs_per_record; int budget; } ;
struct bnxt {int /*<<< orphan*/  stats_coal_ticks; struct bnxt_coal tx_coal; struct bnxt_coal rx_coal; } ;

/* Variables and functions */
 int /*<<< orphan*/  BNXT_DEF_STATS_COAL_TICKS ; 

__attribute__((used)) static void bnxt_init_dflt_coal(struct bnxt *bp)
{
	struct bnxt_coal *coal;

	/* Tick values in micro seconds.
	 * 1 coal_buf x bufs_per_record = 1 completion record.
	 */
	coal = &bp->rx_coal;
	coal->coal_ticks = 14;
	coal->coal_bufs = 30;
	coal->coal_ticks_irq = 1;
	coal->coal_bufs_irq = 2;
	coal->idle_thresh = 50;
	coal->bufs_per_record = 2;
	coal->budget = 64;		/* NAPI budget */

	coal = &bp->tx_coal;
	coal->coal_ticks = 28;
	coal->coal_bufs = 30;
	coal->coal_ticks_irq = 2;
	coal->coal_bufs_irq = 2;
	coal->bufs_per_record = 1;

	bp->stats_coal_ticks = BNXT_DEF_STATS_COAL_TICKS;
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

    // big-arr
    case 0:
    {
          int _len_bp0 = 1;
          struct bnxt * bp = (struct bnxt *) malloc(_len_bp0*sizeof(struct bnxt));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp->stats_coal_ticks = ((-2 * (next_i()%2)) + 1) * next_i();
        bp->tx_coal.coal_ticks = ((-2 * (next_i()%2)) + 1) * next_i();
        bp->tx_coal.coal_bufs = ((-2 * (next_i()%2)) + 1) * next_i();
        bp->tx_coal.coal_ticks_irq = ((-2 * (next_i()%2)) + 1) * next_i();
        bp->tx_coal.coal_bufs_irq = ((-2 * (next_i()%2)) + 1) * next_i();
        bp->tx_coal.idle_thresh = ((-2 * (next_i()%2)) + 1) * next_i();
        bp->tx_coal.bufs_per_record = ((-2 * (next_i()%2)) + 1) * next_i();
        bp->tx_coal.budget = ((-2 * (next_i()%2)) + 1) * next_i();
        bp->rx_coal.coal_ticks = ((-2 * (next_i()%2)) + 1) * next_i();
        bp->rx_coal.coal_bufs = ((-2 * (next_i()%2)) + 1) * next_i();
        bp->rx_coal.coal_ticks_irq = ((-2 * (next_i()%2)) + 1) * next_i();
        bp->rx_coal.coal_bufs_irq = ((-2 * (next_i()%2)) + 1) * next_i();
        bp->rx_coal.idle_thresh = ((-2 * (next_i()%2)) + 1) * next_i();
        bp->rx_coal.bufs_per_record = ((-2 * (next_i()%2)) + 1) * next_i();
        bp->rx_coal.budget = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bnxt_init_dflt_coal(bp);
          free(bp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
