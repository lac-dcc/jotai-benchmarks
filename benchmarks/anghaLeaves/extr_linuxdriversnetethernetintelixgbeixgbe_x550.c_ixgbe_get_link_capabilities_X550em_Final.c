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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int type; int speeds_supported; scalar_t__ media_type; scalar_t__ sfp_type; int nw_mng_if_sel; scalar_t__ multispeed_fiber; } ;
struct TYPE_3__ {int /*<<< orphan*/  type; } ;
struct ixgbe_hw {int /*<<< orphan*/  device_id; TYPE_2__ phy; TYPE_1__ mac; } ;
typedef  int /*<<< orphan*/  s32 ;
typedef  int ixgbe_link_speed ;

/* Variables and functions */
 int /*<<< orphan*/  IXGBE_DEV_ID_X550EM_A_KR_L ; 
 int IXGBE_LINK_SPEED_10GB_FULL ; 
 int IXGBE_LINK_SPEED_1GB_FULL ; 
 int IXGBE_LINK_SPEED_2_5GB_FULL ; 
 int IXGBE_NW_MNG_IF_SEL_PHY_SPEED_2_5G ; 
 int /*<<< orphan*/  ixgbe_mac_x550em_a ; 
 scalar_t__ ixgbe_media_type_fiber ; 
#define  ixgbe_phy_ext_1g_t 132 
 int ixgbe_phy_fw ; 
#define  ixgbe_phy_sgmii 131 
#define  ixgbe_phy_x550em_kr 130 
#define  ixgbe_phy_x550em_kx4 129 
#define  ixgbe_phy_x550em_xfi 128 
 scalar_t__ ixgbe_sfp_type_1g_lx_core0 ; 
 scalar_t__ ixgbe_sfp_type_1g_lx_core1 ; 
 scalar_t__ ixgbe_sfp_type_1g_sx_core0 ; 
 scalar_t__ ixgbe_sfp_type_1g_sx_core1 ; 

__attribute__((used)) static s32 ixgbe_get_link_capabilities_X550em(struct ixgbe_hw *hw,
					      ixgbe_link_speed *speed,
					      bool *autoneg)
{
	if (hw->phy.type == ixgbe_phy_fw) {
		*autoneg = true;
		*speed = hw->phy.speeds_supported;
		return 0;
	}

	/* SFP */
	if (hw->phy.media_type == ixgbe_media_type_fiber) {
		/* CS4227 SFP must not enable auto-negotiation */
		*autoneg = false;

		if (hw->phy.sfp_type == ixgbe_sfp_type_1g_sx_core0 ||
		    hw->phy.sfp_type == ixgbe_sfp_type_1g_sx_core1 ||
		    hw->phy.sfp_type == ixgbe_sfp_type_1g_lx_core0 ||
		    hw->phy.sfp_type == ixgbe_sfp_type_1g_lx_core1) {
			*speed = IXGBE_LINK_SPEED_1GB_FULL;
			return 0;
		}

		/* Link capabilities are based on SFP */
		if (hw->phy.multispeed_fiber)
			*speed = IXGBE_LINK_SPEED_10GB_FULL |
				 IXGBE_LINK_SPEED_1GB_FULL;
		else
			*speed = IXGBE_LINK_SPEED_10GB_FULL;
	} else {
		switch (hw->phy.type) {
		case ixgbe_phy_x550em_kx4:
			*speed = IXGBE_LINK_SPEED_1GB_FULL |
				 IXGBE_LINK_SPEED_2_5GB_FULL |
				 IXGBE_LINK_SPEED_10GB_FULL;
			break;
		case ixgbe_phy_x550em_xfi:
			*speed = IXGBE_LINK_SPEED_1GB_FULL |
				 IXGBE_LINK_SPEED_10GB_FULL;
			break;
		case ixgbe_phy_ext_1g_t:
		case ixgbe_phy_sgmii:
			*speed = IXGBE_LINK_SPEED_1GB_FULL;
			break;
		case ixgbe_phy_x550em_kr:
			if (hw->mac.type == ixgbe_mac_x550em_a) {
				/* check different backplane modes */
				if (hw->phy.nw_mng_if_sel &
				    IXGBE_NW_MNG_IF_SEL_PHY_SPEED_2_5G) {
					*speed = IXGBE_LINK_SPEED_2_5GB_FULL;
					break;
				} else if (hw->device_id ==
					   IXGBE_DEV_ID_X550EM_A_KR_L) {
					*speed = IXGBE_LINK_SPEED_1GB_FULL;
					break;
				}
			}
			/* fall through */
		default:
			*speed = IXGBE_LINK_SPEED_10GB_FULL |
				 IXGBE_LINK_SPEED_1GB_FULL;
			break;
		}
		*autoneg = true;
	}
	return 0;
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
          int _len_hw0 = 1;
          struct ixgbe_hw * hw = (struct ixgbe_hw *) malloc(_len_hw0*sizeof(struct ixgbe_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].device_id = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].phy.type = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].phy.speeds_supported = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].phy.media_type = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].phy.sfp_type = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].phy.nw_mng_if_sel = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].phy.multispeed_fiber = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].mac.type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_speed0 = 1;
          int * speed = (int *) malloc(_len_speed0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_speed0; _i0++) {
            speed[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_autoneg0 = 1;
          int * autoneg = (int *) malloc(_len_autoneg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_autoneg0; _i0++) {
            autoneg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ixgbe_get_link_capabilities_X550em(hw,speed,autoneg);
          printf("%d\n", benchRet); 
          free(hw);
          free(speed);
          free(autoneg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
