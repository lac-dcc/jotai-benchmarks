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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
struct TYPE_2__ {int /*<<< orphan*/  rx_errors; int /*<<< orphan*/  rx_frame_errors; int /*<<< orphan*/  rx_fifo_errors; int /*<<< orphan*/  rx_crc_errors; int /*<<< orphan*/  rx_length_errors; } ;
struct net_device {TYPE_1__ stats; } ;

/* Variables and functions */
 int RX_ALIGNMENT_ERROR ; 
 int RX_FCS_ERR ; 
 int RX_FIFO_OVERRUN ; 
 int RX_LENGTH_ERR ; 

__attribute__((used)) static void nb8800_rx_error(struct net_device *dev, u32 report)
{
	if (report & RX_LENGTH_ERR)
		dev->stats.rx_length_errors++;

	if (report & RX_FCS_ERR)
		dev->stats.rx_crc_errors++;

	if (report & RX_FIFO_OVERRUN)
		dev->stats.rx_fifo_errors++;

	if (report & RX_ALIGNMENT_ERROR)
		dev->stats.rx_frame_errors++;

	dev->stats.rx_errors++;
}

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
          int report = 100;
        
          int _len_dev0 = 1;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].stats.rx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].stats.rx_frame_errors = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].stats.rx_fifo_errors = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].stats.rx_crc_errors = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].stats.rx_length_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          nb8800_rx_error(dev,report);
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int report = 255;
        
          int _len_dev0 = 65025;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].stats.rx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].stats.rx_frame_errors = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].stats.rx_fifo_errors = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].stats.rx_crc_errors = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].stats.rx_length_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          nb8800_rx_error(dev,report);
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int report = 10;
        
          int _len_dev0 = 100;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].stats.rx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].stats.rx_frame_errors = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].stats.rx_fifo_errors = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].stats.rx_crc_errors = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].stats.rx_length_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          nb8800_rx_error(dev,report);
          free(dev);
        
        break;
    }
    // empty
    case 3:
    {
          int report = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_dev0 = 1;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].stats.rx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].stats.rx_frame_errors = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].stats.rx_fifo_errors = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].stats.rx_crc_errors = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].stats.rx_length_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          nb8800_rx_error(dev,report);
          free(dev);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
