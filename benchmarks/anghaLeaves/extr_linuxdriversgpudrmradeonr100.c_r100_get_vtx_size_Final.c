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
       3            empty\n\
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
typedef  int uint32_t ;

/* Variables and functions */
 int RADEON_SE_VTX_FMT_FPALPHA ; 
 int RADEON_SE_VTX_FMT_FPCOLOR ; 
 int RADEON_SE_VTX_FMT_FPFOG ; 
 int RADEON_SE_VTX_FMT_FPSPEC ; 
 int RADEON_SE_VTX_FMT_N0 ; 
 int RADEON_SE_VTX_FMT_N1 ; 
 int RADEON_SE_VTX_FMT_PKCOLOR ; 
 int RADEON_SE_VTX_FMT_PKSPEC ; 
 int RADEON_SE_VTX_FMT_Q0 ; 
 int RADEON_SE_VTX_FMT_Q1 ; 
 int RADEON_SE_VTX_FMT_Q2 ; 
 int RADEON_SE_VTX_FMT_Q3 ; 
 int RADEON_SE_VTX_FMT_ST0 ; 
 int RADEON_SE_VTX_FMT_ST1 ; 
 int RADEON_SE_VTX_FMT_ST2 ; 
 int RADEON_SE_VTX_FMT_ST3 ; 
 int RADEON_SE_VTX_FMT_W0 ; 
 int RADEON_SE_VTX_FMT_W1 ; 
 int RADEON_SE_VTX_FMT_XY1 ; 
 int RADEON_SE_VTX_FMT_Z ; 
 int RADEON_SE_VTX_FMT_Z1 ; 

__attribute__((used)) static int r100_get_vtx_size(uint32_t vtx_fmt)
{
	int vtx_size;
	vtx_size = 2;
	/* ordered according to bits in spec */
	if (vtx_fmt & RADEON_SE_VTX_FMT_W0)
		vtx_size++;
	if (vtx_fmt & RADEON_SE_VTX_FMT_FPCOLOR)
		vtx_size += 3;
	if (vtx_fmt & RADEON_SE_VTX_FMT_FPALPHA)
		vtx_size++;
	if (vtx_fmt & RADEON_SE_VTX_FMT_PKCOLOR)
		vtx_size++;
	if (vtx_fmt & RADEON_SE_VTX_FMT_FPSPEC)
		vtx_size += 3;
	if (vtx_fmt & RADEON_SE_VTX_FMT_FPFOG)
		vtx_size++;
	if (vtx_fmt & RADEON_SE_VTX_FMT_PKSPEC)
		vtx_size++;
	if (vtx_fmt & RADEON_SE_VTX_FMT_ST0)
		vtx_size += 2;
	if (vtx_fmt & RADEON_SE_VTX_FMT_ST1)
		vtx_size += 2;
	if (vtx_fmt & RADEON_SE_VTX_FMT_Q1)
		vtx_size++;
	if (vtx_fmt & RADEON_SE_VTX_FMT_ST2)
		vtx_size += 2;
	if (vtx_fmt & RADEON_SE_VTX_FMT_Q2)
		vtx_size++;
	if (vtx_fmt & RADEON_SE_VTX_FMT_ST3)
		vtx_size += 2;
	if (vtx_fmt & RADEON_SE_VTX_FMT_Q3)
		vtx_size++;
	if (vtx_fmt & RADEON_SE_VTX_FMT_Q0)
		vtx_size++;
	/* blend weight */
	if (vtx_fmt & (0x7 << 15))
		vtx_size += (vtx_fmt >> 15) & 0x7;
	if (vtx_fmt & RADEON_SE_VTX_FMT_N0)
		vtx_size += 3;
	if (vtx_fmt & RADEON_SE_VTX_FMT_XY1)
		vtx_size += 2;
	if (vtx_fmt & RADEON_SE_VTX_FMT_Z1)
		vtx_size++;
	if (vtx_fmt & RADEON_SE_VTX_FMT_W1)
		vtx_size++;
	if (vtx_fmt & RADEON_SE_VTX_FMT_N1)
		vtx_size++;
	if (vtx_fmt & RADEON_SE_VTX_FMT_Z)
		vtx_size++;
	return vtx_size;
}

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
          // static_instructions_O0 : 95
          // dynamic_instructions_O0 : 95
          // ------------------------------- 
          // static_instructions_O1 : 88
          // dynamic_instructions_O1 : 88
          // ------------------------------- 
          // static_instructions_O2 : 88
          // dynamic_instructions_O2 : 88
          // ------------------------------- 
          // static_instructions_O3 : 88
          // dynamic_instructions_O3 : 88
          // ------------------------------- 
          // static_instructions_Ofast : 88
          // dynamic_instructions_Ofast : 88
          // ------------------------------- 
          // static_instructions_Os : 88
          // dynamic_instructions_Os : 88
          // ------------------------------- 
          // static_instructions_Oz : 88
          // dynamic_instructions_Oz : 88
          // ------------------------------- 

          int vtx_fmt = 100;
        
          int benchRet = r100_get_vtx_size(vtx_fmt);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 95
          // dynamic_instructions_O0 : 95
          // ------------------------------- 
          // static_instructions_O1 : 88
          // dynamic_instructions_O1 : 88
          // ------------------------------- 
          // static_instructions_O2 : 88
          // dynamic_instructions_O2 : 88
          // ------------------------------- 
          // static_instructions_O3 : 88
          // dynamic_instructions_O3 : 88
          // ------------------------------- 
          // static_instructions_Ofast : 88
          // dynamic_instructions_Ofast : 88
          // ------------------------------- 
          // static_instructions_Os : 88
          // dynamic_instructions_Os : 88
          // ------------------------------- 
          // static_instructions_Oz : 88
          // dynamic_instructions_Oz : 88
          // ------------------------------- 

          int vtx_fmt = 255;
        
          int benchRet = r100_get_vtx_size(vtx_fmt);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 95
          // dynamic_instructions_O0 : 95
          // ------------------------------- 
          // static_instructions_O1 : 88
          // dynamic_instructions_O1 : 88
          // ------------------------------- 
          // static_instructions_O2 : 88
          // dynamic_instructions_O2 : 88
          // ------------------------------- 
          // static_instructions_O3 : 88
          // dynamic_instructions_O3 : 88
          // ------------------------------- 
          // static_instructions_Ofast : 88
          // dynamic_instructions_Ofast : 88
          // ------------------------------- 
          // static_instructions_Os : 88
          // dynamic_instructions_Os : 88
          // ------------------------------- 
          // static_instructions_Oz : 88
          // dynamic_instructions_Oz : 88
          // ------------------------------- 

          int vtx_fmt = 10;
        
          int benchRet = r100_get_vtx_size(vtx_fmt);
          printf("%d\n", benchRet); 
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 100
          // dynamic_instructions_O0 : 100
          // ------------------------------- 
          // static_instructions_O1 : 88
          // dynamic_instructions_O1 : 88
          // ------------------------------- 
          // static_instructions_O2 : 88
          // dynamic_instructions_O2 : 88
          // ------------------------------- 
          // static_instructions_O3 : 88
          // dynamic_instructions_O3 : 88
          // ------------------------------- 
          // static_instructions_Ofast : 88
          // dynamic_instructions_Ofast : 88
          // ------------------------------- 
          // static_instructions_Os : 88
          // dynamic_instructions_Os : 88
          // ------------------------------- 
          // static_instructions_Oz : 88
          // dynamic_instructions_Oz : 88
          // ------------------------------- 

          int vtx_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = r100_get_vtx_size(vtx_fmt);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
