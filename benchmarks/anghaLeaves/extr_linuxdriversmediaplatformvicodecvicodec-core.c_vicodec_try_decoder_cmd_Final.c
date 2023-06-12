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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {scalar_t__ pts; } ;
struct v4l2_decoder_cmd {scalar_t__ cmd; int flags; TYPE_1__ stop; } ;
struct file {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 
 scalar_t__ V4L2_DEC_CMD_STOP ; 
 int V4L2_DEC_CMD_STOP_IMMEDIATELY ; 
 int V4L2_DEC_CMD_STOP_TO_BLACK ; 

__attribute__((used)) static int vicodec_try_decoder_cmd(struct file *file, void *fh,
				struct v4l2_decoder_cmd *dc)
{
	if (dc->cmd != V4L2_DEC_CMD_STOP)
		return -EINVAL;

	if (dc->flags & V4L2_DEC_CMD_STOP_TO_BLACK)
		return -EINVAL;

	if (!(dc->flags & V4L2_DEC_CMD_STOP_IMMEDIATELY) && (dc->stop.pts != 0))
		return -EINVAL;

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
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int _len_file0 = 65025;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
              file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * fh;
        
          int _len_dc0 = 65025;
          struct v4l2_decoder_cmd * dc = (struct v4l2_decoder_cmd *) malloc(_len_dc0*sizeof(struct v4l2_decoder_cmd));
          for(int _i0 = 0; _i0 < _len_dc0; _i0++) {
              dc[_i0].cmd = ((-2 * (next_i()%2)) + 1) * next_i();
          dc[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          dc[_i0].stop.pts = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = vicodec_try_decoder_cmd(file,fh,dc);
          printf("%d\n", benchRet); 
          free(file);
          free(dc);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int _len_file0 = 100;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
              file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * fh;
        
          int _len_dc0 = 100;
          struct v4l2_decoder_cmd * dc = (struct v4l2_decoder_cmd *) malloc(_len_dc0*sizeof(struct v4l2_decoder_cmd));
          for(int _i0 = 0; _i0 < _len_dc0; _i0++) {
              dc[_i0].cmd = ((-2 * (next_i()%2)) + 1) * next_i();
          dc[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          dc[_i0].stop.pts = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = vicodec_try_decoder_cmd(file,fh,dc);
          printf("%d\n", benchRet); 
          free(file);
          free(dc);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int _len_file0 = 1;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
              file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * fh;
        
          int _len_dc0 = 1;
          struct v4l2_decoder_cmd * dc = (struct v4l2_decoder_cmd *) malloc(_len_dc0*sizeof(struct v4l2_decoder_cmd));
          for(int _i0 = 0; _i0 < _len_dc0; _i0++) {
              dc[_i0].cmd = ((-2 * (next_i()%2)) + 1) * next_i();
          dc[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          dc[_i0].stop.pts = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = vicodec_try_decoder_cmd(file,fh,dc);
          printf("%d\n", benchRet); 
          free(file);
          free(dc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
