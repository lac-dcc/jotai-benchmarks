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
struct TYPE_2__ {scalar_t__ width; scalar_t__ height; scalar_t__ code; } ;
struct v4l2_subdev_format {TYPE_1__ format; } ;
struct v4l2_subdev {int dummy; } ;
struct media_link {int dummy; } ;

/* Variables and functions */
 int EPIPE ; 

__attribute__((used)) static int ipipe_link_validate(struct v4l2_subdev *sd, struct media_link *link,
			       struct v4l2_subdev_format *source_fmt,
			       struct v4l2_subdev_format *sink_fmt)
{
	/* Check if the two ends match */
	if (source_fmt->format.width != sink_fmt->format.width ||
	    source_fmt->format.height != sink_fmt->format.height)
		return -EPIPE;

	if (source_fmt->format.code != sink_fmt->format.code)
		return -EPIPE;

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
          int _len_sd0 = 1;
          struct v4l2_subdev * sd = (struct v4l2_subdev *) malloc(_len_sd0*sizeof(struct v4l2_subdev));
          for(int _i0 = 0; _i0 < _len_sd0; _i0++) {
            sd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_link0 = 1;
          struct media_link * link = (struct media_link *) malloc(_len_link0*sizeof(struct media_link));
          for(int _i0 = 0; _i0 < _len_link0; _i0++) {
            link[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_source_fmt0 = 1;
          struct v4l2_subdev_format * source_fmt = (struct v4l2_subdev_format *) malloc(_len_source_fmt0*sizeof(struct v4l2_subdev_format));
          for(int _i0 = 0; _i0 < _len_source_fmt0; _i0++) {
            source_fmt[_i0].format.width = ((-2 * (next_i()%2)) + 1) * next_i();
        source_fmt[_i0].format.height = ((-2 * (next_i()%2)) + 1) * next_i();
        source_fmt[_i0].format.code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sink_fmt0 = 1;
          struct v4l2_subdev_format * sink_fmt = (struct v4l2_subdev_format *) malloc(_len_sink_fmt0*sizeof(struct v4l2_subdev_format));
          for(int _i0 = 0; _i0 < _len_sink_fmt0; _i0++) {
            sink_fmt[_i0].format.width = ((-2 * (next_i()%2)) + 1) * next_i();
        sink_fmt[_i0].format.height = ((-2 * (next_i()%2)) + 1) * next_i();
        sink_fmt[_i0].format.code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ipipe_link_validate(sd,link,source_fmt,sink_fmt);
          printf("%d\n", benchRet); 
          free(sd);
          free(link);
          free(source_fmt);
          free(sink_fmt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
