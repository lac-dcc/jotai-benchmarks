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
struct ufs_hisi_dev_params {int /*<<< orphan*/  desired_working_mode; int /*<<< orphan*/  hs_rate; int /*<<< orphan*/  tx_pwr_hs; int /*<<< orphan*/  rx_pwr_hs; int /*<<< orphan*/  tx_pwr_pwm; int /*<<< orphan*/  rx_pwr_pwm; int /*<<< orphan*/  pwm_tx_gear; int /*<<< orphan*/  pwm_rx_gear; int /*<<< orphan*/  hs_tx_gear; int /*<<< orphan*/  hs_rx_gear; int /*<<< orphan*/  tx_lanes; int /*<<< orphan*/  rx_lanes; } ;

/* Variables and functions */
 int /*<<< orphan*/  UFS_HISI_LIMIT_DESIRED_MODE ; 
 int /*<<< orphan*/  UFS_HISI_LIMIT_HSGEAR_RX ; 
 int /*<<< orphan*/  UFS_HISI_LIMIT_HSGEAR_TX ; 
 int /*<<< orphan*/  UFS_HISI_LIMIT_HS_RATE ; 
 int /*<<< orphan*/  UFS_HISI_LIMIT_NUM_LANES_RX ; 
 int /*<<< orphan*/  UFS_HISI_LIMIT_NUM_LANES_TX ; 
 int /*<<< orphan*/  UFS_HISI_LIMIT_PWMGEAR_RX ; 
 int /*<<< orphan*/  UFS_HISI_LIMIT_PWMGEAR_TX ; 
 int /*<<< orphan*/  UFS_HISI_LIMIT_RX_PWR_HS ; 
 int /*<<< orphan*/  UFS_HISI_LIMIT_RX_PWR_PWM ; 
 int /*<<< orphan*/  UFS_HISI_LIMIT_TX_PWR_HS ; 
 int /*<<< orphan*/  UFS_HISI_LIMIT_TX_PWR_PWM ; 

__attribute__((used)) static void ufs_hisi_set_dev_cap(struct ufs_hisi_dev_params *hisi_param)
{
	hisi_param->rx_lanes = UFS_HISI_LIMIT_NUM_LANES_RX;
	hisi_param->tx_lanes = UFS_HISI_LIMIT_NUM_LANES_TX;
	hisi_param->hs_rx_gear = UFS_HISI_LIMIT_HSGEAR_RX;
	hisi_param->hs_tx_gear = UFS_HISI_LIMIT_HSGEAR_TX;
	hisi_param->pwm_rx_gear = UFS_HISI_LIMIT_PWMGEAR_RX;
	hisi_param->pwm_tx_gear = UFS_HISI_LIMIT_PWMGEAR_TX;
	hisi_param->rx_pwr_pwm = UFS_HISI_LIMIT_RX_PWR_PWM;
	hisi_param->tx_pwr_pwm = UFS_HISI_LIMIT_TX_PWR_PWM;
	hisi_param->rx_pwr_hs = UFS_HISI_LIMIT_RX_PWR_HS;
	hisi_param->tx_pwr_hs = UFS_HISI_LIMIT_TX_PWR_HS;
	hisi_param->hs_rate = UFS_HISI_LIMIT_HS_RATE;
	hisi_param->desired_working_mode = UFS_HISI_LIMIT_DESIRED_MODE;
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
          int _len_hisi_param0 = 1;
          struct ufs_hisi_dev_params * hisi_param = (struct ufs_hisi_dev_params *) malloc(_len_hisi_param0*sizeof(struct ufs_hisi_dev_params));
          for(int _i0 = 0; _i0 < _len_hisi_param0; _i0++) {
            hisi_param[_i0].desired_working_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        hisi_param[_i0].hs_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        hisi_param[_i0].tx_pwr_hs = ((-2 * (next_i()%2)) + 1) * next_i();
        hisi_param[_i0].rx_pwr_hs = ((-2 * (next_i()%2)) + 1) * next_i();
        hisi_param[_i0].tx_pwr_pwm = ((-2 * (next_i()%2)) + 1) * next_i();
        hisi_param[_i0].rx_pwr_pwm = ((-2 * (next_i()%2)) + 1) * next_i();
        hisi_param[_i0].pwm_tx_gear = ((-2 * (next_i()%2)) + 1) * next_i();
        hisi_param[_i0].pwm_rx_gear = ((-2 * (next_i()%2)) + 1) * next_i();
        hisi_param[_i0].hs_tx_gear = ((-2 * (next_i()%2)) + 1) * next_i();
        hisi_param[_i0].hs_rx_gear = ((-2 * (next_i()%2)) + 1) * next_i();
        hisi_param[_i0].tx_lanes = ((-2 * (next_i()%2)) + 1) * next_i();
        hisi_param[_i0].rx_lanes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ufs_hisi_set_dev_cap(hisi_param);
          free(hisi_param);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
