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
typedef  int u32 ;
struct cfg80211_registered_device {int dummy; } ;
typedef  enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;

/* Variables and functions */
 int EINVAL ; 

int cfg80211_validate_beacon_int(struct cfg80211_registered_device *rdev,
				 enum nl80211_iftype iftype, u32 beacon_int)
{
	/*
	 * This is just a basic pre-condition check; if interface combinations
	 * are possible the driver must already be checking those with a call
	 * to cfg80211_check_combinations(), in which case we'll validate more
	 * through the cfg80211_calculate_bi_data() call and code in
	 * cfg80211_iter_combinations().
	 */

	if (beacon_int < 10 || beacon_int > 10000)
		return -EINVAL;

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
          enum nl80211_iftype iftype = 0;
          int beacon_int = 100;
          int _len_rdev0 = 1;
          struct cfg80211_registered_device * rdev = (struct cfg80211_registered_device *) malloc(_len_rdev0*sizeof(struct cfg80211_registered_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cfg80211_validate_beacon_int(rdev,iftype,beacon_int);
          printf("%d\n", benchRet); 
          free(rdev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          enum nl80211_iftype iftype = 0;
          int beacon_int = 10;
          int _len_rdev0 = 100;
          struct cfg80211_registered_device * rdev = (struct cfg80211_registered_device *) malloc(_len_rdev0*sizeof(struct cfg80211_registered_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cfg80211_validate_beacon_int(rdev,iftype,beacon_int);
          printf("%d\n", benchRet); 
          free(rdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
