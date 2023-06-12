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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct ieee80211_channel {int flags; } ;

/* Variables and functions */
 unsigned long IEEE80211_CHANNEL_TIME ; 
 int IEEE80211_CHAN_NO_IR ; 
 int IEEE80211_CHAN_RADAR ; 
 unsigned long IEEE80211_PASSIVE_CHANNEL_TIME ; 
 unsigned long IEEE80211_PROBE_DELAY ; 

__attribute__((used)) static unsigned long
ieee80211_scan_get_channel_time(struct ieee80211_channel *chan)
{
	/*
	 * TODO: channel switching also consumes quite some time,
	 * add that delay as well to get a better estimation
	 */
	if (chan->flags & (IEEE80211_CHAN_NO_IR | IEEE80211_CHAN_RADAR))
		return IEEE80211_PASSIVE_CHANNEL_TIME;
	return IEEE80211_PROBE_DELAY + IEEE80211_CHANNEL_TIME;
}

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
          int _len_chan0 = 65025;
          struct ieee80211_channel * chan = (struct ieee80211_channel *) malloc(_len_chan0*sizeof(struct ieee80211_channel));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
              chan[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          unsigned long benchRet = ieee80211_scan_get_channel_time(chan);
          printf("%lu\n", benchRet); 
          free(chan);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_chan0 = 100;
          struct ieee80211_channel * chan = (struct ieee80211_channel *) malloc(_len_chan0*sizeof(struct ieee80211_channel));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
              chan[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          unsigned long benchRet = ieee80211_scan_get_channel_time(chan);
          printf("%lu\n", benchRet); 
          free(chan);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_chan0 = 1;
          struct ieee80211_channel * chan = (struct ieee80211_channel *) malloc(_len_chan0*sizeof(struct ieee80211_channel));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
              chan[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          unsigned long benchRet = ieee80211_scan_get_channel_time(chan);
          printf("%lu\n", benchRet); 
          free(chan);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
