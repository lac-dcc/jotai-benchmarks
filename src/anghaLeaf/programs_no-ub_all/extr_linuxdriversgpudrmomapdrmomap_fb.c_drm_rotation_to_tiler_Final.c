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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
 unsigned int DRM_MODE_REFLECT_X ; 
 unsigned int DRM_MODE_REFLECT_Y ; 
#define  DRM_MODE_ROTATE_0 131 
#define  DRM_MODE_ROTATE_180 130 
#define  DRM_MODE_ROTATE_270 129 
#define  DRM_MODE_ROTATE_90 128 
 unsigned int DRM_MODE_ROTATE_MASK ; 
 int MASK_XY_FLIP ; 
 int MASK_X_INVERT ; 
 int MASK_Y_INVERT ; 

__attribute__((used)) static u32 drm_rotation_to_tiler(unsigned int drm_rot)
{
	u32 orient;

	switch (drm_rot & DRM_MODE_ROTATE_MASK) {
	default:
	case DRM_MODE_ROTATE_0:
		orient = 0;
		break;
	case DRM_MODE_ROTATE_90:
		orient = MASK_XY_FLIP | MASK_X_INVERT;
		break;
	case DRM_MODE_ROTATE_180:
		orient = MASK_X_INVERT | MASK_Y_INVERT;
		break;
	case DRM_MODE_ROTATE_270:
		orient = MASK_XY_FLIP | MASK_Y_INVERT;
		break;
	}

	if (drm_rot & DRM_MODE_REFLECT_X)
		orient ^= MASK_X_INVERT;

	if (drm_rot & DRM_MODE_REFLECT_Y)
		orient ^= MASK_Y_INVERT;

	return orient;
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

    // big-arr
    case 0:
    {
          unsigned int drm_rot = 255;
          int benchRet = drm_rotation_to_tiler(drm_rot);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
