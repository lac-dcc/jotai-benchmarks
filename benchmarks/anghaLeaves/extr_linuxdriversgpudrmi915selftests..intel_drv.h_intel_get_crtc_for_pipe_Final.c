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
struct intel_crtc {int dummy; } ;
struct drm_i915_private {struct intel_crtc** pipe_to_crtc_mapping; } ;
typedef  enum pipe { ____Placeholder_pipe } pipe ;

/* Variables and functions */

__attribute__((used)) static inline struct intel_crtc *
intel_get_crtc_for_pipe(struct drm_i915_private *dev_priv, enum pipe pipe)
{
	return dev_priv->pipe_to_crtc_mapping[pipe];
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
          enum pipe pipe = 0;
          int _len_dev_priv0 = 1;
          struct drm_i915_private * dev_priv = (struct drm_i915_private *) malloc(_len_dev_priv0*sizeof(struct drm_i915_private));
          for(int _i0 = 0; _i0 < _len_dev_priv0; _i0++) {
              int _len_dev_priv__i0__pipe_to_crtc_mapping0 = 1;
          dev_priv[_i0].pipe_to_crtc_mapping = (struct intel_crtc **) malloc(_len_dev_priv__i0__pipe_to_crtc_mapping0*sizeof(struct intel_crtc *));
          for(int _j0 = 0; _j0 < _len_dev_priv__i0__pipe_to_crtc_mapping0; _j0++) {
            int _len_dev_priv__i0__pipe_to_crtc_mapping1 = 1;
            dev_priv[_i0].pipe_to_crtc_mapping[_j0] = (struct intel_crtc *) malloc(_len_dev_priv__i0__pipe_to_crtc_mapping1*sizeof(struct intel_crtc));
            for(int _j1 = 0; _j1 < _len_dev_priv__i0__pipe_to_crtc_mapping1; _j1++) {
              dev_priv[_i0].pipe_to_crtc_mapping[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct intel_crtc * benchRet = intel_get_crtc_for_pipe(dev_priv,pipe);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_dev_priv0; _aux++) {
          free(*(dev_priv[_aux].pipe_to_crtc_mapping));
        free(dev_priv[_aux].pipe_to_crtc_mapping);
          }
          free(dev_priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
