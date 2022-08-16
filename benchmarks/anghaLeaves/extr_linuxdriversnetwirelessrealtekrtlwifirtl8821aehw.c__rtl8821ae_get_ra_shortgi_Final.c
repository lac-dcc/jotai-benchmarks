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
typedef  scalar_t__ u8 ;
struct TYPE_4__ {int cap; } ;
struct TYPE_3__ {int cap; } ;
struct ieee80211_sta {TYPE_2__ vht_cap; TYPE_1__ ht_cap; } ;
struct ieee80211_hw {int dummy; } ;

/* Variables and functions */
 int IEEE80211_HT_CAP_SGI_20 ; 
 int IEEE80211_HT_CAP_SGI_40 ; 
 int IEEE80211_VHT_CAP_SHORT_GI_80 ; 
 scalar_t__ MAC_ID_STATIC_FOR_BROADCAST_MULTICAST ; 

__attribute__((used)) static bool _rtl8821ae_get_ra_shortgi(struct ieee80211_hw *hw, struct ieee80211_sta *sta,
			      u8 mac_id)
{
	bool b_short_gi = false;
	u8 b_curshortgi_40mhz = (sta->ht_cap.cap & IEEE80211_HT_CAP_SGI_40) ?
				1 : 0;
	u8 b_curshortgi_20mhz = (sta->ht_cap.cap & IEEE80211_HT_CAP_SGI_20) ?
				1 : 0;
	u8 b_curshortgi_80mhz = 0;
	b_curshortgi_80mhz = (sta->vht_cap.cap &
			      IEEE80211_VHT_CAP_SHORT_GI_80) ? 1 : 0;

	if (mac_id == MAC_ID_STATIC_FOR_BROADCAST_MULTICAST)
			b_short_gi = false;

	if (b_curshortgi_40mhz || b_curshortgi_80mhz
		|| b_curshortgi_20mhz)
		b_short_gi = true;

	return b_short_gi;
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
          long mac_id = 100;
          int _len_hw0 = 1;
          struct ieee80211_hw * hw = (struct ieee80211_hw *) malloc(_len_hw0*sizeof(struct ieee80211_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sta0 = 1;
          struct ieee80211_sta * sta = (struct ieee80211_sta *) malloc(_len_sta0*sizeof(struct ieee80211_sta));
          for(int _i0 = 0; _i0 < _len_sta0; _i0++) {
            sta[_i0].vht_cap.cap = ((-2 * (next_i()%2)) + 1) * next_i();
        sta[_i0].ht_cap.cap = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _rtl8821ae_get_ra_shortgi(hw,sta,mac_id);
          printf("%d\n", benchRet); 
          free(hw);
          free(sta);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
