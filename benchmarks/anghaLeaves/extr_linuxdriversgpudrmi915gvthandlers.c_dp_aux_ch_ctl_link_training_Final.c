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
typedef  int uint8_t ;
struct intel_vgpu_dpcd_data {int /*<<< orphan*/ * data; } ;

/* Variables and functions */
 int /*<<< orphan*/  DPCD_INTERLANE_ALIGN_DONE ; 
 size_t DPCD_LANE0_1_STATUS ; 
 size_t DPCD_LANE2_3_STATUS ; 
 int /*<<< orphan*/  DPCD_LANES_CR_DONE ; 
 int /*<<< orphan*/  DPCD_LANES_EQ_DONE ; 
 size_t DPCD_LANE_ALIGN_STATUS_UPDATED ; 
 int DPCD_LINK_TRAINING_DISABLED ; 
 int /*<<< orphan*/  DPCD_SINK_IN_SYNC ; 
 size_t DPCD_SINK_STATUS ; 
 int /*<<< orphan*/  DPCD_SYMBOL_LOCKED ; 
 int DPCD_TRAINING_PATTERN_1 ; 
 int DPCD_TRAINING_PATTERN_2 ; 
 int DPCD_TRAINING_PATTERN_SET_MASK ; 

__attribute__((used)) static void dp_aux_ch_ctl_link_training(struct intel_vgpu_dpcd_data *dpcd,
		uint8_t t)
{
	if ((t & DPCD_TRAINING_PATTERN_SET_MASK) == DPCD_TRAINING_PATTERN_1) {
		/* training pattern 1 for CR */
		/* set LANE0_CR_DONE, LANE1_CR_DONE */
		dpcd->data[DPCD_LANE0_1_STATUS] |= DPCD_LANES_CR_DONE;
		/* set LANE2_CR_DONE, LANE3_CR_DONE */
		dpcd->data[DPCD_LANE2_3_STATUS] |= DPCD_LANES_CR_DONE;
	} else if ((t & DPCD_TRAINING_PATTERN_SET_MASK) ==
			DPCD_TRAINING_PATTERN_2) {
		/* training pattern 2 for EQ */
		/* Set CHANNEL_EQ_DONE and  SYMBOL_LOCKED for Lane0_1 */
		dpcd->data[DPCD_LANE0_1_STATUS] |= DPCD_LANES_EQ_DONE;
		dpcd->data[DPCD_LANE0_1_STATUS] |= DPCD_SYMBOL_LOCKED;
		/* Set CHANNEL_EQ_DONE and  SYMBOL_LOCKED for Lane2_3 */
		dpcd->data[DPCD_LANE2_3_STATUS] |= DPCD_LANES_EQ_DONE;
		dpcd->data[DPCD_LANE2_3_STATUS] |= DPCD_SYMBOL_LOCKED;
		/* set INTERLANE_ALIGN_DONE */
		dpcd->data[DPCD_LANE_ALIGN_STATUS_UPDATED] |=
			DPCD_INTERLANE_ALIGN_DONE;
	} else if ((t & DPCD_TRAINING_PATTERN_SET_MASK) ==
			DPCD_LINK_TRAINING_DISABLED) {
		/* finish link training */
		/* set sink status as synchronized */
		dpcd->data[DPCD_SINK_STATUS] = DPCD_SINK_IN_SYNC;
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
          int t = 100;
          int _len_dpcd0 = 1;
          struct intel_vgpu_dpcd_data * dpcd = (struct intel_vgpu_dpcd_data *) malloc(_len_dpcd0*sizeof(struct intel_vgpu_dpcd_data));
          for(int _i0 = 0; _i0 < _len_dpcd0; _i0++) {
              int _len_dpcd__i0__data0 = 1;
          dpcd[_i0].data = (int *) malloc(_len_dpcd__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dpcd__i0__data0; _j0++) {
            dpcd[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          dp_aux_ch_ctl_link_training(dpcd,t);
          for(int _aux = 0; _aux < _len_dpcd0; _aux++) {
          free(dpcd[_aux].data);
          }
          free(dpcd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
