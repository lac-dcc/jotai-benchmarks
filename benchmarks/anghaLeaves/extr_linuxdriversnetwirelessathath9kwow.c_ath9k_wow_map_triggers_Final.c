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
typedef  int u8 ;
struct cfg80211_wowlan {scalar_t__ n_patterns; scalar_t__ magic_pkt; scalar_t__ disconnect; } ;
struct ath_softc {int dummy; } ;

/* Variables and functions */
 int AH_WOW_BEACON_MISS ; 
 int AH_WOW_LINK_CHANGE ; 
 int AH_WOW_MAGIC_PATTERN_EN ; 
 int AH_WOW_USER_PATTERN_EN ; 

__attribute__((used)) static u8 ath9k_wow_map_triggers(struct ath_softc *sc,
				 struct cfg80211_wowlan *wowlan)
{
	u8 wow_triggers = 0;

	if (wowlan->disconnect)
		wow_triggers |= AH_WOW_LINK_CHANGE |
				AH_WOW_BEACON_MISS;
	if (wowlan->magic_pkt)
		wow_triggers |= AH_WOW_MAGIC_PATTERN_EN;

	if (wowlan->n_patterns)
		wow_triggers |= AH_WOW_USER_PATTERN_EN;

	return wow_triggers;
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
          int _len_sc0 = 1;
          struct ath_softc * sc = (struct ath_softc *) malloc(_len_sc0*sizeof(struct ath_softc));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
            sc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_wowlan0 = 1;
          struct cfg80211_wowlan * wowlan = (struct cfg80211_wowlan *) malloc(_len_wowlan0*sizeof(struct cfg80211_wowlan));
          for(int _i0 = 0; _i0 < _len_wowlan0; _i0++) {
            wowlan[_i0].n_patterns = ((-2 * (next_i()%2)) + 1) * next_i();
        wowlan[_i0].magic_pkt = ((-2 * (next_i()%2)) + 1) * next_i();
        wowlan[_i0].disconnect = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ath9k_wow_map_triggers(sc,wowlan);
          printf("%d\n", benchRet); 
          free(sc);
          free(wowlan);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
