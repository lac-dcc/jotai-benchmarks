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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct TYPE_4__ {int numerator; int denominator; } ;
struct TYPE_5__ {int readbuffers; TYPE_1__ timeperframe; } ;
struct TYPE_6__ {TYPE_2__ capture; } ;
struct v4l2_streamparm {TYPE_3__ parm; } ;
struct file {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int stk_vidioc_g_parm(struct file *filp,
		void *priv, struct v4l2_streamparm *sp)
{
	/*FIXME This is not correct */
	sp->parm.capture.timeperframe.numerator = 1;
	sp->parm.capture.timeperframe.denominator = 30;
	sp->parm.capture.readbuffers = 2;
	return 0;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          int _len_filp0 = 65025;
          struct file * filp = (struct file *) malloc(_len_filp0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_filp0; _i0++) {
              filp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * priv;
        
          int _len_sp0 = 65025;
          struct v4l2_streamparm * sp = (struct v4l2_streamparm *) malloc(_len_sp0*sizeof(struct v4l2_streamparm));
          for(int _i0 = 0; _i0 < _len_sp0; _i0++) {
              sp[_i0].parm.capture.readbuffers = ((-2 * (next_i()%2)) + 1) * next_i();
          sp[_i0].parm.capture.timeperframe.numerator = ((-2 * (next_i()%2)) + 1) * next_i();
          sp[_i0].parm.capture.timeperframe.denominator = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
        
          }
        
          int benchRet = stk_vidioc_g_parm(filp,priv,sp);
          printf("%d\n", benchRet); 
          free(filp);
          free(sp);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_filp0 = 100;
          struct file * filp = (struct file *) malloc(_len_filp0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_filp0; _i0++) {
              filp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * priv;
        
          int _len_sp0 = 100;
          struct v4l2_streamparm * sp = (struct v4l2_streamparm *) malloc(_len_sp0*sizeof(struct v4l2_streamparm));
          for(int _i0 = 0; _i0 < _len_sp0; _i0++) {
              sp[_i0].parm.capture.readbuffers = ((-2 * (next_i()%2)) + 1) * next_i();
          sp[_i0].parm.capture.timeperframe.numerator = ((-2 * (next_i()%2)) + 1) * next_i();
          sp[_i0].parm.capture.timeperframe.denominator = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
        
          }
        
          int benchRet = stk_vidioc_g_parm(filp,priv,sp);
          printf("%d\n", benchRet); 
          free(filp);
          free(sp);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_filp0 = 1;
          struct file * filp = (struct file *) malloc(_len_filp0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_filp0; _i0++) {
              filp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * priv;
        
          int _len_sp0 = 1;
          struct v4l2_streamparm * sp = (struct v4l2_streamparm *) malloc(_len_sp0*sizeof(struct v4l2_streamparm));
          for(int _i0 = 0; _i0 < _len_sp0; _i0++) {
              sp[_i0].parm.capture.readbuffers = ((-2 * (next_i()%2)) + 1) * next_i();
          sp[_i0].parm.capture.timeperframe.numerator = ((-2 * (next_i()%2)) + 1) * next_i();
          sp[_i0].parm.capture.timeperframe.denominator = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
        
          }
        
          int benchRet = stk_vidioc_g_parm(filp,priv,sp);
          printf("%d\n", benchRet); 
          free(filp);
          free(sp);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
