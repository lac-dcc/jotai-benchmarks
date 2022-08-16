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
typedef  int /*<<< orphan*/  u32 ;
struct fm10k_mbx_info {int dummy; } ;
struct TYPE_2__ {int /*<<< orphan*/  dglort_map; } ;
struct fm10k_hw {TYPE_1__ mac; } ;
typedef  int /*<<< orphan*/  s32 ;

/* Variables and functions */
 int /*<<< orphan*/  FM10K_DGLORTMAP_NONE ; 
 int /*<<< orphan*/  FM10K_DGLORTMAP_ZERO ; 
 size_t FM10K_LPORT_STATE_MSG_READY ; 

s32 fm10k_msg_lport_state_vf(struct fm10k_hw *hw, u32 **results,
			     struct fm10k_mbx_info *mbx)
{
	hw->mac.dglort_map = !results[FM10K_LPORT_STATE_MSG_READY] ?
			     FM10K_DGLORTMAP_NONE : FM10K_DGLORTMAP_ZERO;

	return 0;
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
          struct fm10k_hw * hw = (struct fm10k_hw *) malloc(_len_hw0*sizeof(struct fm10k_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].mac.dglort_map = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_results0 = 1;
          int ** results = (int **) malloc(_len_results0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_results0; _i0++) {
            int _len_results1 = 1;
            results[_i0] = (int *) malloc(_len_results1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_results1; _i1++) {
              results[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_mbx0 = 1;
          struct fm10k_mbx_info * mbx = (struct fm10k_mbx_info *) malloc(_len_mbx0*sizeof(struct fm10k_mbx_info));
          for(int _i0 = 0; _i0 < _len_mbx0; _i0++) {
            mbx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fm10k_msg_lport_state_vf(hw,results,mbx);
          printf("%d\n", benchRet); 
          free(hw);
          for(int i1 = 0; i1 < _len_results0; i1++) {
            int _len_results1 = 1;
              free(results[i1]);
          }
          free(results);
          free(mbx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
