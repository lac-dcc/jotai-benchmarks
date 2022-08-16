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
struct v4l2_pix_format_mplane {int pixelformat; } ;

/* Variables and functions */
#define  V4L2_PIX_FMT_NV12 135 
#define  V4L2_PIX_FMT_NV16 134 
#define  V4L2_PIX_FMT_NV21 133 
#define  V4L2_PIX_FMT_NV61 132 
#define  V4L2_PIX_FMT_UYVY 131 
#define  V4L2_PIX_FMT_VYUY 130 
#define  V4L2_PIX_FMT_YUYV 129 
#define  V4L2_PIX_FMT_YVYU 128 

__attribute__((used)) static bool ceu_fmt_mplane(struct v4l2_pix_format_mplane *pix)
{
	switch (pix->pixelformat) {
	case V4L2_PIX_FMT_YUYV:
	case V4L2_PIX_FMT_UYVY:
	case V4L2_PIX_FMT_YVYU:
	case V4L2_PIX_FMT_VYUY:
		return false;
	case V4L2_PIX_FMT_NV16:
	case V4L2_PIX_FMT_NV61:
	case V4L2_PIX_FMT_NV12:
	case V4L2_PIX_FMT_NV21:
		return true;
	default:
		return false;
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
          int _len_pix0 = 1;
          struct v4l2_pix_format_mplane * pix = (struct v4l2_pix_format_mplane *) malloc(_len_pix0*sizeof(struct v4l2_pix_format_mplane));
          for(int _i0 = 0; _i0 < _len_pix0; _i0++) {
            pix[_i0].pixelformat = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ceu_fmt_mplane(pix);
          printf("%d\n", benchRet); 
          free(pix);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_pix0 = 100;
          struct v4l2_pix_format_mplane * pix = (struct v4l2_pix_format_mplane *) malloc(_len_pix0*sizeof(struct v4l2_pix_format_mplane));
          for(int _i0 = 0; _i0 < _len_pix0; _i0++) {
            pix[_i0].pixelformat = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ceu_fmt_mplane(pix);
          printf("%d\n", benchRet); 
          free(pix);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
