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
struct net_device {int dummy; } ;
struct ethtool_ringparam {int /*<<< orphan*/  tx_pending; int /*<<< orphan*/  tx_max_pending; int /*<<< orphan*/  rx_pending; int /*<<< orphan*/  rx_max_pending; } ;

/* Variables and functions */
 int /*<<< orphan*/  NUM_RX_BUFF ; 
 int /*<<< orphan*/  NUM_TX_BUFF ; 

__attribute__((used)) static void emac_ethtool_get_ringparam(struct net_device *ndev,
				       struct ethtool_ringparam *rp)
{
	rp->rx_max_pending = rp->rx_pending = NUM_RX_BUFF;
	rp->tx_max_pending = rp->tx_pending = NUM_TX_BUFF;
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
          int _len_ndev0 = 1;
          struct net_device * ndev = (struct net_device *) malloc(_len_ndev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_ndev0; _i0++) {
            ndev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rp0 = 1;
          struct ethtool_ringparam * rp = (struct ethtool_ringparam *) malloc(_len_rp0*sizeof(struct ethtool_ringparam));
          for(int _i0 = 0; _i0 < _len_rp0; _i0++) {
            rp[_i0].tx_pending = ((-2 * (next_i()%2)) + 1) * next_i();
        rp[_i0].tx_max_pending = ((-2 * (next_i()%2)) + 1) * next_i();
        rp[_i0].rx_pending = ((-2 * (next_i()%2)) + 1) * next_i();
        rp[_i0].rx_max_pending = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          emac_ethtool_get_ringparam(ndev,rp);
          free(ndev);
          free(rp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
