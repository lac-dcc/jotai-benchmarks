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
struct ieee80211_supported_band {scalar_t__ band; int n_iftype_data; struct ieee80211_sband_iftype_data* iftype_data; } ;
struct ieee80211_sband_iftype_data {int dummy; } ;

/* Variables and functions */
 scalar_t__ NL80211_BAND_2GHZ ; 
 scalar_t__ NL80211_BAND_5GHZ ; 
 int /*<<< orphan*/  he_capa_2ghz ; 
 int /*<<< orphan*/  he_capa_5ghz ; 

__attribute__((used)) static void mac80211_hswim_he_capab(struct ieee80211_supported_band *sband)
{
	if (sband->band == NL80211_BAND_2GHZ)
		sband->iftype_data =
			(struct ieee80211_sband_iftype_data *)&he_capa_2ghz;
	else if (sband->band == NL80211_BAND_5GHZ)
		sband->iftype_data =
			(struct ieee80211_sband_iftype_data *)&he_capa_5ghz;
	else
		return;

	sband->n_iftype_data = 1;
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
          int _len_sband0 = 1;
          struct ieee80211_supported_band * sband = (struct ieee80211_supported_band *) malloc(_len_sband0*sizeof(struct ieee80211_supported_band));
          for(int _i0 = 0; _i0 < _len_sband0; _i0++) {
            sband[_i0].band = ((-2 * (next_i()%2)) + 1) * next_i();
        sband[_i0].n_iftype_data = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sband__i0__iftype_data0 = 1;
          sband[_i0].iftype_data = (struct ieee80211_sband_iftype_data *) malloc(_len_sband__i0__iftype_data0*sizeof(struct ieee80211_sband_iftype_data));
          for(int _j0 = 0; _j0 < _len_sband__i0__iftype_data0; _j0++) {
            sband[_i0].iftype_data->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mac80211_hswim_he_capab(sband);
          for(int _aux = 0; _aux < _len_sband0; _aux++) {
          free(sband[_aux].iftype_data);
          }
          free(sband);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
