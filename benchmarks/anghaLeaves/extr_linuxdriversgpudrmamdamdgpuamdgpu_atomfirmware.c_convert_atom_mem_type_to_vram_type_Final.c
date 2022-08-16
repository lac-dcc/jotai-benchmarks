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
struct amdgpu_device {int flags; } ;

/* Variables and functions */
 int AMDGPU_VRAM_TYPE_DDR2 ; 
 int AMDGPU_VRAM_TYPE_DDR3 ; 
 int AMDGPU_VRAM_TYPE_DDR4 ; 
 int AMDGPU_VRAM_TYPE_GDDR5 ; 
 int AMDGPU_VRAM_TYPE_HBM ; 
 int AMDGPU_VRAM_TYPE_UNKNOWN ; 
 int AMD_IS_APU ; 
#define  ATOM_DGPU_VRAM_TYPE_GDDR5 135 
#define  ATOM_DGPU_VRAM_TYPE_HBM 134 
#define  Ddr2MemType 133 
#define  Ddr3MemType 132 
#define  Ddr4MemType 131 
#define  LpDdr2MemType 130 
#define  LpDdr3MemType 129 
#define  LpDdr4MemType 128 

__attribute__((used)) static int convert_atom_mem_type_to_vram_type (struct amdgpu_device *adev,
					       int atom_mem_type)
{
	int vram_type;

	if (adev->flags & AMD_IS_APU) {
		switch (atom_mem_type) {
		case Ddr2MemType:
		case LpDdr2MemType:
			vram_type = AMDGPU_VRAM_TYPE_DDR2;
			break;
		case Ddr3MemType:
		case LpDdr3MemType:
			vram_type = AMDGPU_VRAM_TYPE_DDR3;
			break;
		case Ddr4MemType:
		case LpDdr4MemType:
			vram_type = AMDGPU_VRAM_TYPE_DDR4;
			break;
		default:
			vram_type = AMDGPU_VRAM_TYPE_UNKNOWN;
			break;
		}
	} else {
		switch (atom_mem_type) {
		case ATOM_DGPU_VRAM_TYPE_GDDR5:
			vram_type = AMDGPU_VRAM_TYPE_GDDR5;
			break;
		case ATOM_DGPU_VRAM_TYPE_HBM:
			vram_type = AMDGPU_VRAM_TYPE_HBM;
			break;
		default:
			vram_type = AMDGPU_VRAM_TYPE_UNKNOWN;
			break;
		}
	}

	return vram_type;
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
          int atom_mem_type = 100;
          int _len_adev0 = 1;
          struct amdgpu_device * adev = (struct amdgpu_device *) malloc(_len_adev0*sizeof(struct amdgpu_device));
          for(int _i0 = 0; _i0 < _len_adev0; _i0++) {
            adev[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = convert_atom_mem_type_to_vram_type(adev,atom_mem_type);
          printf("%d\n", benchRet); 
          free(adev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int atom_mem_type = 10;
          int _len_adev0 = 100;
          struct amdgpu_device * adev = (struct amdgpu_device *) malloc(_len_adev0*sizeof(struct amdgpu_device));
          for(int _i0 = 0; _i0 < _len_adev0; _i0++) {
            adev[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = convert_atom_mem_type_to_vram_type(adev,atom_mem_type);
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
