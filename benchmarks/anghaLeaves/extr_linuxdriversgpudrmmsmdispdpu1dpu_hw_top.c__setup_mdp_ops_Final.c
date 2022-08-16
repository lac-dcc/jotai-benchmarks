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
struct dpu_hw_mdp_ops {int /*<<< orphan*/  intf_audio_select; int /*<<< orphan*/  reset_ubwc; int /*<<< orphan*/  get_safe_status; int /*<<< orphan*/  setup_vsync_source; int /*<<< orphan*/  get_danger_status; int /*<<< orphan*/  setup_clk_force_ctrl; int /*<<< orphan*/  setup_cdm_output; int /*<<< orphan*/  setup_split_pipe; } ;

/* Variables and functions */
 int /*<<< orphan*/  dpu_hw_get_danger_status ; 
 int /*<<< orphan*/  dpu_hw_get_safe_status ; 
 int /*<<< orphan*/  dpu_hw_intf_audio_select ; 
 int /*<<< orphan*/  dpu_hw_reset_ubwc ; 
 int /*<<< orphan*/  dpu_hw_setup_cdm_output ; 
 int /*<<< orphan*/  dpu_hw_setup_clk_force_ctrl ; 
 int /*<<< orphan*/  dpu_hw_setup_split_pipe ; 
 int /*<<< orphan*/  dpu_hw_setup_vsync_source ; 

__attribute__((used)) static void _setup_mdp_ops(struct dpu_hw_mdp_ops *ops,
		unsigned long cap)
{
	ops->setup_split_pipe = dpu_hw_setup_split_pipe;
	ops->setup_cdm_output = dpu_hw_setup_cdm_output;
	ops->setup_clk_force_ctrl = dpu_hw_setup_clk_force_ctrl;
	ops->get_danger_status = dpu_hw_get_danger_status;
	ops->setup_vsync_source = dpu_hw_setup_vsync_source;
	ops->get_safe_status = dpu_hw_get_safe_status;
	ops->reset_ubwc = dpu_hw_reset_ubwc;
	ops->intf_audio_select = dpu_hw_intf_audio_select;
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
          unsigned long cap = 100;
          int _len_ops0 = 1;
          struct dpu_hw_mdp_ops * ops = (struct dpu_hw_mdp_ops *) malloc(_len_ops0*sizeof(struct dpu_hw_mdp_ops));
          for(int _i0 = 0; _i0 < _len_ops0; _i0++) {
            ops[_i0].intf_audio_select = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].reset_ubwc = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].get_safe_status = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].setup_vsync_source = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].get_danger_status = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].setup_clk_force_ctrl = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].setup_cdm_output = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].setup_split_pipe = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _setup_mdp_ops(ops,cap);
          free(ops);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
