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
typedef  enum ltdc_pix_fmt { ____Placeholder_ltdc_pix_fmt } ltdc_pix_fmt ;

/* Variables and functions */
#define  DRM_FORMAT_ARGB1555 138 
#define  DRM_FORMAT_ARGB4444 137 
#define  DRM_FORMAT_ARGB8888 136 
#define  DRM_FORMAT_C8 135 
#define  DRM_FORMAT_RGB565 134 
#define  DRM_FORMAT_RGB888 133 
#define  DRM_FORMAT_RGBA8888 132 
#define  DRM_FORMAT_RGBX8888 131 
#define  DRM_FORMAT_XRGB1555 130 
#define  DRM_FORMAT_XRGB4444 129 
#define  DRM_FORMAT_XRGB8888 128 
 int PF_ARGB1555 ; 
 int PF_ARGB4444 ; 
 int PF_ARGB8888 ; 
 int PF_L8 ; 
 int PF_NONE ; 
 int PF_RGB565 ; 
 int PF_RGB888 ; 
 int PF_RGBA8888 ; 

__attribute__((used)) static inline enum ltdc_pix_fmt to_ltdc_pixelformat(u32 drm_fmt)
{
	enum ltdc_pix_fmt pf;

	switch (drm_fmt) {
	case DRM_FORMAT_ARGB8888:
	case DRM_FORMAT_XRGB8888:
		pf = PF_ARGB8888;
		break;
	case DRM_FORMAT_RGBA8888:
	case DRM_FORMAT_RGBX8888:
		pf = PF_RGBA8888;
		break;
	case DRM_FORMAT_RGB888:
		pf = PF_RGB888;
		break;
	case DRM_FORMAT_RGB565:
		pf = PF_RGB565;
		break;
	case DRM_FORMAT_ARGB1555:
	case DRM_FORMAT_XRGB1555:
		pf = PF_ARGB1555;
		break;
	case DRM_FORMAT_ARGB4444:
	case DRM_FORMAT_XRGB4444:
		pf = PF_ARGB4444;
		break;
	case DRM_FORMAT_C8:
		pf = PF_L8;
		break;
	default:
		pf = PF_NONE;
		break;
		/* Note: There are no DRM_FORMAT for AL44 and AL88 */
	}

	return pf;
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
          int drm_fmt = 100;
          enum ltdc_pix_fmt benchRet = to_ltdc_pixelformat(drm_fmt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int drm_fmt = 255;
          enum ltdc_pix_fmt benchRet = to_ltdc_pixelformat(drm_fmt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int drm_fmt = 10;
          enum ltdc_pix_fmt benchRet = to_ltdc_pixelformat(drm_fmt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
