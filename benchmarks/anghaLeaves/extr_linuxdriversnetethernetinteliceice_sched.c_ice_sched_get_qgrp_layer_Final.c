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
       1            big-arr-10x\n\
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
typedef  scalar_t__ u8 ;
struct ice_hw {scalar_t__ num_tx_sched_layers; } ;

/* Variables and functions */
 scalar_t__ ICE_QGRP_LAYER_OFFSET ; 

__attribute__((used)) static u8 ice_sched_get_qgrp_layer(struct ice_hw *hw)
{
	/* It's always total layers - 1, the array is 0 relative so -2 */
	return hw->num_tx_sched_layers - ICE_QGRP_LAYER_OFFSET;
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
          struct ice_hw * hw = (struct ice_hw *) malloc(_len_hw0*sizeof(struct ice_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].num_tx_sched_layers = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = ice_sched_get_qgrp_layer(hw);
          printf("%ld\n", benchRet); 
          free(hw);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_hw0 = 100;
          struct ice_hw * hw = (struct ice_hw *) malloc(_len_hw0*sizeof(struct ice_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].num_tx_sched_layers = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = ice_sched_get_qgrp_layer(hw);
          printf("%ld\n", benchRet); 
          free(hw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
