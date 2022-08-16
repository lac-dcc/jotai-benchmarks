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
struct drm_plane_state {scalar_t__ crtc_x; scalar_t__ crtc_y; scalar_t__ crtc_w; scalar_t__ crtc_h; } ;
struct TYPE_2__ {scalar_t__ hdisplay; scalar_t__ vdisplay; } ;
struct drm_crtc_state {TYPE_1__ mode; } ;

/* Variables and functions */

__attribute__((used)) static bool is_fullscreen(struct drm_crtc_state *cstate,
		struct drm_plane_state *pstate)
{
	return (pstate->crtc_x <= 0) && (pstate->crtc_y <= 0) &&
		((pstate->crtc_x + pstate->crtc_w) >= cstate->mode.hdisplay) &&
		((pstate->crtc_y + pstate->crtc_h) >= cstate->mode.vdisplay);
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
          int _len_cstate0 = 1;
          struct drm_crtc_state * cstate = (struct drm_crtc_state *) malloc(_len_cstate0*sizeof(struct drm_crtc_state));
          for(int _i0 = 0; _i0 < _len_cstate0; _i0++) {
            cstate[_i0].mode.hdisplay = ((-2 * (next_i()%2)) + 1) * next_i();
        cstate[_i0].mode.vdisplay = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pstate0 = 1;
          struct drm_plane_state * pstate = (struct drm_plane_state *) malloc(_len_pstate0*sizeof(struct drm_plane_state));
          for(int _i0 = 0; _i0 < _len_pstate0; _i0++) {
            pstate[_i0].crtc_x = ((-2 * (next_i()%2)) + 1) * next_i();
        pstate[_i0].crtc_y = ((-2 * (next_i()%2)) + 1) * next_i();
        pstate[_i0].crtc_w = ((-2 * (next_i()%2)) + 1) * next_i();
        pstate[_i0].crtc_h = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_fullscreen(cstate,pstate);
          printf("%d\n", benchRet); 
          free(cstate);
          free(pstate);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
