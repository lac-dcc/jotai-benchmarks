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
struct txpwrtrack_cfg {int /*<<< orphan*/  get_delta_swing_table; int /*<<< orphan*/  phy_lc_calibrate; int /*<<< orphan*/  do_iqk; int /*<<< orphan*/  odm_tx_pwr_track_set_pwr; int /*<<< orphan*/  thermal_reg_addr; int /*<<< orphan*/  rf_path_count; int /*<<< orphan*/  average_thermal_num; int /*<<< orphan*/  threshold_dpk; int /*<<< orphan*/  threshold_iqk; void* swing_table_size_ofdm; void* swing_table_size_cck; } ;

/* Variables and functions */
 int /*<<< orphan*/  AVG_THERMAL_NUM_8822B ; 
 int /*<<< orphan*/  DPK_THRESHOLD ; 
 int /*<<< orphan*/  IQK_THRESHOLD ; 
 int /*<<< orphan*/  MAX_PATH_NUM_8822B ; 
 int /*<<< orphan*/  RF_T_METER_8822B ; 
 void* TXSCALE_TABLE_SIZE ; 
 int /*<<< orphan*/  do_iqk_8822b ; 
 int /*<<< orphan*/  get_delta_swing_table_8822b ; 
 int /*<<< orphan*/  odm_tx_pwr_track_set_pwr8822b ; 
 int /*<<< orphan*/  phy_lc_calibrate_8822b ; 

void configure_txpower_track_8822b(struct txpwrtrack_cfg *config)
{
	config->swing_table_size_cck = TXSCALE_TABLE_SIZE;
	config->swing_table_size_ofdm = TXSCALE_TABLE_SIZE;
	config->threshold_iqk = IQK_THRESHOLD;
	config->threshold_dpk = DPK_THRESHOLD;
	config->average_thermal_num = AVG_THERMAL_NUM_8822B;
	config->rf_path_count = MAX_PATH_NUM_8822B;
	config->thermal_reg_addr = RF_T_METER_8822B;

	config->odm_tx_pwr_track_set_pwr = odm_tx_pwr_track_set_pwr8822b;
	config->do_iqk = do_iqk_8822b;
	config->phy_lc_calibrate = phy_lc_calibrate_8822b;

	config->get_delta_swing_table = get_delta_swing_table_8822b;
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
          int _len_config0 = 1;
          struct txpwrtrack_cfg * config = (struct txpwrtrack_cfg *) malloc(_len_config0*sizeof(struct txpwrtrack_cfg));
          for(int _i0 = 0; _i0 < _len_config0; _i0++) {
            config[_i0].get_delta_swing_table = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].phy_lc_calibrate = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].do_iqk = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].odm_tx_pwr_track_set_pwr = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].thermal_reg_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].rf_path_count = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].average_thermal_num = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].threshold_dpk = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].threshold_iqk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          configure_txpower_track_8822b(config);
          free(config);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
