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
 int EINVAL ; 
#define  V4L2_PIX_FMT_BGR24 143 
#define  V4L2_PIX_FMT_BGR32 142 
#define  V4L2_PIX_FMT_NV12 141 
#define  V4L2_PIX_FMT_NV16 140 
#define  V4L2_PIX_FMT_NV21 139 
#define  V4L2_PIX_FMT_NV61 138 
#define  V4L2_PIX_FMT_RGB24 137 
#define  V4L2_PIX_FMT_RGB32 136 
#define  V4L2_PIX_FMT_RGB565 135 
#define  V4L2_PIX_FMT_UYVY 134 
#define  V4L2_PIX_FMT_XBGR32 133 
#define  V4L2_PIX_FMT_XRGB32 132 
#define  V4L2_PIX_FMT_YUV420 131 
#define  V4L2_PIX_FMT_YUV422P 130 
#define  V4L2_PIX_FMT_YUYV 129 
#define  V4L2_PIX_FMT_YVU420 128 

int ipu_stride_to_bytes(u32 pixel_stride, u32 pixelformat)
{
	switch (pixelformat) {
	case V4L2_PIX_FMT_YUV420:
	case V4L2_PIX_FMT_YVU420:
	case V4L2_PIX_FMT_YUV422P:
	case V4L2_PIX_FMT_NV12:
	case V4L2_PIX_FMT_NV21:
	case V4L2_PIX_FMT_NV16:
	case V4L2_PIX_FMT_NV61:
		/*
		 * for the planar YUV formats, the stride passed to
		 * cpmem must be the stride in bytes of the Y plane.
		 * And all the planar YUV formats have an 8-bit
		 * Y component.
		 */
		return (8 * pixel_stride) >> 3;
	case V4L2_PIX_FMT_RGB565:
	case V4L2_PIX_FMT_YUYV:
	case V4L2_PIX_FMT_UYVY:
		return (16 * pixel_stride) >> 3;
	case V4L2_PIX_FMT_BGR24:
	case V4L2_PIX_FMT_RGB24:
		return (24 * pixel_stride) >> 3;
	case V4L2_PIX_FMT_BGR32:
	case V4L2_PIX_FMT_RGB32:
	case V4L2_PIX_FMT_XBGR32:
	case V4L2_PIX_FMT_XRGB32:
		return (32 * pixel_stride) >> 3;
	default:
		break;
	}

	return -EINVAL;
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
          int pixel_stride = 100;
          int pixelformat = 100;
          int benchRet = ipu_stride_to_bytes(pixel_stride,pixelformat);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int pixel_stride = 255;
          int pixelformat = 255;
          int benchRet = ipu_stride_to_bytes(pixel_stride,pixelformat);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int pixel_stride = 10;
          int pixelformat = 10;
          int benchRet = ipu_stride_to_bytes(pixel_stride,pixelformat);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
