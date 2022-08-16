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

/* Type definitions */
typedef  int /*<<< orphan*/  u32 ;
typedef  int netdev_features_t ;

/* Variables and functions */
 int /*<<< orphan*/  MAC_CTRL_RMV_VLAN ; 
 int NETIF_F_HW_VLAN_CTAG_RX ; 

__attribute__((used)) static void __atl2_vlan_mode(netdev_features_t features, u32 *ctrl)
{
	if (features & NETIF_F_HW_VLAN_CTAG_RX) {
		/* enable VLAN tag insert/strip */
		*ctrl |= MAC_CTRL_RMV_VLAN;
	} else {
		/* disable VLAN tag insert/strip */
		*ctrl &= ~MAC_CTRL_RMV_VLAN;
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
          int features = 100;
          int _len_ctrl0 = 1;
          int * ctrl = (int *) malloc(_len_ctrl0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ctrl0; _i0++) {
            ctrl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __atl2_vlan_mode(features,ctrl);
          free(ctrl);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int features = 10;
          int _len_ctrl0 = 100;
          int * ctrl = (int *) malloc(_len_ctrl0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ctrl0; _i0++) {
            ctrl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __atl2_vlan_mode(features,ctrl);
          free(ctrl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
