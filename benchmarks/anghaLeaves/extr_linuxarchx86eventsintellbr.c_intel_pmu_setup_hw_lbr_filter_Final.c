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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  unsigned long long u64 ;
struct hw_perf_event_extra {unsigned long long config; int /*<<< orphan*/  idx; } ;
struct TYPE_6__ {struct hw_perf_event_extra branch_reg; } ;
struct TYPE_5__ {unsigned long long branch_sample_type; } ;
struct perf_event {TYPE_2__ hw; TYPE_1__ attr; } ;
struct TYPE_7__ {scalar_t__ lbr_format; } ;
struct TYPE_8__ {unsigned long long* lbr_sel_map; unsigned long long lbr_sel_mask; TYPE_3__ intel_cap; } ;

/* Variables and functions */
 int EOPNOTSUPP ; 
 int /*<<< orphan*/  EXTRA_REG_LBR ; 
 unsigned long long LBR_CALL_STACK ; 
 scalar_t__ LBR_FORMAT_INFO ; 
 unsigned long long LBR_IGN ; 
 unsigned long long LBR_NOT_SUPP ; 
 unsigned long long LBR_NO_INFO ; 
 int PERF_SAMPLE_BRANCH_MAX_SHIFT ; 
 unsigned long long PERF_SAMPLE_BRANCH_NO_CYCLES ; 
 unsigned long long PERF_SAMPLE_BRANCH_NO_FLAGS ; 
 TYPE_4__ x86_pmu ; 

__attribute__((used)) static int intel_pmu_setup_hw_lbr_filter(struct perf_event *event)
{
	struct hw_perf_event_extra *reg;
	u64 br_type = event->attr.branch_sample_type;
	u64 mask = 0, v;
	int i;

	for (i = 0; i < PERF_SAMPLE_BRANCH_MAX_SHIFT; i++) {
		if (!(br_type & (1ULL << i)))
			continue;

		v = x86_pmu.lbr_sel_map[i];
		if (v == LBR_NOT_SUPP)
			return -EOPNOTSUPP;

		if (v != LBR_IGN)
			mask |= v;
	}

	reg = &event->hw.branch_reg;
	reg->idx = EXTRA_REG_LBR;

	/*
	 * The first 9 bits (LBR_SEL_MASK) in LBR_SELECT operate
	 * in suppress mode. So LBR_SELECT should be set to
	 * (~mask & LBR_SEL_MASK) | (mask & ~LBR_SEL_MASK)
	 * But the 10th bit LBR_CALL_STACK does not operate
	 * in suppress mode.
	 */
	reg->config = mask ^ (x86_pmu.lbr_sel_mask & ~LBR_CALL_STACK);

	if ((br_type & PERF_SAMPLE_BRANCH_NO_CYCLES) &&
	    (br_type & PERF_SAMPLE_BRANCH_NO_FLAGS) &&
	    (x86_pmu.intel_cap.lbr_format == LBR_FORMAT_INFO))
		reg->config |= LBR_NO_INFO;

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
          int _len_event0 = 1;
          struct perf_event * event = (struct perf_event *) malloc(_len_event0*sizeof(struct perf_event));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
            event[_i0].hw.branch_reg.config = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].hw.branch_reg.idx = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].attr.branch_sample_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = intel_pmu_setup_hw_lbr_filter(event);
          printf("%d\n", benchRet); 
          free(event);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
