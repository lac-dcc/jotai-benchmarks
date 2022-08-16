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
struct ath_hw_antcomb_conf {scalar_t__ main_lna_conf; scalar_t__ alt_lna_conf; int div_group; } ;
struct ath_ant_comb {int low_rssi_thresh; int ant_ratio; } ;

/* Variables and functions */
 int ATH_ANT_DIV_COMB_ALT_ANT_RATIO ; 
 scalar_t__ ATH_ANT_DIV_COMB_LNA1 ; 
 scalar_t__ ATH_ANT_DIV_COMB_LNA2 ; 

__attribute__((used)) static inline bool ath_ant_div_comb_alt_check(struct ath_hw_antcomb_conf *conf,
					      struct ath_ant_comb *antcomb,
					      int alt_ratio, int alt_rssi_avg,
					      int main_rssi_avg)
{
	bool result, set1, set2;

	result = set1 = set2 = false;

	if (conf->main_lna_conf == ATH_ANT_DIV_COMB_LNA2 &&
	    conf->alt_lna_conf == ATH_ANT_DIV_COMB_LNA1)
		set1 = true;

	if (conf->main_lna_conf == ATH_ANT_DIV_COMB_LNA1 &&
	    conf->alt_lna_conf == ATH_ANT_DIV_COMB_LNA2)
		set2 = true;

	switch (conf->div_group) {
	case 0:
		if (alt_ratio > ATH_ANT_DIV_COMB_ALT_ANT_RATIO)
			result = true;
		break;
	case 1:
	case 2:
		if (alt_rssi_avg < 4 || alt_rssi_avg < antcomb->low_rssi_thresh)
			break;

		if ((set1 && (alt_rssi_avg >= (main_rssi_avg - 5))) ||
		    (set2 && (alt_rssi_avg >= (main_rssi_avg - 2))) ||
		    (alt_ratio > antcomb->ant_ratio))
			result = true;

		break;
	case 3:
		if (alt_rssi_avg < 4 || alt_rssi_avg < antcomb->low_rssi_thresh)
			break;

		if ((set1 && (alt_rssi_avg >= (main_rssi_avg - 3))) ||
		    (set2 && (alt_rssi_avg >= (main_rssi_avg + 3))) ||
		    (alt_ratio > antcomb->ant_ratio))
			result = true;

		break;
	}

	return result;
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
          int alt_ratio = 100;
          int alt_rssi_avg = 100;
          int main_rssi_avg = 100;
          int _len_conf0 = 1;
          struct ath_hw_antcomb_conf * conf = (struct ath_hw_antcomb_conf *) malloc(_len_conf0*sizeof(struct ath_hw_antcomb_conf));
          for(int _i0 = 0; _i0 < _len_conf0; _i0++) {
            conf[_i0].main_lna_conf = ((-2 * (next_i()%2)) + 1) * next_i();
        conf[_i0].alt_lna_conf = ((-2 * (next_i()%2)) + 1) * next_i();
        conf[_i0].div_group = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_antcomb0 = 1;
          struct ath_ant_comb * antcomb = (struct ath_ant_comb *) malloc(_len_antcomb0*sizeof(struct ath_ant_comb));
          for(int _i0 = 0; _i0 < _len_antcomb0; _i0++) {
            antcomb[_i0].low_rssi_thresh = ((-2 * (next_i()%2)) + 1) * next_i();
        antcomb[_i0].ant_ratio = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ath_ant_div_comb_alt_check(conf,antcomb,alt_ratio,alt_rssi_avg,main_rssi_avg);
          printf("%d\n", benchRet); 
          free(conf);
          free(antcomb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
