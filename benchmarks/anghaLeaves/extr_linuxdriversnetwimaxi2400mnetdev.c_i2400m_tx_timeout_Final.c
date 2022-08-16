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
       1            big-arr-10x\n\
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
struct TYPE_2__ {int /*<<< orphan*/  tx_errors; } ;
struct net_device {TYPE_1__ stats; } ;

/* Variables and functions */

__attribute__((used)) static
void i2400m_tx_timeout(struct net_device *net_dev)
{
	/*
	 * We might want to kick the device
	 *
	 * There is not much we can do though, as the device requires
	 * that we send the data aggregated. By the time we receive
	 * this, there might be data pending to be sent or not...
	 */
	net_dev->stats.tx_errors++;
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
          int _len_net_dev0 = 1;
          struct net_device * net_dev = (struct net_device *) malloc(_len_net_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_net_dev0; _i0++) {
            net_dev[_i0].stats.tx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          i2400m_tx_timeout(net_dev);
          free(net_dev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_net_dev0 = 100;
          struct net_device * net_dev = (struct net_device *) malloc(_len_net_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_net_dev0; _i0++) {
            net_dev[_i0].stats.tx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          i2400m_tx_timeout(net_dev);
          free(net_dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
