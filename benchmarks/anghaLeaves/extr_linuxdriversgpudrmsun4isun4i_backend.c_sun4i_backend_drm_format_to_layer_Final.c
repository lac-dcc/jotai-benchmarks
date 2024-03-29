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
typedef  int u32 ;

/* Variables and functions */
#define  DRM_FORMAT_ARGB1555 135 
#define  DRM_FORMAT_ARGB4444 134 
#define  DRM_FORMAT_ARGB8888 133 
#define  DRM_FORMAT_RGB565 132 
#define  DRM_FORMAT_RGB888 131 
#define  DRM_FORMAT_RGBA4444 130 
#define  DRM_FORMAT_RGBA5551 129 
#define  DRM_FORMAT_XRGB8888 128 
 int EINVAL ; 
 int SUN4I_BACKEND_LAY_FBFMT_ARGB1555 ; 
 int SUN4I_BACKEND_LAY_FBFMT_ARGB4444 ; 
 int SUN4I_BACKEND_LAY_FBFMT_ARGB8888 ; 
 int SUN4I_BACKEND_LAY_FBFMT_RGB565 ; 
 int SUN4I_BACKEND_LAY_FBFMT_RGB888 ; 
 int SUN4I_BACKEND_LAY_FBFMT_RGBA4444 ; 
 int SUN4I_BACKEND_LAY_FBFMT_RGBA5551 ; 
 int SUN4I_BACKEND_LAY_FBFMT_XRGB8888 ; 

__attribute__((used)) static int sun4i_backend_drm_format_to_layer(u32 format, u32 *mode)
{
	switch (format) {
	case DRM_FORMAT_ARGB8888:
		*mode = SUN4I_BACKEND_LAY_FBFMT_ARGB8888;
		break;

	case DRM_FORMAT_ARGB4444:
		*mode = SUN4I_BACKEND_LAY_FBFMT_ARGB4444;
		break;

	case DRM_FORMAT_ARGB1555:
		*mode = SUN4I_BACKEND_LAY_FBFMT_ARGB1555;
		break;

	case DRM_FORMAT_RGBA5551:
		*mode = SUN4I_BACKEND_LAY_FBFMT_RGBA5551;
		break;

	case DRM_FORMAT_RGBA4444:
		*mode = SUN4I_BACKEND_LAY_FBFMT_RGBA4444;
		break;

	case DRM_FORMAT_XRGB8888:
		*mode = SUN4I_BACKEND_LAY_FBFMT_XRGB8888;
		break;

	case DRM_FORMAT_RGB888:
		*mode = SUN4I_BACKEND_LAY_FBFMT_RGB888;
		break;

	case DRM_FORMAT_RGB565:
		*mode = SUN4I_BACKEND_LAY_FBFMT_RGB565;
		break;

	default:
		return -EINVAL;
	}

	return 0;
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
          int format = 100;
        
          int _len_mode0 = 1;
          int * mode = (int *) malloc(_len_mode0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mode0; _i0++) {
            mode[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = sun4i_backend_drm_format_to_layer(format,mode);
          printf("%d\n", benchRet); 
          free(mode);
        
        break;
    }
    // big-arr
    case 1:
    {
          int format = 255;
        
          int _len_mode0 = 65025;
          int * mode = (int *) malloc(_len_mode0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mode0; _i0++) {
            mode[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = sun4i_backend_drm_format_to_layer(format,mode);
          printf("%d\n", benchRet); 
          free(mode);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int format = 10;
        
          int _len_mode0 = 100;
          int * mode = (int *) malloc(_len_mode0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mode0; _i0++) {
            mode[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = sun4i_backend_drm_format_to_layer(format,mode);
          printf("%d\n", benchRet); 
          free(mode);
        
        break;
    }
    // empty
    case 3:
    {
          int format = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_mode0 = 1;
          int * mode = (int *) malloc(_len_mode0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mode0; _i0++) {
            mode[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = sun4i_backend_drm_format_to_layer(format,mode);
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
