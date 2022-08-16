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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u8 ;
struct TYPE_4__ {int rar_entry_count; } ;
struct e1000_hw {TYPE_2__ mac; } ;
struct igb_adapter {int vfs_allocated_count; TYPE_1__* mac_table; struct e1000_hw hw; } ;
struct TYPE_3__ {int state; scalar_t__ queue; } ;

/* Variables and functions */
 int IGB_MAC_STATE_DEFAULT ; 
 int IGB_MAC_STATE_IN_USE ; 

__attribute__((used)) static int igb_available_rars(struct igb_adapter *adapter, u8 queue)
{
	struct e1000_hw *hw = &adapter->hw;
	/* do not count rar entries reserved for VFs MAC addresses */
	int rar_entries = hw->mac.rar_entry_count -
			  adapter->vfs_allocated_count;
	int i, count = 0;

	for (i = 0; i < rar_entries; i++) {
		/* do not count default entries */
		if (adapter->mac_table[i].state & IGB_MAC_STATE_DEFAULT)
			continue;

		/* do not count "in use" entries for different queues */
		if ((adapter->mac_table[i].state & IGB_MAC_STATE_IN_USE) &&
		    (adapter->mac_table[i].queue != queue))
			continue;

		count++;
	}

	return count;
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
          long queue = 100;
          int _len_adapter0 = 1;
          struct igb_adapter * adapter = (struct igb_adapter *) malloc(_len_adapter0*sizeof(struct igb_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].vfs_allocated_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__mac_table0 = 1;
          adapter[_i0].mac_table = (struct TYPE_3__ *) malloc(_len_adapter__i0__mac_table0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_adapter__i0__mac_table0; _j0++) {
            adapter[_i0].mac_table->state = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].mac_table->queue = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        adapter[_i0].hw.mac.rar_entry_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = igb_available_rars(adapter,queue);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(adapter[_aux].mac_table);
          }
          free(adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
