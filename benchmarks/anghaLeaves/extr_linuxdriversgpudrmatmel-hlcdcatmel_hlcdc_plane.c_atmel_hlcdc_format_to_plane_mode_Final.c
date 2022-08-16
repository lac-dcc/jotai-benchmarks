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

/* Variables and functions */
 int ATMEL_HLCDC_ARGB1555_MODE ; 
 int ATMEL_HLCDC_ARGB4444_MODE ; 
 int ATMEL_HLCDC_ARGB8888_MODE ; 
 int ATMEL_HLCDC_AYUV_MODE ; 
 int ATMEL_HLCDC_C8_MODE ; 
 int ATMEL_HLCDC_NV21_MODE ; 
 int ATMEL_HLCDC_NV61_MODE ; 
 int ATMEL_HLCDC_RGB565_MODE ; 
 int ATMEL_HLCDC_RGB888_MODE ; 
 int ATMEL_HLCDC_RGBA4444_MODE ; 
 int ATMEL_HLCDC_RGBA8888_MODE ; 
 int ATMEL_HLCDC_UYVY_MODE ; 
 int ATMEL_HLCDC_VYUY_MODE ; 
 int ATMEL_HLCDC_XRGB4444_MODE ; 
 int ATMEL_HLCDC_XRGB8888_MODE ; 
 int ATMEL_HLCDC_YUV420_MODE ; 
 int ATMEL_HLCDC_YUV422_MODE ; 
 int ATMEL_HLCDC_YUYV_MODE ; 
 int ATMEL_HLCDC_YVYU_MODE ; 
#define  DRM_FORMAT_ARGB1555 146 
#define  DRM_FORMAT_ARGB4444 145 
#define  DRM_FORMAT_ARGB8888 144 
#define  DRM_FORMAT_AYUV 143 
#define  DRM_FORMAT_C8 142 
#define  DRM_FORMAT_NV21 141 
#define  DRM_FORMAT_NV61 140 
#define  DRM_FORMAT_RGB565 139 
#define  DRM_FORMAT_RGB888 138 
#define  DRM_FORMAT_RGBA4444 137 
#define  DRM_FORMAT_RGBA8888 136 
#define  DRM_FORMAT_UYVY 135 
#define  DRM_FORMAT_VYUY 134 
#define  DRM_FORMAT_XRGB4444 133 
#define  DRM_FORMAT_XRGB8888 132 
#define  DRM_FORMAT_YUV420 131 
#define  DRM_FORMAT_YUV422 130 
#define  DRM_FORMAT_YUYV 129 
#define  DRM_FORMAT_YVYU 128 
 int ENOTSUPP ; 

__attribute__((used)) static int atmel_hlcdc_format_to_plane_mode(u32 format, u32 *mode)
{
	switch (format) {
	case DRM_FORMAT_C8:
		*mode = ATMEL_HLCDC_C8_MODE;
		break;
	case DRM_FORMAT_XRGB4444:
		*mode = ATMEL_HLCDC_XRGB4444_MODE;
		break;
	case DRM_FORMAT_ARGB4444:
		*mode = ATMEL_HLCDC_ARGB4444_MODE;
		break;
	case DRM_FORMAT_RGBA4444:
		*mode = ATMEL_HLCDC_RGBA4444_MODE;
		break;
	case DRM_FORMAT_RGB565:
		*mode = ATMEL_HLCDC_RGB565_MODE;
		break;
	case DRM_FORMAT_RGB888:
		*mode = ATMEL_HLCDC_RGB888_MODE;
		break;
	case DRM_FORMAT_ARGB1555:
		*mode = ATMEL_HLCDC_ARGB1555_MODE;
		break;
	case DRM_FORMAT_XRGB8888:
		*mode = ATMEL_HLCDC_XRGB8888_MODE;
		break;
	case DRM_FORMAT_ARGB8888:
		*mode = ATMEL_HLCDC_ARGB8888_MODE;
		break;
	case DRM_FORMAT_RGBA8888:
		*mode = ATMEL_HLCDC_RGBA8888_MODE;
		break;
	case DRM_FORMAT_AYUV:
		*mode = ATMEL_HLCDC_AYUV_MODE;
		break;
	case DRM_FORMAT_YUYV:
		*mode = ATMEL_HLCDC_YUYV_MODE;
		break;
	case DRM_FORMAT_UYVY:
		*mode = ATMEL_HLCDC_UYVY_MODE;
		break;
	case DRM_FORMAT_YVYU:
		*mode = ATMEL_HLCDC_YVYU_MODE;
		break;
	case DRM_FORMAT_VYUY:
		*mode = ATMEL_HLCDC_VYUY_MODE;
		break;
	case DRM_FORMAT_NV21:
		*mode = ATMEL_HLCDC_NV21_MODE;
		break;
	case DRM_FORMAT_NV61:
		*mode = ATMEL_HLCDC_NV61_MODE;
		break;
	case DRM_FORMAT_YUV420:
		*mode = ATMEL_HLCDC_YUV420_MODE;
		break;
	case DRM_FORMAT_YUV422:
		*mode = ATMEL_HLCDC_YUV422_MODE;
		break;
	default:
		return -ENOTSUPP;
	}

	return 0;
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
          int format = 100;
          int _len_mode0 = 1;
          int * mode = (int *) malloc(_len_mode0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mode0; _i0++) {
            mode[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = atmel_hlcdc_format_to_plane_mode(format,mode);
          printf("%d\n", benchRet); 
          free(mode);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int format = 10;
          int _len_mode0 = 100;
          int * mode = (int *) malloc(_len_mode0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mode0; _i0++) {
            mode[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = atmel_hlcdc_format_to_plane_mode(format,mode);
          printf("%d\n", benchRet); 
          free(mode);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
