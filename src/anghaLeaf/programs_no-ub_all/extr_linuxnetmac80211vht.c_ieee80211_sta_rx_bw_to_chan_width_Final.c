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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  int u32 ;
struct TYPE_3__ {int /*<<< orphan*/  ht_supported; } ;
struct ieee80211_sta_vht_cap {int cap; } ;
struct TYPE_4__ {int bandwidth; TYPE_1__ ht_cap; struct ieee80211_sta_vht_cap vht_cap; } ;
struct sta_info {TYPE_2__ sta; } ;
typedef  enum nl80211_chan_width { ____Placeholder_nl80211_chan_width } nl80211_chan_width ;
typedef  enum ieee80211_sta_rx_bandwidth { ____Placeholder_ieee80211_sta_rx_bandwidth } ieee80211_sta_rx_bandwidth ;

/* Variables and functions */
#define  IEEE80211_STA_RX_BW_160 131 
#define  IEEE80211_STA_RX_BW_20 130 
#define  IEEE80211_STA_RX_BW_40 129 
#define  IEEE80211_STA_RX_BW_80 128 
 int IEEE80211_VHT_CAP_SUPP_CHAN_WIDTH_160MHZ ; 
 int IEEE80211_VHT_CAP_SUPP_CHAN_WIDTH_MASK ; 
 int NL80211_CHAN_WIDTH_160 ; 
 int NL80211_CHAN_WIDTH_20 ; 
 int NL80211_CHAN_WIDTH_20_NOHT ; 
 int NL80211_CHAN_WIDTH_40 ; 
 int NL80211_CHAN_WIDTH_80 ; 
 int NL80211_CHAN_WIDTH_80P80 ; 

enum nl80211_chan_width
ieee80211_sta_rx_bw_to_chan_width(struct sta_info *sta)
{
	enum ieee80211_sta_rx_bandwidth cur_bw = sta->sta.bandwidth;
	struct ieee80211_sta_vht_cap *vht_cap = &sta->sta.vht_cap;
	u32 cap_width;

	switch (cur_bw) {
	case IEEE80211_STA_RX_BW_20:
		if (!sta->sta.ht_cap.ht_supported)
			return NL80211_CHAN_WIDTH_20_NOHT;
		else
			return NL80211_CHAN_WIDTH_20;
	case IEEE80211_STA_RX_BW_40:
		return NL80211_CHAN_WIDTH_40;
	case IEEE80211_STA_RX_BW_80:
		return NL80211_CHAN_WIDTH_80;
	case IEEE80211_STA_RX_BW_160:
		cap_width =
			vht_cap->cap & IEEE80211_VHT_CAP_SUPP_CHAN_WIDTH_MASK;

		if (cap_width == IEEE80211_VHT_CAP_SUPP_CHAN_WIDTH_160MHZ)
			return NL80211_CHAN_WIDTH_160;

		return NL80211_CHAN_WIDTH_80P80;
	default:
		return NL80211_CHAN_WIDTH_20;
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

    // big-arr
    case 0:
    {
          int _len_sta0 = 1;
          struct sta_info * sta = (struct sta_info *) malloc(_len_sta0*sizeof(struct sta_info));
          for(int _i0 = 0; _i0 < _len_sta0; _i0++) {
            sta->sta.bandwidth = ((-2 * (next_i()%2)) + 1) * next_i();
        sta->sta.ht_cap.ht_supported = ((-2 * (next_i()%2)) + 1) * next_i();
        sta->sta.vht_cap.cap = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum nl80211_chan_width benchRet = ieee80211_sta_rx_bw_to_chan_width(sta);
          printf("{{other_type}} %p\n", &benchRet); 
          free(sta);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
