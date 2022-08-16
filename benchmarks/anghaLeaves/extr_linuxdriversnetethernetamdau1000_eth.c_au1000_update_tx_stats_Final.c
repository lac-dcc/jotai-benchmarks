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
typedef  int u32 ;
struct net_device_stats {int /*<<< orphan*/  tx_carrier_errors; int /*<<< orphan*/  tx_aborted_errors; int /*<<< orphan*/  tx_errors; } ;
struct net_device {TYPE_1__* phydev; struct net_device_stats stats; } ;
struct TYPE_2__ {scalar_t__ duplex; } ;

/* Variables and functions */
 scalar_t__ DUPLEX_FULL ; 
 int TX_FRAME_ABORTED ; 
 int TX_JAB_TIMEOUT ; 
 int TX_LOSS_CARRIER ; 
 int TX_NO_CARRIER ; 
 int TX_UNDERRUN ; 

__attribute__((used)) static void au1000_update_tx_stats(struct net_device *dev, u32 status)
{
	struct net_device_stats *ps = &dev->stats;

	if (status & TX_FRAME_ABORTED) {
		if (!dev->phydev || (DUPLEX_FULL == dev->phydev->duplex)) {
			if (status & (TX_JAB_TIMEOUT | TX_UNDERRUN)) {
				/* any other tx errors are only valid
				 * in half duplex mode
				 */
				ps->tx_errors++;
				ps->tx_aborted_errors++;
			}
		} else {
			ps->tx_errors++;
			ps->tx_aborted_errors++;
			if (status & (TX_NO_CARRIER | TX_LOSS_CARRIER))
				ps->tx_carrier_errors++;
		}
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
          int status = 100;
          int _len_dev0 = 1;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__phydev0 = 1;
          dev[_i0].phydev = (struct TYPE_2__ *) malloc(_len_dev__i0__phydev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev__i0__phydev0; _j0++) {
            dev[_i0].phydev->duplex = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev[_i0].stats.tx_carrier_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].stats.tx_aborted_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].stats.tx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          au1000_update_tx_stats(dev,status);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].phydev);
          }
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
