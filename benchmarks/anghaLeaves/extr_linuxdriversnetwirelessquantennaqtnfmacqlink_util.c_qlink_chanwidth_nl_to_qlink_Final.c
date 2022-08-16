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
typedef  enum nl80211_chan_width { ____Placeholder_nl80211_chan_width } nl80211_chan_width ;

/* Variables and functions */
#define  NL80211_CHAN_WIDTH_10 135 
#define  NL80211_CHAN_WIDTH_160 134 
#define  NL80211_CHAN_WIDTH_20 133 
#define  NL80211_CHAN_WIDTH_20_NOHT 132 
#define  NL80211_CHAN_WIDTH_40 131 
#define  NL80211_CHAN_WIDTH_5 130 
#define  NL80211_CHAN_WIDTH_80 129 
#define  NL80211_CHAN_WIDTH_80P80 128 
 int QLINK_CHAN_WIDTH_10 ; 
 int QLINK_CHAN_WIDTH_160 ; 
 int QLINK_CHAN_WIDTH_20 ; 
 int QLINK_CHAN_WIDTH_20_NOHT ; 
 int QLINK_CHAN_WIDTH_40 ; 
 int QLINK_CHAN_WIDTH_5 ; 
 int QLINK_CHAN_WIDTH_80 ; 
 int QLINK_CHAN_WIDTH_80P80 ; 

__attribute__((used)) static u8 qlink_chanwidth_nl_to_qlink(enum nl80211_chan_width nlwidth)
{
	switch (nlwidth) {
	case NL80211_CHAN_WIDTH_20_NOHT:
		return QLINK_CHAN_WIDTH_20_NOHT;
	case NL80211_CHAN_WIDTH_20:
		return QLINK_CHAN_WIDTH_20;
	case NL80211_CHAN_WIDTH_40:
		return QLINK_CHAN_WIDTH_40;
	case NL80211_CHAN_WIDTH_80:
		return QLINK_CHAN_WIDTH_80;
	case NL80211_CHAN_WIDTH_80P80:
		return QLINK_CHAN_WIDTH_80P80;
	case NL80211_CHAN_WIDTH_160:
		return QLINK_CHAN_WIDTH_160;
	case NL80211_CHAN_WIDTH_5:
		return QLINK_CHAN_WIDTH_5;
	case NL80211_CHAN_WIDTH_10:
		return QLINK_CHAN_WIDTH_10;
	default:
		return -1;
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
          enum nl80211_chan_width nlwidth = 0;
          int benchRet = qlink_chanwidth_nl_to_qlink(nlwidth);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
