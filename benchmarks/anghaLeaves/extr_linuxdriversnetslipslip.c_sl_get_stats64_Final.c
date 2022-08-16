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
struct rtnl_link_stats64 {int /*<<< orphan*/  rx_over_errors; int /*<<< orphan*/  rx_errors; int /*<<< orphan*/  tx_errors; int /*<<< orphan*/  tx_dropped; int /*<<< orphan*/  rx_dropped; int /*<<< orphan*/  tx_bytes; int /*<<< orphan*/  rx_bytes; int /*<<< orphan*/  tx_packets; int /*<<< orphan*/  rx_packets; } ;
struct net_device_stats {int /*<<< orphan*/  rx_over_errors; int /*<<< orphan*/  rx_errors; int /*<<< orphan*/  tx_errors; int /*<<< orphan*/  tx_dropped; int /*<<< orphan*/  rx_dropped; int /*<<< orphan*/  tx_bytes; int /*<<< orphan*/  rx_bytes; int /*<<< orphan*/  tx_packets; int /*<<< orphan*/  rx_packets; } ;
struct net_device {struct net_device_stats stats; } ;

/* Variables and functions */

__attribute__((used)) static void
sl_get_stats64(struct net_device *dev, struct rtnl_link_stats64 *stats)
{
	struct net_device_stats *devstats = &dev->stats;
#ifdef SL_INCLUDE_CSLIP
	struct slip *sl = netdev_priv(dev);
	struct slcompress *comp = sl->slcomp;
#endif
	stats->rx_packets     = devstats->rx_packets;
	stats->tx_packets     = devstats->tx_packets;
	stats->rx_bytes       = devstats->rx_bytes;
	stats->tx_bytes       = devstats->tx_bytes;
	stats->rx_dropped     = devstats->rx_dropped;
	stats->tx_dropped     = devstats->tx_dropped;
	stats->tx_errors      = devstats->tx_errors;
	stats->rx_errors      = devstats->rx_errors;
	stats->rx_over_errors = devstats->rx_over_errors;

#ifdef SL_INCLUDE_CSLIP
	if (comp) {
		/* Generic compressed statistics */
		stats->rx_compressed   = comp->sls_i_compressed;
		stats->tx_compressed   = comp->sls_o_compressed;

		/* Are we really still needs this? */
		stats->rx_fifo_errors += comp->sls_i_compressed;
		stats->rx_dropped     += comp->sls_i_tossed;
		stats->tx_fifo_errors += comp->sls_o_compressed;
		stats->collisions     += comp->sls_o_misses;
	}
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
          int _len_dev0 = 1;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].stats.rx_over_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].stats.rx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].stats.tx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].stats.tx_dropped = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].stats.rx_dropped = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].stats.tx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].stats.rx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].stats.tx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].stats.rx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stats0 = 1;
          struct rtnl_link_stats64 * stats = (struct rtnl_link_stats64 *) malloc(_len_stats0*sizeof(struct rtnl_link_stats64));
          for(int _i0 = 0; _i0 < _len_stats0; _i0++) {
            stats[_i0].rx_over_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].rx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].tx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].tx_dropped = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].rx_dropped = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].tx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].rx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].tx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].rx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sl_get_stats64(dev,stats);
          free(dev);
          free(stats);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
