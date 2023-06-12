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
       0            empty\n\
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
struct bdisp_frame {int /*<<< orphan*/  field; TYPE_1__* fmt; } ;
struct TYPE_2__ {int pixelformat; } ;

/* Variables and functions */
 int /*<<< orphan*/  V4L2_FIELD_INTERLACED ; 
#define  V4L2_PIX_FMT_ABGR32 133 
#define  V4L2_PIX_FMT_NV12 132 
#define  V4L2_PIX_FMT_RGB24 131 
#define  V4L2_PIX_FMT_RGB565 130 
#define  V4L2_PIX_FMT_XBGR32 129 
#define  V4L2_PIX_FMT_YUV420 128 

__attribute__((used)) static const char *bdisp_fmt_to_str(struct bdisp_frame frame)
{
	switch (frame.fmt->pixelformat) {
	case V4L2_PIX_FMT_YUV420:
		return "YUV420P";
	case V4L2_PIX_FMT_NV12:
		if (frame.field == V4L2_FIELD_INTERLACED)
			return "NV12 interlaced";
		else
			return "NV12";
	case V4L2_PIX_FMT_RGB565:
		return "RGB16";
	case V4L2_PIX_FMT_RGB24:
		return "RGB24";
	case V4L2_PIX_FMT_XBGR32:
		return "XRGB";
	case V4L2_PIX_FMT_ABGR32:
		return "ARGB";
	default:
		return "????";
	}
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // empty
    case 0:
    {
          struct bdisp_frame frame;
          frame.field = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_frame_fmt0 = 1;
          frame.fmt = (struct TYPE_2__ *) malloc(_len_frame_fmt0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_frame_fmt0; _j0++) {
              frame.fmt->pixelformat = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          const char * benchRet = bdisp_fmt_to_str(frame);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(frame.fmt);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
