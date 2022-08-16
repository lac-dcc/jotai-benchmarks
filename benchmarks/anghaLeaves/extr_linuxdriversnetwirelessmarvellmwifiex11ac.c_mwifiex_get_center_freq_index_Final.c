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
       1            big-arr-10x\n\
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
typedef  int u32 ;
struct mwifiex_private {int dummy; } ;

/* Variables and functions */
 int BAND_AAC ; 
 int IEEE80211_VHT_CHANWIDTH_160MHZ ; 
 int IEEE80211_VHT_CHANWIDTH_80MHZ ; 

u8 mwifiex_get_center_freq_index(struct mwifiex_private *priv, u8 band,
				 u32 pri_chan, u8 chan_bw)
{
	u8 center_freq_idx = 0;

	if (band & BAND_AAC) {
		switch (pri_chan) {
		case 36:
		case 40:
		case 44:
		case 48:
			if (chan_bw == IEEE80211_VHT_CHANWIDTH_80MHZ)
				center_freq_idx = 42;
			break;
		case 52:
		case 56:
		case 60:
		case 64:
			if (chan_bw == IEEE80211_VHT_CHANWIDTH_80MHZ)
				center_freq_idx = 58;
			else if (chan_bw == IEEE80211_VHT_CHANWIDTH_160MHZ)
				center_freq_idx = 50;
			break;
		case 100:
		case 104:
		case 108:
		case 112:
			if (chan_bw == IEEE80211_VHT_CHANWIDTH_80MHZ)
				center_freq_idx = 106;
			break;
		case 116:
		case 120:
		case 124:
		case 128:
			if (chan_bw == IEEE80211_VHT_CHANWIDTH_80MHZ)
				center_freq_idx = 122;
			else if (chan_bw == IEEE80211_VHT_CHANWIDTH_160MHZ)
				center_freq_idx = 114;
			break;
		case 132:
		case 136:
		case 140:
		case 144:
			if (chan_bw == IEEE80211_VHT_CHANWIDTH_80MHZ)
				center_freq_idx = 138;
			break;
		case 149:
		case 153:
		case 157:
		case 161:
			if (chan_bw == IEEE80211_VHT_CHANWIDTH_80MHZ)
				center_freq_idx = 155;
			break;
		default:
			center_freq_idx = 42;
		}
	}

	return center_freq_idx;
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
          int band = 100;
          int pri_chan = 100;
          int chan_bw = 100;
          int _len_priv0 = 1;
          struct mwifiex_private * priv = (struct mwifiex_private *) malloc(_len_priv0*sizeof(struct mwifiex_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mwifiex_get_center_freq_index(priv,band,pri_chan,chan_bw);
          printf("%d\n", benchRet); 
          free(priv);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int band = 10;
          int pri_chan = 10;
          int chan_bw = 10;
          int _len_priv0 = 100;
          struct mwifiex_private * priv = (struct mwifiex_private *) malloc(_len_priv0*sizeof(struct mwifiex_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mwifiex_get_center_freq_index(priv,band,pri_chan,chan_bw);
          printf("%d\n", benchRet); 
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
