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
struct drm_crtc_state {scalar_t__ active_changed; scalar_t__ mode_changed; } ;
struct dc_stream_state {int mode_changed; } ;

/* Variables and functions */

__attribute__((used)) static void amdgpu_dm_crtc_copy_transient_flags(struct drm_crtc_state *crtc_state,
						struct dc_stream_state *stream_state)
{
	stream_state->mode_changed =
		crtc_state->mode_changed || crtc_state->active_changed;
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
          int _len_crtc_state0 = 1;
          struct drm_crtc_state * crtc_state = (struct drm_crtc_state *) malloc(_len_crtc_state0*sizeof(struct drm_crtc_state));
          for(int _i0 = 0; _i0 < _len_crtc_state0; _i0++) {
            crtc_state[_i0].active_changed = ((-2 * (next_i()%2)) + 1) * next_i();
        crtc_state[_i0].mode_changed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stream_state0 = 1;
          struct dc_stream_state * stream_state = (struct dc_stream_state *) malloc(_len_stream_state0*sizeof(struct dc_stream_state));
          for(int _i0 = 0; _i0 < _len_stream_state0; _i0++) {
            stream_state[_i0].mode_changed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          amdgpu_dm_crtc_copy_transient_flags(crtc_state,stream_state);
          free(crtc_state);
          free(stream_state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
