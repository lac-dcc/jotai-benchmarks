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
       0            big-arr\n\
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
typedef  size_t u8 ;
typedef  int u32 ;
struct ieee80211_supported_band {int n_bitrates; struct ieee80211_rate* bitrates; } ;
struct ieee80211_rate {int bitrate; } ;

/* Variables and functions */

__attribute__((used)) static u32 rateset_to_mask(struct ieee80211_supported_band *sband,
			   u8 *rates, u8 rates_len)
{
	u8 i;
	u32 mask = 0;

	for (i = 0; i < rates_len; i++) {
		int rate = (rates[i] & 0x7f) * 5;
		int ridx;

		for (ridx = 0; ridx < sband->n_bitrates; ridx++) {
			struct ieee80211_rate *srate =
				&sband->bitrates[ridx];
			if (rate == srate->bitrate) {
				mask |= 1 << ridx;
				break;
			}
		}
		if (ridx == sband->n_bitrates)
			return 0; /* rate not found */
	}

	return mask;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          unsigned long rates_len = 255;
        
          int _len_sband0 = 65025;
          struct ieee80211_supported_band * sband = (struct ieee80211_supported_band *) malloc(_len_sband0*sizeof(struct ieee80211_supported_band));
          for(int _i0 = 0; _i0 < _len_sband0; _i0++) {
              sband[_i0].n_bitrates = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sband__i0__bitrates0 = 1;
          sband[_i0].bitrates = (struct ieee80211_rate *) malloc(_len_sband__i0__bitrates0*sizeof(struct ieee80211_rate));
          for(int _j0 = 0; _j0 < _len_sband__i0__bitrates0; _j0++) {
              sband[_i0].bitrates->bitrate = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_rates0 = 65025;
          unsigned long * rates = (unsigned long *) malloc(_len_rates0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_rates0; _i0++) {
            rates[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = rateset_to_mask(sband,rates,rates_len);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sband0; _aux++) {
          free(sband[_aux].bitrates);
          }
          free(sband);
          free(rates);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned long rates_len = 10;
        
          int _len_sband0 = 100;
          struct ieee80211_supported_band * sband = (struct ieee80211_supported_band *) malloc(_len_sband0*sizeof(struct ieee80211_supported_band));
          for(int _i0 = 0; _i0 < _len_sband0; _i0++) {
              sband[_i0].n_bitrates = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sband__i0__bitrates0 = 1;
          sband[_i0].bitrates = (struct ieee80211_rate *) malloc(_len_sband__i0__bitrates0*sizeof(struct ieee80211_rate));
          for(int _j0 = 0; _j0 < _len_sband__i0__bitrates0; _j0++) {
              sband[_i0].bitrates->bitrate = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_rates0 = 100;
          unsigned long * rates = (unsigned long *) malloc(_len_rates0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_rates0; _i0++) {
            rates[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = rateset_to_mask(sband,rates,rates_len);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sband0; _aux++) {
          free(sband[_aux].bitrates);
          }
          free(sband);
          free(rates);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
