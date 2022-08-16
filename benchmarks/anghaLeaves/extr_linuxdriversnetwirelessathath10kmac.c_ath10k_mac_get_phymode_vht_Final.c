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
struct TYPE_2__ {int cap; } ;
struct ieee80211_sta {scalar_t__ bandwidth; TYPE_1__ vht_cap; } ;
struct ath10k {int dummy; } ;
typedef  enum wmi_phy_mode { ____Placeholder_wmi_phy_mode } wmi_phy_mode ;

/* Variables and functions */
 scalar_t__ IEEE80211_STA_RX_BW_160 ; 
 scalar_t__ IEEE80211_STA_RX_BW_20 ; 
 scalar_t__ IEEE80211_STA_RX_BW_40 ; 
 scalar_t__ IEEE80211_STA_RX_BW_80 ; 
#define  IEEE80211_VHT_CAP_SUPP_CHAN_WIDTH_160MHZ 129 
#define  IEEE80211_VHT_CAP_SUPP_CHAN_WIDTH_160_80PLUS80MHZ 128 
 int IEEE80211_VHT_CAP_SUPP_CHAN_WIDTH_MASK ; 
 int MODE_11AC_VHT160 ; 
 int MODE_11AC_VHT20 ; 
 int MODE_11AC_VHT40 ; 
 int MODE_11AC_VHT80 ; 
 int MODE_11AC_VHT80_80 ; 
 int MODE_UNKNOWN ; 

__attribute__((used)) static enum wmi_phy_mode ath10k_mac_get_phymode_vht(struct ath10k *ar,
						    struct ieee80211_sta *sta)
{
	if (sta->bandwidth == IEEE80211_STA_RX_BW_160) {
		switch (sta->vht_cap.cap & IEEE80211_VHT_CAP_SUPP_CHAN_WIDTH_MASK) {
		case IEEE80211_VHT_CAP_SUPP_CHAN_WIDTH_160MHZ:
			return MODE_11AC_VHT160;
		case IEEE80211_VHT_CAP_SUPP_CHAN_WIDTH_160_80PLUS80MHZ:
			return MODE_11AC_VHT80_80;
		default:
			/* not sure if this is a valid case? */
			return MODE_11AC_VHT160;
		}
	}

	if (sta->bandwidth == IEEE80211_STA_RX_BW_80)
		return MODE_11AC_VHT80;

	if (sta->bandwidth == IEEE80211_STA_RX_BW_40)
		return MODE_11AC_VHT40;

	if (sta->bandwidth == IEEE80211_STA_RX_BW_20)
		return MODE_11AC_VHT20;

	return MODE_UNKNOWN;
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
            ar[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sta0 = 1;
          struct ieee80211_sta * sta = (struct ieee80211_sta *) malloc(_len_sta0*sizeof(struct ieee80211_sta));
          for(int _i0 = 0; _i0 < _len_sta0; _i0++) {
            sta[_i0].bandwidth = ((-2 * (next_i()%2)) + 1) * next_i();
        sta[_i0].vht_cap.cap = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum wmi_phy_mode benchRet = ath10k_mac_get_phymode_vht(ar,sta);
          free(ar);
          free(sta);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
