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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct phy_dm_struct {int rssi_min; } ;
struct dyn_pwr_saving {scalar_t__ pre_rf_state; void* cur_rf_state; } ;

/* Variables and functions */
 void* RF_MAX ; 
 scalar_t__ rf_normal ; 
 void* rf_save ; 

__attribute__((used)) static inline void phydm_update_rf_state(struct phy_dm_struct *dm,
					 struct dyn_pwr_saving *dm_ps_table,
					 int _rssi_up_bound,
					 int _rssi_low_bound,
					 int _is_force_in_normal)
{
	if (_is_force_in_normal) {
		dm_ps_table->cur_rf_state = rf_normal;
		return;
	}

	if (dm->rssi_min == 0xFF) {
		dm_ps_table->cur_rf_state = RF_MAX;
		return;
	}

	if (dm_ps_table->pre_rf_state == rf_normal) {
		if (dm->rssi_min >= _rssi_up_bound)
			dm_ps_table->cur_rf_state = rf_save;
		else
			dm_ps_table->cur_rf_state = rf_normal;
	} else {
		if (dm->rssi_min <= _rssi_low_bound)
			dm_ps_table->cur_rf_state = rf_normal;
		else
			dm_ps_table->cur_rf_state = rf_save;
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

    // big-arr
    case 0:
    {
          int _rssi_up_bound = 255;
          int _rssi_low_bound = 255;
          int _is_force_in_normal = 255;
          int _len_dm0 = 1;
          struct phy_dm_struct * dm = (struct phy_dm_struct *) malloc(_len_dm0*sizeof(struct phy_dm_struct));
          for(int _i0 = 0; _i0 < _len_dm0; _i0++) {
            dm->rssi_min = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dm_ps_table0 = 1;
          struct dyn_pwr_saving * dm_ps_table = (struct dyn_pwr_saving *) malloc(_len_dm_ps_table0*sizeof(struct dyn_pwr_saving));
          for(int _i0 = 0; _i0 < _len_dm_ps_table0; _i0++) {
            dm_ps_table->pre_rf_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          phydm_update_rf_state(dm,dm_ps_table,_rssi_up_bound,_rssi_low_bound,_is_force_in_normal);
          free(dm);
          free(dm_ps_table);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
