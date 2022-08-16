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
typedef  int /*<<< orphan*/  u16 ;
struct ieee80211_tx_rate {int flags; } ;

/* Variables and functions */
 int IEEE80211_TX_RC_160_MHZ_WIDTH ; 
 int IEEE80211_TX_RC_40_MHZ_WIDTH ; 
 int IEEE80211_TX_RC_80_MHZ_WIDTH ; 
 int IEEE80211_TX_RC_DUP_DATA ; 
 int IEEE80211_TX_RC_GREEN_FIELD ; 
 int IEEE80211_TX_RC_MCS ; 
 int IEEE80211_TX_RC_SHORT_GI ; 
 int IEEE80211_TX_RC_USE_CTS_PROTECT ; 
 int IEEE80211_TX_RC_USE_RTS_CTS ; 
 int IEEE80211_TX_RC_USE_SHORT_PREAMBLE ; 
 int IEEE80211_TX_RC_VHT_MCS ; 
 int /*<<< orphan*/  MAC80211_HWSIM_TX_RC_160_MHZ_WIDTH ; 
 int /*<<< orphan*/  MAC80211_HWSIM_TX_RC_40_MHZ_WIDTH ; 
 int /*<<< orphan*/  MAC80211_HWSIM_TX_RC_80_MHZ_WIDTH ; 
 int /*<<< orphan*/  MAC80211_HWSIM_TX_RC_DUP_DATA ; 
 int /*<<< orphan*/  MAC80211_HWSIM_TX_RC_GREEN_FIELD ; 
 int /*<<< orphan*/  MAC80211_HWSIM_TX_RC_MCS ; 
 int /*<<< orphan*/  MAC80211_HWSIM_TX_RC_SHORT_GI ; 
 int /*<<< orphan*/  MAC80211_HWSIM_TX_RC_USE_CTS_PROTECT ; 
 int /*<<< orphan*/  MAC80211_HWSIM_TX_RC_USE_RTS_CTS ; 
 int /*<<< orphan*/  MAC80211_HWSIM_TX_RC_USE_SHORT_PREAMBLE ; 
 int /*<<< orphan*/  MAC80211_HWSIM_TX_RC_VHT_MCS ; 

__attribute__((used)) static inline u16 trans_tx_rate_flags_ieee2hwsim(struct ieee80211_tx_rate *rate)
{
	u16 result = 0;

	if (rate->flags & IEEE80211_TX_RC_USE_RTS_CTS)
		result |= MAC80211_HWSIM_TX_RC_USE_RTS_CTS;
	if (rate->flags & IEEE80211_TX_RC_USE_CTS_PROTECT)
		result |= MAC80211_HWSIM_TX_RC_USE_CTS_PROTECT;
	if (rate->flags & IEEE80211_TX_RC_USE_SHORT_PREAMBLE)
		result |= MAC80211_HWSIM_TX_RC_USE_SHORT_PREAMBLE;
	if (rate->flags & IEEE80211_TX_RC_MCS)
		result |= MAC80211_HWSIM_TX_RC_MCS;
	if (rate->flags & IEEE80211_TX_RC_GREEN_FIELD)
		result |= MAC80211_HWSIM_TX_RC_GREEN_FIELD;
	if (rate->flags & IEEE80211_TX_RC_40_MHZ_WIDTH)
		result |= MAC80211_HWSIM_TX_RC_40_MHZ_WIDTH;
	if (rate->flags & IEEE80211_TX_RC_DUP_DATA)
		result |= MAC80211_HWSIM_TX_RC_DUP_DATA;
	if (rate->flags & IEEE80211_TX_RC_SHORT_GI)
		result |= MAC80211_HWSIM_TX_RC_SHORT_GI;
	if (rate->flags & IEEE80211_TX_RC_VHT_MCS)
		result |= MAC80211_HWSIM_TX_RC_VHT_MCS;
	if (rate->flags & IEEE80211_TX_RC_80_MHZ_WIDTH)
		result |= MAC80211_HWSIM_TX_RC_80_MHZ_WIDTH;
	if (rate->flags & IEEE80211_TX_RC_160_MHZ_WIDTH)
		result |= MAC80211_HWSIM_TX_RC_160_MHZ_WIDTH;

	return result;
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
          int _len_rate0 = 1;
          struct ieee80211_tx_rate * rate = (struct ieee80211_tx_rate *) malloc(_len_rate0*sizeof(struct ieee80211_tx_rate));
          for(int _i0 = 0; _i0 < _len_rate0; _i0++) {
            rate[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = trans_tx_rate_flags_ieee2hwsim(rate);
          printf("%d\n", benchRet); 
          free(rate);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_rate0 = 100;
          struct ieee80211_tx_rate * rate = (struct ieee80211_tx_rate *) malloc(_len_rate0*sizeof(struct ieee80211_tx_rate));
          for(int _i0 = 0; _i0 < _len_rate0; _i0++) {
            rate[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = trans_tx_rate_flags_ieee2hwsim(rate);
          printf("%d\n", benchRet); 
          free(rate);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
