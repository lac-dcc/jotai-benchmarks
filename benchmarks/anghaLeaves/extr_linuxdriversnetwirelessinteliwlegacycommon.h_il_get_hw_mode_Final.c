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
struct il_priv {TYPE_2__* hw; } ;
struct ieee80211_supported_band {int dummy; } ;
typedef  enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_4__ {TYPE_1__* wiphy; } ;
struct TYPE_3__ {struct ieee80211_supported_band const** bands; } ;

/* Variables and functions */

__attribute__((used)) static inline const struct ieee80211_supported_band *
il_get_hw_mode(struct il_priv *il, enum nl80211_band band)
{
	return il->hw->wiphy->bands[band];
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
          enum nl80211_band band = 0;
          int _len_il0 = 1;
          struct il_priv * il = (struct il_priv *) malloc(_len_il0*sizeof(struct il_priv));
          for(int _i0 = 0; _i0 < _len_il0; _i0++) {
              int _len_il__i0__hw0 = 1;
          il[_i0].hw = (struct TYPE_4__ *) malloc(_len_il__i0__hw0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_il__i0__hw0; _j0++) {
              int _len_il__i0__hw_wiphy0 = 1;
          il[_i0].hw->wiphy = (struct TYPE_3__ *) malloc(_len_il__i0__hw_wiphy0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_il__i0__hw_wiphy0; _j0++) {
              int _len_il__i0__hw_wiphy_bands0 = 1;
          il[_i0].hw->wiphy->bands = (const struct ieee80211_supported_band **) malloc(_len_il__i0__hw_wiphy_bands0*sizeof(const struct ieee80211_supported_band *));
          for(int _j0 = 0; _j0 < _len_il__i0__hw_wiphy_bands0; _j0++) {
            int _len_il__i0__hw_wiphy_bands1 = 1;
            il[_i0].hw->wiphy->bands[_j0] = (const struct ieee80211_supported_band *) malloc(_len_il__i0__hw_wiphy_bands1*sizeof(const struct ieee80211_supported_band));
            for(int _j1 = 0; _j1 < _len_il__i0__hw_wiphy_bands1; _j1++) {
                  }
          }
          }
          }
          }
          const struct ieee80211_supported_band * benchRet = il_get_hw_mode(il,band);
          for(int _aux = 0; _aux < _len_il0; _aux++) {
          free(il[_aux].hw);
          }
          free(il);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
