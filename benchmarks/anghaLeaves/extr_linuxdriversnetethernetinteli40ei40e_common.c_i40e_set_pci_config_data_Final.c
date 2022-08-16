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
typedef  int u16 ;
struct TYPE_2__ {int /*<<< orphan*/  speed; int /*<<< orphan*/  width; int /*<<< orphan*/  type; } ;
struct i40e_hw {TYPE_1__ bus; } ;

/* Variables and functions */
 int PCI_EXP_LNKSTA_CLS ; 
#define  PCI_EXP_LNKSTA_CLS_2_5GB 134 
#define  PCI_EXP_LNKSTA_CLS_5_0GB 133 
#define  PCI_EXP_LNKSTA_CLS_8_0GB 132 
 int PCI_EXP_LNKSTA_NLW ; 
#define  PCI_EXP_LNKSTA_NLW_X1 131 
#define  PCI_EXP_LNKSTA_NLW_X2 130 
#define  PCI_EXP_LNKSTA_NLW_X4 129 
#define  PCI_EXP_LNKSTA_NLW_X8 128 
 int /*<<< orphan*/  i40e_bus_speed_2500 ; 
 int /*<<< orphan*/  i40e_bus_speed_5000 ; 
 int /*<<< orphan*/  i40e_bus_speed_8000 ; 
 int /*<<< orphan*/  i40e_bus_speed_unknown ; 
 int /*<<< orphan*/  i40e_bus_type_pci_express ; 
 int /*<<< orphan*/  i40e_bus_width_pcie_x1 ; 
 int /*<<< orphan*/  i40e_bus_width_pcie_x2 ; 
 int /*<<< orphan*/  i40e_bus_width_pcie_x4 ; 
 int /*<<< orphan*/  i40e_bus_width_pcie_x8 ; 
 int /*<<< orphan*/  i40e_bus_width_unknown ; 

void i40e_set_pci_config_data(struct i40e_hw *hw, u16 link_status)
{
	hw->bus.type = i40e_bus_type_pci_express;

	switch (link_status & PCI_EXP_LNKSTA_NLW) {
	case PCI_EXP_LNKSTA_NLW_X1:
		hw->bus.width = i40e_bus_width_pcie_x1;
		break;
	case PCI_EXP_LNKSTA_NLW_X2:
		hw->bus.width = i40e_bus_width_pcie_x2;
		break;
	case PCI_EXP_LNKSTA_NLW_X4:
		hw->bus.width = i40e_bus_width_pcie_x4;
		break;
	case PCI_EXP_LNKSTA_NLW_X8:
		hw->bus.width = i40e_bus_width_pcie_x8;
		break;
	default:
		hw->bus.width = i40e_bus_width_unknown;
		break;
	}

	switch (link_status & PCI_EXP_LNKSTA_CLS) {
	case PCI_EXP_LNKSTA_CLS_2_5GB:
		hw->bus.speed = i40e_bus_speed_2500;
		break;
	case PCI_EXP_LNKSTA_CLS_5_0GB:
		hw->bus.speed = i40e_bus_speed_5000;
		break;
	case PCI_EXP_LNKSTA_CLS_8_0GB:
		hw->bus.speed = i40e_bus_speed_8000;
		break;
	default:
		hw->bus.speed = i40e_bus_speed_unknown;
		break;
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
          int link_status = 100;
          int _len_hw0 = 1;
          struct i40e_hw * hw = (struct i40e_hw *) malloc(_len_hw0*sizeof(struct i40e_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].bus.speed = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].bus.width = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].bus.type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          i40e_set_pci_config_data(hw,link_status);
          free(hw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
