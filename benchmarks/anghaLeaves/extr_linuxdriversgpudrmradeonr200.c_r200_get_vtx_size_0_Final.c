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
typedef  int uint32_t ;

/* Variables and functions */
 int R200_VTX_DISCRETE_FOG ; 
 int R200_VTX_N0 ; 
 int R200_VTX_N1 ; 
 int R200_VTX_POINT_SIZE ; 
 int R200_VTX_PV_MATRIX_SEL ; 
 int R200_VTX_SHININESS_0 ; 
 int R200_VTX_SHININESS_1 ; 
 int R200_VTX_W0 ; 
 int R200_VTX_W1 ; 
 int R200_VTX_WEIGHT_COUNT_SHIFT ; 
 int R200_VTX_XY1 ; 
 int R200_VTX_Z0 ; 
 int R200_VTX_Z1 ; 

__attribute__((used)) static int r200_get_vtx_size_0(uint32_t vtx_fmt_0)
{
	int vtx_size, i;
	vtx_size = 2;

	if (vtx_fmt_0 & R200_VTX_Z0)
		vtx_size++;
	if (vtx_fmt_0 & R200_VTX_W0)
		vtx_size++;
	/* blend weight */
	if (vtx_fmt_0 & (0x7 << R200_VTX_WEIGHT_COUNT_SHIFT))
		vtx_size += (vtx_fmt_0 >> R200_VTX_WEIGHT_COUNT_SHIFT) & 0x7;
	if (vtx_fmt_0 & R200_VTX_PV_MATRIX_SEL)
		vtx_size++;
	if (vtx_fmt_0 & R200_VTX_N0)
		vtx_size += 3;
	if (vtx_fmt_0 & R200_VTX_POINT_SIZE)
		vtx_size++;
	if (vtx_fmt_0 & R200_VTX_DISCRETE_FOG)
		vtx_size++;
	if (vtx_fmt_0 & R200_VTX_SHININESS_0)
		vtx_size++;
	if (vtx_fmt_0 & R200_VTX_SHININESS_1)
		vtx_size++;
	for (i = 0; i < 8; i++) {
		int color_size = (vtx_fmt_0 >> (11 + 2*i)) & 0x3;
		switch (color_size) {
		case 0: break;
		case 1: vtx_size++; break;
		case 2: vtx_size += 3; break;
		case 3: vtx_size += 4; break;
		}
	}
	if (vtx_fmt_0 & R200_VTX_XY1)
		vtx_size += 2;
	if (vtx_fmt_0 & R200_VTX_Z1)
		vtx_size++;
	if (vtx_fmt_0 & R200_VTX_W1)
		vtx_size++;
	if (vtx_fmt_0 & R200_VTX_N1)
		vtx_size += 3;
	return vtx_size;
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
          int vtx_fmt_0 = 100;
          int benchRet = r200_get_vtx_size_0(vtx_fmt_0);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int vtx_fmt_0 = 255;
          int benchRet = r200_get_vtx_size_0(vtx_fmt_0);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int vtx_fmt_0 = 10;
          int benchRet = r200_get_vtx_size_0(vtx_fmt_0);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
