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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u8 ;
struct iwl_mvm {TYPE_1__* nvm_data; } ;
struct ieee80211_supported_band {int n_channels; TYPE_2__* channels; } ;
struct TYPE_4__ {int /*<<< orphan*/  hw_value; } ;
struct TYPE_3__ {struct ieee80211_supported_band* bands; } ;

/* Variables and functions */
 size_t NL80211_BAND_2GHZ ; 
 size_t NL80211_BAND_5GHZ ; 

__attribute__((used)) static void iwl_mvm_fill_channels(struct iwl_mvm *mvm, u8 *channels)
{
	struct ieee80211_supported_band *band;
	int i, j = 0;

	band = &mvm->nvm_data->bands[NL80211_BAND_2GHZ];
	for (i = 0; i < band->n_channels; i++, j++)
		channels[j] = band->channels[i].hw_value;
	band = &mvm->nvm_data->bands[NL80211_BAND_5GHZ];
	for (i = 0; i < band->n_channels; i++, j++)
		channels[j] = band->channels[i].hw_value;
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
          int _len_mvm0 = 1;
          struct iwl_mvm * mvm = (struct iwl_mvm *) malloc(_len_mvm0*sizeof(struct iwl_mvm));
          for(int _i0 = 0; _i0 < _len_mvm0; _i0++) {
              int _len_mvm__i0__nvm_data0 = 1;
          mvm[_i0].nvm_data = (struct TYPE_3__ *) malloc(_len_mvm__i0__nvm_data0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_mvm__i0__nvm_data0; _j0++) {
              int _len_mvm__i0__nvm_data_bands0 = 1;
          mvm[_i0].nvm_data->bands = (struct ieee80211_supported_band *) malloc(_len_mvm__i0__nvm_data_bands0*sizeof(struct ieee80211_supported_band));
          for(int _j0 = 0; _j0 < _len_mvm__i0__nvm_data_bands0; _j0++) {
            mvm[_i0].nvm_data->bands->n_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mvm__i0__nvm_data_bands_channels0 = 1;
          mvm[_i0].nvm_data->bands->channels = (struct TYPE_4__ *) malloc(_len_mvm__i0__nvm_data_bands_channels0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_mvm__i0__nvm_data_bands_channels0; _j0++) {
            mvm[_i0].nvm_data->bands->channels->hw_value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_channels0 = 1;
          int * channels = (int *) malloc(_len_channels0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_channels0; _i0++) {
            channels[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          iwl_mvm_fill_channels(mvm,channels);
          for(int _aux = 0; _aux < _len_mvm0; _aux++) {
          free(mvm[_aux].nvm_data);
          }
          free(mvm);
          free(channels);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
