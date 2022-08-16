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
struct station_info {scalar_t__ filled; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void rtl_op_sta_statistics(struct ieee80211_hw *hw,
				  struct ieee80211_vif *vif,
				  struct ieee80211_sta *sta,
				  struct station_info *sinfo)
{
	/* nothing filled by driver, so mac80211 will update all info */
	sinfo->filled = 0;
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
          int _len_hw0 = 1;
          struct ieee80211_hw * hw = (struct ieee80211_hw *) malloc(_len_hw0*sizeof(struct ieee80211_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vif0 = 1;
          struct ieee80211_vif * vif = (struct ieee80211_vif *) malloc(_len_vif0*sizeof(struct ieee80211_vif));
          for(int _i0 = 0; _i0 < _len_vif0; _i0++) {
            vif[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sta0 = 1;
          struct ieee80211_sta * sta = (struct ieee80211_sta *) malloc(_len_sta0*sizeof(struct ieee80211_sta));
          for(int _i0 = 0; _i0 < _len_sta0; _i0++) {
            sta[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sinfo0 = 1;
          struct station_info * sinfo = (struct station_info *) malloc(_len_sinfo0*sizeof(struct station_info));
          for(int _i0 = 0; _i0 < _len_sinfo0; _i0++) {
            sinfo[_i0].filled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rtl_op_sta_statistics(hw,vif,sta,sinfo);
          free(hw);
          free(vif);
          free(sta);
          free(sinfo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
