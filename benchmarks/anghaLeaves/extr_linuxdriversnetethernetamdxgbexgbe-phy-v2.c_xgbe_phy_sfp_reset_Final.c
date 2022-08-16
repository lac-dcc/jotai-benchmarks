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
struct xgbe_phy_data {int sfp_mod_absent; int /*<<< orphan*/  sfp_speed; int /*<<< orphan*/  sfp_cable; int /*<<< orphan*/  sfp_base; scalar_t__ sfp_tx_fault; scalar_t__ sfp_rx_los; } ;

/* Variables and functions */
 int /*<<< orphan*/  XGBE_SFP_BASE_UNKNOWN ; 
 int /*<<< orphan*/  XGBE_SFP_CABLE_UNKNOWN ; 
 int /*<<< orphan*/  XGBE_SFP_SPEED_UNKNOWN ; 

__attribute__((used)) static void xgbe_phy_sfp_reset(struct xgbe_phy_data *phy_data)
{
	phy_data->sfp_rx_los = 0;
	phy_data->sfp_tx_fault = 0;
	phy_data->sfp_mod_absent = 1;
	phy_data->sfp_base = XGBE_SFP_BASE_UNKNOWN;
	phy_data->sfp_cable = XGBE_SFP_CABLE_UNKNOWN;
	phy_data->sfp_speed = XGBE_SFP_SPEED_UNKNOWN;
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
          int _len_phy_data0 = 1;
          struct xgbe_phy_data * phy_data = (struct xgbe_phy_data *) malloc(_len_phy_data0*sizeof(struct xgbe_phy_data));
          for(int _i0 = 0; _i0 < _len_phy_data0; _i0++) {
            phy_data[_i0].sfp_mod_absent = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_data[_i0].sfp_speed = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_data[_i0].sfp_cable = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_data[_i0].sfp_base = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_data[_i0].sfp_tx_fault = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_data[_i0].sfp_rx_los = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          xgbe_phy_sfp_reset(phy_data);
          free(phy_data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
