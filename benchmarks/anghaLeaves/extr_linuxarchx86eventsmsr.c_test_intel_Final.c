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
       1            big-arr\n\
       2            big-arr-10x\n\
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
struct TYPE_2__ {scalar_t__ x86_vendor; int x86; int x86_model; } ;

/* Variables and functions */
#define  INTEL_FAM6_ATOM_AIRMONT 159 
#define  INTEL_FAM6_ATOM_DENVERTON 158 
#define  INTEL_FAM6_ATOM_GEMINI_LAKE 157 
#define  INTEL_FAM6_ATOM_GOLDMONT 156 
#define  INTEL_FAM6_ATOM_SILVERMONT1 155 
#define  INTEL_FAM6_ATOM_SILVERMONT2 154 
#define  INTEL_FAM6_BROADWELL_CORE 153 
#define  INTEL_FAM6_BROADWELL_GT3E 152 
#define  INTEL_FAM6_BROADWELL_X 151 
#define  INTEL_FAM6_BROADWELL_XEON_D 150 
#define  INTEL_FAM6_HASWELL_CORE 149 
#define  INTEL_FAM6_HASWELL_GT3E 148 
#define  INTEL_FAM6_HASWELL_ULT 147 
#define  INTEL_FAM6_HASWELL_X 146 
#define  INTEL_FAM6_IVYBRIDGE 145 
#define  INTEL_FAM6_IVYBRIDGE_X 144 
#define  INTEL_FAM6_KABYLAKE_DESKTOP 143 
#define  INTEL_FAM6_KABYLAKE_MOBILE 142 
#define  INTEL_FAM6_NEHALEM 141 
#define  INTEL_FAM6_NEHALEM_EP 140 
#define  INTEL_FAM6_NEHALEM_EX 139 
#define  INTEL_FAM6_NEHALEM_G 138 
#define  INTEL_FAM6_SANDYBRIDGE 137 
#define  INTEL_FAM6_SANDYBRIDGE_X 136 
#define  INTEL_FAM6_SKYLAKE_DESKTOP 135 
#define  INTEL_FAM6_SKYLAKE_MOBILE 134 
#define  INTEL_FAM6_SKYLAKE_X 133 
#define  INTEL_FAM6_WESTMERE 132 
#define  INTEL_FAM6_WESTMERE_EP 131 
#define  INTEL_FAM6_WESTMERE_EX 130 
#define  INTEL_FAM6_XEON_PHI_KNL 129 
#define  INTEL_FAM6_XEON_PHI_KNM 128 
 int PERF_MSR_PPERF ; 
 int PERF_MSR_SMI ; 
 scalar_t__ X86_VENDOR_INTEL ; 
 TYPE_1__ boot_cpu_data ; 

__attribute__((used)) static bool test_intel(int idx)
{
	if (boot_cpu_data.x86_vendor != X86_VENDOR_INTEL ||
	    boot_cpu_data.x86 != 6)
		return false;

	switch (boot_cpu_data.x86_model) {
	case INTEL_FAM6_NEHALEM:
	case INTEL_FAM6_NEHALEM_G:
	case INTEL_FAM6_NEHALEM_EP:
	case INTEL_FAM6_NEHALEM_EX:

	case INTEL_FAM6_WESTMERE:
	case INTEL_FAM6_WESTMERE_EP:
	case INTEL_FAM6_WESTMERE_EX:

	case INTEL_FAM6_SANDYBRIDGE:
	case INTEL_FAM6_SANDYBRIDGE_X:

	case INTEL_FAM6_IVYBRIDGE:
	case INTEL_FAM6_IVYBRIDGE_X:

	case INTEL_FAM6_HASWELL_CORE:
	case INTEL_FAM6_HASWELL_X:
	case INTEL_FAM6_HASWELL_ULT:
	case INTEL_FAM6_HASWELL_GT3E:

	case INTEL_FAM6_BROADWELL_CORE:
	case INTEL_FAM6_BROADWELL_XEON_D:
	case INTEL_FAM6_BROADWELL_GT3E:
	case INTEL_FAM6_BROADWELL_X:

	case INTEL_FAM6_ATOM_SILVERMONT1:
	case INTEL_FAM6_ATOM_SILVERMONT2:
	case INTEL_FAM6_ATOM_AIRMONT:

	case INTEL_FAM6_ATOM_GOLDMONT:
	case INTEL_FAM6_ATOM_DENVERTON:

	case INTEL_FAM6_ATOM_GEMINI_LAKE:

	case INTEL_FAM6_XEON_PHI_KNL:
	case INTEL_FAM6_XEON_PHI_KNM:
		if (idx == PERF_MSR_SMI)
			return true;
		break;

	case INTEL_FAM6_SKYLAKE_MOBILE:
	case INTEL_FAM6_SKYLAKE_DESKTOP:
	case INTEL_FAM6_SKYLAKE_X:
	case INTEL_FAM6_KABYLAKE_MOBILE:
	case INTEL_FAM6_KABYLAKE_DESKTOP:
		if (idx == PERF_MSR_SMI || idx == PERF_MSR_PPERF)
			return true;
		break;
	}

	return false;
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
          int idx = 100;
          int benchRet = test_intel(idx);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int idx = 255;
          int benchRet = test_intel(idx);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int idx = 10;
          int benchRet = test_intel(idx);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
