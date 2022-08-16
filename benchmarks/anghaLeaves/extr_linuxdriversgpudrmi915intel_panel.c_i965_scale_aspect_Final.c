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
typedef  scalar_t__ u32 ;
struct drm_display_mode {scalar_t__ crtc_hdisplay; scalar_t__ crtc_vdisplay; } ;
struct TYPE_2__ {struct drm_display_mode adjusted_mode; } ;
struct intel_crtc_state {scalar_t__ pipe_src_h; scalar_t__ pipe_src_w; TYPE_1__ base; } ;

/* Variables and functions */
 scalar_t__ PFIT_ENABLE ; 
 scalar_t__ PFIT_SCALING_AUTO ; 
 scalar_t__ PFIT_SCALING_LETTER ; 
 scalar_t__ PFIT_SCALING_PILLAR ; 

__attribute__((used)) static void i965_scale_aspect(struct intel_crtc_state *pipe_config,
			      u32 *pfit_control)
{
	const struct drm_display_mode *adjusted_mode = &pipe_config->base.adjusted_mode;
	u32 scaled_width = adjusted_mode->crtc_hdisplay *
		pipe_config->pipe_src_h;
	u32 scaled_height = pipe_config->pipe_src_w *
		adjusted_mode->crtc_vdisplay;

	/* 965+ is easy, it does everything in hw */
	if (scaled_width > scaled_height)
		*pfit_control |= PFIT_ENABLE |
			PFIT_SCALING_PILLAR;
	else if (scaled_width < scaled_height)
		*pfit_control |= PFIT_ENABLE |
			PFIT_SCALING_LETTER;
	else if (adjusted_mode->crtc_hdisplay != pipe_config->pipe_src_w)
		*pfit_control |= PFIT_ENABLE | PFIT_SCALING_AUTO;
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
          int _len_pipe_config0 = 1;
          struct intel_crtc_state * pipe_config = (struct intel_crtc_state *) malloc(_len_pipe_config0*sizeof(struct intel_crtc_state));
          for(int _i0 = 0; _i0 < _len_pipe_config0; _i0++) {
            pipe_config[_i0].pipe_src_h = ((-2 * (next_i()%2)) + 1) * next_i();
        pipe_config[_i0].pipe_src_w = ((-2 * (next_i()%2)) + 1) * next_i();
        pipe_config[_i0].base.adjusted_mode.crtc_hdisplay = ((-2 * (next_i()%2)) + 1) * next_i();
        pipe_config[_i0].base.adjusted_mode.crtc_vdisplay = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pfit_control0 = 1;
          long * pfit_control = (long *) malloc(_len_pfit_control0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_pfit_control0; _i0++) {
            pfit_control[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          i965_scale_aspect(pipe_config,pfit_control);
          free(pipe_config);
          free(pfit_control);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
