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
 int EINVAL ; 
#define  PLANE_CTL_FORMAT_INDEXED 132 
#define  PLANE_CTL_FORMAT_RGB_565 131 
#define  PLANE_CTL_FORMAT_XRGB_2101010 130 
#define  PLANE_CTL_FORMAT_XRGB_8888 129 
#define  PLANE_CTL_FORMAT_YUV422 128 

__attribute__((used)) static int skl_format_to_drm(int format, bool rgb_order, bool alpha,
	int yuv_order)
{
	int skl_pixel_formats_index = 12;

	switch (format) {
	case PLANE_CTL_FORMAT_INDEXED:
		skl_pixel_formats_index = 4;
		break;
	case PLANE_CTL_FORMAT_RGB_565:
		skl_pixel_formats_index = 5;
		break;
	case PLANE_CTL_FORMAT_XRGB_8888:
		if (rgb_order)
			skl_pixel_formats_index = alpha ? 6 : 7;
		else
			skl_pixel_formats_index = alpha ? 8 : 9;
		break;
	case PLANE_CTL_FORMAT_XRGB_2101010:
		skl_pixel_formats_index = rgb_order ? 10 : 11;
		break;
	case PLANE_CTL_FORMAT_YUV422:
		skl_pixel_formats_index = yuv_order >> 16;
		if (skl_pixel_formats_index > 3)
			return -EINVAL;
		break;

	default:
		break;
	}

	return skl_pixel_formats_index;
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
          int rgb_order = 100;
          int alpha = 100;
          int yuv_order = 100;
          int benchRet = skl_format_to_drm(format,rgb_order,alpha,yuv_order);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int format = 255;
          int rgb_order = 255;
          int alpha = 255;
          int yuv_order = 255;
          int benchRet = skl_format_to_drm(format,rgb_order,alpha,yuv_order);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int format = 10;
          int rgb_order = 10;
          int alpha = 10;
          int yuv_order = 10;
          int benchRet = skl_format_to_drm(format,rgb_order,alpha,yuv_order);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
