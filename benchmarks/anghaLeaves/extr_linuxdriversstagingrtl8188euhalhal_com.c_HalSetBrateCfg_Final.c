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
typedef  size_t u8 ;
typedef  int /*<<< orphan*/  u16 ;
struct adapter {int dummy; } ;

/* Variables and functions */
 size_t IEEE80211_BASIC_RATE_MASK ; 
#define  IEEE80211_CCK_RATE_11MB 139 
#define  IEEE80211_CCK_RATE_1MB 138 
#define  IEEE80211_CCK_RATE_2MB 137 
#define  IEEE80211_CCK_RATE_5MB 136 
#define  IEEE80211_OFDM_RATE_12MB 135 
#define  IEEE80211_OFDM_RATE_18MB 134 
#define  IEEE80211_OFDM_RATE_24MB 133 
#define  IEEE80211_OFDM_RATE_36MB 132 
#define  IEEE80211_OFDM_RATE_48MB 131 
#define  IEEE80211_OFDM_RATE_54MB 130 
#define  IEEE80211_OFDM_RATE_6MB 129 
#define  IEEE80211_OFDM_RATE_9MB 128 
 size_t NDIS_802_11_LENGTH_RATES_EX ; 
 int /*<<< orphan*/  RATE_11M ; 
 int /*<<< orphan*/  RATE_12M ; 
 int /*<<< orphan*/  RATE_18M ; 
 int /*<<< orphan*/  RATE_1M ; 
 int /*<<< orphan*/  RATE_24M ; 
 int /*<<< orphan*/  RATE_2M ; 
 int /*<<< orphan*/  RATE_36M ; 
 int /*<<< orphan*/  RATE_48M ; 
 int /*<<< orphan*/  RATE_54M ; 
 int /*<<< orphan*/  RATE_5_5M ; 
 int /*<<< orphan*/  RATE_6M ; 
 int /*<<< orphan*/  RATE_9M ; 

void HalSetBrateCfg(struct adapter *adapt, u8 *brates, u16 *rate_cfg)
{
	u8 i, is_brate, brate;

	for (i = 0; i < NDIS_802_11_LENGTH_RATES_EX; i++) {
		is_brate = brates[i] & IEEE80211_BASIC_RATE_MASK;
		brate = brates[i] & 0x7f;

		if (is_brate) {
			switch (brate) {
			case IEEE80211_CCK_RATE_1MB:
				*rate_cfg |= RATE_1M;
				break;
			case IEEE80211_CCK_RATE_2MB:
				*rate_cfg |= RATE_2M;
				break;
			case IEEE80211_CCK_RATE_5MB:
				*rate_cfg |= RATE_5_5M;
				break;
			case IEEE80211_CCK_RATE_11MB:
				*rate_cfg |= RATE_11M;
				break;
			case IEEE80211_OFDM_RATE_6MB:
				*rate_cfg |= RATE_6M;
				break;
			case IEEE80211_OFDM_RATE_9MB:
				*rate_cfg |= RATE_9M;
				break;
			case IEEE80211_OFDM_RATE_12MB:
				*rate_cfg |= RATE_12M;
				break;
			case IEEE80211_OFDM_RATE_18MB:
				*rate_cfg |= RATE_18M;
				break;
			case IEEE80211_OFDM_RATE_24MB:
				*rate_cfg |= RATE_24M;
				break;
			case IEEE80211_OFDM_RATE_36MB:
				*rate_cfg |= RATE_36M;
				break;
			case IEEE80211_OFDM_RATE_48MB:
				*rate_cfg |= RATE_48M;
				break;
			case IEEE80211_OFDM_RATE_54MB:
				*rate_cfg |= RATE_54M;
				break;
			}
		}
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
          int _len_adapt0 = 1;
          struct adapter * adapt = (struct adapter *) malloc(_len_adapt0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_adapt0; _i0++) {
            adapt[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_brates0 = 1;
          unsigned long * brates = (unsigned long *) malloc(_len_brates0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_brates0; _i0++) {
            brates[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rate_cfg0 = 1;
          int * rate_cfg = (int *) malloc(_len_rate_cfg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rate_cfg0; _i0++) {
            rate_cfg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          HalSetBrateCfg(adapt,brates,rate_cfg);
          free(adapt);
          free(brates);
          free(rate_cfg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
