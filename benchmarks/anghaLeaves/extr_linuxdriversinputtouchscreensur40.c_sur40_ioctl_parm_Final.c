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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int numerator; int denominator; } ;
struct TYPE_6__ {int readbuffers; TYPE_1__ timeperframe; int /*<<< orphan*/  capability; } ;
struct TYPE_5__ {TYPE_3__ capture; } ;
struct v4l2_streamparm {scalar_t__ type; TYPE_2__ parm; } ;
struct file {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 
 scalar_t__ V4L2_BUF_TYPE_VIDEO_CAPTURE ; 
 int /*<<< orphan*/  V4L2_CAP_TIMEPERFRAME ; 

__attribute__((used)) static int sur40_ioctl_parm(struct file *file, void *priv,
			    struct v4l2_streamparm *p)
{
	if (p->type != V4L2_BUF_TYPE_VIDEO_CAPTURE)
		return -EINVAL;

	p->parm.capture.capability = V4L2_CAP_TIMEPERFRAME;
	p->parm.capture.timeperframe.numerator = 1;
	p->parm.capture.timeperframe.denominator = 60;
	p->parm.capture.readbuffers = 3;
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
          void * priv;
          int _len_p0 = 1;
          struct v4l2_streamparm * p = (struct v4l2_streamparm *) malloc(_len_p0*sizeof(struct v4l2_streamparm));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].parm.capture.readbuffers = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].parm.capture.timeperframe.numerator = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].parm.capture.timeperframe.denominator = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].parm.capture.capability = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sur40_ioctl_parm(file,priv,p);
          printf("%d\n", benchRet); 
          free(file);
          free(p);
        
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
          void * priv;
          int _len_p0 = 65025;
          struct v4l2_streamparm * p = (struct v4l2_streamparm *) malloc(_len_p0*sizeof(struct v4l2_streamparm));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].parm.capture.readbuffers = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].parm.capture.timeperframe.numerator = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].parm.capture.timeperframe.denominator = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].parm.capture.capability = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sur40_ioctl_parm(file,priv,p);
          printf("%d\n", benchRet); 
          free(file);
          free(p);
        
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
          void * priv;
          int _len_p0 = 100;
          struct v4l2_streamparm * p = (struct v4l2_streamparm *) malloc(_len_p0*sizeof(struct v4l2_streamparm));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].parm.capture.readbuffers = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].parm.capture.timeperframe.numerator = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].parm.capture.timeperframe.denominator = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].parm.capture.capability = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sur40_ioctl_parm(file,priv,p);
          printf("%d\n", benchRet); 
          free(file);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
