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

/* Type definitions */

/* Variables and functions */
#define  INTEL_FAM6_ATOM_DENVERTON 148 
#define  INTEL_FAM6_ATOM_GEMINI_LAKE 147 
#define  INTEL_FAM6_ATOM_GOLDMONT 146 
#define  INTEL_FAM6_BROADWELL_CORE 145 
#define  INTEL_FAM6_BROADWELL_GT3E 144 
#define  INTEL_FAM6_BROADWELL_X 143 
#define  INTEL_FAM6_BROADWELL_XEON_D 142 
#define  INTEL_FAM6_CANNONLAKE_MOBILE 141 
#define  INTEL_FAM6_HASWELL_CORE 140 
#define  INTEL_FAM6_HASWELL_GT3E 139 
#define  INTEL_FAM6_HASWELL_ULT 138 
#define  INTEL_FAM6_HASWELL_X 137 
#define  INTEL_FAM6_IVYBRIDGE 136 
#define  INTEL_FAM6_IVYBRIDGE_X 135 
#define  INTEL_FAM6_KABYLAKE_DESKTOP 134 
#define  INTEL_FAM6_KABYLAKE_MOBILE 133 
#define  INTEL_FAM6_SANDYBRIDGE 132 
#define  INTEL_FAM6_SANDYBRIDGE_X 131 
#define  INTEL_FAM6_SKYLAKE_DESKTOP 130 
#define  INTEL_FAM6_SKYLAKE_MOBILE 129 
#define  INTEL_FAM6_SKYLAKE_X 128 
 int /*<<< orphan*/  genuine_intel ; 

int has_snb_msrs(unsigned int family, unsigned int model)
{
	if (!genuine_intel)
		return 0;

	switch (model) {
	case INTEL_FAM6_SANDYBRIDGE:
	case INTEL_FAM6_SANDYBRIDGE_X:
	case INTEL_FAM6_IVYBRIDGE:	/* IVB */
	case INTEL_FAM6_IVYBRIDGE_X:	/* IVB Xeon */
	case INTEL_FAM6_HASWELL_CORE:	/* HSW */
	case INTEL_FAM6_HASWELL_X:	/* HSW */
	case INTEL_FAM6_HASWELL_ULT:	/* HSW */
	case INTEL_FAM6_HASWELL_GT3E:	/* HSW */
	case INTEL_FAM6_BROADWELL_CORE:	/* BDW */
	case INTEL_FAM6_BROADWELL_GT3E:	/* BDW */
	case INTEL_FAM6_BROADWELL_X:	/* BDX */
	case INTEL_FAM6_BROADWELL_XEON_D:	/* BDX-DE */
	case INTEL_FAM6_SKYLAKE_MOBILE:	/* SKL */
	case INTEL_FAM6_SKYLAKE_DESKTOP:	/* SKL */
	case INTEL_FAM6_KABYLAKE_MOBILE:	/* KBL */
	case INTEL_FAM6_KABYLAKE_DESKTOP:	/* KBL */
	case INTEL_FAM6_CANNONLAKE_MOBILE:	/* CNL */
	case INTEL_FAM6_SKYLAKE_X:	/* SKX */
	case INTEL_FAM6_ATOM_GOLDMONT:	/* BXT */
	case INTEL_FAM6_ATOM_GEMINI_LAKE:
	case INTEL_FAM6_ATOM_DENVERTON:	/* DNV */
		return 1;
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
          unsigned int family = 100;
          unsigned int model = 100;
          int benchRet = has_snb_msrs(family,model);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int family = 255;
          unsigned int model = 255;
          int benchRet = has_snb_msrs(family,model);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int family = 10;
          unsigned int model = 10;
          int benchRet = has_snb_msrs(family,model);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
