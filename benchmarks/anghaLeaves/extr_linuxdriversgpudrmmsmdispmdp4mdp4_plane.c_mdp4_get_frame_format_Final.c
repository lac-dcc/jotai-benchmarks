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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct drm_framebuffer {scalar_t__ modifier; TYPE_1__* format; } ;
typedef  enum mdp4_frame_format { ____Placeholder_mdp4_frame_format } mdp4_frame_format ;
struct TYPE_2__ {scalar_t__ format; } ;

/* Variables and functions */
 scalar_t__ DRM_FORMAT_MOD_SAMSUNG_64_32_TILE ; 
 scalar_t__ DRM_FORMAT_NV12 ; 
 int FRAME_LINEAR ; 
 int FRAME_TILE_YCBCR_420 ; 

__attribute__((used)) static inline
enum mdp4_frame_format mdp4_get_frame_format(struct drm_framebuffer *fb)
{
	bool is_tile = false;

	if (fb->modifier == DRM_FORMAT_MOD_SAMSUNG_64_32_TILE)
		is_tile = true;

	if (fb->format->format == DRM_FORMAT_NV12 && is_tile)
		return FRAME_TILE_YCBCR_420;

	return FRAME_LINEAR;
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
          int _len_fb0 = 1;
          struct drm_framebuffer * fb = (struct drm_framebuffer *) malloc(_len_fb0*sizeof(struct drm_framebuffer));
          for(int _i0 = 0; _i0 < _len_fb0; _i0++) {
            fb[_i0].modifier = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fb__i0__format0 = 1;
          fb[_i0].format = (struct TYPE_2__ *) malloc(_len_fb__i0__format0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_fb__i0__format0; _j0++) {
            fb[_i0].format->format = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          enum mdp4_frame_format benchRet = mdp4_get_frame_format(fb);
          for(int _aux = 0; _aux < _len_fb0; _aux++) {
          free(fb[_aux].format);
          }
          free(fb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
