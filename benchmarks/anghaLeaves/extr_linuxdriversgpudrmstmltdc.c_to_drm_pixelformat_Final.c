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
typedef  int /*<<< orphan*/  u32 ;
typedef  enum ltdc_pix_fmt { ____Placeholder_ltdc_pix_fmt } ltdc_pix_fmt ;

/* Variables and functions */
 int /*<<< orphan*/  DRM_FORMAT_ARGB1555 ; 
 int /*<<< orphan*/  DRM_FORMAT_ARGB4444 ; 
 int /*<<< orphan*/  DRM_FORMAT_ARGB8888 ; 
 int /*<<< orphan*/  DRM_FORMAT_C8 ; 
 int /*<<< orphan*/  DRM_FORMAT_RGB565 ; 
 int /*<<< orphan*/  DRM_FORMAT_RGB888 ; 
 int /*<<< orphan*/  DRM_FORMAT_RGBA8888 ; 
#define  PF_AL44 137 
#define  PF_AL88 136 
#define  PF_ARGB1555 135 
#define  PF_ARGB4444 134 
#define  PF_ARGB8888 133 
#define  PF_L8 132 
#define  PF_NONE 131 
#define  PF_RGB565 130 
#define  PF_RGB888 129 
#define  PF_RGBA8888 128 

__attribute__((used)) static inline u32 to_drm_pixelformat(enum ltdc_pix_fmt pf)
{
	switch (pf) {
	case PF_ARGB8888:
		return DRM_FORMAT_ARGB8888;
	case PF_RGBA8888:
		return DRM_FORMAT_RGBA8888;
	case PF_RGB888:
		return DRM_FORMAT_RGB888;
	case PF_RGB565:
		return DRM_FORMAT_RGB565;
	case PF_ARGB1555:
		return DRM_FORMAT_ARGB1555;
	case PF_ARGB4444:
		return DRM_FORMAT_ARGB4444;
	case PF_L8:
		return DRM_FORMAT_C8;
	case PF_AL44:		/* No DRM support */
	case PF_AL88:		/* No DRM support */
	case PF_NONE:
	default:
		return 0;
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
          enum ltdc_pix_fmt pf = 0;
          int benchRet = to_drm_pixelformat(pf);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
