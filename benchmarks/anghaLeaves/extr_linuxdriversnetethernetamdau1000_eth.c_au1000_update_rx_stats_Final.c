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
typedef  int u32 ;
struct net_device_stats {int rx_bytes; int /*<<< orphan*/  collisions; int /*<<< orphan*/  rx_crc_errors; int /*<<< orphan*/  rx_length_errors; int /*<<< orphan*/  rx_missed_errors; int /*<<< orphan*/  rx_errors; int /*<<< orphan*/  multicast; int /*<<< orphan*/  rx_packets; } ;
struct net_device {struct net_device_stats stats; } ;

/* Variables and functions */
 int RX_COLL ; 
 int RX_CRC_ERROR ; 
 int RX_ERROR ; 
 int RX_FRAME_LEN_MASK ; 
 int RX_LEN_ERROR ; 
 int RX_MCAST_FRAME ; 
 int RX_MISSED_FRAME ; 
 int RX_OVERLEN ; 
 int RX_RUNT ; 

__attribute__((used)) static inline void au1000_update_rx_stats(struct net_device *dev, u32 status)
{
	struct net_device_stats *ps = &dev->stats;

	ps->rx_packets++;
	if (status & RX_MCAST_FRAME)
		ps->multicast++;

	if (status & RX_ERROR) {
		ps->rx_errors++;
		if (status & RX_MISSED_FRAME)
			ps->rx_missed_errors++;
		if (status & (RX_OVERLEN | RX_RUNT | RX_LEN_ERROR))
			ps->rx_length_errors++;
		if (status & RX_CRC_ERROR)
			ps->rx_crc_errors++;
		if (status & RX_COLL)
			ps->collisions++;
	} else
		ps->rx_bytes += status & RX_FRAME_LEN_MASK;

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
            dev[_i0].stats.rx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].stats.collisions = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].stats.rx_crc_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].stats.rx_length_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].stats.rx_missed_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].stats.rx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].stats.multicast = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].stats.rx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          au1000_update_rx_stats(dev,status);
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
