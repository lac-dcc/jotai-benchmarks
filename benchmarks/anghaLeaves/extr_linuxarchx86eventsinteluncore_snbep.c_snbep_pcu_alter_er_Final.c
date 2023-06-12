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
       0            empty\n\
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
typedef  int u64 ;
struct hw_perf_event_extra {int config; int idx; } ;
struct hw_perf_event {int config; struct hw_perf_event_extra extra_reg; } ;
struct perf_event {struct hw_perf_event hw; } ;

/* Variables and functions */

__attribute__((used)) static u64 snbep_pcu_alter_er(struct perf_event *event, int new_idx, bool modify)
{
	struct hw_perf_event *hwc = &event->hw;
	struct hw_perf_event_extra *reg1 = &hwc->extra_reg;
	u64 config = reg1->config;

	if (new_idx > reg1->idx)
		config <<= 8 * (new_idx - reg1->idx);
	else
		config >>= 8 * (reg1->idx - new_idx);

	if (modify) {
		hwc->config += new_idx - reg1->idx;
		reg1->config = config;
		reg1->idx = new_idx;
	}
	return config;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // empty
    case 0:
    {
          int new_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int modify = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_event0 = 1;
          struct perf_event * event = (struct perf_event *) malloc(_len_event0*sizeof(struct perf_event));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
              event[_i0].hw.config = ((-2 * (next_i()%2)) + 1) * next_i();
          event[_i0].hw.extra_reg.config = ((-2 * (next_i()%2)) + 1) * next_i();
          event[_i0].hw.extra_reg.idx = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int benchRet = snbep_pcu_alter_er(event,new_idx,modify);
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
