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
struct ath5k_hw {scalar_t__ ah_version; int /*<<< orphan*/  ah_proc_rx_desc; int /*<<< orphan*/  ah_proc_tx_desc; int /*<<< orphan*/  ah_setup_tx_desc; } ;

/* Variables and functions */
 scalar_t__ AR5K_AR5211 ; 
 scalar_t__ AR5K_AR5212 ; 
 int ENOTSUPP ; 
 int /*<<< orphan*/  ath5k_hw_proc_2word_tx_status ; 
 int /*<<< orphan*/  ath5k_hw_proc_4word_tx_status ; 
 int /*<<< orphan*/  ath5k_hw_proc_5210_rx_status ; 
 int /*<<< orphan*/  ath5k_hw_proc_5212_rx_status ; 
 int /*<<< orphan*/  ath5k_hw_setup_2word_tx_desc ; 
 int /*<<< orphan*/  ath5k_hw_setup_4word_tx_desc ; 

int
ath5k_hw_init_desc_functions(struct ath5k_hw *ah)
{
	if (ah->ah_version == AR5K_AR5212) {
		ah->ah_setup_tx_desc = ath5k_hw_setup_4word_tx_desc;
		ah->ah_proc_tx_desc = ath5k_hw_proc_4word_tx_status;
		ah->ah_proc_rx_desc = ath5k_hw_proc_5212_rx_status;
	} else if (ah->ah_version <= AR5K_AR5211) {
		ah->ah_setup_tx_desc = ath5k_hw_setup_2word_tx_desc;
		ah->ah_proc_tx_desc = ath5k_hw_proc_2word_tx_status;
		ah->ah_proc_rx_desc = ath5k_hw_proc_5210_rx_status;
	} else
		return -ENOTSUPP;
	return 0;
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
          int _len_ah0 = 1;
          struct ath5k_hw * ah = (struct ath5k_hw *) malloc(_len_ah0*sizeof(struct ath5k_hw));
          for(int _i0 = 0; _i0 < _len_ah0; _i0++) {
            ah[_i0].ah_version = ((-2 * (next_i()%2)) + 1) * next_i();
        ah[_i0].ah_proc_rx_desc = ((-2 * (next_i()%2)) + 1) * next_i();
        ah[_i0].ah_proc_tx_desc = ((-2 * (next_i()%2)) + 1) * next_i();
        ah[_i0].ah_setup_tx_desc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ath5k_hw_init_desc_functions(ah);
          printf("%d\n", benchRet); 
          free(ah);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
