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
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int flags; } ;
struct drm_crtc_state {struct drm_display_mode mode; } ;
struct drm_connector_state {int dummy; } ;

/* Variables and functions */
 int DRM_MODE_FLAG_DBLCLK ; 
 int EINVAL ; 

__attribute__((used)) static int sun4i_hdmi_atomic_check(struct drm_encoder *encoder,
				   struct drm_crtc_state *crtc_state,
				   struct drm_connector_state *conn_state)
{
	struct drm_display_mode *mode = &crtc_state->mode;

	if (mode->flags & DRM_MODE_FLAG_DBLCLK)
		return -EINVAL;

	return 0;
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
          int _len_encoder0 = 1;
          struct drm_encoder * encoder = (struct drm_encoder *) malloc(_len_encoder0*sizeof(struct drm_encoder));
          for(int _i0 = 0; _i0 < _len_encoder0; _i0++) {
            encoder[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_crtc_state0 = 1;
          struct drm_crtc_state * crtc_state = (struct drm_crtc_state *) malloc(_len_crtc_state0*sizeof(struct drm_crtc_state));
          for(int _i0 = 0; _i0 < _len_crtc_state0; _i0++) {
            crtc_state[_i0].mode.flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_conn_state0 = 1;
          struct drm_connector_state * conn_state = (struct drm_connector_state *) malloc(_len_conn_state0*sizeof(struct drm_connector_state));
          for(int _i0 = 0; _i0 < _len_conn_state0; _i0++) {
            conn_state[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sun4i_hdmi_atomic_check(encoder,crtc_state,conn_state);
          printf("%d\n", benchRet); 
          free(encoder);
          free(crtc_state);
          free(conn_state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
