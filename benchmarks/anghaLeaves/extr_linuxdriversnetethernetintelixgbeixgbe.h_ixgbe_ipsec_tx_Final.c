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
struct ixgbe_tx_buffer {int dummy; } ;
struct ixgbe_ring {int dummy; } ;
struct ixgbe_ipsec_tx_data {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline int ixgbe_ipsec_tx(struct ixgbe_ring *tx_ring,
				 struct ixgbe_tx_buffer *first,
				 struct ixgbe_ipsec_tx_data *itd) { return 0; }


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
          int _len_tx_ring0 = 1;
          struct ixgbe_ring * tx_ring = (struct ixgbe_ring *) malloc(_len_tx_ring0*sizeof(struct ixgbe_ring));
          for(int _i0 = 0; _i0 < _len_tx_ring0; _i0++) {
            tx_ring[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_first0 = 1;
          struct ixgbe_tx_buffer * first = (struct ixgbe_tx_buffer *) malloc(_len_first0*sizeof(struct ixgbe_tx_buffer));
          for(int _i0 = 0; _i0 < _len_first0; _i0++) {
            first[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_itd0 = 1;
          struct ixgbe_ipsec_tx_data * itd = (struct ixgbe_ipsec_tx_data *) malloc(_len_itd0*sizeof(struct ixgbe_ipsec_tx_data));
          for(int _i0 = 0; _i0 < _len_itd0; _i0++) {
            itd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ixgbe_ipsec_tx(tx_ring,first,itd);
          printf("%d\n", benchRet); 
          free(tx_ring);
          free(first);
          free(itd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
