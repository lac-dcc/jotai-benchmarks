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
typedef  enum ipu_color_space { ____Placeholder_ipu_color_space } ipu_color_space ;

/* Variables and functions */
#define  DRM_FORMAT_ABGR1555 162 
#define  DRM_FORMAT_ABGR8888 161 
#define  DRM_FORMAT_ARGB1555 160 
#define  DRM_FORMAT_ARGB4444 159 
#define  DRM_FORMAT_ARGB8888 158 
#define  DRM_FORMAT_BGR565 157 
#define  DRM_FORMAT_BGR565_A8 156 
#define  DRM_FORMAT_BGR888 155 
#define  DRM_FORMAT_BGR888_A8 154 
#define  DRM_FORMAT_BGRA5551 153 
#define  DRM_FORMAT_BGRA8888 152 
#define  DRM_FORMAT_BGRX8888 151 
#define  DRM_FORMAT_BGRX8888_A8 150 
#define  DRM_FORMAT_NV12 149 
#define  DRM_FORMAT_NV16 148 
#define  DRM_FORMAT_NV21 147 
#define  DRM_FORMAT_NV61 146 
#define  DRM_FORMAT_RGB565 145 
#define  DRM_FORMAT_RGB565_A8 144 
#define  DRM_FORMAT_RGB888 143 
#define  DRM_FORMAT_RGB888_A8 142 
#define  DRM_FORMAT_RGBA5551 141 
#define  DRM_FORMAT_RGBA8888 140 
#define  DRM_FORMAT_RGBX8888 139 
#define  DRM_FORMAT_RGBX8888_A8 138 
#define  DRM_FORMAT_UYVY 137 
#define  DRM_FORMAT_XBGR8888 136 
#define  DRM_FORMAT_XRGB8888 135 
#define  DRM_FORMAT_YUV420 134 
#define  DRM_FORMAT_YUV422 133 
#define  DRM_FORMAT_YUV444 132 
#define  DRM_FORMAT_YUYV 131 
#define  DRM_FORMAT_YVU420 130 
#define  DRM_FORMAT_YVU422 129 
#define  DRM_FORMAT_YVU444 128 
 int IPUV3_COLORSPACE_RGB ; 
 int IPUV3_COLORSPACE_UNKNOWN ; 
 int IPUV3_COLORSPACE_YUV ; 

enum ipu_color_space ipu_drm_fourcc_to_colorspace(u32 drm_fourcc)
{
	switch (drm_fourcc) {
	case DRM_FORMAT_ARGB1555:
	case DRM_FORMAT_ABGR1555:
	case DRM_FORMAT_RGBA5551:
	case DRM_FORMAT_BGRA5551:
	case DRM_FORMAT_RGB565:
	case DRM_FORMAT_BGR565:
	case DRM_FORMAT_RGB888:
	case DRM_FORMAT_BGR888:
	case DRM_FORMAT_ARGB4444:
	case DRM_FORMAT_XRGB8888:
	case DRM_FORMAT_XBGR8888:
	case DRM_FORMAT_RGBX8888:
	case DRM_FORMAT_BGRX8888:
	case DRM_FORMAT_ARGB8888:
	case DRM_FORMAT_ABGR8888:
	case DRM_FORMAT_RGBA8888:
	case DRM_FORMAT_BGRA8888:
	case DRM_FORMAT_RGB565_A8:
	case DRM_FORMAT_BGR565_A8:
	case DRM_FORMAT_RGB888_A8:
	case DRM_FORMAT_BGR888_A8:
	case DRM_FORMAT_RGBX8888_A8:
	case DRM_FORMAT_BGRX8888_A8:
		return IPUV3_COLORSPACE_RGB;
	case DRM_FORMAT_YUYV:
	case DRM_FORMAT_UYVY:
	case DRM_FORMAT_YUV420:
	case DRM_FORMAT_YVU420:
	case DRM_FORMAT_YUV422:
	case DRM_FORMAT_YVU422:
	case DRM_FORMAT_YUV444:
	case DRM_FORMAT_YVU444:
	case DRM_FORMAT_NV12:
	case DRM_FORMAT_NV21:
	case DRM_FORMAT_NV16:
	case DRM_FORMAT_NV61:
		return IPUV3_COLORSPACE_YUV;
	default:
		return IPUV3_COLORSPACE_UNKNOWN;
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
          int drm_fourcc = 100;
          enum ipu_color_space benchRet = ipu_drm_fourcc_to_colorspace(drm_fourcc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int drm_fourcc = 255;
          enum ipu_color_space benchRet = ipu_drm_fourcc_to_colorspace(drm_fourcc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int drm_fourcc = 10;
          enum ipu_color_space benchRet = ipu_drm_fourcc_to_colorspace(drm_fourcc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
