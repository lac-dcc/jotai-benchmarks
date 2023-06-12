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
struct drm_plane_state {int crtc_x; int crtc_y; unsigned int crtc_w; unsigned int crtc_h; } ;

/* Variables and functions */

__attribute__((used)) static void set_crtc(struct drm_plane_state *plane_state,
		     int crtc_x, int crtc_y,
		     unsigned crtc_w, unsigned crtc_h)
{
	plane_state->crtc_x = crtc_x;
	plane_state->crtc_y = crtc_y;
	plane_state->crtc_w = crtc_w;
	plane_state->crtc_h = crtc_h;
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
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int crtc_x = 100;
        
          int crtc_y = 100;
        
          unsigned int crtc_w = 100;
        
          unsigned int crtc_h = 100;
        
          int _len_plane_state0 = 1;
          struct drm_plane_state * plane_state = (struct drm_plane_state *) malloc(_len_plane_state0*sizeof(struct drm_plane_state));
          for(int _i0 = 0; _i0 < _len_plane_state0; _i0++) {
              plane_state[_i0].crtc_x = ((-2 * (next_i()%2)) + 1) * next_i();
          plane_state[_i0].crtc_y = ((-2 * (next_i()%2)) + 1) * next_i();
          plane_state[_i0].crtc_w = ((-2 * (next_i()%2)) + 1) * next_i();
          plane_state[_i0].crtc_h = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          set_crtc(plane_state,crtc_x,crtc_y,crtc_w,crtc_h);
          free(plane_state);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int crtc_x = 255;
        
          int crtc_y = 255;
        
          unsigned int crtc_w = 255;
        
          unsigned int crtc_h = 255;
        
          int _len_plane_state0 = 65025;
          struct drm_plane_state * plane_state = (struct drm_plane_state *) malloc(_len_plane_state0*sizeof(struct drm_plane_state));
          for(int _i0 = 0; _i0 < _len_plane_state0; _i0++) {
              plane_state[_i0].crtc_x = ((-2 * (next_i()%2)) + 1) * next_i();
          plane_state[_i0].crtc_y = ((-2 * (next_i()%2)) + 1) * next_i();
          plane_state[_i0].crtc_w = ((-2 * (next_i()%2)) + 1) * next_i();
          plane_state[_i0].crtc_h = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          set_crtc(plane_state,crtc_x,crtc_y,crtc_w,crtc_h);
          free(plane_state);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int crtc_x = 10;
        
          int crtc_y = 10;
        
          unsigned int crtc_w = 10;
        
          unsigned int crtc_h = 10;
        
          int _len_plane_state0 = 100;
          struct drm_plane_state * plane_state = (struct drm_plane_state *) malloc(_len_plane_state0*sizeof(struct drm_plane_state));
          for(int _i0 = 0; _i0 < _len_plane_state0; _i0++) {
              plane_state[_i0].crtc_x = ((-2 * (next_i()%2)) + 1) * next_i();
          plane_state[_i0].crtc_y = ((-2 * (next_i()%2)) + 1) * next_i();
          plane_state[_i0].crtc_w = ((-2 * (next_i()%2)) + 1) * next_i();
          plane_state[_i0].crtc_h = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          set_crtc(plane_state,crtc_x,crtc_y,crtc_w,crtc_h);
          free(plane_state);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int crtc_x = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int crtc_y = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned int crtc_w = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned int crtc_h = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_plane_state0 = 1;
          struct drm_plane_state * plane_state = (struct drm_plane_state *) malloc(_len_plane_state0*sizeof(struct drm_plane_state));
          for(int _i0 = 0; _i0 < _len_plane_state0; _i0++) {
              plane_state[_i0].crtc_x = ((-2 * (next_i()%2)) + 1) * next_i();
          plane_state[_i0].crtc_y = ((-2 * (next_i()%2)) + 1) * next_i();
          plane_state[_i0].crtc_w = ((-2 * (next_i()%2)) + 1) * next_i();
          plane_state[_i0].crtc_h = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          set_crtc(plane_state,crtc_x,crtc_y,crtc_w,crtc_h);
          free(plane_state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
