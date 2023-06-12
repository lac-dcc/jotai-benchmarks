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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct TYPE_2__ {scalar_t__ fw_version; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_1__ uvd; } ;

/* Variables and functions */
 scalar_t__ CHIP_POLARIS10 ; 
 scalar_t__ CHIP_VEGAM ; 
 scalar_t__ FW_1_130_16 ; 

__attribute__((used)) static inline bool uvd_v6_0_enc_support(struct amdgpu_device *adev)
{
	return ((adev->asic_type >= CHIP_POLARIS10) &&
			(adev->asic_type <= CHIP_VEGAM) &&
			(!adev->uvd.fw_version || adev->uvd.fw_version >= FW_1_130_16));
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          int _len_adev0 = 65025;
          struct amdgpu_device * adev = (struct amdgpu_device *) malloc(_len_adev0*sizeof(struct amdgpu_device));
          for(int _i0 = 0; _i0 < _len_adev0; _i0++) {
              adev[_i0].asic_type = ((-2 * (next_i()%2)) + 1) * next_i();
          adev[_i0].uvd.fw_version = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = uvd_v6_0_enc_support(adev);
          printf("%d\n", benchRet); 
          free(adev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_adev0 = 100;
          struct amdgpu_device * adev = (struct amdgpu_device *) malloc(_len_adev0*sizeof(struct amdgpu_device));
          for(int _i0 = 0; _i0 < _len_adev0; _i0++) {
              adev[_i0].asic_type = ((-2 * (next_i()%2)) + 1) * next_i();
          adev[_i0].uvd.fw_version = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = uvd_v6_0_enc_support(adev);
          printf("%d\n", benchRet); 
          free(adev);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_adev0 = 1;
          struct amdgpu_device * adev = (struct amdgpu_device *) malloc(_len_adev0*sizeof(struct amdgpu_device));
          for(int _i0 = 0; _i0 < _len_adev0; _i0++) {
              adev[_i0].asic_type = ((-2 * (next_i()%2)) + 1) * next_i();
          adev[_i0].uvd.fw_version = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = uvd_v6_0_enc_support(adev);
          printf("%d\n", benchRet); 
          free(adev);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
