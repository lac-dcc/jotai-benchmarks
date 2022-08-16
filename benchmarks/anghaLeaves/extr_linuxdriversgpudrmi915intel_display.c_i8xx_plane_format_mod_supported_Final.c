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
typedef  int u64 ;
typedef  int u32 ;
struct drm_plane {int dummy; } ;

/* Variables and functions */
#define  DRM_FORMAT_C8 133 
#define  DRM_FORMAT_MOD_LINEAR 132 
#define  DRM_FORMAT_RGB565 131 
#define  DRM_FORMAT_XRGB1555 130 
#define  DRM_FORMAT_XRGB8888 129 
#define  I915_FORMAT_MOD_X_TILED 128 

__attribute__((used)) static bool i8xx_plane_format_mod_supported(struct drm_plane *_plane,
					    u32 format, u64 modifier)
{
	switch (modifier) {
	case DRM_FORMAT_MOD_LINEAR:
	case I915_FORMAT_MOD_X_TILED:
		break;
	default:
		return false;
	}

	switch (format) {
	case DRM_FORMAT_C8:
	case DRM_FORMAT_RGB565:
	case DRM_FORMAT_XRGB1555:
	case DRM_FORMAT_XRGB8888:
		return modifier == DRM_FORMAT_MOD_LINEAR ||
			modifier == I915_FORMAT_MOD_X_TILED;
	default:
		return false;
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
          int format = 100;
          int modifier = 100;
          int _len__plane0 = 1;
          struct drm_plane * _plane = (struct drm_plane *) malloc(_len__plane0*sizeof(struct drm_plane));
          for(int _i0 = 0; _i0 < _len__plane0; _i0++) {
            _plane[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = i8xx_plane_format_mod_supported(_plane,format,modifier);
          printf("%d\n", benchRet); 
          free(_plane);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int format = 10;
          int modifier = 10;
          int _len__plane0 = 100;
          struct drm_plane * _plane = (struct drm_plane *) malloc(_len__plane0*sizeof(struct drm_plane));
          for(int _i0 = 0; _i0 < _len__plane0; _i0++) {
            _plane[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = i8xx_plane_format_mod_supported(_plane,format,modifier);
          printf("%d\n", benchRet); 
          free(_plane);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
