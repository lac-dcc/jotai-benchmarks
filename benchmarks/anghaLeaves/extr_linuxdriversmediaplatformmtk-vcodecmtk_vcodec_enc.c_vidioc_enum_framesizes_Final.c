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
struct v4l2_frmsizeenum {scalar_t__ index; scalar_t__ pixel_format; int /*<<< orphan*/  stepwise; int /*<<< orphan*/  type; } ;
struct file {int dummy; } ;
struct TYPE_2__ {scalar_t__ fourcc; int /*<<< orphan*/  stepwise; } ;

/* Variables and functions */
 int EINVAL ; 
 int NUM_SUPPORTED_FRAMESIZE ; 
 int /*<<< orphan*/  V4L2_FRMSIZE_TYPE_STEPWISE ; 
 TYPE_1__* mtk_venc_framesizes ; 

__attribute__((used)) static int vidioc_enum_framesizes(struct file *file, void *fh,
				  struct v4l2_frmsizeenum *fsize)
{
	int i = 0;

	if (fsize->index != 0)
		return -EINVAL;

	for (i = 0; i < NUM_SUPPORTED_FRAMESIZE; ++i) {
		if (fsize->pixel_format != mtk_venc_framesizes[i].fourcc)
			continue;

		fsize->type = V4L2_FRMSIZE_TYPE_STEPWISE;
		fsize->stepwise = mtk_venc_framesizes[i].stepwise;
		return 0;
	}

	return -EINVAL;
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
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_file0 = 65025;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
              file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * fh;
        
          int _len_fsize0 = 65025;
          struct v4l2_frmsizeenum * fsize = (struct v4l2_frmsizeenum *) malloc(_len_fsize0*sizeof(struct v4l2_frmsizeenum));
          for(int _i0 = 0; _i0 < _len_fsize0; _i0++) {
              fsize[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
          fsize[_i0].pixel_format = ((-2 * (next_i()%2)) + 1) * next_i();
          fsize[_i0].stepwise = ((-2 * (next_i()%2)) + 1) * next_i();
          fsize[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = vidioc_enum_framesizes(file,fh,fsize);
          printf("%d\n", benchRet); 
          free(file);
          free(fsize);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_file0 = 100;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
              file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * fh;
        
          int _len_fsize0 = 100;
          struct v4l2_frmsizeenum * fsize = (struct v4l2_frmsizeenum *) malloc(_len_fsize0*sizeof(struct v4l2_frmsizeenum));
          for(int _i0 = 0; _i0 < _len_fsize0; _i0++) {
              fsize[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
          fsize[_i0].pixel_format = ((-2 * (next_i()%2)) + 1) * next_i();
          fsize[_i0].stepwise = ((-2 * (next_i()%2)) + 1) * next_i();
          fsize[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = vidioc_enum_framesizes(file,fh,fsize);
          printf("%d\n", benchRet); 
          free(file);
          free(fsize);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_file0 = 1;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
              file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * fh;
        
          int _len_fsize0 = 1;
          struct v4l2_frmsizeenum * fsize = (struct v4l2_frmsizeenum *) malloc(_len_fsize0*sizeof(struct v4l2_frmsizeenum));
          for(int _i0 = 0; _i0 < _len_fsize0; _i0++) {
              fsize[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
          fsize[_i0].pixel_format = ((-2 * (next_i()%2)) + 1) * next_i();
          fsize[_i0].stepwise = ((-2 * (next_i()%2)) + 1) * next_i();
          fsize[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = vidioc_enum_framesizes(file,fh,fsize);
          printf("%d\n", benchRet); 
          free(file);
          free(fsize);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
