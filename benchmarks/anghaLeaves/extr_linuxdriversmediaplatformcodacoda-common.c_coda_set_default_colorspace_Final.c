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
struct v4l2_pix_format {scalar_t__ pixelformat; int width; int height; int colorspace; int /*<<< orphan*/  quantization; int /*<<< orphan*/  ycbcr_enc; int /*<<< orphan*/  xfer_func; } ;
typedef  enum v4l2_colorspace { ____Placeholder_v4l2_colorspace } v4l2_colorspace ;

/* Variables and functions */
 int V4L2_COLORSPACE_JPEG ; 
 int V4L2_COLORSPACE_REC709 ; 
 int V4L2_COLORSPACE_SMPTE170M ; 
 scalar_t__ V4L2_PIX_FMT_JPEG ; 
 int /*<<< orphan*/  V4L2_QUANTIZATION_DEFAULT ; 
 int /*<<< orphan*/  V4L2_XFER_FUNC_DEFAULT ; 
 int /*<<< orphan*/  V4L2_YCBCR_ENC_DEFAULT ; 

__attribute__((used)) static void coda_set_default_colorspace(struct v4l2_pix_format *fmt)
{
	enum v4l2_colorspace colorspace;

	if (fmt->pixelformat == V4L2_PIX_FMT_JPEG)
		colorspace = V4L2_COLORSPACE_JPEG;
	else if (fmt->width <= 720 && fmt->height <= 576)
		colorspace = V4L2_COLORSPACE_SMPTE170M;
	else
		colorspace = V4L2_COLORSPACE_REC709;

	fmt->colorspace = colorspace;
	fmt->xfer_func = V4L2_XFER_FUNC_DEFAULT;
	fmt->ycbcr_enc = V4L2_YCBCR_ENC_DEFAULT;
	fmt->quantization = V4L2_QUANTIZATION_DEFAULT;
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
          int _len_fmt0 = 1;
          struct v4l2_pix_format * fmt = (struct v4l2_pix_format *) malloc(_len_fmt0*sizeof(struct v4l2_pix_format));
          for(int _i0 = 0; _i0 < _len_fmt0; _i0++) {
            fmt[_i0].pixelformat = ((-2 * (next_i()%2)) + 1) * next_i();
        fmt[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        fmt[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        fmt[_i0].colorspace = ((-2 * (next_i()%2)) + 1) * next_i();
        fmt[_i0].quantization = ((-2 * (next_i()%2)) + 1) * next_i();
        fmt[_i0].ycbcr_enc = ((-2 * (next_i()%2)) + 1) * next_i();
        fmt[_i0].xfer_func = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          coda_set_default_colorspace(fmt);
          free(fmt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
