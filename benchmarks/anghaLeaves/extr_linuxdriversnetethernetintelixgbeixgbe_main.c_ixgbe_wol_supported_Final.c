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
typedef  scalar_t__ u16 ;
struct TYPE_3__ {scalar_t__ func; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ bus; TYPE_2__ mac; } ;
struct ixgbe_adapter {scalar_t__ eeprom_cap; struct ixgbe_hw hw; } ;

/* Variables and functions */
 scalar_t__ IXGBE_DEVICE_CAPS_WOL_MASK ; 
 scalar_t__ IXGBE_DEVICE_CAPS_WOL_PORT0 ; 
 scalar_t__ IXGBE_DEVICE_CAPS_WOL_PORT0_1 ; 
#define  IXGBE_DEV_ID_82599EN_SFP 143 
#define  IXGBE_DEV_ID_82599_COMBO_BACKPLANE 142 
#define  IXGBE_DEV_ID_82599_KX4 141 
#define  IXGBE_DEV_ID_82599_SFP 140 
#define  IXGBE_SUBDEV_ID_82599EN_SFP_OCP1 139 
#define  IXGBE_SUBDEV_ID_82599_560FLR 138 
#define  IXGBE_SUBDEV_ID_82599_ECNA_DP 137 
 scalar_t__ IXGBE_SUBDEV_ID_82599_KX4_KR_MEZZ ; 
#define  IXGBE_SUBDEV_ID_82599_LOM_SNAP6 136 
#define  IXGBE_SUBDEV_ID_82599_RNDC 135 
#define  IXGBE_SUBDEV_ID_82599_SFP 134 
#define  IXGBE_SUBDEV_ID_82599_SFP_1OCP 133 
#define  IXGBE_SUBDEV_ID_82599_SFP_2OCP 132 
#define  IXGBE_SUBDEV_ID_82599_SFP_LOM_OEM1 131 
#define  IXGBE_SUBDEV_ID_82599_SFP_LOM_OEM2 130 
#define  IXGBE_SUBDEV_ID_82599_SFP_WOL0 129 
#define  IXGBE_SUBDEV_ID_82599_SP_560FLR 128 
 scalar_t__ ixgbe_mac_82598EB ; 
 scalar_t__ ixgbe_mac_X540 ; 

bool ixgbe_wol_supported(struct ixgbe_adapter *adapter, u16 device_id,
			 u16 subdevice_id)
{
	struct ixgbe_hw *hw = &adapter->hw;
	u16 wol_cap = adapter->eeprom_cap & IXGBE_DEVICE_CAPS_WOL_MASK;

	/* WOL not supported on 82598 */
	if (hw->mac.type == ixgbe_mac_82598EB)
		return false;

	/* check eeprom to see if WOL is enabled for X540 and newer */
	if (hw->mac.type >= ixgbe_mac_X540) {
		if ((wol_cap == IXGBE_DEVICE_CAPS_WOL_PORT0_1) ||
		    ((wol_cap == IXGBE_DEVICE_CAPS_WOL_PORT0) &&
		     (hw->bus.func == 0)))
			return true;
	}

	/* WOL is determined based on device IDs for 82599 MACs */
	switch (device_id) {
	case IXGBE_DEV_ID_82599_SFP:
		/* Only these subdevices could supports WOL */
		switch (subdevice_id) {
		case IXGBE_SUBDEV_ID_82599_560FLR:
		case IXGBE_SUBDEV_ID_82599_LOM_SNAP6:
		case IXGBE_SUBDEV_ID_82599_SFP_WOL0:
		case IXGBE_SUBDEV_ID_82599_SFP_2OCP:
			/* only support first port */
			if (hw->bus.func != 0)
				break;
			/* fall through */
		case IXGBE_SUBDEV_ID_82599_SP_560FLR:
		case IXGBE_SUBDEV_ID_82599_SFP:
		case IXGBE_SUBDEV_ID_82599_RNDC:
		case IXGBE_SUBDEV_ID_82599_ECNA_DP:
		case IXGBE_SUBDEV_ID_82599_SFP_1OCP:
		case IXGBE_SUBDEV_ID_82599_SFP_LOM_OEM1:
		case IXGBE_SUBDEV_ID_82599_SFP_LOM_OEM2:
			return true;
		}
		break;
	case IXGBE_DEV_ID_82599EN_SFP:
		/* Only these subdevices support WOL */
		switch (subdevice_id) {
		case IXGBE_SUBDEV_ID_82599EN_SFP_OCP1:
			return true;
		}
		break;
	case IXGBE_DEV_ID_82599_COMBO_BACKPLANE:
		/* All except this subdevice support WOL */
		if (subdevice_id != IXGBE_SUBDEV_ID_82599_KX4_KR_MEZZ)
			return true;
		break;
	case IXGBE_DEV_ID_82599_KX4:
		return  true;
	default:
		break;
	}

	return false;
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
          long device_id = 100;
          long subdevice_id = 100;
          int _len_adapter0 = 1;
          struct ixgbe_adapter * adapter = (struct ixgbe_adapter *) malloc(_len_adapter0*sizeof(struct ixgbe_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].eeprom_cap = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].hw.bus.func = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].hw.mac.type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ixgbe_wol_supported(adapter,device_id,subdevice_id);
          printf("%d\n", benchRet); 
          free(adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
