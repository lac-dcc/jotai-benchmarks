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
struct ieee80211_channel {int /*<<< orphan*/  band; } ;
struct ath5k_hw {int ah_bwmode; struct ieee80211_channel* ah_current_channel; } ;

/* Variables and functions */
#define  AR5K_BWMODE_10MHZ 131 
#define  AR5K_BWMODE_40MHZ 130 
#define  AR5K_BWMODE_5MHZ 129 
#define  AR5K_BWMODE_DEFAULT 128 
 unsigned int AR5K_INIT_SIFS_DEFAULT_A ; 
 unsigned int AR5K_INIT_SIFS_DEFAULT_BG ; 
 unsigned int AR5K_INIT_SIFS_HALF_RATE ; 
 unsigned int AR5K_INIT_SIFS_QUARTER_RATE ; 
 unsigned int AR5K_INIT_SIFS_TURBO ; 
 int /*<<< orphan*/  NL80211_BAND_5GHZ ; 

unsigned int
ath5k_hw_get_default_sifs(struct ath5k_hw *ah)
{
	struct ieee80211_channel *channel = ah->ah_current_channel;
	unsigned int sifs;

	switch (ah->ah_bwmode) {
	case AR5K_BWMODE_40MHZ:
		sifs = AR5K_INIT_SIFS_TURBO;
		break;
	case AR5K_BWMODE_10MHZ:
		sifs = AR5K_INIT_SIFS_HALF_RATE;
		break;
	case AR5K_BWMODE_5MHZ:
		sifs = AR5K_INIT_SIFS_QUARTER_RATE;
		break;
	case AR5K_BWMODE_DEFAULT:
	default:
		sifs = AR5K_INIT_SIFS_DEFAULT_BG;
		if (channel->band == NL80211_BAND_5GHZ)
			sifs = AR5K_INIT_SIFS_DEFAULT_A;
		break;
	}

	return sifs;
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
          struct ath5k_hw * ah = (struct ath5k_hw *) malloc(_len_ah0*sizeof(struct ath5k_hw));
          for(int _i0 = 0; _i0 < _len_ah0; _i0++) {
            ah[_i0].ah_bwmode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ah__i0__ah_current_channel0 = 1;
          ah[_i0].ah_current_channel = (struct ieee80211_channel *) malloc(_len_ah__i0__ah_current_channel0*sizeof(struct ieee80211_channel));
          for(int _j0 = 0; _j0 < _len_ah__i0__ah_current_channel0; _j0++) {
            ah[_i0].ah_current_channel->band = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = ath5k_hw_get_default_sifs(ah);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_ah0; _aux++) {
          free(ah[_aux].ah_current_channel);
          }
          free(ah);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
