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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int _rssi_up_bound = 100;
        
          int _rssi_low_bound = 100;
        
          int _is_force_in_normal = 100;
        
          int _len_dm0 = 1;
          struct phy_dm_struct * dm = (struct phy_dm_struct *) malloc(_len_dm0*sizeof(struct phy_dm_struct));
          for(int _i0 = 0; _i0 < _len_dm0; _i0++) {
              dm[_i0].rssi_min = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_dm_ps_table0 = 1;
          struct dyn_pwr_saving * dm_ps_table = (struct dyn_pwr_saving *) malloc(_len_dm_ps_table0*sizeof(struct dyn_pwr_saving));
          for(int _i0 = 0; _i0 < _len_dm_ps_table0; _i0++) {
              dm_ps_table[_i0].pre_rf_state = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          phydm_update_rf_state(dm,dm_ps_table,_rssi_up_bound,_rssi_low_bound,_is_force_in_normal);
          free(dm);
          free(dm_ps_table);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int _rssi_up_bound = 255;
        
          int _rssi_low_bound = 255;
        
          int _is_force_in_normal = 255;
        
          int _len_dm0 = 65025;
          struct phy_dm_struct * dm = (struct phy_dm_struct *) malloc(_len_dm0*sizeof(struct phy_dm_struct));
          for(int _i0 = 0; _i0 < _len_dm0; _i0++) {
              dm[_i0].rssi_min = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_dm_ps_table0 = 65025;
          struct dyn_pwr_saving * dm_ps_table = (struct dyn_pwr_saving *) malloc(_len_dm_ps_table0*sizeof(struct dyn_pwr_saving));
          for(int _i0 = 0; _i0 < _len_dm_ps_table0; _i0++) {
              dm_ps_table[_i0].pre_rf_state = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          phydm_update_rf_state(dm,dm_ps_table,_rssi_up_bound,_rssi_low_bound,_is_force_in_normal);
          free(dm);
          free(dm_ps_table);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int _rssi_up_bound = 10;
        
          int _rssi_low_bound = 10;
        
          int _is_force_in_normal = 10;
        
          int _len_dm0 = 100;
          struct phy_dm_struct * dm = (struct phy_dm_struct *) malloc(_len_dm0*sizeof(struct phy_dm_struct));
          for(int _i0 = 0; _i0 < _len_dm0; _i0++) {
              dm[_i0].rssi_min = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_dm_ps_table0 = 100;
          struct dyn_pwr_saving * dm_ps_table = (struct dyn_pwr_saving *) malloc(_len_dm_ps_table0*sizeof(struct dyn_pwr_saving));
          for(int _i0 = 0; _i0 < _len_dm_ps_table0; _i0++) {
              dm_ps_table[_i0].pre_rf_state = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          phydm_update_rf_state(dm,dm_ps_table,_rssi_up_bound,_rssi_low_bound,_is_force_in_normal);
          free(dm);
          free(dm_ps_table);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int _rssi_up_bound = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _rssi_low_bound = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _is_force_in_normal = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_dm0 = 1;
          struct phy_dm_struct * dm = (struct phy_dm_struct *) malloc(_len_dm0*sizeof(struct phy_dm_struct));
          for(int _i0 = 0; _i0 < _len_dm0; _i0++) {
              dm[_i0].rssi_min = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_dm_ps_table0 = 1;
          struct dyn_pwr_saving * dm_ps_table = (struct dyn_pwr_saving *) malloc(_len_dm_ps_table0*sizeof(struct dyn_pwr_saving));
          for(int _i0 = 0; _i0 < _len_dm_ps_table0; _i0++) {
              dm_ps_table[_i0].pre_rf_state = ((-2 * (next_i()%2)) + 1) * next_i();
        
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
