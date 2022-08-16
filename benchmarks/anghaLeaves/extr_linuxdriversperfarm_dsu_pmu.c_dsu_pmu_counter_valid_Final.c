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
       1            big-arr-10x\n\
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
typedef  scalar_t__ u32 ;
struct dsu_pmu {scalar_t__ num_counters; } ;

/* Variables and functions */
 scalar_t__ DSU_PMU_IDX_CYCLE_COUNTER ; 

__attribute__((used)) static inline bool dsu_pmu_counter_valid(struct dsu_pmu *dsu_pmu, u32 idx)
{
	return (idx < dsu_pmu->num_counters) ||
	       (idx == DSU_PMU_IDX_CYCLE_COUNTER);
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
          long idx = 100;
          int _len_dsu_pmu0 = 1;
          struct dsu_pmu * dsu_pmu = (struct dsu_pmu *) malloc(_len_dsu_pmu0*sizeof(struct dsu_pmu));
          for(int _i0 = 0; _i0 < _len_dsu_pmu0; _i0++) {
            dsu_pmu[_i0].num_counters = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dsu_pmu_counter_valid(dsu_pmu,idx);
          printf("%d\n", benchRet); 
          free(dsu_pmu);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long idx = 10;
          int _len_dsu_pmu0 = 100;
          struct dsu_pmu * dsu_pmu = (struct dsu_pmu *) malloc(_len_dsu_pmu0*sizeof(struct dsu_pmu));
          for(int _i0 = 0; _i0 < _len_dsu_pmu0; _i0++) {
            dsu_pmu[_i0].num_counters = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dsu_pmu_counter_valid(dsu_pmu,idx);
          printf("%d\n", benchRet); 
          free(dsu_pmu);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
