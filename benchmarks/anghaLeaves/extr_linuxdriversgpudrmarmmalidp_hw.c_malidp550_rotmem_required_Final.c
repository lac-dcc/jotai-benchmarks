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
typedef  int u16 ;
struct malidp_hw_device {int dummy; } ;

/* Variables and functions */
#define  DRM_FORMAT_ABGR1555 149 
#define  DRM_FORMAT_ABGR2101010 148 
#define  DRM_FORMAT_ABGR8888 147 
#define  DRM_FORMAT_ARGB2101010 146 
#define  DRM_FORMAT_ARGB8888 145 
#define  DRM_FORMAT_BGR565 144 
#define  DRM_FORMAT_BGR888 143 
#define  DRM_FORMAT_BGRA1010102 142 
#define  DRM_FORMAT_BGRA8888 141 
#define  DRM_FORMAT_BGRX8888 140 
#define  DRM_FORMAT_NV12 139 
#define  DRM_FORMAT_RGB565 138 
#define  DRM_FORMAT_RGB888 137 
#define  DRM_FORMAT_RGBA1010102 136 
#define  DRM_FORMAT_RGBA5551 135 
#define  DRM_FORMAT_RGBA8888 134 
#define  DRM_FORMAT_RGBX8888 133 
#define  DRM_FORMAT_UYVY 132 
#define  DRM_FORMAT_XBGR8888 131 
#define  DRM_FORMAT_XRGB8888 130 
#define  DRM_FORMAT_YUV420 129 
#define  DRM_FORMAT_YUYV 128 
 int EINVAL ; 

__attribute__((used)) static int malidp550_rotmem_required(struct malidp_hw_device *hwdev, u16 w, u16 h, u32 fmt)
{
	u32 bytes_per_col;

	/* raw RGB888 or BGR888 can't be rotated */
	if ((fmt == DRM_FORMAT_RGB888) || (fmt == DRM_FORMAT_BGR888))
		return -EINVAL;

	switch (fmt) {
	/* 8 lines at 4 bytes per pixel */
	case DRM_FORMAT_ARGB2101010:
	case DRM_FORMAT_ABGR2101010:
	case DRM_FORMAT_RGBA1010102:
	case DRM_FORMAT_BGRA1010102:
	case DRM_FORMAT_ARGB8888:
	case DRM_FORMAT_ABGR8888:
	case DRM_FORMAT_RGBA8888:
	case DRM_FORMAT_BGRA8888:
	case DRM_FORMAT_XRGB8888:
	case DRM_FORMAT_XBGR8888:
	case DRM_FORMAT_RGBX8888:
	case DRM_FORMAT_BGRX8888:
	case DRM_FORMAT_RGB888:
	case DRM_FORMAT_BGR888:
	/* 16 lines at 2 bytes per pixel */
	case DRM_FORMAT_RGBA5551:
	case DRM_FORMAT_ABGR1555:
	case DRM_FORMAT_RGB565:
	case DRM_FORMAT_BGR565:
	case DRM_FORMAT_UYVY:
	case DRM_FORMAT_YUYV:
		bytes_per_col = 32;
		break;
	/* 16 lines at 1.5 bytes per pixel */
	case DRM_FORMAT_NV12:
	case DRM_FORMAT_YUV420:
		bytes_per_col = 24;
		break;
	default:
		return -EINVAL;
	}

	return w * bytes_per_col;
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
          int w = 100;
          int h = 100;
          int fmt = 100;
          int _len_hwdev0 = 1;
          struct malidp_hw_device * hwdev = (struct malidp_hw_device *) malloc(_len_hwdev0*sizeof(struct malidp_hw_device));
          for(int _i0 = 0; _i0 < _len_hwdev0; _i0++) {
            hwdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = malidp550_rotmem_required(hwdev,w,h,fmt);
          printf("%d\n", benchRet); 
          free(hwdev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int w = 10;
          int h = 10;
          int fmt = 10;
          int _len_hwdev0 = 100;
          struct malidp_hw_device * hwdev = (struct malidp_hw_device *) malloc(_len_hwdev0*sizeof(struct malidp_hw_device));
          for(int _i0 = 0; _i0 < _len_hwdev0; _i0++) {
            hwdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = malidp550_rotmem_required(hwdev,w,h,fmt);
          printf("%d\n", benchRet); 
          free(hwdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
