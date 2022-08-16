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
struct ieee80211_channel {int flags; scalar_t__ center_freq; scalar_t__ dfs_state; int /*<<< orphan*/  dfs_state_entered; } ;

/* Variables and functions */
 int IEEE80211_CHAN_DISABLED ; 
 int IEEE80211_CHAN_RADAR ; 
 scalar_t__ NL80211_DFS_USABLE ; 

__attribute__((used)) static void reg_copy_dfs_chan_state(struct ieee80211_channel *dst_chan,
				    struct ieee80211_channel *src_chan)
{
	if (!(dst_chan->flags & IEEE80211_CHAN_RADAR) ||
	    !(src_chan->flags & IEEE80211_CHAN_RADAR))
		return;

	if (dst_chan->flags & IEEE80211_CHAN_DISABLED ||
	    src_chan->flags & IEEE80211_CHAN_DISABLED)
		return;

	if (src_chan->center_freq == dst_chan->center_freq &&
	    dst_chan->dfs_state == NL80211_DFS_USABLE) {
		dst_chan->dfs_state = src_chan->dfs_state;
		dst_chan->dfs_state_entered = src_chan->dfs_state_entered;
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
          int _len_dst_chan0 = 1;
          struct ieee80211_channel * dst_chan = (struct ieee80211_channel *) malloc(_len_dst_chan0*sizeof(struct ieee80211_channel));
          for(int _i0 = 0; _i0 < _len_dst_chan0; _i0++) {
            dst_chan[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_chan[_i0].center_freq = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_chan[_i0].dfs_state = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_chan[_i0].dfs_state_entered = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src_chan0 = 1;
          struct ieee80211_channel * src_chan = (struct ieee80211_channel *) malloc(_len_src_chan0*sizeof(struct ieee80211_channel));
          for(int _i0 = 0; _i0 < _len_src_chan0; _i0++) {
            src_chan[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        src_chan[_i0].center_freq = ((-2 * (next_i()%2)) + 1) * next_i();
        src_chan[_i0].dfs_state = ((-2 * (next_i()%2)) + 1) * next_i();
        src_chan[_i0].dfs_state_entered = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          reg_copy_dfs_chan_state(dst_chan,src_chan);
          free(dst_chan);
          free(src_chan);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
