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
struct ti_sci_clk_ops {int /*<<< orphan*/  get_freq; int /*<<< orphan*/  set_freq; int /*<<< orphan*/  get_best_match_freq; int /*<<< orphan*/  get_num_parents; int /*<<< orphan*/  get_parent; int /*<<< orphan*/  set_parent; int /*<<< orphan*/  is_off; int /*<<< orphan*/  is_on; int /*<<< orphan*/  is_auto; int /*<<< orphan*/  put_clock; int /*<<< orphan*/  idle_clock; int /*<<< orphan*/  get_clock; } ;
struct ti_sci_dev_ops {int /*<<< orphan*/  get_device_resets; int /*<<< orphan*/  set_device_resets; int /*<<< orphan*/  is_transitioning; int /*<<< orphan*/  is_on; int /*<<< orphan*/  is_stop; int /*<<< orphan*/  is_idle; int /*<<< orphan*/  get_context_loss_count; int /*<<< orphan*/  is_valid; int /*<<< orphan*/  put_device; int /*<<< orphan*/  idle_device; int /*<<< orphan*/  get_device; } ;
struct ti_sci_core_ops {int /*<<< orphan*/  reboot_device; } ;
struct ti_sci_ops {struct ti_sci_clk_ops clk_ops; struct ti_sci_dev_ops dev_ops; struct ti_sci_core_ops core_ops; } ;
struct TYPE_2__ {struct ti_sci_ops ops; } ;
struct ti_sci_info {TYPE_1__ handle; } ;

/* Variables and functions */
 int /*<<< orphan*/  ti_sci_cmd_clk_get_freq ; 
 int /*<<< orphan*/  ti_sci_cmd_clk_get_match_freq ; 
 int /*<<< orphan*/  ti_sci_cmd_clk_get_num_parents ; 
 int /*<<< orphan*/  ti_sci_cmd_clk_get_parent ; 
 int /*<<< orphan*/  ti_sci_cmd_clk_is_auto ; 
 int /*<<< orphan*/  ti_sci_cmd_clk_is_off ; 
 int /*<<< orphan*/  ti_sci_cmd_clk_is_on ; 
 int /*<<< orphan*/  ti_sci_cmd_clk_set_freq ; 
 int /*<<< orphan*/  ti_sci_cmd_clk_set_parent ; 
 int /*<<< orphan*/  ti_sci_cmd_core_reboot ; 
 int /*<<< orphan*/  ti_sci_cmd_dev_get_clcnt ; 
 int /*<<< orphan*/  ti_sci_cmd_dev_is_idle ; 
 int /*<<< orphan*/  ti_sci_cmd_dev_is_on ; 
 int /*<<< orphan*/  ti_sci_cmd_dev_is_stop ; 
 int /*<<< orphan*/  ti_sci_cmd_dev_is_trans ; 
 int /*<<< orphan*/  ti_sci_cmd_dev_is_valid ; 
 int /*<<< orphan*/  ti_sci_cmd_get_clock ; 
 int /*<<< orphan*/  ti_sci_cmd_get_device ; 
 int /*<<< orphan*/  ti_sci_cmd_get_device_resets ; 
 int /*<<< orphan*/  ti_sci_cmd_idle_clock ; 
 int /*<<< orphan*/  ti_sci_cmd_idle_device ; 
 int /*<<< orphan*/  ti_sci_cmd_put_clock ; 
 int /*<<< orphan*/  ti_sci_cmd_put_device ; 
 int /*<<< orphan*/  ti_sci_cmd_set_device_resets ; 

__attribute__((used)) static void ti_sci_setup_ops(struct ti_sci_info *info)
{
	struct ti_sci_ops *ops = &info->handle.ops;
	struct ti_sci_core_ops *core_ops = &ops->core_ops;
	struct ti_sci_dev_ops *dops = &ops->dev_ops;
	struct ti_sci_clk_ops *cops = &ops->clk_ops;

	core_ops->reboot_device = ti_sci_cmd_core_reboot;

	dops->get_device = ti_sci_cmd_get_device;
	dops->idle_device = ti_sci_cmd_idle_device;
	dops->put_device = ti_sci_cmd_put_device;

	dops->is_valid = ti_sci_cmd_dev_is_valid;
	dops->get_context_loss_count = ti_sci_cmd_dev_get_clcnt;
	dops->is_idle = ti_sci_cmd_dev_is_idle;
	dops->is_stop = ti_sci_cmd_dev_is_stop;
	dops->is_on = ti_sci_cmd_dev_is_on;
	dops->is_transitioning = ti_sci_cmd_dev_is_trans;
	dops->set_device_resets = ti_sci_cmd_set_device_resets;
	dops->get_device_resets = ti_sci_cmd_get_device_resets;

	cops->get_clock = ti_sci_cmd_get_clock;
	cops->idle_clock = ti_sci_cmd_idle_clock;
	cops->put_clock = ti_sci_cmd_put_clock;
	cops->is_auto = ti_sci_cmd_clk_is_auto;
	cops->is_on = ti_sci_cmd_clk_is_on;
	cops->is_off = ti_sci_cmd_clk_is_off;

	cops->set_parent = ti_sci_cmd_clk_set_parent;
	cops->get_parent = ti_sci_cmd_clk_get_parent;
	cops->get_num_parents = ti_sci_cmd_clk_get_num_parents;

	cops->get_best_match_freq = ti_sci_cmd_clk_get_match_freq;
	cops->set_freq = ti_sci_cmd_clk_set_freq;
	cops->get_freq = ti_sci_cmd_clk_get_freq;
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
          int _len_info0 = 1;
          struct ti_sci_info * info = (struct ti_sci_info *) malloc(_len_info0*sizeof(struct ti_sci_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].handle.ops.clk_ops.get_freq = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].handle.ops.clk_ops.set_freq = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].handle.ops.clk_ops.get_best_match_freq = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].handle.ops.clk_ops.get_num_parents = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].handle.ops.clk_ops.get_parent = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].handle.ops.clk_ops.set_parent = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].handle.ops.clk_ops.is_off = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].handle.ops.clk_ops.is_on = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].handle.ops.clk_ops.is_auto = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].handle.ops.clk_ops.put_clock = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].handle.ops.clk_ops.idle_clock = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].handle.ops.clk_ops.get_clock = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].handle.ops.dev_ops.get_device_resets = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].handle.ops.dev_ops.set_device_resets = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].handle.ops.dev_ops.is_transitioning = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].handle.ops.dev_ops.is_on = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].handle.ops.dev_ops.is_stop = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].handle.ops.dev_ops.is_idle = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].handle.ops.dev_ops.get_context_loss_count = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].handle.ops.dev_ops.is_valid = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].handle.ops.dev_ops.put_device = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].handle.ops.dev_ops.idle_device = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].handle.ops.dev_ops.get_device = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].handle.ops.core_ops.reboot_device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ti_sci_setup_ops(info);
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
