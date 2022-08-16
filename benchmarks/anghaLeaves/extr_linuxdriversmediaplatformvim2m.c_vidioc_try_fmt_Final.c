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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct vim2m_fmt {int depth; } ;
struct TYPE_3__ {int height; int width; int bytesperline; int sizeimage; int /*<<< orphan*/  field; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;

/* Variables and functions */
 int DIM_ALIGN_MASK ; 
 int MAX_H ; 
 int MAX_W ; 
 int MIN_H ; 
 int MIN_W ; 
 int /*<<< orphan*/  V4L2_FIELD_NONE ; 

__attribute__((used)) static int vidioc_try_fmt(struct v4l2_format *f, struct vim2m_fmt *fmt)
{
	/* V4L2 specification suggests the driver corrects the format struct
	 * if any of the dimensions is unsupported */
	if (f->fmt.pix.height < MIN_H)
		f->fmt.pix.height = MIN_H;
	else if (f->fmt.pix.height > MAX_H)
		f->fmt.pix.height = MAX_H;

	if (f->fmt.pix.width < MIN_W)
		f->fmt.pix.width = MIN_W;
	else if (f->fmt.pix.width > MAX_W)
		f->fmt.pix.width = MAX_W;

	f->fmt.pix.width &= ~DIM_ALIGN_MASK;
	f->fmt.pix.bytesperline = (f->fmt.pix.width * fmt->depth) >> 3;
	f->fmt.pix.sizeimage = f->fmt.pix.height * f->fmt.pix.bytesperline;
	f->fmt.pix.field = V4L2_FIELD_NONE;

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
          int _len_f0 = 1;
          struct v4l2_format * f = (struct v4l2_format *) malloc(_len_f0*sizeof(struct v4l2_format));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
            f[_i0].fmt.pix.height = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.width = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.bytesperline = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.sizeimage = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].fmt.pix.field = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fmt0 = 1;
          struct vim2m_fmt * fmt = (struct vim2m_fmt *) malloc(_len_fmt0*sizeof(struct vim2m_fmt));
          for(int _i0 = 0; _i0 < _len_fmt0; _i0++) {
            fmt[_i0].depth = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vidioc_try_fmt(f,fmt);
          printf("%d\n", benchRet); 
          free(f);
          free(fmt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
