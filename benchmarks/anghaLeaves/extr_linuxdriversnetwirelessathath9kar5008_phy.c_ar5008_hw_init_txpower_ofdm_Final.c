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
struct ath_hw {int /*<<< orphan*/ * tx_power; } ;
typedef  int /*<<< orphan*/  int16_t ;

/* Variables and functions */
 int AR5008_OFDM_RATES ; 

__attribute__((used)) static void ar5008_hw_init_txpower_ofdm(struct ath_hw *ah, int16_t *rate_array,
					int offset)
{
	int i, idx = 0;

	for (i = offset; i < offset + AR5008_OFDM_RATES; i++) {
		ah->tx_power[i] = rate_array[idx];
		idx++;
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
          int offset = 100;
          int _len_ah0 = 1;
          struct ath_hw * ah = (struct ath_hw *) malloc(_len_ah0*sizeof(struct ath_hw));
          for(int _i0 = 0; _i0 < _len_ah0; _i0++) {
              int _len_ah__i0__tx_power0 = 1;
          ah[_i0].tx_power = (int *) malloc(_len_ah__i0__tx_power0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ah__i0__tx_power0; _j0++) {
            ah[_i0].tx_power[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rate_array0 = 1;
          int * rate_array = (int *) malloc(_len_rate_array0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rate_array0; _i0++) {
            rate_array[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ar5008_hw_init_txpower_ofdm(ah,rate_array,offset);
          for(int _aux = 0; _aux < _len_ah0; _aux++) {
          free(ah[_aux].tx_power);
          }
          free(ah);
          free(rate_array);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
