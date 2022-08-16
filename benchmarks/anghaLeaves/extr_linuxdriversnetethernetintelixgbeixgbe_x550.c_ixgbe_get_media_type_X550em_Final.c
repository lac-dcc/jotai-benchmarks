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
struct TYPE_2__ {int /*<<< orphan*/  type; } ;
struct ixgbe_hw {int device_id; TYPE_1__ phy; } ;
typedef  enum ixgbe_media_type { ____Placeholder_ixgbe_media_type } ixgbe_media_type ;

/* Variables and functions */
#define  IXGBE_DEV_ID_X550EM_A_10G_T 142 
#define  IXGBE_DEV_ID_X550EM_A_1G_T 141 
#define  IXGBE_DEV_ID_X550EM_A_1G_T_L 140 
#define  IXGBE_DEV_ID_X550EM_A_KR 139 
#define  IXGBE_DEV_ID_X550EM_A_KR_L 138 
#define  IXGBE_DEV_ID_X550EM_A_SFP 137 
#define  IXGBE_DEV_ID_X550EM_A_SFP_N 136 
#define  IXGBE_DEV_ID_X550EM_A_SGMII 135 
#define  IXGBE_DEV_ID_X550EM_A_SGMII_L 134 
#define  IXGBE_DEV_ID_X550EM_X_10G_T 133 
#define  IXGBE_DEV_ID_X550EM_X_1G_T 132 
#define  IXGBE_DEV_ID_X550EM_X_KR 131 
#define  IXGBE_DEV_ID_X550EM_X_KX4 130 
#define  IXGBE_DEV_ID_X550EM_X_SFP 129 
#define  IXGBE_DEV_ID_X550EM_X_XFI 128 
 int ixgbe_media_type_backplane ; 
 int ixgbe_media_type_copper ; 
 int ixgbe_media_type_fiber ; 
 int ixgbe_media_type_unknown ; 
 int /*<<< orphan*/  ixgbe_phy_sgmii ; 

__attribute__((used)) static enum ixgbe_media_type ixgbe_get_media_type_X550em(struct ixgbe_hw *hw)
{
	enum ixgbe_media_type media_type;

	/* Detect if there is a copper PHY attached. */
	switch (hw->device_id) {
	case IXGBE_DEV_ID_X550EM_A_SGMII:
	case IXGBE_DEV_ID_X550EM_A_SGMII_L:
		hw->phy.type = ixgbe_phy_sgmii;
		/* Fallthrough */
	case IXGBE_DEV_ID_X550EM_X_KR:
	case IXGBE_DEV_ID_X550EM_X_KX4:
	case IXGBE_DEV_ID_X550EM_X_XFI:
	case IXGBE_DEV_ID_X550EM_A_KR:
	case IXGBE_DEV_ID_X550EM_A_KR_L:
		media_type = ixgbe_media_type_backplane;
		break;
	case IXGBE_DEV_ID_X550EM_X_SFP:
	case IXGBE_DEV_ID_X550EM_A_SFP:
	case IXGBE_DEV_ID_X550EM_A_SFP_N:
		media_type = ixgbe_media_type_fiber;
		break;
	case IXGBE_DEV_ID_X550EM_X_1G_T:
	case IXGBE_DEV_ID_X550EM_X_10G_T:
	case IXGBE_DEV_ID_X550EM_A_10G_T:
	case IXGBE_DEV_ID_X550EM_A_1G_T:
	case IXGBE_DEV_ID_X550EM_A_1G_T_L:
		media_type = ixgbe_media_type_copper;
		break;
	default:
		media_type = ixgbe_media_type_unknown;
		break;
	}
	return media_type;
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
          enum ixgbe_media_type benchRet = ixgbe_get_media_type_X550em(hw);
          free(hw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
