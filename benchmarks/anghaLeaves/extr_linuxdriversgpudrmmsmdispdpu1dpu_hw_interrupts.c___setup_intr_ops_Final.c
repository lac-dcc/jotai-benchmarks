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
struct dpu_hw_intr_ops {int /*<<< orphan*/  get_interrupt_status; int /*<<< orphan*/  clear_intr_status_nolock; int /*<<< orphan*/  clear_interrupt_status; int /*<<< orphan*/  get_interrupt_statuses; int /*<<< orphan*/  get_valid_interrupts; int /*<<< orphan*/  disable_all_irqs; int /*<<< orphan*/  clear_all_irqs; int /*<<< orphan*/  dispatch_irqs; int /*<<< orphan*/  disable_irq; int /*<<< orphan*/  enable_irq; int /*<<< orphan*/  irq_idx_lookup; int /*<<< orphan*/  set_mask; } ;

/* Variables and functions */
 int /*<<< orphan*/  dpu_hw_intr_clear_interrupt_status ; 
 int /*<<< orphan*/  dpu_hw_intr_clear_intr_status_nolock ; 
 int /*<<< orphan*/  dpu_hw_intr_clear_irqs ; 
 int /*<<< orphan*/  dpu_hw_intr_disable_irq ; 
 int /*<<< orphan*/  dpu_hw_intr_disable_irqs ; 
 int /*<<< orphan*/  dpu_hw_intr_dispatch_irq ; 
 int /*<<< orphan*/  dpu_hw_intr_enable_irq ; 
 int /*<<< orphan*/  dpu_hw_intr_get_interrupt_status ; 
 int /*<<< orphan*/  dpu_hw_intr_get_interrupt_statuses ; 
 int /*<<< orphan*/  dpu_hw_intr_get_valid_interrupts ; 
 int /*<<< orphan*/  dpu_hw_intr_irqidx_lookup ; 
 int /*<<< orphan*/  dpu_hw_intr_set_mask ; 

__attribute__((used)) static void __setup_intr_ops(struct dpu_hw_intr_ops *ops)
{
	ops->set_mask = dpu_hw_intr_set_mask;
	ops->irq_idx_lookup = dpu_hw_intr_irqidx_lookup;
	ops->enable_irq = dpu_hw_intr_enable_irq;
	ops->disable_irq = dpu_hw_intr_disable_irq;
	ops->dispatch_irqs = dpu_hw_intr_dispatch_irq;
	ops->clear_all_irqs = dpu_hw_intr_clear_irqs;
	ops->disable_all_irqs = dpu_hw_intr_disable_irqs;
	ops->get_valid_interrupts = dpu_hw_intr_get_valid_interrupts;
	ops->get_interrupt_statuses = dpu_hw_intr_get_interrupt_statuses;
	ops->clear_interrupt_status = dpu_hw_intr_clear_interrupt_status;
	ops->clear_intr_status_nolock = dpu_hw_intr_clear_intr_status_nolock;
	ops->get_interrupt_status = dpu_hw_intr_get_interrupt_status;
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
          struct dpu_hw_intr_ops * ops = (struct dpu_hw_intr_ops *) malloc(_len_ops0*sizeof(struct dpu_hw_intr_ops));
          for(int _i0 = 0; _i0 < _len_ops0; _i0++) {
            ops[_i0].get_interrupt_status = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].clear_intr_status_nolock = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].clear_interrupt_status = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].get_interrupt_statuses = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].get_valid_interrupts = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].disable_all_irqs = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].clear_all_irqs = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].dispatch_irqs = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].disable_irq = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].enable_irq = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].irq_idx_lookup = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].set_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __setup_intr_ops(ops);
          free(ops);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
