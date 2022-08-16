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
struct e1000_hw {scalar_t__ mac_type; int phy_id; int /*<<< orphan*/  phy_type; } ;
typedef  int /*<<< orphan*/  s32 ;

/* Variables and functions */
 int /*<<< orphan*/  E1000_ERR_PHY_TYPE ; 
 int /*<<< orphan*/  E1000_SUCCESS ; 
#define  IGP01E1000_I_PHY_ID 135 
#define  M88E1000_E_PHY_ID 134 
#define  M88E1000_I_PHY_ID 133 
#define  M88E1011_I_PHY_ID 132 
#define  M88E1111_I_PHY_ID 131 
#define  M88E1118_E_PHY_ID 130 
#define  RTL8201N_PHY_ID 129 
#define  RTL8211B_PHY_ID 128 
 scalar_t__ e1000_82541 ; 
 scalar_t__ e1000_82541_rev_2 ; 
 scalar_t__ e1000_82547 ; 
 scalar_t__ e1000_82547_rev_2 ; 
 int /*<<< orphan*/  e1000_phy_8201 ; 
 int /*<<< orphan*/  e1000_phy_8211 ; 
 int /*<<< orphan*/  e1000_phy_igp ; 
 int /*<<< orphan*/  e1000_phy_m88 ; 
 int /*<<< orphan*/  e1000_phy_undefined ; 
 scalar_t__ e1000_undefined ; 

__attribute__((used)) static s32 e1000_set_phy_type(struct e1000_hw *hw)
{
	if (hw->mac_type == e1000_undefined)
		return -E1000_ERR_PHY_TYPE;

	switch (hw->phy_id) {
	case M88E1000_E_PHY_ID:
	case M88E1000_I_PHY_ID:
	case M88E1011_I_PHY_ID:
	case M88E1111_I_PHY_ID:
	case M88E1118_E_PHY_ID:
		hw->phy_type = e1000_phy_m88;
		break;
	case IGP01E1000_I_PHY_ID:
		if (hw->mac_type == e1000_82541 ||
		    hw->mac_type == e1000_82541_rev_2 ||
		    hw->mac_type == e1000_82547 ||
		    hw->mac_type == e1000_82547_rev_2)
			hw->phy_type = e1000_phy_igp;
		break;
	case RTL8211B_PHY_ID:
		hw->phy_type = e1000_phy_8211;
		break;
	case RTL8201N_PHY_ID:
		hw->phy_type = e1000_phy_8201;
		break;
	default:
		/* Should never have loaded on this device */
		hw->phy_type = e1000_phy_undefined;
		return -E1000_ERR_PHY_TYPE;
	}

	return E1000_SUCCESS;
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
          struct e1000_hw * hw = (struct e1000_hw *) malloc(_len_hw0*sizeof(struct e1000_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].mac_type = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].phy_id = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].phy_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = e1000_set_phy_type(hw);
          printf("%d\n", benchRet); 
          free(hw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
