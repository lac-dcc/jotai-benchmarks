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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct rt2x00_dev {TYPE_1__* ops; scalar_t__ intf_sta_count; } ;
struct ieee80211_vif {int* addr; } ;
struct TYPE_2__ {int max_ap_intf; } ;

/* Variables and functions */

u32 rt2x00lib_get_bssidx(struct rt2x00_dev *rt2x00dev,
			 struct ieee80211_vif *vif)
{
	/*
	 * When in STA mode, bssidx is always 0 otherwise local_address[5]
	 * contains the bss number, see BSS_ID_MASK comments for details.
	 */
	if (rt2x00dev->intf_sta_count)
		return 0;
	return vif->addr[5] & (rt2x00dev->ops->max_ap_intf - 1);
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
          int _len_rt2x00dev0 = 1;
          struct rt2x00_dev * rt2x00dev = (struct rt2x00_dev *) malloc(_len_rt2x00dev0*sizeof(struct rt2x00_dev));
          for(int _i0 = 0; _i0 < _len_rt2x00dev0; _i0++) {
              int _len_rt2x00dev__i0__ops0 = 1;
          rt2x00dev[_i0].ops = (struct TYPE_2__ *) malloc(_len_rt2x00dev__i0__ops0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_rt2x00dev__i0__ops0; _j0++) {
            rt2x00dev[_i0].ops->max_ap_intf = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        rt2x00dev[_i0].intf_sta_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vif0 = 1;
          struct ieee80211_vif * vif = (struct ieee80211_vif *) malloc(_len_vif0*sizeof(struct ieee80211_vif));
          for(int _i0 = 0; _i0 < _len_vif0; _i0++) {
              int _len_vif__i0__addr0 = 1;
          vif[_i0].addr = (int *) malloc(_len_vif__i0__addr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vif__i0__addr0; _j0++) {
            vif[_i0].addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = rt2x00lib_get_bssidx(rt2x00dev,vif);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_rt2x00dev0; _aux++) {
          free(rt2x00dev[_aux].ops);
          }
          free(rt2x00dev);
          for(int _aux = 0; _aux < _len_vif0; _aux++) {
          free(vif[_aux].addr);
          }
          free(vif);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
