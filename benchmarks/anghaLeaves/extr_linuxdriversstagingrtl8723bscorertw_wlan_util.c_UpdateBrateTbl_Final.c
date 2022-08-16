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
struct adapter {int dummy; } ;

/* Variables and functions */
 size_t IEEE80211_BASIC_RATE_MASK ; 
#define  IEEE80211_CCK_RATE_11MB 134 
#define  IEEE80211_CCK_RATE_1MB 133 
#define  IEEE80211_CCK_RATE_2MB 132 
#define  IEEE80211_CCK_RATE_5MB 131 
#define  IEEE80211_OFDM_RATE_12MB 130 
#define  IEEE80211_OFDM_RATE_24MB 129 
#define  IEEE80211_OFDM_RATE_6MB 128 
 size_t NDIS_802_11_LENGTH_RATES_EX ; 

void UpdateBrateTbl(struct adapter *Adapter, u8 *mBratesOS)
{
	u8 i;
	u8 rate;

	/*  1M, 2M, 5.5M, 11M, 6M, 12M, 24M are mandatory. */
	for (i = 0; i < NDIS_802_11_LENGTH_RATES_EX; i++) {
		rate = mBratesOS[i] & 0x7f;
		switch (rate) {
		case IEEE80211_CCK_RATE_1MB:
		case IEEE80211_CCK_RATE_2MB:
		case IEEE80211_CCK_RATE_5MB:
		case IEEE80211_CCK_RATE_11MB:
		case IEEE80211_OFDM_RATE_6MB:
		case IEEE80211_OFDM_RATE_12MB:
		case IEEE80211_OFDM_RATE_24MB:
			mBratesOS[i] |= IEEE80211_BASIC_RATE_MASK;
			break;
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
          int _len_Adapter0 = 1;
          struct adapter * Adapter = (struct adapter *) malloc(_len_Adapter0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_Adapter0; _i0++) {
            Adapter[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mBratesOS0 = 1;
          unsigned long * mBratesOS = (unsigned long *) malloc(_len_mBratesOS0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_mBratesOS0; _i0++) {
            mBratesOS[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          UpdateBrateTbl(Adapter,mBratesOS);
          free(Adapter);
          free(mBratesOS);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
