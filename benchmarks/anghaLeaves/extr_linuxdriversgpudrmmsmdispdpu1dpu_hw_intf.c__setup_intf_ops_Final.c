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
struct dpu_hw_intf_ops {int /*<<< orphan*/  get_line_count; int /*<<< orphan*/  collect_misr; int /*<<< orphan*/  setup_misr; int /*<<< orphan*/  enable_timing; int /*<<< orphan*/  get_status; int /*<<< orphan*/  setup_prg_fetch; int /*<<< orphan*/  setup_timing_gen; } ;

/* Variables and functions */
 int /*<<< orphan*/  dpu_hw_intf_collect_misr ; 
 int /*<<< orphan*/  dpu_hw_intf_enable_timing_engine ; 
 int /*<<< orphan*/  dpu_hw_intf_get_line_count ; 
 int /*<<< orphan*/  dpu_hw_intf_get_status ; 
 int /*<<< orphan*/  dpu_hw_intf_setup_misr ; 
 int /*<<< orphan*/  dpu_hw_intf_setup_prg_fetch ; 
 int /*<<< orphan*/  dpu_hw_intf_setup_timing_engine ; 

__attribute__((used)) static void _setup_intf_ops(struct dpu_hw_intf_ops *ops,
		unsigned long cap)
{
	ops->setup_timing_gen = dpu_hw_intf_setup_timing_engine;
	ops->setup_prg_fetch  = dpu_hw_intf_setup_prg_fetch;
	ops->get_status = dpu_hw_intf_get_status;
	ops->enable_timing = dpu_hw_intf_enable_timing_engine;
	ops->setup_misr = dpu_hw_intf_setup_misr;
	ops->collect_misr = dpu_hw_intf_collect_misr;
	ops->get_line_count = dpu_hw_intf_get_line_count;
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
          struct dpu_hw_intf_ops * ops = (struct dpu_hw_intf_ops *) malloc(_len_ops0*sizeof(struct dpu_hw_intf_ops));
          for(int _i0 = 0; _i0 < _len_ops0; _i0++) {
            ops[_i0].get_line_count = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].collect_misr = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].setup_misr = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].enable_timing = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].get_status = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].setup_prg_fetch = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].setup_timing_gen = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _setup_intf_ops(ops,cap);
          free(ops);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
