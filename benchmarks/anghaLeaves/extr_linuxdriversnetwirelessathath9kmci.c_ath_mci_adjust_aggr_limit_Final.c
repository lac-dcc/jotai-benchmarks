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
typedef  int u32 ;
struct ath_mci_profile {int aggr_limit; } ;
struct ath_btcoex {int btcoex_period; int duty_cycle; struct ath_mci_profile mci; } ;

/* Variables and functions */

__attribute__((used)) static void ath_mci_adjust_aggr_limit(struct ath_btcoex *btcoex)
{
	struct ath_mci_profile *mci = &btcoex->mci;
	u32 wlan_airtime = btcoex->btcoex_period *
				(100 - btcoex->duty_cycle) / 100;

	/*
	 * Scale: wlan_airtime is in ms, aggr_limit is in 0.25 ms.
	 * When wlan_airtime is less than 4ms, aggregation limit has to be
	 * adjusted half of wlan_airtime to ensure that the aggregation can fit
	 * without collision with BT traffic.
	 */
	if ((wlan_airtime <= 4) &&
	    (!mci->aggr_limit || (mci->aggr_limit > (2 * wlan_airtime))))
		mci->aggr_limit = 2 * wlan_airtime;
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
          int _len_btcoex0 = 1;
          struct ath_btcoex * btcoex = (struct ath_btcoex *) malloc(_len_btcoex0*sizeof(struct ath_btcoex));
          for(int _i0 = 0; _i0 < _len_btcoex0; _i0++) {
            btcoex[_i0].btcoex_period = ((-2 * (next_i()%2)) + 1) * next_i();
        btcoex[_i0].duty_cycle = ((-2 * (next_i()%2)) + 1) * next_i();
        btcoex[_i0].mci.aggr_limit = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ath_mci_adjust_aggr_limit(btcoex);
          free(btcoex);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
