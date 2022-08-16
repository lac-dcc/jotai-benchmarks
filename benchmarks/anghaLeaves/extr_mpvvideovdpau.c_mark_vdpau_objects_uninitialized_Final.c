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
struct mp_vdpau_ctx {void* preemption_obj; void* vdp_device; TYPE_1__* video_surfaces; } ;
struct TYPE_2__ {int allocated; void* osurface; void* surface; } ;

/* Variables and functions */
 int MAX_VIDEO_SURFACES ; 
 void* VDP_INVALID_HANDLE ; 

__attribute__((used)) static void mark_vdpau_objects_uninitialized(struct mp_vdpau_ctx *ctx)
{
    for (int i = 0; i < MAX_VIDEO_SURFACES; i++) {
        ctx->video_surfaces[i].surface = VDP_INVALID_HANDLE;
        ctx->video_surfaces[i].osurface = VDP_INVALID_HANDLE;
        ctx->video_surfaces[i].allocated = false;
    }
    ctx->vdp_device = VDP_INVALID_HANDLE;
    ctx->preemption_obj = VDP_INVALID_HANDLE;
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
          int _len_ctx0 = 1;
          struct mp_vdpau_ctx * ctx = (struct mp_vdpau_ctx *) malloc(_len_ctx0*sizeof(struct mp_vdpau_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__video_surfaces0 = 1;
          ctx[_i0].video_surfaces = (struct TYPE_2__ *) malloc(_len_ctx__i0__video_surfaces0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__video_surfaces0; _j0++) {
            ctx[_i0].video_surfaces->allocated = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mark_vdpau_objects_uninitialized(ctx);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].video_surfaces);
          }
          free(ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
