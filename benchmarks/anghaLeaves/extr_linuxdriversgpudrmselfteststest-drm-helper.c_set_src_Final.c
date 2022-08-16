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
struct drm_plane_state {unsigned int src_x; unsigned int src_y; unsigned int src_w; unsigned int src_h; } ;

/* Variables and functions */

__attribute__((used)) static void set_src(struct drm_plane_state *plane_state,
		    unsigned src_x, unsigned src_y,
		    unsigned src_w, unsigned src_h)
{
	plane_state->src_x = src_x;
	plane_state->src_y = src_y;
	plane_state->src_w = src_w;
	plane_state->src_h = src_h;
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
          unsigned int src_x = 100;
          unsigned int src_y = 100;
          unsigned int src_w = 100;
          unsigned int src_h = 100;
          int _len_plane_state0 = 1;
          struct drm_plane_state * plane_state = (struct drm_plane_state *) malloc(_len_plane_state0*sizeof(struct drm_plane_state));
          for(int _i0 = 0; _i0 < _len_plane_state0; _i0++) {
            plane_state[_i0].src_x = ((-2 * (next_i()%2)) + 1) * next_i();
        plane_state[_i0].src_y = ((-2 * (next_i()%2)) + 1) * next_i();
        plane_state[_i0].src_w = ((-2 * (next_i()%2)) + 1) * next_i();
        plane_state[_i0].src_h = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_src(plane_state,src_x,src_y,src_w,src_h);
          free(plane_state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
