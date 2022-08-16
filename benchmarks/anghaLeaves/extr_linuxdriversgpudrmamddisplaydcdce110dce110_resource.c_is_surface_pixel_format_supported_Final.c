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
struct pipe_ctx {unsigned int pipe_idx; TYPE_1__* plane_state; } ;
struct TYPE_2__ {scalar_t__ format; } ;

/* Variables and functions */
 scalar_t__ SURFACE_PIXEL_FORMAT_VIDEO_BEGIN ; 

__attribute__((used)) static bool is_surface_pixel_format_supported(struct pipe_ctx *pipe_ctx, unsigned int underlay_idx)
{
	if (pipe_ctx->pipe_idx != underlay_idx)
		return true;
	if (!pipe_ctx->plane_state)
		return false;
	if (pipe_ctx->plane_state->format < SURFACE_PIXEL_FORMAT_VIDEO_BEGIN)
		return false;
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
          unsigned int underlay_idx = 100;
          int _len_pipe_ctx0 = 1;
          struct pipe_ctx * pipe_ctx = (struct pipe_ctx *) malloc(_len_pipe_ctx0*sizeof(struct pipe_ctx));
          for(int _i0 = 0; _i0 < _len_pipe_ctx0; _i0++) {
            pipe_ctx[_i0].pipe_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pipe_ctx__i0__plane_state0 = 1;
          pipe_ctx[_i0].plane_state = (struct TYPE_2__ *) malloc(_len_pipe_ctx__i0__plane_state0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pipe_ctx__i0__plane_state0; _j0++) {
            pipe_ctx[_i0].plane_state->format = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = is_surface_pixel_format_supported(pipe_ctx,underlay_idx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pipe_ctx0; _aux++) {
          free(pipe_ctx[_aux].plane_state);
          }
          free(pipe_ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
