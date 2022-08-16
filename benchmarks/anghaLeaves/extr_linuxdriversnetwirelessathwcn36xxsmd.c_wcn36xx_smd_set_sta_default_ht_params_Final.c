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
struct wcn36xx_hal_config_sta_params {int ht_capable; int tx_channel_width_set; int lsig_txop_protection; int max_ampdu_size; int max_ampdu_density; int sgi_20Mhz; int sgi_40mhz; int green_field_capable; int dsss_cck_mode_40mhz; scalar_t__ delayed_ba_support; scalar_t__ max_amsdu_size; } ;

/* Variables and functions */

__attribute__((used)) static void wcn36xx_smd_set_sta_default_ht_params(
		struct wcn36xx_hal_config_sta_params *sta_params)
{
	sta_params->ht_capable = 1;
	sta_params->tx_channel_width_set = 1;
	sta_params->lsig_txop_protection = 1;
	sta_params->max_ampdu_size = 3;
	sta_params->max_ampdu_density = 5;
	sta_params->max_amsdu_size = 0;
	sta_params->sgi_20Mhz = 1;
	sta_params->sgi_40mhz = 1;
	sta_params->green_field_capable = 1;
	sta_params->delayed_ba_support = 0;
	sta_params->dsss_cck_mode_40mhz = 1;
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
          int _len_sta_params0 = 1;
          struct wcn36xx_hal_config_sta_params * sta_params = (struct wcn36xx_hal_config_sta_params *) malloc(_len_sta_params0*sizeof(struct wcn36xx_hal_config_sta_params));
          for(int _i0 = 0; _i0 < _len_sta_params0; _i0++) {
            sta_params[_i0].ht_capable = ((-2 * (next_i()%2)) + 1) * next_i();
        sta_params[_i0].tx_channel_width_set = ((-2 * (next_i()%2)) + 1) * next_i();
        sta_params[_i0].lsig_txop_protection = ((-2 * (next_i()%2)) + 1) * next_i();
        sta_params[_i0].max_ampdu_size = ((-2 * (next_i()%2)) + 1) * next_i();
        sta_params[_i0].max_ampdu_density = ((-2 * (next_i()%2)) + 1) * next_i();
        sta_params[_i0].sgi_20Mhz = ((-2 * (next_i()%2)) + 1) * next_i();
        sta_params[_i0].sgi_40mhz = ((-2 * (next_i()%2)) + 1) * next_i();
        sta_params[_i0].green_field_capable = ((-2 * (next_i()%2)) + 1) * next_i();
        sta_params[_i0].dsss_cck_mode_40mhz = ((-2 * (next_i()%2)) + 1) * next_i();
        sta_params[_i0].delayed_ba_support = ((-2 * (next_i()%2)) + 1) * next_i();
        sta_params[_i0].max_amsdu_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          wcn36xx_smd_set_sta_default_ht_params(sta_params);
          free(sta_params);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
