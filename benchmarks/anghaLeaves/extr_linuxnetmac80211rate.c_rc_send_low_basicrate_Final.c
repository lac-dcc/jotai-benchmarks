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
typedef  int u8 ;
typedef  int u32 ;
struct ieee80211_supported_band {int n_bitrates; } ;
typedef  int s8 ;

/* Variables and functions */

__attribute__((used)) static void rc_send_low_basicrate(s8 *idx, u32 basic_rates,
				  struct ieee80211_supported_band *sband)
{
	u8 i;

	if (basic_rates == 0)
		return; /* assume basic rates unknown and accept rate */
	if (*idx < 0)
		return;
	if (basic_rates & (1 << *idx))
		return; /* selected rate is a basic rate */

	for (i = *idx + 1; i <= sband->n_bitrates; i++) {
		if (basic_rates & (1 << i)) {
			*idx = i;
			return;
		}
	}

	/* could not find a basic rate; use original selection */
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
          int basic_rates = 100;
          int _len_idx0 = 1;
          int * idx = (int *) malloc(_len_idx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_idx0; _i0++) {
            idx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sband0 = 1;
          struct ieee80211_supported_band * sband = (struct ieee80211_supported_band *) malloc(_len_sband0*sizeof(struct ieee80211_supported_band));
          for(int _i0 = 0; _i0 < _len_sband0; _i0++) {
            sband[_i0].n_bitrates = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rc_send_low_basicrate(idx,basic_rates,sband);
          free(idx);
          free(sband);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
