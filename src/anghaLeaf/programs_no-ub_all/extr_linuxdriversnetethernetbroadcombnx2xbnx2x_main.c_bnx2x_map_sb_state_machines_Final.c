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
       0            big-arr\n\
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
struct hc_index_data {int flags; } ;

/* Variables and functions */
 int HC_INDEX_DATA_SM_ID ; 
 int HC_INDEX_DATA_SM_ID_SHIFT ; 
 size_t HC_INDEX_ETH_RX_CQ_CONS ; 
 size_t HC_INDEX_ETH_TX_CQ_CONS_COS0 ; 
 size_t HC_INDEX_ETH_TX_CQ_CONS_COS1 ; 
 size_t HC_INDEX_ETH_TX_CQ_CONS_COS2 ; 
 size_t HC_INDEX_OOO_TX_CQ_CONS ; 
 int SM_RX_ID ; 
 int SM_TX_ID ; 

__attribute__((used)) static void bnx2x_map_sb_state_machines(struct hc_index_data *index_data)
{
	/* zero out state machine indices */
	/* rx indices */
	index_data[HC_INDEX_ETH_RX_CQ_CONS].flags &= ~HC_INDEX_DATA_SM_ID;

	/* tx indices */
	index_data[HC_INDEX_OOO_TX_CQ_CONS].flags &= ~HC_INDEX_DATA_SM_ID;
	index_data[HC_INDEX_ETH_TX_CQ_CONS_COS0].flags &= ~HC_INDEX_DATA_SM_ID;
	index_data[HC_INDEX_ETH_TX_CQ_CONS_COS1].flags &= ~HC_INDEX_DATA_SM_ID;
	index_data[HC_INDEX_ETH_TX_CQ_CONS_COS2].flags &= ~HC_INDEX_DATA_SM_ID;

	/* map indices */
	/* rx indices */
	index_data[HC_INDEX_ETH_RX_CQ_CONS].flags |=
		SM_RX_ID << HC_INDEX_DATA_SM_ID_SHIFT;

	/* tx indices */
	index_data[HC_INDEX_OOO_TX_CQ_CONS].flags |=
		SM_TX_ID << HC_INDEX_DATA_SM_ID_SHIFT;
	index_data[HC_INDEX_ETH_TX_CQ_CONS_COS0].flags |=
		SM_TX_ID << HC_INDEX_DATA_SM_ID_SHIFT;
	index_data[HC_INDEX_ETH_TX_CQ_CONS_COS1].flags |=
		SM_TX_ID << HC_INDEX_DATA_SM_ID_SHIFT;
	index_data[HC_INDEX_ETH_TX_CQ_CONS_COS2].flags |=
		SM_TX_ID << HC_INDEX_DATA_SM_ID_SHIFT;
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

    // big-arr
    case 0:
    {
          int _len_index_data0 = 1;
          struct hc_index_data * index_data = (struct hc_index_data *) malloc(_len_index_data0*sizeof(struct hc_index_data));
          for(int _i0 = 0; _i0 < _len_index_data0; _i0++) {
            index_data->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bnx2x_map_sb_state_machines(index_data);
          free(index_data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
