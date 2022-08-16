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
struct drm_plane_state {scalar_t__ crtc; } ;
struct drm_plane {TYPE_1__* state; } ;
struct drm_atomic_state {int dummy; } ;
struct TYPE_2__ {scalar_t__ crtc; } ;

/* Variables and functions */

__attribute__((used)) static bool
plane_switching_crtc(struct drm_atomic_state *state,
		     struct drm_plane *plane,
		     struct drm_plane_state *plane_state)
{
	if (!plane->state->crtc || !plane_state->crtc)
		return false;

	if (plane->state->crtc == plane_state->crtc)
		return false;

	/* This could be refined, but currently there's no helper or driver code
	 * to implement direct switching of active planes nor userspace to take
	 * advantage of more direct plane switching without the intermediate
	 * full OFF state.
	 */
	return true;
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
          int _len_state0 = 1;
          struct drm_atomic_state * state = (struct drm_atomic_state *) malloc(_len_state0*sizeof(struct drm_atomic_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_plane0 = 1;
          struct drm_plane * plane = (struct drm_plane *) malloc(_len_plane0*sizeof(struct drm_plane));
          for(int _i0 = 0; _i0 < _len_plane0; _i0++) {
              int _len_plane__i0__state0 = 1;
          plane[_i0].state = (struct TYPE_2__ *) malloc(_len_plane__i0__state0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_plane__i0__state0; _j0++) {
            plane[_i0].state->crtc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_plane_state0 = 1;
          struct drm_plane_state * plane_state = (struct drm_plane_state *) malloc(_len_plane_state0*sizeof(struct drm_plane_state));
          for(int _i0 = 0; _i0 < _len_plane_state0; _i0++) {
            plane_state[_i0].crtc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = plane_switching_crtc(state,plane,plane_state);
          printf("%d\n", benchRet); 
          free(state);
          for(int _aux = 0; _aux < _len_plane0; _aux++) {
          free(plane[_aux].state);
          }
          free(plane);
          free(plane_state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
