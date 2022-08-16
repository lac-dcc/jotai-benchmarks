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
       1            big-arr-10x\n\
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
typedef  int u32 ;
struct bcm2835_codec_ctx {void* quant; int /*<<< orphan*/  ycbcr_enc; void* xfer_func; void* colorspace; } ;

/* Variables and functions */
#define  MMAL_COLOR_SPACE_ITUR_BT601 129 
#define  MMAL_COLOR_SPACE_ITUR_BT709 128 
 void* V4L2_COLORSPACE_REC709 ; 
 void* V4L2_QUANTIZATION_LIM_RANGE ; 
 void* V4L2_XFER_FUNC_709 ; 
 int /*<<< orphan*/  V4L2_YCBCR_ENC_601 ; 
 int /*<<< orphan*/  V4L2_YCBCR_ENC_709 ; 

__attribute__((used)) static void color_mmal2v4l(struct bcm2835_codec_ctx *ctx, u32 mmal_color_space)
{
	switch (mmal_color_space) {
	case MMAL_COLOR_SPACE_ITUR_BT601:
		ctx->colorspace = V4L2_COLORSPACE_REC709;
		ctx->xfer_func = V4L2_XFER_FUNC_709;
		ctx->ycbcr_enc = V4L2_YCBCR_ENC_601;
		ctx->quant = V4L2_QUANTIZATION_LIM_RANGE;
		break;

	case MMAL_COLOR_SPACE_ITUR_BT709:
		ctx->colorspace = V4L2_COLORSPACE_REC709;
		ctx->xfer_func = V4L2_XFER_FUNC_709;
		ctx->ycbcr_enc = V4L2_YCBCR_ENC_709;
		ctx->quant = V4L2_QUANTIZATION_LIM_RANGE;
		break;
	}
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
          int mmal_color_space = 100;
          int _len_ctx0 = 1;
          struct bcm2835_codec_ctx * ctx = (struct bcm2835_codec_ctx *) malloc(_len_ctx0*sizeof(struct bcm2835_codec_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].ycbcr_enc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          color_mmal2v4l(ctx,mmal_color_space);
          free(ctx);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int mmal_color_space = 10;
          int _len_ctx0 = 100;
          struct bcm2835_codec_ctx * ctx = (struct bcm2835_codec_ctx *) malloc(_len_ctx0*sizeof(struct bcm2835_codec_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].ycbcr_enc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          color_mmal2v4l(ctx,mmal_color_space);
          free(ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
