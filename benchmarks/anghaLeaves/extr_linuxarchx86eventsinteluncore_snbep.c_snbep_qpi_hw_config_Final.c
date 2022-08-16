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
struct TYPE_2__ {int /*<<< orphan*/  config2; int /*<<< orphan*/  config1; } ;
struct hw_perf_event_extra {int /*<<< orphan*/  config; int /*<<< orphan*/  reg; scalar_t__ idx; } ;
struct hw_perf_event {int config; struct hw_perf_event_extra branch_reg; struct hw_perf_event_extra extra_reg; } ;
struct perf_event {TYPE_1__ attr; struct hw_perf_event hw; } ;
struct intel_uncore_box {int dummy; } ;

/* Variables and functions */
 int SNBEP_PMON_CTL_EV_SEL_MASK ; 
 int /*<<< orphan*/  SNBEP_Q_Py_PCI_PMON_PKT_MASK0 ; 
 int /*<<< orphan*/  SNBEP_Q_Py_PCI_PMON_PKT_MATCH0 ; 

__attribute__((used)) static int snbep_qpi_hw_config(struct intel_uncore_box *box, struct perf_event *event)
{
	struct hw_perf_event *hwc = &event->hw;
	struct hw_perf_event_extra *reg1 = &hwc->extra_reg;
	struct hw_perf_event_extra *reg2 = &hwc->branch_reg;

	if ((hwc->config & SNBEP_PMON_CTL_EV_SEL_MASK) == 0x38) {
		reg1->idx = 0;
		reg1->reg = SNBEP_Q_Py_PCI_PMON_PKT_MATCH0;
		reg1->config = event->attr.config1;
		reg2->reg = SNBEP_Q_Py_PCI_PMON_PKT_MASK0;
		reg2->config = event->attr.config2;
	}
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
          int _len_box0 = 1;
          struct intel_uncore_box * box = (struct intel_uncore_box *) malloc(_len_box0*sizeof(struct intel_uncore_box));
          for(int _i0 = 0; _i0 < _len_box0; _i0++) {
            box[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_event0 = 1;
          struct perf_event * event = (struct perf_event *) malloc(_len_event0*sizeof(struct perf_event));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
            event[_i0].attr.config2 = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].attr.config1 = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].hw.config = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].hw.branch_reg.config = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].hw.branch_reg.reg = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].hw.branch_reg.idx = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].hw.extra_reg.config = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].hw.extra_reg.reg = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].hw.extra_reg.idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = snbep_qpi_hw_config(box,event);
          printf("%d\n", benchRet); 
          free(box);
          free(event);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
