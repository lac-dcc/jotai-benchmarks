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
struct dpu_hw_ctl_ops {int /*<<< orphan*/  get_bitmask_cdm; int /*<<< orphan*/  get_bitmask_intf; int /*<<< orphan*/  get_bitmask_mixer; int /*<<< orphan*/  get_bitmask_sspp; int /*<<< orphan*/  setup_blendstage; int /*<<< orphan*/  clear_all_blendstages; int /*<<< orphan*/  wait_reset_status; int /*<<< orphan*/  reset; int /*<<< orphan*/  setup_intf_cfg; int /*<<< orphan*/  trigger_pending; int /*<<< orphan*/  trigger_start; int /*<<< orphan*/  get_flush_register; int /*<<< orphan*/  trigger_flush; int /*<<< orphan*/  get_pending_flush; int /*<<< orphan*/  update_pending_flush; int /*<<< orphan*/  clear_pending_flush; } ;

/* Variables and functions */
 int /*<<< orphan*/  dpu_hw_ctl_clear_all_blendstages ; 
 int /*<<< orphan*/  dpu_hw_ctl_clear_pending_flush ; 
 int /*<<< orphan*/  dpu_hw_ctl_get_bitmask_cdm ; 
 int /*<<< orphan*/  dpu_hw_ctl_get_bitmask_intf ; 
 int /*<<< orphan*/  dpu_hw_ctl_get_bitmask_mixer ; 
 int /*<<< orphan*/  dpu_hw_ctl_get_bitmask_sspp ; 
 int /*<<< orphan*/  dpu_hw_ctl_get_flush_register ; 
 int /*<<< orphan*/  dpu_hw_ctl_get_pending_flush ; 
 int /*<<< orphan*/  dpu_hw_ctl_intf_cfg ; 
 int /*<<< orphan*/  dpu_hw_ctl_reset_control ; 
 int /*<<< orphan*/  dpu_hw_ctl_setup_blendstage ; 
 int /*<<< orphan*/  dpu_hw_ctl_trigger_flush ; 
 int /*<<< orphan*/  dpu_hw_ctl_trigger_pending ; 
 int /*<<< orphan*/  dpu_hw_ctl_trigger_start ; 
 int /*<<< orphan*/  dpu_hw_ctl_update_pending_flush ; 
 int /*<<< orphan*/  dpu_hw_ctl_wait_reset_status ; 

__attribute__((used)) static void _setup_ctl_ops(struct dpu_hw_ctl_ops *ops,
		unsigned long cap)
{
	ops->clear_pending_flush = dpu_hw_ctl_clear_pending_flush;
	ops->update_pending_flush = dpu_hw_ctl_update_pending_flush;
	ops->get_pending_flush = dpu_hw_ctl_get_pending_flush;
	ops->trigger_flush = dpu_hw_ctl_trigger_flush;
	ops->get_flush_register = dpu_hw_ctl_get_flush_register;
	ops->trigger_start = dpu_hw_ctl_trigger_start;
	ops->trigger_pending = dpu_hw_ctl_trigger_pending;
	ops->setup_intf_cfg = dpu_hw_ctl_intf_cfg;
	ops->reset = dpu_hw_ctl_reset_control;
	ops->wait_reset_status = dpu_hw_ctl_wait_reset_status;
	ops->clear_all_blendstages = dpu_hw_ctl_clear_all_blendstages;
	ops->setup_blendstage = dpu_hw_ctl_setup_blendstage;
	ops->get_bitmask_sspp = dpu_hw_ctl_get_bitmask_sspp;
	ops->get_bitmask_mixer = dpu_hw_ctl_get_bitmask_mixer;
	ops->get_bitmask_intf = dpu_hw_ctl_get_bitmask_intf;
	ops->get_bitmask_cdm = dpu_hw_ctl_get_bitmask_cdm;
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
          struct dpu_hw_ctl_ops * ops = (struct dpu_hw_ctl_ops *) malloc(_len_ops0*sizeof(struct dpu_hw_ctl_ops));
          for(int _i0 = 0; _i0 < _len_ops0; _i0++) {
            ops[_i0].get_bitmask_cdm = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].get_bitmask_intf = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].get_bitmask_mixer = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].get_bitmask_sspp = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].setup_blendstage = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].clear_all_blendstages = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].wait_reset_status = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].reset = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].setup_intf_cfg = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].trigger_pending = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].trigger_start = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].get_flush_register = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].trigger_flush = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].get_pending_flush = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].update_pending_flush = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].clear_pending_flush = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _setup_ctl_ops(ops,cap);
          free(ops);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
