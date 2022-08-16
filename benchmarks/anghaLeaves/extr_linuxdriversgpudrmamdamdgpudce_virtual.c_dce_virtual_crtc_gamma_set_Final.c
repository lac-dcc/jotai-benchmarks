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
typedef  int /*<<< orphan*/  uint32_t ;
typedef  int /*<<< orphan*/  u16 ;
struct drm_modeset_acquire_ctx {int dummy; } ;
struct drm_crtc {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int dce_virtual_crtc_gamma_set(struct drm_crtc *crtc, u16 *red,
				      u16 *green, u16 *blue, uint32_t size,
				      struct drm_modeset_acquire_ctx *ctx)
{
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
          int size = 100;
          int _len_crtc0 = 1;
          struct drm_crtc * crtc = (struct drm_crtc *) malloc(_len_crtc0*sizeof(struct drm_crtc));
          for(int _i0 = 0; _i0 < _len_crtc0; _i0++) {
            crtc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_red0 = 1;
          int * red = (int *) malloc(_len_red0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_red0; _i0++) {
            red[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_green0 = 1;
          int * green = (int *) malloc(_len_green0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_green0; _i0++) {
            green[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_blue0 = 1;
          int * blue = (int *) malloc(_len_blue0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_blue0; _i0++) {
            blue[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx0 = 1;
          struct drm_modeset_acquire_ctx * ctx = (struct drm_modeset_acquire_ctx *) malloc(_len_ctx0*sizeof(struct drm_modeset_acquire_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dce_virtual_crtc_gamma_set(crtc,red,green,blue,size,ctx);
          printf("%d\n", benchRet); 
          free(crtc);
          free(red);
          free(green);
          free(blue);
          free(ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
