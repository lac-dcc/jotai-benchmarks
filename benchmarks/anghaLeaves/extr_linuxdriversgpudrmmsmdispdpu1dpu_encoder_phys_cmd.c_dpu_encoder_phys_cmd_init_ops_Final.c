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
struct dpu_encoder_phys_ops {int /*<<< orphan*/  get_line_count; int /*<<< orphan*/  handle_post_kickoff; int /*<<< orphan*/  prepare_idle_pc; int /*<<< orphan*/  restore; int /*<<< orphan*/  irq_control; int /*<<< orphan*/  hw_reset; int /*<<< orphan*/  needs_single_flush; int /*<<< orphan*/  trigger_start; int /*<<< orphan*/  wait_for_vblank; int /*<<< orphan*/  wait_for_tx_complete; int /*<<< orphan*/  prepare_for_kickoff; int /*<<< orphan*/  wait_for_commit_done; int /*<<< orphan*/  control_vblank_irq; int /*<<< orphan*/  get_hw_resources; int /*<<< orphan*/  destroy; int /*<<< orphan*/  disable; int /*<<< orphan*/  enable; int /*<<< orphan*/  mode_fixup; int /*<<< orphan*/  mode_set; int /*<<< orphan*/  is_master; } ;

/* Variables and functions */
 int /*<<< orphan*/  dpu_encoder_helper_hw_reset ; 
 int /*<<< orphan*/  dpu_encoder_phys_cmd_control_vblank_irq ; 
 int /*<<< orphan*/  dpu_encoder_phys_cmd_destroy ; 
 int /*<<< orphan*/  dpu_encoder_phys_cmd_disable ; 
 int /*<<< orphan*/  dpu_encoder_phys_cmd_enable ; 
 int /*<<< orphan*/  dpu_encoder_phys_cmd_enable_helper ; 
 int /*<<< orphan*/  dpu_encoder_phys_cmd_get_hw_resources ; 
 int /*<<< orphan*/  dpu_encoder_phys_cmd_get_line_count ; 
 int /*<<< orphan*/  dpu_encoder_phys_cmd_handle_post_kickoff ; 
 int /*<<< orphan*/  dpu_encoder_phys_cmd_irq_control ; 
 int /*<<< orphan*/  dpu_encoder_phys_cmd_is_master ; 
 int /*<<< orphan*/  dpu_encoder_phys_cmd_mode_fixup ; 
 int /*<<< orphan*/  dpu_encoder_phys_cmd_mode_set ; 
 int /*<<< orphan*/  dpu_encoder_phys_cmd_needs_single_flush ; 
 int /*<<< orphan*/  dpu_encoder_phys_cmd_prepare_for_kickoff ; 
 int /*<<< orphan*/  dpu_encoder_phys_cmd_prepare_idle_pc ; 
 int /*<<< orphan*/  dpu_encoder_phys_cmd_trigger_start ; 
 int /*<<< orphan*/  dpu_encoder_phys_cmd_wait_for_commit_done ; 
 int /*<<< orphan*/  dpu_encoder_phys_cmd_wait_for_tx_complete ; 
 int /*<<< orphan*/  dpu_encoder_phys_cmd_wait_for_vblank ; 

__attribute__((used)) static void dpu_encoder_phys_cmd_init_ops(
		struct dpu_encoder_phys_ops *ops)
{
	ops->is_master = dpu_encoder_phys_cmd_is_master;
	ops->mode_set = dpu_encoder_phys_cmd_mode_set;
	ops->mode_fixup = dpu_encoder_phys_cmd_mode_fixup;
	ops->enable = dpu_encoder_phys_cmd_enable;
	ops->disable = dpu_encoder_phys_cmd_disable;
	ops->destroy = dpu_encoder_phys_cmd_destroy;
	ops->get_hw_resources = dpu_encoder_phys_cmd_get_hw_resources;
	ops->control_vblank_irq = dpu_encoder_phys_cmd_control_vblank_irq;
	ops->wait_for_commit_done = dpu_encoder_phys_cmd_wait_for_commit_done;
	ops->prepare_for_kickoff = dpu_encoder_phys_cmd_prepare_for_kickoff;
	ops->wait_for_tx_complete = dpu_encoder_phys_cmd_wait_for_tx_complete;
	ops->wait_for_vblank = dpu_encoder_phys_cmd_wait_for_vblank;
	ops->trigger_start = dpu_encoder_phys_cmd_trigger_start;
	ops->needs_single_flush = dpu_encoder_phys_cmd_needs_single_flush;
	ops->hw_reset = dpu_encoder_helper_hw_reset;
	ops->irq_control = dpu_encoder_phys_cmd_irq_control;
	ops->restore = dpu_encoder_phys_cmd_enable_helper;
	ops->prepare_idle_pc = dpu_encoder_phys_cmd_prepare_idle_pc;
	ops->handle_post_kickoff = dpu_encoder_phys_cmd_handle_post_kickoff;
	ops->get_line_count = dpu_encoder_phys_cmd_get_line_count;
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
          int _len_ops0 = 1;
          struct dpu_encoder_phys_ops * ops = (struct dpu_encoder_phys_ops *) malloc(_len_ops0*sizeof(struct dpu_encoder_phys_ops));
          for(int _i0 = 0; _i0 < _len_ops0; _i0++) {
            ops[_i0].get_line_count = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].handle_post_kickoff = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].prepare_idle_pc = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].restore = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].irq_control = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].hw_reset = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].needs_single_flush = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].trigger_start = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].wait_for_vblank = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].wait_for_tx_complete = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].prepare_for_kickoff = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].wait_for_commit_done = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].control_vblank_irq = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].get_hw_resources = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].destroy = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].disable = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].enable = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].mode_fixup = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].mode_set = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].is_master = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dpu_encoder_phys_cmd_init_ops(ops);
          free(ops);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
