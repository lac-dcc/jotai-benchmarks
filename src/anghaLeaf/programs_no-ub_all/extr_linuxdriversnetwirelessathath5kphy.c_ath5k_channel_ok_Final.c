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
typedef  scalar_t__ u16 ;
struct ieee80211_channel {scalar_t__ center_freq; scalar_t__ band; } ;
struct TYPE_3__ {scalar_t__ range_2ghz_min; scalar_t__ range_2ghz_max; scalar_t__ range_5ghz_min; scalar_t__ range_5ghz_max; } ;
struct TYPE_4__ {TYPE_1__ cap_range; } ;
struct ath5k_hw {TYPE_2__ ah_capabilities; } ;

/* Variables and functions */
 scalar_t__ NL80211_BAND_2GHZ ; 
 scalar_t__ NL80211_BAND_5GHZ ; 

bool
ath5k_channel_ok(struct ath5k_hw *ah, struct ieee80211_channel *channel)
{
	u16 freq = channel->center_freq;

	/* Check if the channel is in our supported range */
	if (channel->band == NL80211_BAND_2GHZ) {
		if ((freq >= ah->ah_capabilities.cap_range.range_2ghz_min) &&
		    (freq <= ah->ah_capabilities.cap_range.range_2ghz_max))
			return true;
	} else if (channel->band == NL80211_BAND_5GHZ)
		if ((freq >= ah->ah_capabilities.cap_range.range_5ghz_min) &&
		    (freq <= ah->ah_capabilities.cap_range.range_5ghz_max))
			return true;

	return false;
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
          int _len_ah0 = 1;
          struct ath5k_hw * ah = (struct ath5k_hw *) malloc(_len_ah0*sizeof(struct ath5k_hw));
          for(int _i0 = 0; _i0 < _len_ah0; _i0++) {
            ah->ah_capabilities.cap_range.range_2ghz_min = ((-2 * (next_i()%2)) + 1) * next_i();
        ah->ah_capabilities.cap_range.range_2ghz_max = ((-2 * (next_i()%2)) + 1) * next_i();
        ah->ah_capabilities.cap_range.range_5ghz_min = ((-2 * (next_i()%2)) + 1) * next_i();
        ah->ah_capabilities.cap_range.range_5ghz_max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_channel0 = 1;
          struct ieee80211_channel * channel = (struct ieee80211_channel *) malloc(_len_channel0*sizeof(struct ieee80211_channel));
          for(int _i0 = 0; _i0 < _len_channel0; _i0++) {
            channel->center_freq = ((-2 * (next_i()%2)) + 1) * next_i();
        channel->band = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ath5k_channel_ok(ah,channel);
          printf("%d\n", benchRet); 
          free(ah);
          free(channel);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
