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
typedef  int u32 ;

/* Variables and functions */
 int MSR_CORE_PERF_FIXED_CTR0 ; 
#define  MSR_CORE_PERF_FIXED_CTR_CTRL 133 
#define  MSR_CORE_PERF_GLOBAL_CTRL 132 
#define  MSR_CORE_PERF_GLOBAL_OVF_CTRL 131 
#define  MSR_CORE_PERF_GLOBAL_STATUS 130 
#define  MSR_IA32_DS_AREA 129 
#define  MSR_IA32_PEBS_ENABLE 128 
 int MSR_IA32_PERFCTR0 ; 
 int MSR_P6_EVNTSEL0 ; 
 int MSR_PMC_ALIAS_MASK ; 
 int MSR_TYPE_ARCH_COUNTER ; 
 int MSR_TYPE_ARCH_CTRL ; 
 int MSR_TYPE_COUNTER ; 
 int MSR_TYPE_CTRL ; 
 int MSR_TYPE_GLOBAL ; 
 int intel_num_arch_counters ; 
 int intel_num_fixed_counters ; 

__attribute__((used)) static int is_intel_pmu_msr(u32 msr_index, int *type, int *index)
{
	u32 msr_index_pmc;

	switch (msr_index) {
	case MSR_CORE_PERF_FIXED_CTR_CTRL:
	case MSR_IA32_DS_AREA:
	case MSR_IA32_PEBS_ENABLE:
		*type = MSR_TYPE_CTRL;
		return true;

	case MSR_CORE_PERF_GLOBAL_CTRL:
	case MSR_CORE_PERF_GLOBAL_STATUS:
	case MSR_CORE_PERF_GLOBAL_OVF_CTRL:
		*type = MSR_TYPE_GLOBAL;
		return true;

	default:

		if ((msr_index >= MSR_CORE_PERF_FIXED_CTR0) &&
		    (msr_index < MSR_CORE_PERF_FIXED_CTR0 +
				 intel_num_fixed_counters)) {
			*index = msr_index - MSR_CORE_PERF_FIXED_CTR0;
			*type = MSR_TYPE_COUNTER;
			return true;
		}

		if ((msr_index >= MSR_P6_EVNTSEL0) &&
		    (msr_index < MSR_P6_EVNTSEL0 +  intel_num_arch_counters)) {
			*index = msr_index - MSR_P6_EVNTSEL0;
			*type = MSR_TYPE_ARCH_CTRL;
			return true;
		}

		msr_index_pmc = msr_index & MSR_PMC_ALIAS_MASK;
		if ((msr_index_pmc >= MSR_IA32_PERFCTR0) &&
		    (msr_index_pmc < MSR_IA32_PERFCTR0 +
				     intel_num_arch_counters)) {
			*type = MSR_TYPE_ARCH_COUNTER;
			*index = msr_index_pmc - MSR_IA32_PERFCTR0;
			return true;
		}
		return false;
	}
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
          int msr_index = 100;
          int _len_type0 = 1;
          int * type = (int *) malloc(_len_type0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_type0; _i0++) {
            type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_index0 = 1;
          int * index = (int *) malloc(_len_index0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_index0; _i0++) {
            index[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_intel_pmu_msr(msr_index,type,index);
          printf("%d\n", benchRet); 
          free(type);
          free(index);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
