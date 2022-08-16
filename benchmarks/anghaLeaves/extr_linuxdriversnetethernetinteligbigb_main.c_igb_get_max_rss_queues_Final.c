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
struct TYPE_2__ {int type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igb_adapter {int /*<<< orphan*/  vfs_allocated_count; struct e1000_hw hw; } ;

/* Variables and functions */
 unsigned int IGB_MAX_RX_QUEUES ; 
 unsigned int IGB_MAX_RX_QUEUES_82575 ; 
 unsigned int IGB_MAX_RX_QUEUES_I211 ; 
#define  e1000_82575 134 
#define  e1000_82576 133 
#define  e1000_82580 132 
#define  e1000_i210 131 
#define  e1000_i211 130 
#define  e1000_i350 129 
#define  e1000_i354 128 

unsigned int igb_get_max_rss_queues(struct igb_adapter *adapter)
{
	struct e1000_hw *hw = &adapter->hw;
	unsigned int max_rss_queues;

	/* Determine the maximum number of RSS queues supported. */
	switch (hw->mac.type) {
	case e1000_i211:
		max_rss_queues = IGB_MAX_RX_QUEUES_I211;
		break;
	case e1000_82575:
	case e1000_i210:
		max_rss_queues = IGB_MAX_RX_QUEUES_82575;
		break;
	case e1000_i350:
		/* I350 cannot do RSS and SR-IOV at the same time */
		if (!!adapter->vfs_allocated_count) {
			max_rss_queues = 1;
			break;
		}
		/* fall through */
	case e1000_82576:
		if (!!adapter->vfs_allocated_count) {
			max_rss_queues = 2;
			break;
		}
		/* fall through */
	case e1000_82580:
	case e1000_i354:
	default:
		max_rss_queues = IGB_MAX_RX_QUEUES;
		break;
	}

	return max_rss_queues;
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
          struct igb_adapter * adapter = (struct igb_adapter *) malloc(_len_adapter0*sizeof(struct igb_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].vfs_allocated_count = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].hw.mac.type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = igb_get_max_rss_queues(adapter);
          printf("%u\n", benchRet); 
          free(adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
