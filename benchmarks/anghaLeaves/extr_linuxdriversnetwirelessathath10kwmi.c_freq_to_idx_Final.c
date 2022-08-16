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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct ieee80211_supported_band {int n_channels; TYPE_1__* channels; } ;
struct ath10k {TYPE_3__* hw; } ;
struct TYPE_6__ {TYPE_2__* wiphy; } ;
struct TYPE_5__ {struct ieee80211_supported_band** bands; } ;
struct TYPE_4__ {int center_freq; } ;

/* Variables and functions */
 int NL80211_BAND_2GHZ ; 
 int NUM_NL80211_BANDS ; 

__attribute__((used)) static int freq_to_idx(struct ath10k *ar, int freq)
{
	struct ieee80211_supported_band *sband;
	int band, ch, idx = 0;

	for (band = NL80211_BAND_2GHZ; band < NUM_NL80211_BANDS; band++) {
		sband = ar->hw->wiphy->bands[band];
		if (!sband)
			continue;

		for (ch = 0; ch < sband->n_channels; ch++, idx++)
			if (sband->channels[ch].center_freq == freq)
				goto exit;
	}

exit:
	return idx;
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
          int freq = 100;
          int _len_ar0 = 1;
          struct ath10k * ar = (struct ath10k *) malloc(_len_ar0*sizeof(struct ath10k));
          for(int _i0 = 0; _i0 < _len_ar0; _i0++) {
              int _len_ar__i0__hw0 = 1;
          ar[_i0].hw = (struct TYPE_6__ *) malloc(_len_ar__i0__hw0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_ar__i0__hw0; _j0++) {
              int _len_ar__i0__hw_wiphy0 = 1;
          ar[_i0].hw->wiphy = (struct TYPE_5__ *) malloc(_len_ar__i0__hw_wiphy0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_ar__i0__hw_wiphy0; _j0++) {
              int _len_ar__i0__hw_wiphy_bands0 = 1;
          ar[_i0].hw->wiphy->bands = (struct ieee80211_supported_band **) malloc(_len_ar__i0__hw_wiphy_bands0*sizeof(struct ieee80211_supported_band *));
          for(int _j0 = 0; _j0 < _len_ar__i0__hw_wiphy_bands0; _j0++) {
            int _len_ar__i0__hw_wiphy_bands1 = 1;
            ar[_i0].hw->wiphy->bands[_j0] = (struct ieee80211_supported_band *) malloc(_len_ar__i0__hw_wiphy_bands1*sizeof(struct ieee80211_supported_band));
            for(int _j1 = 0; _j1 < _len_ar__i0__hw_wiphy_bands1; _j1++) {
              ar[_i0].hw->wiphy->bands[_j0]->n_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ar__i0__hw_wiphy_bands__j0__channels0 = 1;
          ar[_i0].hw->wiphy->bands[_j0]->channels = (struct TYPE_4__ *) malloc(_len_ar__i0__hw_wiphy_bands__j0__channels0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ar__i0__hw_wiphy_bands__j0__channels0; _j0++) {
            ar[_i0].hw->wiphy->bands[_j0]->channels->center_freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          }
          }
          int benchRet = freq_to_idx(ar,freq);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ar0; _aux++) {
          free(ar[_aux].hw);
          }
          free(ar);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
