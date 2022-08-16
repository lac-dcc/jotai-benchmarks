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
struct xgbe_phy_impl_if {int /*<<< orphan*/  module_eeprom; int /*<<< orphan*/  module_info; int /*<<< orphan*/  kr_training_post; int /*<<< orphan*/  kr_training_pre; int /*<<< orphan*/  an_post; int /*<<< orphan*/  an_pre; int /*<<< orphan*/  an_outcome; int /*<<< orphan*/  an_advertising; int /*<<< orphan*/  an_config; int /*<<< orphan*/  an_mode; int /*<<< orphan*/  cur_mode; int /*<<< orphan*/  switch_mode; int /*<<< orphan*/  get_mode; int /*<<< orphan*/  set_mode; int /*<<< orphan*/  use_mode; int /*<<< orphan*/  valid_speed; int /*<<< orphan*/  link_status; int /*<<< orphan*/  stop; int /*<<< orphan*/  start; int /*<<< orphan*/  reset; int /*<<< orphan*/  exit; int /*<<< orphan*/  init; } ;
struct xgbe_phy_if {struct xgbe_phy_impl_if phy_impl; } ;

/* Variables and functions */
 int /*<<< orphan*/  xgbe_phy_an_advertising ; 
 int /*<<< orphan*/  xgbe_phy_an_config ; 
 int /*<<< orphan*/  xgbe_phy_an_mode ; 
 int /*<<< orphan*/  xgbe_phy_an_outcome ; 
 int /*<<< orphan*/  xgbe_phy_an_post ; 
 int /*<<< orphan*/  xgbe_phy_an_pre ; 
 int /*<<< orphan*/  xgbe_phy_cur_mode ; 
 int /*<<< orphan*/  xgbe_phy_exit ; 
 int /*<<< orphan*/  xgbe_phy_get_mode ; 
 int /*<<< orphan*/  xgbe_phy_init ; 
 int /*<<< orphan*/  xgbe_phy_kr_training_post ; 
 int /*<<< orphan*/  xgbe_phy_kr_training_pre ; 
 int /*<<< orphan*/  xgbe_phy_link_status ; 
 int /*<<< orphan*/  xgbe_phy_module_eeprom ; 
 int /*<<< orphan*/  xgbe_phy_module_info ; 
 int /*<<< orphan*/  xgbe_phy_reset ; 
 int /*<<< orphan*/  xgbe_phy_set_mode ; 
 int /*<<< orphan*/  xgbe_phy_start ; 
 int /*<<< orphan*/  xgbe_phy_stop ; 
 int /*<<< orphan*/  xgbe_phy_switch_mode ; 
 int /*<<< orphan*/  xgbe_phy_use_mode ; 
 int /*<<< orphan*/  xgbe_phy_valid_speed ; 

void xgbe_init_function_ptrs_phy_v2(struct xgbe_phy_if *phy_if)
{
	struct xgbe_phy_impl_if *phy_impl = &phy_if->phy_impl;

	phy_impl->init			= xgbe_phy_init;
	phy_impl->exit			= xgbe_phy_exit;

	phy_impl->reset			= xgbe_phy_reset;
	phy_impl->start			= xgbe_phy_start;
	phy_impl->stop			= xgbe_phy_stop;

	phy_impl->link_status		= xgbe_phy_link_status;

	phy_impl->valid_speed		= xgbe_phy_valid_speed;

	phy_impl->use_mode		= xgbe_phy_use_mode;
	phy_impl->set_mode		= xgbe_phy_set_mode;
	phy_impl->get_mode		= xgbe_phy_get_mode;
	phy_impl->switch_mode		= xgbe_phy_switch_mode;
	phy_impl->cur_mode		= xgbe_phy_cur_mode;

	phy_impl->an_mode		= xgbe_phy_an_mode;

	phy_impl->an_config		= xgbe_phy_an_config;

	phy_impl->an_advertising	= xgbe_phy_an_advertising;

	phy_impl->an_outcome		= xgbe_phy_an_outcome;

	phy_impl->an_pre		= xgbe_phy_an_pre;
	phy_impl->an_post		= xgbe_phy_an_post;

	phy_impl->kr_training_pre	= xgbe_phy_kr_training_pre;
	phy_impl->kr_training_post	= xgbe_phy_kr_training_post;

	phy_impl->module_info		= xgbe_phy_module_info;
	phy_impl->module_eeprom		= xgbe_phy_module_eeprom;
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
            phy_if[_i0].phy_impl.module_eeprom = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_if[_i0].phy_impl.module_info = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_if[_i0].phy_impl.kr_training_post = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_if[_i0].phy_impl.kr_training_pre = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_if[_i0].phy_impl.an_post = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_if[_i0].phy_impl.an_pre = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_if[_i0].phy_impl.an_outcome = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_if[_i0].phy_impl.an_advertising = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_if[_i0].phy_impl.an_config = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_if[_i0].phy_impl.an_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_if[_i0].phy_impl.cur_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_if[_i0].phy_impl.switch_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_if[_i0].phy_impl.get_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_if[_i0].phy_impl.set_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_if[_i0].phy_impl.use_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_if[_i0].phy_impl.valid_speed = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_if[_i0].phy_impl.link_status = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_if[_i0].phy_impl.stop = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_if[_i0].phy_impl.start = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_if[_i0].phy_impl.reset = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_if[_i0].phy_impl.exit = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_if[_i0].phy_impl.init = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          xgbe_init_function_ptrs_phy_v2(phy_if);
          free(phy_if);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
