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
struct wireless_dev {scalar_t__ iftype; } ;

/* Variables and functions */
 scalar_t__ NL80211_IFTYPE_AP ; 
 scalar_t__ NL80211_IFTYPE_MESH_POINT ; 
 scalar_t__ NL80211_IFTYPE_MONITOR ; 
 scalar_t__ NL80211_IFTYPE_P2P_GO ; 

__attribute__((used)) static bool nl80211_can_set_dev_channel(struct wireless_dev *wdev)
{
	/*
	 * You can only set the channel explicitly for WDS interfaces,
	 * all others have their channel managed via their respective
	 * "establish a connection" command (connect, join, ...)
	 *
	 * For AP/GO and mesh mode, the channel can be set with the
	 * channel userspace API, but is only stored and passed to the
	 * low-level driver when the AP starts or the mesh is joined.
	 * This is for backward compatibility, userspace can also give
	 * the channel in the start-ap or join-mesh commands instead.
	 *
	 * Monitors are special as they are normally slaved to
	 * whatever else is going on, so they have their own special
	 * operation to set the monitor channel if possible.
	 */
	return !wdev ||
		wdev->iftype == NL80211_IFTYPE_AP ||
		wdev->iftype == NL80211_IFTYPE_MESH_POINT ||
		wdev->iftype == NL80211_IFTYPE_MONITOR ||
		wdev->iftype == NL80211_IFTYPE_P2P_GO;
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
          int _len_wdev0 = 1;
          struct wireless_dev * wdev = (struct wireless_dev *) malloc(_len_wdev0*sizeof(struct wireless_dev));
          for(int _i0 = 0; _i0 < _len_wdev0; _i0++) {
            wdev[_i0].iftype = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nl80211_can_set_dev_channel(wdev);
          printf("%d\n", benchRet); 
          free(wdev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_wdev0 = 100;
          struct wireless_dev * wdev = (struct wireless_dev *) malloc(_len_wdev0*sizeof(struct wireless_dev));
          for(int _i0 = 0; _i0 < _len_wdev0; _i0++) {
            wdev[_i0].iftype = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nl80211_can_set_dev_channel(wdev);
          printf("%d\n", benchRet); 
          free(wdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
