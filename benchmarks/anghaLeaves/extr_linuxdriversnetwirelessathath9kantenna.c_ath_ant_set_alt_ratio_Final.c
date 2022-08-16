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
struct ath_hw_antcomb_conf {scalar_t__ main_lna_conf; scalar_t__ alt_lna_conf; } ;
struct ath_ant_comb {scalar_t__ rssi_second; scalar_t__ rssi_third; scalar_t__ first_quick_scan_conf; scalar_t__ second_quick_scan_conf; scalar_t__ main_conf; scalar_t__ second_ratio; scalar_t__ first_ratio; } ;

/* Variables and functions */
 scalar_t__ ATH_ANT_DIV_COMB_LNA1 ; 
 scalar_t__ ATH_ANT_DIV_COMB_LNA2 ; 

__attribute__((used)) static void ath_ant_set_alt_ratio(struct ath_ant_comb *antcomb,
				  struct ath_hw_antcomb_conf *conf)
{
	/* set alt to the conf with maximun ratio */
	if (antcomb->first_ratio && antcomb->second_ratio) {
		if (antcomb->rssi_second > antcomb->rssi_third) {
			/* first alt*/
			if ((antcomb->first_quick_scan_conf == ATH_ANT_DIV_COMB_LNA1) ||
			    (antcomb->first_quick_scan_conf == ATH_ANT_DIV_COMB_LNA2))
				/* Set alt LNA1 or LNA2*/
				if (conf->main_lna_conf == ATH_ANT_DIV_COMB_LNA2)
					conf->alt_lna_conf = ATH_ANT_DIV_COMB_LNA1;
				else
					conf->alt_lna_conf = ATH_ANT_DIV_COMB_LNA2;
			else
				/* Set alt to A+B or A-B */
				conf->alt_lna_conf =
					antcomb->first_quick_scan_conf;
		} else if ((antcomb->second_quick_scan_conf == ATH_ANT_DIV_COMB_LNA1) ||
			   (antcomb->second_quick_scan_conf == ATH_ANT_DIV_COMB_LNA2)) {
			/* Set alt LNA1 or LNA2 */
			if (conf->main_lna_conf == ATH_ANT_DIV_COMB_LNA2)
				conf->alt_lna_conf = ATH_ANT_DIV_COMB_LNA1;
			else
				conf->alt_lna_conf = ATH_ANT_DIV_COMB_LNA2;
		} else {
			/* Set alt to A+B or A-B */
			conf->alt_lna_conf = antcomb->second_quick_scan_conf;
		}
	} else if (antcomb->first_ratio) {
		/* first alt */
		if ((antcomb->first_quick_scan_conf == ATH_ANT_DIV_COMB_LNA1) ||
		    (antcomb->first_quick_scan_conf == ATH_ANT_DIV_COMB_LNA2))
			/* Set alt LNA1 or LNA2 */
			if (conf->main_lna_conf == ATH_ANT_DIV_COMB_LNA2)
				conf->alt_lna_conf = ATH_ANT_DIV_COMB_LNA1;
			else
				conf->alt_lna_conf = ATH_ANT_DIV_COMB_LNA2;
		else
			/* Set alt to A+B or A-B */
			conf->alt_lna_conf = antcomb->first_quick_scan_conf;
	} else if (antcomb->second_ratio) {
		/* second alt */
		if ((antcomb->second_quick_scan_conf == ATH_ANT_DIV_COMB_LNA1) ||
		    (antcomb->second_quick_scan_conf == ATH_ANT_DIV_COMB_LNA2))
			/* Set alt LNA1 or LNA2 */
			if (conf->main_lna_conf == ATH_ANT_DIV_COMB_LNA2)
				conf->alt_lna_conf = ATH_ANT_DIV_COMB_LNA1;
			else
				conf->alt_lna_conf = ATH_ANT_DIV_COMB_LNA2;
		else
			/* Set alt to A+B or A-B */
			conf->alt_lna_conf = antcomb->second_quick_scan_conf;
	} else {
		/* main is largest */
		if ((antcomb->main_conf == ATH_ANT_DIV_COMB_LNA1) ||
		    (antcomb->main_conf == ATH_ANT_DIV_COMB_LNA2))
			/* Set alt LNA1 or LNA2 */
			if (conf->main_lna_conf == ATH_ANT_DIV_COMB_LNA2)
				conf->alt_lna_conf = ATH_ANT_DIV_COMB_LNA1;
			else
				conf->alt_lna_conf = ATH_ANT_DIV_COMB_LNA2;
		else
			/* Set alt to A+B or A-B */
			conf->alt_lna_conf = antcomb->main_conf;
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
          int _len_antcomb0 = 1;
          struct ath_ant_comb * antcomb = (struct ath_ant_comb *) malloc(_len_antcomb0*sizeof(struct ath_ant_comb));
          for(int _i0 = 0; _i0 < _len_antcomb0; _i0++) {
            antcomb[_i0].rssi_second = ((-2 * (next_i()%2)) + 1) * next_i();
        antcomb[_i0].rssi_third = ((-2 * (next_i()%2)) + 1) * next_i();
        antcomb[_i0].first_quick_scan_conf = ((-2 * (next_i()%2)) + 1) * next_i();
        antcomb[_i0].second_quick_scan_conf = ((-2 * (next_i()%2)) + 1) * next_i();
        antcomb[_i0].main_conf = ((-2 * (next_i()%2)) + 1) * next_i();
        antcomb[_i0].second_ratio = ((-2 * (next_i()%2)) + 1) * next_i();
        antcomb[_i0].first_ratio = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_conf0 = 1;
          struct ath_hw_antcomb_conf * conf = (struct ath_hw_antcomb_conf *) malloc(_len_conf0*sizeof(struct ath_hw_antcomb_conf));
          for(int _i0 = 0; _i0 < _len_conf0; _i0++) {
            conf[_i0].main_lna_conf = ((-2 * (next_i()%2)) + 1) * next_i();
        conf[_i0].alt_lna_conf = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ath_ant_set_alt_ratio(antcomb,conf);
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
