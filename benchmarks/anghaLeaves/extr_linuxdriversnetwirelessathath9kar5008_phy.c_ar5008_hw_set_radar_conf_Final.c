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
struct ath_hw_radar_conf {int fir_power; int radar_rssi; int pulse_height; int pulse_rssi; int pulse_inband; int pulse_maxlen; int pulse_inband_step; int radar_inband; } ;
struct ath_hw {struct ath_hw_radar_conf radar_conf; } ;

/* Variables and functions */

__attribute__((used)) static void ar5008_hw_set_radar_conf(struct ath_hw *ah)
{
	struct ath_hw_radar_conf *conf = &ah->radar_conf;

	conf->fir_power = -33;
	conf->radar_rssi = 20;
	conf->pulse_height = 10;
	conf->pulse_rssi = 15;
	conf->pulse_inband = 15;
	conf->pulse_maxlen = 255;
	conf->pulse_inband_step = 12;
	conf->radar_inband = 8;
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
          int _len_ah0 = 1;
          struct ath_hw * ah = (struct ath_hw *) malloc(_len_ah0*sizeof(struct ath_hw));
          for(int _i0 = 0; _i0 < _len_ah0; _i0++) {
            ah[_i0].radar_conf.fir_power = ((-2 * (next_i()%2)) + 1) * next_i();
        ah[_i0].radar_conf.radar_rssi = ((-2 * (next_i()%2)) + 1) * next_i();
        ah[_i0].radar_conf.pulse_height = ((-2 * (next_i()%2)) + 1) * next_i();
        ah[_i0].radar_conf.pulse_rssi = ((-2 * (next_i()%2)) + 1) * next_i();
        ah[_i0].radar_conf.pulse_inband = ((-2 * (next_i()%2)) + 1) * next_i();
        ah[_i0].radar_conf.pulse_maxlen = ((-2 * (next_i()%2)) + 1) * next_i();
        ah[_i0].radar_conf.pulse_inband_step = ((-2 * (next_i()%2)) + 1) * next_i();
        ah[_i0].radar_conf.radar_inband = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ar5008_hw_set_radar_conf(ah);
          free(ah);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
