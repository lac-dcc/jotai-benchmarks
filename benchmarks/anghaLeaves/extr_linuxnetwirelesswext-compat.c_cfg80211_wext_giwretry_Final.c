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
struct wireless_dev {TYPE_1__* wiphy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int flags; scalar_t__ value; scalar_t__ disabled; } ;
struct TYPE_2__ {scalar_t__ retry_short; scalar_t__ retry_long; } ;

/* Variables and functions */
 int IW_RETRY_LIMIT ; 
 int IW_RETRY_LONG ; 
 int IW_RETRY_SHORT ; 

int cfg80211_wext_giwretry(struct net_device *dev,
			   struct iw_request_info *info,
			   struct iw_param *retry, char *extra)
{
	struct wireless_dev *wdev = dev->ieee80211_ptr;

	retry->disabled = 0;

	if (retry->flags == 0 || (retry->flags & IW_RETRY_SHORT)) {
		/*
		 * First return short value, iwconfig will ask long value
		 * later if needed
		 */
		retry->flags |= IW_RETRY_LIMIT | IW_RETRY_SHORT;
		retry->value = wdev->wiphy->retry_short;
		if (wdev->wiphy->retry_long == wdev->wiphy->retry_short)
			retry->flags |= IW_RETRY_LONG;

		return 0;
	}

	if (retry->flags & IW_RETRY_LONG) {
		retry->flags = IW_RETRY_LIMIT | IW_RETRY_LONG;
		retry->value = wdev->wiphy->retry_long;
	}

	return 0;
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
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__ieee80211_ptr0 = 1;
          dev[_i0].ieee80211_ptr = (struct wireless_dev *) malloc(_len_dev__i0__ieee80211_ptr0*sizeof(struct wireless_dev));
          for(int _j0 = 0; _j0 < _len_dev__i0__ieee80211_ptr0; _j0++) {
              int _len_dev__i0__ieee80211_ptr_wiphy0 = 1;
          dev[_i0].ieee80211_ptr->wiphy = (struct TYPE_2__ *) malloc(_len_dev__i0__ieee80211_ptr_wiphy0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev__i0__ieee80211_ptr_wiphy0; _j0++) {
            dev[_i0].ieee80211_ptr->wiphy->retry_short = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].ieee80211_ptr->wiphy->retry_long = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_info0 = 1;
          struct iw_request_info * info = (struct iw_request_info *) malloc(_len_info0*sizeof(struct iw_request_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_retry0 = 1;
          struct iw_param * retry = (struct iw_param *) malloc(_len_retry0*sizeof(struct iw_param));
          for(int _i0 = 0; _i0 < _len_retry0; _i0++) {
            retry[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        retry[_i0].value = ((-2 * (next_i()%2)) + 1) * next_i();
        retry[_i0].disabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_extra0 = 1;
          char * extra = (char *) malloc(_len_extra0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_extra0; _i0++) {
            extra[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cfg80211_wext_giwretry(dev,info,retry,extra);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].ieee80211_ptr);
          }
          free(dev);
          free(info);
          free(retry);
          free(extra);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
