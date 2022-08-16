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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u32 ;
struct ath9k_hw_mci {scalar_t__ rx_msg_intr; scalar_t__ raw_intr; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;

/* Variables and functions */

void ar9003_mci_get_interrupt(struct ath_hw *ah, u32 *raw_intr,
			      u32 *rx_msg_intr)
{
	struct ath9k_hw_mci *mci = &ah->btcoex_hw.mci;

	*raw_intr = mci->raw_intr;
	*rx_msg_intr = mci->rx_msg_intr;

	/* Clean int bits after the values are read. */
	mci->raw_intr = 0;
	mci->rx_msg_intr = 0;
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
          struct ath_hw * ah = (struct ath_hw *) malloc(_len_ah0*sizeof(struct ath_hw));
          for(int _i0 = 0; _i0 < _len_ah0; _i0++) {
            ah[_i0].btcoex_hw.mci.rx_msg_intr = ((-2 * (next_i()%2)) + 1) * next_i();
        ah[_i0].btcoex_hw.mci.raw_intr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_raw_intr0 = 1;
          long * raw_intr = (long *) malloc(_len_raw_intr0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_raw_intr0; _i0++) {
            raw_intr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rx_msg_intr0 = 1;
          long * rx_msg_intr = (long *) malloc(_len_rx_msg_intr0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_rx_msg_intr0; _i0++) {
            rx_msg_intr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ar9003_mci_get_interrupt(ah,raw_intr,rx_msg_intr);
          free(ah);
          free(raw_intr);
          free(rx_msg_intr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
