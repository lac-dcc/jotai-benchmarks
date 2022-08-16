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
struct ath_hw_antcomb_conf {int main_lna_conf; int alt_lna_conf; int lna1_lna2_switch_delta; } ;
struct ath_ant_comb {int rssi_lna2; int rssi_lna1; int scan; int rssi_add; int rssi_sub; } ;

/* Variables and functions */
#define  ATH_ANT_DIV_COMB_LNA1 131 
#define  ATH_ANT_DIV_COMB_LNA1_MINUS_LNA2 130 
#define  ATH_ANT_DIV_COMB_LNA1_PLUS_LNA2 129 
#define  ATH_ANT_DIV_COMB_LNA2 128 

__attribute__((used)) static void ath_ant_try_scan(struct ath_ant_comb *antcomb,
			     struct ath_hw_antcomb_conf *conf,
			     int curr_alt_set, int alt_rssi_avg,
			     int main_rssi_avg)
{
	switch (curr_alt_set) {
	case ATH_ANT_DIV_COMB_LNA2:
		antcomb->rssi_lna2 = alt_rssi_avg;
		antcomb->rssi_lna1 = main_rssi_avg;
		antcomb->scan = true;
		/* set to A+B */
		conf->main_lna_conf = ATH_ANT_DIV_COMB_LNA1;
		conf->alt_lna_conf = ATH_ANT_DIV_COMB_LNA1_PLUS_LNA2;
		break;
	case ATH_ANT_DIV_COMB_LNA1:
		antcomb->rssi_lna1 = alt_rssi_avg;
		antcomb->rssi_lna2 = main_rssi_avg;
		antcomb->scan = true;
		/* set to A+B */
		conf->main_lna_conf = ATH_ANT_DIV_COMB_LNA2;
		conf->alt_lna_conf = ATH_ANT_DIV_COMB_LNA1_PLUS_LNA2;
		break;
	case ATH_ANT_DIV_COMB_LNA1_PLUS_LNA2:
		antcomb->rssi_add = alt_rssi_avg;
		antcomb->scan = true;
		/* set to A-B */
		conf->alt_lna_conf = ATH_ANT_DIV_COMB_LNA1_MINUS_LNA2;
		break;
	case ATH_ANT_DIV_COMB_LNA1_MINUS_LNA2:
		antcomb->rssi_sub = alt_rssi_avg;
		antcomb->scan = false;
		if (antcomb->rssi_lna2 >
		    (antcomb->rssi_lna1 + conf->lna1_lna2_switch_delta)) {
			/* use LNA2 as main LNA */
			if ((antcomb->rssi_add > antcomb->rssi_lna1) &&
			    (antcomb->rssi_add > antcomb->rssi_sub)) {
				/* set to A+B */
				conf->main_lna_conf = ATH_ANT_DIV_COMB_LNA2;
				conf->alt_lna_conf = ATH_ANT_DIV_COMB_LNA1_PLUS_LNA2;
			} else if (antcomb->rssi_sub >
				   antcomb->rssi_lna1) {
				/* set to A-B */
				conf->main_lna_conf = ATH_ANT_DIV_COMB_LNA2;
				conf->alt_lna_conf = ATH_ANT_DIV_COMB_LNA1_MINUS_LNA2;
			} else {
				/* set to LNA1 */
				conf->main_lna_conf = ATH_ANT_DIV_COMB_LNA2;
				conf->alt_lna_conf = ATH_ANT_DIV_COMB_LNA1;
			}
		} else {
			/* use LNA1 as main LNA */
			if ((antcomb->rssi_add > antcomb->rssi_lna2) &&
			    (antcomb->rssi_add > antcomb->rssi_sub)) {
				/* set to A+B */
				conf->main_lna_conf = ATH_ANT_DIV_COMB_LNA1;
				conf->alt_lna_conf = ATH_ANT_DIV_COMB_LNA1_PLUS_LNA2;
			} else if (antcomb->rssi_sub >
				   antcomb->rssi_lna1) {
				/* set to A-B */
				conf->main_lna_conf = ATH_ANT_DIV_COMB_LNA1;
				conf->alt_lna_conf = ATH_ANT_DIV_COMB_LNA1_MINUS_LNA2;
			} else {
				/* set to LNA2 */
				conf->main_lna_conf = ATH_ANT_DIV_COMB_LNA1;
				conf->alt_lna_conf = ATH_ANT_DIV_COMB_LNA2;
			}
		}
		break;
	default:
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
          int curr_alt_set = 100;
          int alt_rssi_avg = 100;
          int main_rssi_avg = 100;
          int _len_antcomb0 = 1;
          struct ath_ant_comb * antcomb = (struct ath_ant_comb *) malloc(_len_antcomb0*sizeof(struct ath_ant_comb));
          for(int _i0 = 0; _i0 < _len_antcomb0; _i0++) {
            antcomb[_i0].rssi_lna2 = ((-2 * (next_i()%2)) + 1) * next_i();
        antcomb[_i0].rssi_lna1 = ((-2 * (next_i()%2)) + 1) * next_i();
        antcomb[_i0].scan = ((-2 * (next_i()%2)) + 1) * next_i();
        antcomb[_i0].rssi_add = ((-2 * (next_i()%2)) + 1) * next_i();
        antcomb[_i0].rssi_sub = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_conf0 = 1;
          struct ath_hw_antcomb_conf * conf = (struct ath_hw_antcomb_conf *) malloc(_len_conf0*sizeof(struct ath_hw_antcomb_conf));
          for(int _i0 = 0; _i0 < _len_conf0; _i0++) {
            conf[_i0].main_lna_conf = ((-2 * (next_i()%2)) + 1) * next_i();
        conf[_i0].alt_lna_conf = ((-2 * (next_i()%2)) + 1) * next_i();
        conf[_i0].lna1_lna2_switch_delta = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ath_ant_try_scan(antcomb,conf,curr_alt_set,alt_rssi_avg,main_rssi_avg);
          free(antcomb);
          free(conf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
