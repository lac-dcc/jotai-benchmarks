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
struct TYPE_2__ {int /*<<< orphan*/  set_vfta; int /*<<< orphan*/  set_uc_addr; int /*<<< orphan*/  read_mac_addr; int /*<<< orphan*/  rar_set; int /*<<< orphan*/  update_mc_addr_list; int /*<<< orphan*/  get_link_up_info; int /*<<< orphan*/  check_for_link; int /*<<< orphan*/  init_hw; int /*<<< orphan*/  reset_hw; } ;
struct e1000_mac_info {int mta_reg_count; int rar_entry_count; TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_mac_info mac; } ;
typedef  int /*<<< orphan*/  s32 ;

/* Variables and functions */
 int /*<<< orphan*/  E1000_SUCCESS ; 
 int /*<<< orphan*/  e1000_check_for_link_vf ; 
 int /*<<< orphan*/  e1000_get_link_up_info_vf ; 
 int /*<<< orphan*/  e1000_init_hw_vf ; 
 int /*<<< orphan*/  e1000_rar_set_vf ; 
 int /*<<< orphan*/  e1000_read_mac_addr_vf ; 
 int /*<<< orphan*/  e1000_reset_hw_vf ; 
 int /*<<< orphan*/  e1000_set_uc_addr_vf ; 
 int /*<<< orphan*/  e1000_set_vfta_vf ; 
 int /*<<< orphan*/  e1000_update_mc_addr_list_vf ; 

__attribute__((used)) static s32 e1000_init_mac_params_vf(struct e1000_hw *hw)
{
	struct e1000_mac_info *mac = &hw->mac;

	/* VF's have no MTA Registers - PF feature only */
	mac->mta_reg_count = 128;
	/* VF's have no access to RAR entries  */
	mac->rar_entry_count = 1;

	/* Function pointers */
	/* reset */
	mac->ops.reset_hw = e1000_reset_hw_vf;
	/* hw initialization */
	mac->ops.init_hw = e1000_init_hw_vf;
	/* check for link */
	mac->ops.check_for_link = e1000_check_for_link_vf;
	/* link info */
	mac->ops.get_link_up_info = e1000_get_link_up_info_vf;
	/* multicast address update */
	mac->ops.update_mc_addr_list = e1000_update_mc_addr_list_vf;
	/* set mac address */
	mac->ops.rar_set = e1000_rar_set_vf;
	/* read mac address */
	mac->ops.read_mac_addr = e1000_read_mac_addr_vf;
	/* set mac filter */
	mac->ops.set_uc_addr = e1000_set_uc_addr_vf;
	/* set vlan filter table array */
	mac->ops.set_vfta = e1000_set_vfta_vf;

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
            hw[_i0].mac.mta_reg_count = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].mac.rar_entry_count = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].mac.ops.set_vfta = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].mac.ops.set_uc_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].mac.ops.read_mac_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].mac.ops.rar_set = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].mac.ops.update_mc_addr_list = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].mac.ops.get_link_up_info = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].mac.ops.check_for_link = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].mac.ops.init_hw = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].mac.ops.reset_hw = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = e1000_init_mac_params_vf(hw);
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
