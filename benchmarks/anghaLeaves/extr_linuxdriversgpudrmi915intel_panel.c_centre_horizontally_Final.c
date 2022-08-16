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
typedef  int u32 ;
struct drm_display_mode {int crtc_hsync_end; int crtc_hsync_start; int crtc_hblank_end; int crtc_hblank_start; int crtc_hdisplay; } ;

/* Variables and functions */

__attribute__((used)) static void
centre_horizontally(struct drm_display_mode *adjusted_mode,
		    int width)
{
	u32 border, sync_pos, blank_width, sync_width;

	/* keep the hsync and hblank widths constant */
	sync_width = adjusted_mode->crtc_hsync_end - adjusted_mode->crtc_hsync_start;
	blank_width = adjusted_mode->crtc_hblank_end - adjusted_mode->crtc_hblank_start;
	sync_pos = (blank_width - sync_width + 1) / 2;

	border = (adjusted_mode->crtc_hdisplay - width + 1) / 2;
	border += border & 1; /* make the border even */

	adjusted_mode->crtc_hdisplay = width;
	adjusted_mode->crtc_hblank_start = width + border;
	adjusted_mode->crtc_hblank_end = adjusted_mode->crtc_hblank_start + blank_width;

	adjusted_mode->crtc_hsync_start = adjusted_mode->crtc_hblank_start + sync_pos;
	adjusted_mode->crtc_hsync_end = adjusted_mode->crtc_hsync_start + sync_width;
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
          int width = 100;
          int _len_adjusted_mode0 = 1;
          struct drm_display_mode * adjusted_mode = (struct drm_display_mode *) malloc(_len_adjusted_mode0*sizeof(struct drm_display_mode));
          for(int _i0 = 0; _i0 < _len_adjusted_mode0; _i0++) {
            adjusted_mode[_i0].crtc_hsync_end = ((-2 * (next_i()%2)) + 1) * next_i();
        adjusted_mode[_i0].crtc_hsync_start = ((-2 * (next_i()%2)) + 1) * next_i();
        adjusted_mode[_i0].crtc_hblank_end = ((-2 * (next_i()%2)) + 1) * next_i();
        adjusted_mode[_i0].crtc_hblank_start = ((-2 * (next_i()%2)) + 1) * next_i();
        adjusted_mode[_i0].crtc_hdisplay = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          centre_horizontally(adjusted_mode,width);
          free(adjusted_mode);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
