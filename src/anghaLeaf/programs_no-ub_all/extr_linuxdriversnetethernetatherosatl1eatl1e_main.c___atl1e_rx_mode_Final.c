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
typedef  int /*<<< orphan*/  u32 ;
typedef  int netdev_features_t ;

/* Variables and functions */
 int /*<<< orphan*/  MAC_CTRL_DBG ; 
 int NETIF_F_RXALL ; 

__attribute__((used)) static void __atl1e_rx_mode(netdev_features_t features, u32 *mac_ctrl_data)
{

	if (features & NETIF_F_RXALL) {
		/* enable RX of ALL frames */
		*mac_ctrl_data |= MAC_CTRL_DBG;
	} else {
		/* disable RX of ALL frames */
		*mac_ctrl_data &= ~MAC_CTRL_DBG;
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

    // big-arr
    case 0:
    {
          int features = 255;
          int _len_mac_ctrl_data0 = 65025;
          int * mac_ctrl_data = (int *) malloc(_len_mac_ctrl_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mac_ctrl_data0; _i0++) {
            mac_ctrl_data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __atl1e_rx_mode(features,mac_ctrl_data);
          free(mac_ctrl_data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
