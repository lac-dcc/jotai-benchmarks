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
 int AMDGPU_VRAM_TYPE_DDR2 ; 
 int AMDGPU_VRAM_TYPE_DDR3 ; 
 int AMDGPU_VRAM_TYPE_GDDR1 ; 
 int AMDGPU_VRAM_TYPE_GDDR3 ; 
 int AMDGPU_VRAM_TYPE_GDDR4 ; 
 int AMDGPU_VRAM_TYPE_GDDR5 ; 
 int AMDGPU_VRAM_TYPE_HBM ; 
 int AMDGPU_VRAM_TYPE_UNKNOWN ; 
#define  MC_SEQ_MISC0__MT__DDR2 134 
#define  MC_SEQ_MISC0__MT__DDR3 133 
#define  MC_SEQ_MISC0__MT__GDDR1 132 
#define  MC_SEQ_MISC0__MT__GDDR3 131 
#define  MC_SEQ_MISC0__MT__GDDR4 130 
#define  MC_SEQ_MISC0__MT__GDDR5 129 
#define  MC_SEQ_MISC0__MT__HBM 128 

__attribute__((used)) static int gmc_v7_0_convert_vram_type(int mc_seq_vram_type)
{
	switch (mc_seq_vram_type) {
	case MC_SEQ_MISC0__MT__GDDR1:
		return AMDGPU_VRAM_TYPE_GDDR1;
	case MC_SEQ_MISC0__MT__DDR2:
		return AMDGPU_VRAM_TYPE_DDR2;
	case MC_SEQ_MISC0__MT__GDDR3:
		return AMDGPU_VRAM_TYPE_GDDR3;
	case MC_SEQ_MISC0__MT__GDDR4:
		return AMDGPU_VRAM_TYPE_GDDR4;
	case MC_SEQ_MISC0__MT__GDDR5:
		return AMDGPU_VRAM_TYPE_GDDR5;
	case MC_SEQ_MISC0__MT__HBM:
		return AMDGPU_VRAM_TYPE_HBM;
	case MC_SEQ_MISC0__MT__DDR3:
		return AMDGPU_VRAM_TYPE_DDR3;
	default:
		return AMDGPU_VRAM_TYPE_UNKNOWN;
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
          int mc_seq_vram_type = 100;
          int benchRet = gmc_v7_0_convert_vram_type(mc_seq_vram_type);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int mc_seq_vram_type = 255;
          int benchRet = gmc_v7_0_convert_vram_type(mc_seq_vram_type);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mc_seq_vram_type = 10;
          int benchRet = gmc_v7_0_convert_vram_type(mc_seq_vram_type);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
