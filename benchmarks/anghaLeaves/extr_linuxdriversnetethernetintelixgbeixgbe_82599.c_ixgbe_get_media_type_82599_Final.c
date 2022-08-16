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
struct TYPE_2__ {int type; } ;
struct ixgbe_hw {int device_id; TYPE_1__ phy; } ;
typedef  enum ixgbe_media_type { ____Placeholder_ixgbe_media_type } ixgbe_media_type ;

/* Variables and functions */
#define  IXGBE_DEV_ID_82599EN_SFP 145 
#define  IXGBE_DEV_ID_82599_BACKPLANE_FCOE 144 
#define  IXGBE_DEV_ID_82599_COMBO_BACKPLANE 143 
#define  IXGBE_DEV_ID_82599_CX4 142 
#define  IXGBE_DEV_ID_82599_KR 141 
#define  IXGBE_DEV_ID_82599_KX4 140 
#define  IXGBE_DEV_ID_82599_KX4_MEZZ 139 
#define  IXGBE_DEV_ID_82599_LS 138 
#define  IXGBE_DEV_ID_82599_QSFP_SF_QP 137 
#define  IXGBE_DEV_ID_82599_SFP 136 
#define  IXGBE_DEV_ID_82599_SFP_EM 135 
#define  IXGBE_DEV_ID_82599_SFP_FCOE 134 
#define  IXGBE_DEV_ID_82599_SFP_SF2 133 
#define  IXGBE_DEV_ID_82599_SFP_SF_QP 132 
#define  IXGBE_DEV_ID_82599_T3_LOM 131 
#define  IXGBE_DEV_ID_82599_XAUI_LOM 130 
 int ixgbe_media_type_backplane ; 
 int ixgbe_media_type_copper ; 
 int ixgbe_media_type_cx4 ; 
 int ixgbe_media_type_fiber ; 
 int ixgbe_media_type_fiber_lco ; 
 int ixgbe_media_type_fiber_qsfp ; 
 int ixgbe_media_type_unknown ; 
#define  ixgbe_phy_cu_unknown 129 
#define  ixgbe_phy_tn 128 

__attribute__((used)) static enum ixgbe_media_type ixgbe_get_media_type_82599(struct ixgbe_hw *hw)
{
	/* Detect if there is a copper PHY attached. */
	switch (hw->phy.type) {
	case ixgbe_phy_cu_unknown:
	case ixgbe_phy_tn:
		return ixgbe_media_type_copper;

	default:
		break;
	}

	switch (hw->device_id) {
	case IXGBE_DEV_ID_82599_KX4:
	case IXGBE_DEV_ID_82599_KX4_MEZZ:
	case IXGBE_DEV_ID_82599_COMBO_BACKPLANE:
	case IXGBE_DEV_ID_82599_KR:
	case IXGBE_DEV_ID_82599_BACKPLANE_FCOE:
	case IXGBE_DEV_ID_82599_XAUI_LOM:
		/* Default device ID is mezzanine card KX/KX4 */
		return ixgbe_media_type_backplane;

	case IXGBE_DEV_ID_82599_SFP:
	case IXGBE_DEV_ID_82599_SFP_FCOE:
	case IXGBE_DEV_ID_82599_SFP_EM:
	case IXGBE_DEV_ID_82599_SFP_SF2:
	case IXGBE_DEV_ID_82599_SFP_SF_QP:
	case IXGBE_DEV_ID_82599EN_SFP:
		return ixgbe_media_type_fiber;

	case IXGBE_DEV_ID_82599_CX4:
		return ixgbe_media_type_cx4;

	case IXGBE_DEV_ID_82599_T3_LOM:
		return ixgbe_media_type_copper;

	case IXGBE_DEV_ID_82599_LS:
		return ixgbe_media_type_fiber_lco;

	case IXGBE_DEV_ID_82599_QSFP_SF_QP:
		return ixgbe_media_type_fiber_qsfp;

	default:
		return ixgbe_media_type_unknown;
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
          int _len_hw0 = 1;
          struct ixgbe_hw * hw = (struct ixgbe_hw *) malloc(_len_hw0*sizeof(struct ixgbe_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].device_id = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].phy.type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum ixgbe_media_type benchRet = ixgbe_get_media_type_82599(hw);
          free(hw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
