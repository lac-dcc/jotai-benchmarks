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
typedef  int u8 ;
typedef  enum nl80211_chan_width { ____Placeholder_nl80211_chan_width } nl80211_chan_width ;

/* Variables and functions */
 int NL80211_CHAN_WIDTH_10 ; 
 int NL80211_CHAN_WIDTH_160 ; 
 int NL80211_CHAN_WIDTH_20 ; 
 int NL80211_CHAN_WIDTH_20_NOHT ; 
 int NL80211_CHAN_WIDTH_40 ; 
 int NL80211_CHAN_WIDTH_5 ; 
 int NL80211_CHAN_WIDTH_80 ; 
 int NL80211_CHAN_WIDTH_80P80 ; 
#define  QLINK_CHAN_WIDTH_10 135 
#define  QLINK_CHAN_WIDTH_160 134 
#define  QLINK_CHAN_WIDTH_20 133 
#define  QLINK_CHAN_WIDTH_20_NOHT 132 
#define  QLINK_CHAN_WIDTH_40 131 
#define  QLINK_CHAN_WIDTH_5 130 
#define  QLINK_CHAN_WIDTH_80 129 
#define  QLINK_CHAN_WIDTH_80P80 128 

__attribute__((used)) static enum nl80211_chan_width qlink_chanwidth_to_nl(u8 qlw)
{
	switch (qlw) {
	case QLINK_CHAN_WIDTH_20_NOHT:
		return NL80211_CHAN_WIDTH_20_NOHT;
	case QLINK_CHAN_WIDTH_20:
		return NL80211_CHAN_WIDTH_20;
	case QLINK_CHAN_WIDTH_40:
		return NL80211_CHAN_WIDTH_40;
	case QLINK_CHAN_WIDTH_80:
		return NL80211_CHAN_WIDTH_80;
	case QLINK_CHAN_WIDTH_80P80:
		return NL80211_CHAN_WIDTH_80P80;
	case QLINK_CHAN_WIDTH_160:
		return NL80211_CHAN_WIDTH_160;
	case QLINK_CHAN_WIDTH_5:
		return NL80211_CHAN_WIDTH_5;
	case QLINK_CHAN_WIDTH_10:
		return NL80211_CHAN_WIDTH_10;
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
          int qlw = 100;
          enum nl80211_chan_width benchRet = qlink_chanwidth_to_nl(qlw);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int qlw = 255;
          enum nl80211_chan_width benchRet = qlink_chanwidth_to_nl(qlw);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int qlw = 10;
          enum nl80211_chan_width benchRet = qlink_chanwidth_to_nl(qlw);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
