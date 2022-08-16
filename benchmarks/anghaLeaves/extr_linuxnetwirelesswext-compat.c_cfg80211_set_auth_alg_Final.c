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
struct TYPE_3__ {int /*<<< orphan*/  auth_type; } ;
struct TYPE_4__ {TYPE_1__ connect; } ;
struct wireless_dev {TYPE_2__ wext; } ;
typedef  int s32 ;

/* Variables and functions */
 int EINVAL ; 
 int IW_AUTH_ALG_LEAP ; 
 int IW_AUTH_ALG_OPEN_SYSTEM ; 
 int IW_AUTH_ALG_SHARED_KEY ; 
 int /*<<< orphan*/  NL80211_AUTHTYPE_AUTOMATIC ; 
 int /*<<< orphan*/  NL80211_AUTHTYPE_NETWORK_EAP ; 
 int /*<<< orphan*/  NL80211_AUTHTYPE_OPEN_SYSTEM ; 
 int /*<<< orphan*/  NL80211_AUTHTYPE_SHARED_KEY ; 

__attribute__((used)) static int cfg80211_set_auth_alg(struct wireless_dev *wdev,
				 s32 auth_alg)
{
	int nr_alg = 0;

	if (!auth_alg)
		return -EINVAL;

	if (auth_alg & ~(IW_AUTH_ALG_OPEN_SYSTEM |
			 IW_AUTH_ALG_SHARED_KEY |
			 IW_AUTH_ALG_LEAP))
		return -EINVAL;

	if (auth_alg & IW_AUTH_ALG_OPEN_SYSTEM) {
		nr_alg++;
		wdev->wext.connect.auth_type = NL80211_AUTHTYPE_OPEN_SYSTEM;
	}

	if (auth_alg & IW_AUTH_ALG_SHARED_KEY) {
		nr_alg++;
		wdev->wext.connect.auth_type = NL80211_AUTHTYPE_SHARED_KEY;
	}

	if (auth_alg & IW_AUTH_ALG_LEAP) {
		nr_alg++;
		wdev->wext.connect.auth_type = NL80211_AUTHTYPE_NETWORK_EAP;
	}

	if (nr_alg > 1)
		wdev->wext.connect.auth_type = NL80211_AUTHTYPE_AUTOMATIC;

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
          int auth_alg = 100;
          int _len_wdev0 = 1;
          struct wireless_dev * wdev = (struct wireless_dev *) malloc(_len_wdev0*sizeof(struct wireless_dev));
          for(int _i0 = 0; _i0 < _len_wdev0; _i0++) {
            wdev[_i0].wext.connect.auth_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cfg80211_set_auth_alg(wdev,auth_alg);
          printf("%d\n", benchRet); 
          free(wdev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int auth_alg = 10;
          int _len_wdev0 = 100;
          struct wireless_dev * wdev = (struct wireless_dev *) malloc(_len_wdev0*sizeof(struct wireless_dev));
          for(int _i0 = 0; _i0 < _len_wdev0; _i0++) {
            wdev[_i0].wext.connect.auth_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cfg80211_set_auth_alg(wdev,auth_alg);
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
