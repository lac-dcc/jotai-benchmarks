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
       0            big-arr-10x\n\
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
typedef  int u32 ;
struct ath_hw {int txok_interrupt_mask; int txerr_interrupt_mask; int txdesc_interrupt_mask; int txeol_interrupt_mask; int txurn_interrupt_mask; } ;

/* Variables and functions */

__attribute__((used)) static void ath9k_hw_clear_queue_interrupts(struct ath_hw *ah, u32 q)
{
	ah->txok_interrupt_mask &= ~(1 << q);
	ah->txerr_interrupt_mask &= ~(1 << q);
	ah->txdesc_interrupt_mask &= ~(1 << q);
	ah->txeol_interrupt_mask &= ~(1 << q);
	ah->txurn_interrupt_mask &= ~(1 << q);
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

    // big-arr-10x
    case 0:
    {
          int q = 10;
          int _len_ah0 = 100;
          struct ath_hw * ah = (struct ath_hw *) malloc(_len_ah0*sizeof(struct ath_hw));
          for(int _i0 = 0; _i0 < _len_ah0; _i0++) {
            ah[_i0].txok_interrupt_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        ah[_i0].txerr_interrupt_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        ah[_i0].txdesc_interrupt_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        ah[_i0].txeol_interrupt_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        ah[_i0].txurn_interrupt_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ath9k_hw_clear_queue_interrupts(ah,q);
          free(ah);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
