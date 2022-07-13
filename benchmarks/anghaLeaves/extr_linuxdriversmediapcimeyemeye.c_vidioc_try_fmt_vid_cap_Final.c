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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ pixelformat; scalar_t__ field; int width; int height; int bytesperline; int sizeimage; scalar_t__ colorspace; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 
 scalar_t__ V4L2_FIELD_ANY ; 
 scalar_t__ V4L2_FIELD_NONE ; 
 scalar_t__ V4L2_PIX_FMT_MJPEG ; 
 scalar_t__ V4L2_PIX_FMT_YUYV ; 

__attribute__((used)) static int vidioc_try_fmt_vid_cap(struct file *file, void *fh,
				struct v4l2_format *f)
{
	if (f->fmt.pix.pixelformat != V4L2_PIX_FMT_YUYV &&
	    f->fmt.pix.pixelformat != V4L2_PIX_FMT_MJPEG)
		return -EINVAL;

	if (f->fmt.pix.field != V4L2_FIELD_ANY &&
	    f->fmt.pix.field != V4L2_FIELD_NONE)
		return -EINVAL;

	f->fmt.pix.field = V4L2_FIELD_NONE;

	if (f->fmt.pix.width <= 320) {
		f->fmt.pix.width = 320;
		f->fmt.pix.height = 240;
	} else {
		f->fmt.pix.width = 640;
		f->fmt.pix.height = 480;
	}

	f->fmt.pix.bytesperline = f->fmt.pix.width * 2;
	f->fmt.pix.sizeimage = f->fmt.pix.height *
			       f->fmt.pix.bytesperline;
	f->fmt.pix.colorspace = 0;

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
          int _len_file0 = 1;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
            file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * fh;
          int _len_f0 = 1;
          struct v4l2_format * f = (struct v4l2_format *) malloc(_len_f0*sizeof(struct v4l2_format));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
            f[_i0].fmt.pix.pixelformat = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.field = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.width = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.height = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.bytesperline = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.sizeimage = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.colorspace = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vidioc_try_fmt_vid_cap(file,fh,f);
          printf("%d\n", benchRet); 
          free(file);
          free(f);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_file0 = 65025;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
            file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * fh;
          int _len_f0 = 65025;
          struct v4l2_format * f = (struct v4l2_format *) malloc(_len_f0*sizeof(struct v4l2_format));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
            f[_i0].fmt.pix.pixelformat = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.field = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.width = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.height = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.bytesperline = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.sizeimage = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.colorspace = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vidioc_try_fmt_vid_cap(file,fh,f);
          printf("%d\n", benchRet); 
          free(file);
          free(f);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_file0 = 100;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
            file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * fh;
          int _len_f0 = 100;
          struct v4l2_format * f = (struct v4l2_format *) malloc(_len_f0*sizeof(struct v4l2_format));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
            f[_i0].fmt.pix.pixelformat = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.field = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.width = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.height = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.bytesperline = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.sizeimage = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.colorspace = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vidioc_try_fmt_vid_cap(file,fh,f);
          printf("%d\n", benchRet); 
          free(file);
          free(f);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
