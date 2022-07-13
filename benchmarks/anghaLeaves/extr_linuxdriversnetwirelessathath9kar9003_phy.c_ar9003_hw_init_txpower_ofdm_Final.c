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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  int /*<<< orphan*/  u8 ;
struct ath_hw {int /*<<< orphan*/ * tx_power; } ;

/* Variables and functions */
 int AR9300_OFDM_RATES ; 
 int* ofdm2pwr ; 

__attribute__((used)) static void ar9003_hw_init_txpower_ofdm(struct ath_hw *ah, u8 *rate_array,
					int offset)
{
	int i, j;

	for (i = offset; i < offset + AR9300_OFDM_RATES; i++) {
		/* OFDM rate to power table idx */
		j = ofdm2pwr[i - offset];
		ah->tx_power[i] = rate_array[j];
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
          ar9003_hw_init_txpower_ofdm(ah,rate_array,offset);
          for(int _aux = 0; _aux < _len_ah0; _aux++) {
          free(ah[_aux].tx_power);
          }
          free(ah);
          free(rate_array);
        
        break;
    }
    // big-arr
    case 1:
    {
          int offset = 255;
          int _len_ah0 = 65025;
          struct ath_hw * ah = (struct ath_hw *) malloc(_len_ah0*sizeof(struct ath_hw));
          for(int _i0 = 0; _i0 < _len_ah0; _i0++) {
              int _len_ah__i0__tx_power0 = 1;
          ah[_i0].tx_power = (int *) malloc(_len_ah__i0__tx_power0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ah__i0__tx_power0; _j0++) {
            ah[_i0].tx_power[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rate_array0 = 65025;
          int * rate_array = (int *) malloc(_len_rate_array0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rate_array0; _i0++) {
            rate_array[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ar9003_hw_init_txpower_ofdm(ah,rate_array,offset);
          for(int _aux = 0; _aux < _len_ah0; _aux++) {
          free(ah[_aux].tx_power);
          }
          free(ah);
          free(rate_array);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int offset = 10;
          int _len_ah0 = 100;
          struct ath_hw * ah = (struct ath_hw *) malloc(_len_ah0*sizeof(struct ath_hw));
          for(int _i0 = 0; _i0 < _len_ah0; _i0++) {
              int _len_ah__i0__tx_power0 = 1;
          ah[_i0].tx_power = (int *) malloc(_len_ah__i0__tx_power0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ah__i0__tx_power0; _j0++) {
            ah[_i0].tx_power[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rate_array0 = 100;
          int * rate_array = (int *) malloc(_len_rate_array0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rate_array0; _i0++) {
            rate_array[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ar9003_hw_init_txpower_ofdm(ah,rate_array,offset);
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
