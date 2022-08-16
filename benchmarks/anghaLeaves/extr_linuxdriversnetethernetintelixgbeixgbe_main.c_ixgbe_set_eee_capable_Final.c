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
struct TYPE_2__ {int /*<<< orphan*/  eee_speeds_advertised; int /*<<< orphan*/  eee_speeds_supported; } ;
struct ixgbe_hw {int device_id; TYPE_1__ phy; } ;
struct ixgbe_adapter {int /*<<< orphan*/  flags2; struct ixgbe_hw hw; } ;

/* Variables and functions */
#define  IXGBE_DEV_ID_X550EM_A_1G_T 129 
#define  IXGBE_DEV_ID_X550EM_A_1G_T_L 128 
 int /*<<< orphan*/  IXGBE_FLAG2_EEE_CAPABLE ; 
 int /*<<< orphan*/  IXGBE_FLAG2_EEE_ENABLED ; 

__attribute__((used)) static void ixgbe_set_eee_capable(struct ixgbe_adapter *adapter)
{
	struct ixgbe_hw *hw = &adapter->hw;

	switch (hw->device_id) {
	case IXGBE_DEV_ID_X550EM_A_1G_T:
	case IXGBE_DEV_ID_X550EM_A_1G_T_L:
		if (!hw->phy.eee_speeds_supported)
			break;
		adapter->flags2 |= IXGBE_FLAG2_EEE_CAPABLE;
		if (!hw->phy.eee_speeds_advertised)
			break;
		adapter->flags2 |= IXGBE_FLAG2_EEE_ENABLED;
		break;
	default:
		adapter->flags2 &= ~IXGBE_FLAG2_EEE_CAPABLE;
		adapter->flags2 &= ~IXGBE_FLAG2_EEE_ENABLED;
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
            adapter[_i0].flags2 = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].hw.device_id = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].hw.phy.eee_speeds_advertised = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].hw.phy.eee_speeds_supported = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ixgbe_set_eee_capable(adapter);
          free(adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
