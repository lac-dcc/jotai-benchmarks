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
struct xgbe_phy_if {int /*<<< orphan*/  module_eeprom; int /*<<< orphan*/  module_info; int /*<<< orphan*/  an_isr; int /*<<< orphan*/  phy_valid_speed; int /*<<< orphan*/  phy_config_aneg; int /*<<< orphan*/  phy_status; int /*<<< orphan*/  phy_stop; int /*<<< orphan*/  phy_start; int /*<<< orphan*/  phy_reset; int /*<<< orphan*/  phy_exit; int /*<<< orphan*/  phy_init; } ;

/* Variables and functions */
 int /*<<< orphan*/  xgbe_an_combined_isr ; 
 int /*<<< orphan*/  xgbe_phy_config_aneg ; 
 int /*<<< orphan*/  xgbe_phy_exit ; 
 int /*<<< orphan*/  xgbe_phy_init ; 
 int /*<<< orphan*/  xgbe_phy_module_eeprom ; 
 int /*<<< orphan*/  xgbe_phy_module_info ; 
 int /*<<< orphan*/  xgbe_phy_reset ; 
 int /*<<< orphan*/  xgbe_phy_start ; 
 int /*<<< orphan*/  xgbe_phy_status ; 
 int /*<<< orphan*/  xgbe_phy_stop ; 
 int /*<<< orphan*/  xgbe_phy_valid_speed ; 

void xgbe_init_function_ptrs_phy(struct xgbe_phy_if *phy_if)
{
	phy_if->phy_init        = xgbe_phy_init;
	phy_if->phy_exit        = xgbe_phy_exit;

	phy_if->phy_reset       = xgbe_phy_reset;
	phy_if->phy_start       = xgbe_phy_start;
	phy_if->phy_stop        = xgbe_phy_stop;

	phy_if->phy_status      = xgbe_phy_status;
	phy_if->phy_config_aneg = xgbe_phy_config_aneg;

	phy_if->phy_valid_speed = xgbe_phy_valid_speed;

	phy_if->an_isr          = xgbe_an_combined_isr;

	phy_if->module_info     = xgbe_phy_module_info;
	phy_if->module_eeprom   = xgbe_phy_module_eeprom;
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
          int _len_phy_if0 = 1;
          struct xgbe_phy_if * phy_if = (struct xgbe_phy_if *) malloc(_len_phy_if0*sizeof(struct xgbe_phy_if));
          for(int _i0 = 0; _i0 < _len_phy_if0; _i0++) {
            phy_if[_i0].module_eeprom = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_if[_i0].module_info = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_if[_i0].an_isr = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_if[_i0].phy_valid_speed = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_if[_i0].phy_config_aneg = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_if[_i0].phy_status = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_if[_i0].phy_stop = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_if[_i0].phy_start = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_if[_i0].phy_reset = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_if[_i0].phy_exit = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_if[_i0].phy_init = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          xgbe_init_function_ptrs_phy(phy_if);
          free(phy_if);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
