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
typedef  int u32 ;

/* Variables and functions */
 int BDISP_ARGB8888 ; 
 int BDISP_NV12 ; 
 int BDISP_RGB565 ; 
 int BDISP_RGB888 ; 
 int BDISP_XRGB8888 ; 
 int BDISP_YUV_3B ; 
 int BLT_TTY_ALPHA_R ; 
 int BLT_TTY_BIG_END ; 
 int BLT_TTY_COL_SHIFT ; 
#define  V4L2_PIX_FMT_ABGR32 133 
#define  V4L2_PIX_FMT_NV12 132 
#define  V4L2_PIX_FMT_RGB24 131 
#define  V4L2_PIX_FMT_RGB565 130 
#define  V4L2_PIX_FMT_XBGR32 129 
#define  V4L2_PIX_FMT_YUV420 128 

__attribute__((used)) static u32 bdisp_hw_color_format(u32 pixelformat)
{
	u32 ret;

	switch (pixelformat) {
	case V4L2_PIX_FMT_YUV420:
		ret = (BDISP_YUV_3B << BLT_TTY_COL_SHIFT);
		break;
	case V4L2_PIX_FMT_NV12:
		ret = (BDISP_NV12 << BLT_TTY_COL_SHIFT) | BLT_TTY_BIG_END;
		break;
	case V4L2_PIX_FMT_RGB565:
		ret = (BDISP_RGB565 << BLT_TTY_COL_SHIFT);
		break;
	case V4L2_PIX_FMT_XBGR32: /* This V4L format actually refers to xRGB */
		ret = (BDISP_XRGB8888 << BLT_TTY_COL_SHIFT);
		break;
	case V4L2_PIX_FMT_RGB24:  /* RGB888 format */
		ret = (BDISP_RGB888 << BLT_TTY_COL_SHIFT) | BLT_TTY_BIG_END;
		break;
	case V4L2_PIX_FMT_ABGR32: /* This V4L format actually refers to ARGB */

	default:
		ret = (BDISP_ARGB8888 << BLT_TTY_COL_SHIFT) | BLT_TTY_ALPHA_R;
		break;
	}

	return ret;
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
          int pixelformat = 100;
          int benchRet = bdisp_hw_color_format(pixelformat);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int pixelformat = 255;
          int benchRet = bdisp_hw_color_format(pixelformat);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int pixelformat = 10;
          int benchRet = bdisp_hw_color_format(pixelformat);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
