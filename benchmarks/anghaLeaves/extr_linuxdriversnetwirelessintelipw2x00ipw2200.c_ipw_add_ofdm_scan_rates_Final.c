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
typedef  scalar_t__ u8 ;
typedef  int u32 ;
struct ipw_supported_rates {int /*<<< orphan*/  num_rates; scalar_t__* supported_rates; } ;

/* Variables and functions */
 scalar_t__ LIBIPW_BASIC_RATE_MASK ; 
 scalar_t__ LIBIPW_OFDM_MODULATION ; 
 scalar_t__ LIBIPW_OFDM_RATE_12MB ; 
 int LIBIPW_OFDM_RATE_12MB_MASK ; 
 scalar_t__ LIBIPW_OFDM_RATE_18MB ; 
 int LIBIPW_OFDM_RATE_18MB_MASK ; 
 scalar_t__ LIBIPW_OFDM_RATE_24MB ; 
 int LIBIPW_OFDM_RATE_24MB_MASK ; 
 scalar_t__ LIBIPW_OFDM_RATE_36MB ; 
 int LIBIPW_OFDM_RATE_36MB_MASK ; 
 scalar_t__ LIBIPW_OFDM_RATE_48MB ; 
 int LIBIPW_OFDM_RATE_48MB_MASK ; 
 scalar_t__ LIBIPW_OFDM_RATE_54MB ; 
 int LIBIPW_OFDM_RATE_54MB_MASK ; 
 scalar_t__ LIBIPW_OFDM_RATE_6MB ; 
 int LIBIPW_OFDM_RATE_6MB_MASK ; 
 scalar_t__ LIBIPW_OFDM_RATE_9MB ; 
 int LIBIPW_OFDM_RATE_9MB_MASK ; 

__attribute__((used)) static void ipw_add_ofdm_scan_rates(struct ipw_supported_rates *rates,
				    u8 modulation, u32 rate_mask)
{
	u8 basic_mask = (LIBIPW_OFDM_MODULATION == modulation) ?
	    LIBIPW_BASIC_RATE_MASK : 0;

	if (rate_mask & LIBIPW_OFDM_RATE_6MB_MASK)
		rates->supported_rates[rates->num_rates++] = basic_mask |
		    LIBIPW_OFDM_RATE_6MB;

	if (rate_mask & LIBIPW_OFDM_RATE_9MB_MASK)
		rates->supported_rates[rates->num_rates++] =
		    LIBIPW_OFDM_RATE_9MB;

	if (rate_mask & LIBIPW_OFDM_RATE_12MB_MASK)
		rates->supported_rates[rates->num_rates++] = basic_mask |
		    LIBIPW_OFDM_RATE_12MB;

	if (rate_mask & LIBIPW_OFDM_RATE_18MB_MASK)
		rates->supported_rates[rates->num_rates++] =
		    LIBIPW_OFDM_RATE_18MB;

	if (rate_mask & LIBIPW_OFDM_RATE_24MB_MASK)
		rates->supported_rates[rates->num_rates++] = basic_mask |
		    LIBIPW_OFDM_RATE_24MB;

	if (rate_mask & LIBIPW_OFDM_RATE_36MB_MASK)
		rates->supported_rates[rates->num_rates++] =
		    LIBIPW_OFDM_RATE_36MB;

	if (rate_mask & LIBIPW_OFDM_RATE_48MB_MASK)
		rates->supported_rates[rates->num_rates++] =
		    LIBIPW_OFDM_RATE_48MB;

	if (rate_mask & LIBIPW_OFDM_RATE_54MB_MASK)
		rates->supported_rates[rates->num_rates++] =
		    LIBIPW_OFDM_RATE_54MB;
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
          long modulation = 100;
          int rate_mask = 100;
          int _len_rates0 = 1;
          struct ipw_supported_rates * rates = (struct ipw_supported_rates *) malloc(_len_rates0*sizeof(struct ipw_supported_rates));
          for(int _i0 = 0; _i0 < _len_rates0; _i0++) {
            rates[_i0].num_rates = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rates__i0__supported_rates0 = 1;
          rates[_i0].supported_rates = (long *) malloc(_len_rates__i0__supported_rates0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_rates__i0__supported_rates0; _j0++) {
            rates[_i0].supported_rates[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ipw_add_ofdm_scan_rates(rates,modulation,rate_mask);
          for(int _aux = 0; _aux < _len_rates0; _aux++) {
          free(rates[_aux].supported_rates);
          }
          free(rates);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
