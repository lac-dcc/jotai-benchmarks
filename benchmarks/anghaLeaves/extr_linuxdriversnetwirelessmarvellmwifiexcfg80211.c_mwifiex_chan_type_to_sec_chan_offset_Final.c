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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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

/* Type definitions */
typedef  int /*<<< orphan*/  u8 ;
typedef  enum nl80211_channel_type { ____Placeholder_nl80211_channel_type } nl80211_channel_type ;

/* Variables and functions */
 int /*<<< orphan*/  IEEE80211_HT_PARAM_CHA_SEC_ABOVE ; 
 int /*<<< orphan*/  IEEE80211_HT_PARAM_CHA_SEC_BELOW ; 
 int /*<<< orphan*/  IEEE80211_HT_PARAM_CHA_SEC_NONE ; 
#define  NL80211_CHAN_HT20 131 
#define  NL80211_CHAN_HT40MINUS 130 
#define  NL80211_CHAN_HT40PLUS 129 
#define  NL80211_CHAN_NO_HT 128 

u8 mwifiex_chan_type_to_sec_chan_offset(enum nl80211_channel_type chan_type)
{
	switch (chan_type) {
	case NL80211_CHAN_NO_HT:
	case NL80211_CHAN_HT20:
		return IEEE80211_HT_PARAM_CHA_SEC_NONE;
	case NL80211_CHAN_HT40PLUS:
		return IEEE80211_HT_PARAM_CHA_SEC_ABOVE;
	case NL80211_CHAN_HT40MINUS:
		return IEEE80211_HT_PARAM_CHA_SEC_BELOW;
	default:
		return IEEE80211_HT_PARAM_CHA_SEC_NONE;
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
          enum nl80211_channel_type chan_type = 0;
          int benchRet = mwifiex_chan_type_to_sec_chan_offset(chan_type);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          enum nl80211_channel_type chan_type = 0;
          int benchRet = mwifiex_chan_type_to_sec_chan_offset(chan_type);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum nl80211_channel_type chan_type = 0;
          int benchRet = mwifiex_chan_type_to_sec_chan_offset(chan_type);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
