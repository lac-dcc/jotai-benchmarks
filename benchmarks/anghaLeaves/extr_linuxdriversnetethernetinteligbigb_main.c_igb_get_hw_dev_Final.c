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
struct net_device {int dummy; } ;
struct igb_adapter {struct net_device* netdev; } ;
struct e1000_hw {struct igb_adapter* back; } ;

/* Variables and functions */

struct net_device *igb_get_hw_dev(struct e1000_hw *hw)
{
	struct igb_adapter *adapter = hw->back;
	return adapter->netdev;
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
          int _len_hw0 = 1;
          struct e1000_hw * hw = (struct e1000_hw *) malloc(_len_hw0*sizeof(struct e1000_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
              int _len_hw__i0__back0 = 1;
          hw[_i0].back = (struct igb_adapter *) malloc(_len_hw__i0__back0*sizeof(struct igb_adapter));
          for(int _j0 = 0; _j0 < _len_hw__i0__back0; _j0++) {
              int _len_hw__i0__back_netdev0 = 1;
          hw[_i0].back->netdev = (struct net_device *) malloc(_len_hw__i0__back_netdev0*sizeof(struct net_device));
          for(int _j0 = 0; _j0 < _len_hw__i0__back_netdev0; _j0++) {
            hw[_i0].back->netdev->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct net_device * benchRet = igb_get_hw_dev(hw);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_hw0; _aux++) {
          free(hw[_aux].back);
          }
          free(hw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
