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
typedef  int u32 ;
struct ieee80211_channel {int flags; } ;
struct brcmu_chan {scalar_t__ sb; } ;

/* Variables and functions */
 scalar_t__ BRCMU_CHAN_SB_U ; 
 int IEEE80211_CHAN_NO_HT40 ; 
 int IEEE80211_CHAN_NO_HT40MINUS ; 
 int IEEE80211_CHAN_NO_HT40PLUS ; 

__attribute__((used)) static void brcmf_update_bw40_channel_flag(struct ieee80211_channel *channel,
					   struct brcmu_chan *ch)
{
	u32 ht40_flag;

	ht40_flag = channel->flags & IEEE80211_CHAN_NO_HT40;
	if (ch->sb == BRCMU_CHAN_SB_U) {
		if (ht40_flag == IEEE80211_CHAN_NO_HT40)
			channel->flags &= ~IEEE80211_CHAN_NO_HT40;
		channel->flags |= IEEE80211_CHAN_NO_HT40PLUS;
	} else {
		/* It should be one of
		 * IEEE80211_CHAN_NO_HT40 or
		 * IEEE80211_CHAN_NO_HT40PLUS
		 */
		channel->flags &= ~IEEE80211_CHAN_NO_HT40;
		if (ht40_flag == IEEE80211_CHAN_NO_HT40)
			channel->flags |= IEEE80211_CHAN_NO_HT40MINUS;
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
          int _len_channel0 = 1;
          struct ieee80211_channel * channel = (struct ieee80211_channel *) malloc(_len_channel0*sizeof(struct ieee80211_channel));
          for(int _i0 = 0; _i0 < _len_channel0; _i0++) {
            channel[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ch0 = 1;
          struct brcmu_chan * ch = (struct brcmu_chan *) malloc(_len_ch0*sizeof(struct brcmu_chan));
          for(int _i0 = 0; _i0 < _len_ch0; _i0++) {
            ch[_i0].sb = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          brcmf_update_bw40_channel_flag(channel,ch);
          free(channel);
          free(ch);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_channel0 = 65025;
          struct ieee80211_channel * channel = (struct ieee80211_channel *) malloc(_len_channel0*sizeof(struct ieee80211_channel));
          for(int _i0 = 0; _i0 < _len_channel0; _i0++) {
            channel[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ch0 = 65025;
          struct brcmu_chan * ch = (struct brcmu_chan *) malloc(_len_ch0*sizeof(struct brcmu_chan));
          for(int _i0 = 0; _i0 < _len_ch0; _i0++) {
            ch[_i0].sb = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          brcmf_update_bw40_channel_flag(channel,ch);
          free(channel);
          free(ch);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_channel0 = 100;
          struct ieee80211_channel * channel = (struct ieee80211_channel *) malloc(_len_channel0*sizeof(struct ieee80211_channel));
          for(int _i0 = 0; _i0 < _len_channel0; _i0++) {
            channel[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ch0 = 100;
          struct brcmu_chan * ch = (struct brcmu_chan *) malloc(_len_ch0*sizeof(struct brcmu_chan));
          for(int _i0 = 0; _i0 < _len_ch0; _i0++) {
            ch[_i0].sb = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          brcmf_update_bw40_channel_flag(channel,ch);
          free(channel);
          free(ch);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
