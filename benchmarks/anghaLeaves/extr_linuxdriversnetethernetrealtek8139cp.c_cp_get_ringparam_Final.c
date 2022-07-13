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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
struct net_device {int dummy; } ;
struct ethtool_ringparam {void* tx_pending; void* rx_pending; void* tx_max_pending; void* rx_max_pending; } ;

/* Variables and functions */
 void* CP_RX_RING_SIZE ; 
 void* CP_TX_RING_SIZE ; 

__attribute__((used)) static void cp_get_ringparam(struct net_device *dev,
				struct ethtool_ringparam *ring)
{
	ring->rx_max_pending = CP_RX_RING_SIZE;
	ring->tx_max_pending = CP_TX_RING_SIZE;
	ring->rx_pending = CP_RX_RING_SIZE;
	ring->tx_pending = CP_TX_RING_SIZE;
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
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ring0 = 1;
          struct ethtool_ringparam * ring = (struct ethtool_ringparam *) malloc(_len_ring0*sizeof(struct ethtool_ringparam));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
              }
          cp_get_ringparam(dev,ring);
          free(dev);
          free(ring);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dev0 = 65025;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ring0 = 65025;
          struct ethtool_ringparam * ring = (struct ethtool_ringparam *) malloc(_len_ring0*sizeof(struct ethtool_ringparam));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
              }
          cp_get_ringparam(dev,ring);
          free(dev);
          free(ring);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dev0 = 100;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ring0 = 100;
          struct ethtool_ringparam * ring = (struct ethtool_ringparam *) malloc(_len_ring0*sizeof(struct ethtool_ringparam));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
              }
          cp_get_ringparam(dev,ring);
          free(dev);
          free(ring);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
