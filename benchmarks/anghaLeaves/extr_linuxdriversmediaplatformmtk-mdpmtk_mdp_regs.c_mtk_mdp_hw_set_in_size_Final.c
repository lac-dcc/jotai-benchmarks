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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int /*<<< orphan*/  height; int /*<<< orphan*/  width; int /*<<< orphan*/  top; int /*<<< orphan*/  left; } ;
struct mtk_mdp_frame {int /*<<< orphan*/  height; int /*<<< orphan*/  width; TYPE_3__ crop; } ;
struct TYPE_5__ {TYPE_1__* vsi; } ;
struct mtk_mdp_ctx {TYPE_2__ vpu; struct mtk_mdp_frame s_frame; } ;
struct mdp_config {int /*<<< orphan*/  h; int /*<<< orphan*/  w; scalar_t__ y; scalar_t__ x; int /*<<< orphan*/  crop_h; int /*<<< orphan*/  crop_w; int /*<<< orphan*/  crop_y; int /*<<< orphan*/  crop_x; } ;
struct TYPE_4__ {struct mdp_config src_config; } ;

/* Variables and functions */

void mtk_mdp_hw_set_in_size(struct mtk_mdp_ctx *ctx)
{
	struct mtk_mdp_frame *frame = &ctx->s_frame;
	struct mdp_config *config = &ctx->vpu.vsi->src_config;

	/* Set input pixel offset */
	config->crop_x = frame->crop.left;
	config->crop_y = frame->crop.top;

	/* Set input cropped size */
	config->crop_w = frame->crop.width;
	config->crop_h = frame->crop.height;

	/* Set input original size */
	config->x = 0;
	config->y = 0;
	config->w = frame->width;
	config->h = frame->height;
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
          struct mtk_mdp_ctx * ctx = (struct mtk_mdp_ctx *) malloc(_len_ctx0*sizeof(struct mtk_mdp_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__vpu_vsi0 = 1;
          ctx[_i0].vpu.vsi = (struct TYPE_4__ *) malloc(_len_ctx__i0__vpu_vsi0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__vpu_vsi0; _j0++) {
            ctx[_i0].vpu.vsi->src_config.h = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].vpu.vsi->src_config.w = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].vpu.vsi->src_config.y = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].vpu.vsi->src_config.x = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].vpu.vsi->src_config.crop_h = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].vpu.vsi->src_config.crop_w = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].vpu.vsi->src_config.crop_y = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].vpu.vsi->src_config.crop_x = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].s_frame.height = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].s_frame.width = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].s_frame.crop.height = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].s_frame.crop.width = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].s_frame.crop.top = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].s_frame.crop.left = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mtk_mdp_hw_set_in_size(ctx);
          free(ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
