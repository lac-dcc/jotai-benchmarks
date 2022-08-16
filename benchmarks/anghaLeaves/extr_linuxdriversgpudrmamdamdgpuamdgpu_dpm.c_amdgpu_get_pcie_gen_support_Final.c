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
typedef  int u32 ;
struct amdgpu_device {int dummy; } ;
typedef  enum amdgpu_pcie_gen { ____Placeholder_amdgpu_pcie_gen } amdgpu_pcie_gen ;

/* Variables and functions */
#define  AMDGPU_PCIE_GEN1 130 
#define  AMDGPU_PCIE_GEN2 129 
#define  AMDGPU_PCIE_GEN3 128 
 int CAIL_PCIE_LINK_SPEED_SUPPORT_GEN2 ; 
 int CAIL_PCIE_LINK_SPEED_SUPPORT_GEN3 ; 

enum amdgpu_pcie_gen amdgpu_get_pcie_gen_support(struct amdgpu_device *adev,
						 u32 sys_mask,
						 enum amdgpu_pcie_gen asic_gen,
						 enum amdgpu_pcie_gen default_gen)
{
	switch (asic_gen) {
	case AMDGPU_PCIE_GEN1:
		return AMDGPU_PCIE_GEN1;
	case AMDGPU_PCIE_GEN2:
		return AMDGPU_PCIE_GEN2;
	case AMDGPU_PCIE_GEN3:
		return AMDGPU_PCIE_GEN3;
	default:
		if ((sys_mask & CAIL_PCIE_LINK_SPEED_SUPPORT_GEN3) &&
		    (default_gen == AMDGPU_PCIE_GEN3))
			return AMDGPU_PCIE_GEN3;
		else if ((sys_mask & CAIL_PCIE_LINK_SPEED_SUPPORT_GEN2) &&
			 (default_gen == AMDGPU_PCIE_GEN2))
			return AMDGPU_PCIE_GEN2;
		else
			return AMDGPU_PCIE_GEN1;
	}
	return AMDGPU_PCIE_GEN1;
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
          int sys_mask = 100;
          enum amdgpu_pcie_gen asic_gen = 0;
          enum amdgpu_pcie_gen default_gen = 0;
          int _len_adev0 = 1;
          struct amdgpu_device * adev = (struct amdgpu_device *) malloc(_len_adev0*sizeof(struct amdgpu_device));
          for(int _i0 = 0; _i0 < _len_adev0; _i0++) {
            adev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum amdgpu_pcie_gen benchRet = amdgpu_get_pcie_gen_support(adev,sys_mask,asic_gen,default_gen);
          free(adev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int sys_mask = 10;
          enum amdgpu_pcie_gen asic_gen = 0;
          enum amdgpu_pcie_gen default_gen = 0;
          int _len_adev0 = 100;
          struct amdgpu_device * adev = (struct amdgpu_device *) malloc(_len_adev0*sizeof(struct amdgpu_device));
          for(int _i0 = 0; _i0 < _len_adev0; _i0++) {
            adev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum amdgpu_pcie_gen benchRet = amdgpu_get_pcie_gen_support(adev,sys_mask,asic_gen,default_gen);
          free(adev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
