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
struct minstrel_priv {scalar_t__* cck_rates; } ;
struct ieee80211_tx_rate {scalar_t__ idx; int flags; int /*<<< orphan*/  count; } ;

/* Variables and functions */
 int IEEE80211_TX_RC_MCS ; 
 int IEEE80211_TX_RC_VHT_MCS ; 

__attribute__((used)) static bool
minstrel_ht_txstat_valid(struct minstrel_priv *mp, struct ieee80211_tx_rate *rate)
{
	if (rate->idx < 0)
		return false;

	if (!rate->count)
		return false;

	if (rate->flags & IEEE80211_TX_RC_MCS ||
	    rate->flags & IEEE80211_TX_RC_VHT_MCS)
		return true;

	return rate->idx == mp->cck_rates[0] ||
	       rate->idx == mp->cck_rates[1] ||
	       rate->idx == mp->cck_rates[2] ||
	       rate->idx == mp->cck_rates[3];
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
          int _len_mp0 = 1;
          struct minstrel_priv * mp = (struct minstrel_priv *) malloc(_len_mp0*sizeof(struct minstrel_priv));
          for(int _i0 = 0; _i0 < _len_mp0; _i0++) {
              int _len_mp__i0__cck_rates0 = 1;
          mp[_i0].cck_rates = (long *) malloc(_len_mp__i0__cck_rates0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_mp__i0__cck_rates0; _j0++) {
            mp[_i0].cck_rates[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rate0 = 1;
          struct ieee80211_tx_rate * rate = (struct ieee80211_tx_rate *) malloc(_len_rate0*sizeof(struct ieee80211_tx_rate));
          for(int _i0 = 0; _i0 < _len_rate0; _i0++) {
            rate[_i0].idx = ((-2 * (next_i()%2)) + 1) * next_i();
        rate[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        rate[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = minstrel_ht_txstat_valid(mp,rate);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mp0; _aux++) {
          free(mp[_aux].cck_rates);
          }
          free(mp);
          free(rate);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
