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
typedef  int u32 ;
struct link_params {int multi_phy_config; } ;

/* Variables and functions */
#define  PORT_HW_CFG_PHY_SELECTION_FIRST_PHY 131 
#define  PORT_HW_CFG_PHY_SELECTION_FIRST_PHY_PRIORITY 130 
 int PORT_HW_CFG_PHY_SELECTION_HARDWARE_DEFAULT ; 
 int PORT_HW_CFG_PHY_SELECTION_MASK ; 
#define  PORT_HW_CFG_PHY_SELECTION_SECOND_PHY 129 
#define  PORT_HW_CFG_PHY_SELECTION_SECOND_PHY_PRIORITY 128 
 int PORT_HW_CFG_PHY_SWAPPED_ENABLED ; 

u32 bnx2x_phy_selection(struct link_params *params)
{
	u32 phy_config_swapped, prio_cfg;
	u32 return_cfg = PORT_HW_CFG_PHY_SELECTION_HARDWARE_DEFAULT;

	phy_config_swapped = params->multi_phy_config &
		PORT_HW_CFG_PHY_SWAPPED_ENABLED;

	prio_cfg = params->multi_phy_config &
			PORT_HW_CFG_PHY_SELECTION_MASK;

	if (phy_config_swapped) {
		switch (prio_cfg) {
		case PORT_HW_CFG_PHY_SELECTION_FIRST_PHY_PRIORITY:
		     return_cfg = PORT_HW_CFG_PHY_SELECTION_SECOND_PHY_PRIORITY;
		     break;
		case PORT_HW_CFG_PHY_SELECTION_SECOND_PHY_PRIORITY:
		     return_cfg = PORT_HW_CFG_PHY_SELECTION_FIRST_PHY_PRIORITY;
		     break;
		case PORT_HW_CFG_PHY_SELECTION_SECOND_PHY:
		     return_cfg = PORT_HW_CFG_PHY_SELECTION_FIRST_PHY;
		     break;
		case PORT_HW_CFG_PHY_SELECTION_FIRST_PHY:
		     return_cfg = PORT_HW_CFG_PHY_SELECTION_SECOND_PHY;
		     break;
		}
	} else
		return_cfg = prio_cfg;

	return return_cfg;
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
          int _len_params0 = 1;
          struct link_params * params = (struct link_params *) malloc(_len_params0*sizeof(struct link_params));
          for(int _i0 = 0; _i0 < _len_params0; _i0++) {
            params[_i0].multi_phy_config = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bnx2x_phy_selection(params);
          printf("%d\n", benchRet); 
          free(params);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_params0 = 100;
          struct link_params * params = (struct link_params *) malloc(_len_params0*sizeof(struct link_params));
          for(int _i0 = 0; _i0 < _len_params0; _i0++) {
            params[_i0].multi_phy_config = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bnx2x_phy_selection(params);
          printf("%d\n", benchRet); 
          free(params);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
