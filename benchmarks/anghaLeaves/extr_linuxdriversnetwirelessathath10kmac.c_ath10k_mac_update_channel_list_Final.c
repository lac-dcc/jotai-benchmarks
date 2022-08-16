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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct ieee80211_supported_band {int n_channels; TYPE_1__* channels; } ;
struct ath10k {scalar_t__ low_5ghz_chan; scalar_t__ high_5ghz_chan; } ;
struct TYPE_2__ {scalar_t__ center_freq; int /*<<< orphan*/  flags; } ;

/* Variables and functions */
 int /*<<< orphan*/  IEEE80211_CHAN_DISABLED ; 

__attribute__((used)) static void ath10k_mac_update_channel_list(struct ath10k *ar,
					   struct ieee80211_supported_band *band)
{
	int i;

	if (ar->low_5ghz_chan && ar->high_5ghz_chan) {
		for (i = 0; i < band->n_channels; i++) {
			if (band->channels[i].center_freq < ar->low_5ghz_chan ||
			    band->channels[i].center_freq > ar->high_5ghz_chan)
				band->channels[i].flags |=
					IEEE80211_CHAN_DISABLED;
		}
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
          int _len_ar0 = 1;
          struct ath10k * ar = (struct ath10k *) malloc(_len_ar0*sizeof(struct ath10k));
          for(int _i0 = 0; _i0 < _len_ar0; _i0++) {
            ar[_i0].low_5ghz_chan = ((-2 * (next_i()%2)) + 1) * next_i();
        ar[_i0].high_5ghz_chan = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_band0 = 1;
          struct ieee80211_supported_band * band = (struct ieee80211_supported_band *) malloc(_len_band0*sizeof(struct ieee80211_supported_band));
          for(int _i0 = 0; _i0 < _len_band0; _i0++) {
            band[_i0].n_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_band__i0__channels0 = 1;
          band[_i0].channels = (struct TYPE_2__ *) malloc(_len_band__i0__channels0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_band__i0__channels0; _j0++) {
            band[_i0].channels->center_freq = ((-2 * (next_i()%2)) + 1) * next_i();
        band[_i0].channels->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ath10k_mac_update_channel_list(ar,band);
          free(ar);
          for(int _aux = 0; _aux < _len_band0; _aux++) {
          free(band[_aux].channels);
          }
          free(band);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
