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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int width; } ;
struct TYPE_4__ {TYPE_1__ chandef; } ;
struct mt76x2_dev {TYPE_2__ mt76; } ;

/* Variables and functions */
#define  NL80211_CHAN_WIDTH_40 129 
#define  NL80211_CHAN_WIDTH_80 128 

__attribute__((used)) static int
mt76x2_get_low_rssi_gain_thresh(struct mt76x2_dev *dev)
{
	switch (dev->mt76.chandef.width) {
	case NL80211_CHAN_WIDTH_80:
		return -76;
	case NL80211_CHAN_WIDTH_40:
		return -79;
	default:
		return -82;
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
          int _len_dev0 = 1;
          struct mt76x2_dev * dev = (struct mt76x2_dev *) malloc(_len_dev0*sizeof(struct mt76x2_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].mt76.chandef.width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mt76x2_get_low_rssi_gain_thresh(dev);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_dev0 = 100;
          struct mt76x2_dev * dev = (struct mt76x2_dev *) malloc(_len_dev0*sizeof(struct mt76x2_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].mt76.chandef.width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mt76x2_get_low_rssi_gain_thresh(dev);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
