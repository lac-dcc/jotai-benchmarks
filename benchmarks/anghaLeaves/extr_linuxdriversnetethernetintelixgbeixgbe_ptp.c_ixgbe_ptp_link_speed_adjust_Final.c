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
typedef  int /*<<< orphan*/  u32 ;
struct ixgbe_adapter {int link_speed; } ;

/* Variables and functions */
 int /*<<< orphan*/  IXGBE_INCVAL_100 ; 
 int /*<<< orphan*/  IXGBE_INCVAL_10GB ; 
 int /*<<< orphan*/  IXGBE_INCVAL_1GB ; 
 int /*<<< orphan*/  IXGBE_INCVAL_SHIFT_100 ; 
 int /*<<< orphan*/  IXGBE_INCVAL_SHIFT_10GB ; 
 int /*<<< orphan*/  IXGBE_INCVAL_SHIFT_1GB ; 
#define  IXGBE_LINK_SPEED_100_FULL 130 
#define  IXGBE_LINK_SPEED_10GB_FULL 129 
#define  IXGBE_LINK_SPEED_1GB_FULL 128 

__attribute__((used)) static void ixgbe_ptp_link_speed_adjust(struct ixgbe_adapter *adapter,
					u32 *shift, u32 *incval)
{
	/**
	 * Scale the NIC cycle counter by a large factor so that
	 * relatively small corrections to the frequency can be added
	 * or subtracted. The drawbacks of a large factor include
	 * (a) the clock register overflows more quickly, (b) the cycle
	 * counter structure must be able to convert the systime value
	 * to nanoseconds using only a multiplier and a right-shift,
	 * and (c) the value must fit within the timinca register space
	 * => math based on internal DMA clock rate and available bits
	 *
	 * Note that when there is no link, internal DMA clock is same as when
	 * link speed is 10Gb. Set the registers correctly even when link is
	 * down to preserve the clock setting
	 */
	switch (adapter->link_speed) {
	case IXGBE_LINK_SPEED_100_FULL:
		*shift = IXGBE_INCVAL_SHIFT_100;
		*incval = IXGBE_INCVAL_100;
		break;
	case IXGBE_LINK_SPEED_1GB_FULL:
		*shift = IXGBE_INCVAL_SHIFT_1GB;
		*incval = IXGBE_INCVAL_1GB;
		break;
	case IXGBE_LINK_SPEED_10GB_FULL:
	default:
		*shift = IXGBE_INCVAL_SHIFT_10GB;
		*incval = IXGBE_INCVAL_10GB;
		break;
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
          int _len_adapter0 = 1;
          struct ixgbe_adapter * adapter = (struct ixgbe_adapter *) malloc(_len_adapter0*sizeof(struct ixgbe_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].link_speed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_shift0 = 1;
          int * shift = (int *) malloc(_len_shift0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_shift0; _i0++) {
            shift[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_incval0 = 1;
          int * incval = (int *) malloc(_len_incval0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_incval0; _i0++) {
            incval[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ixgbe_ptp_link_speed_adjust(adapter,shift,incval);
          free(adapter);
          free(shift);
          free(incval);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
