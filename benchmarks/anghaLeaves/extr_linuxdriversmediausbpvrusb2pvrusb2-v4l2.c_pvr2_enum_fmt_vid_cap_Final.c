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

/* Type definitions */
struct v4l2_fmtdesc {int /*<<< orphan*/  pixelformat; scalar_t__ index; } ;
struct file {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 
 int /*<<< orphan*/  V4L2_PIX_FMT_MPEG ; 

__attribute__((used)) static int pvr2_enum_fmt_vid_cap(struct file *file, void *priv, struct v4l2_fmtdesc *fd)
{
	/* Only one format is supported: MPEG. */
	if (fd->index)
		return -EINVAL;

	fd->pixelformat = V4L2_PIX_FMT_MPEG;
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
          int _len_file0 = 65025;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
              file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * priv;
        
          int _len_fd0 = 65025;
          struct v4l2_fmtdesc * fd = (struct v4l2_fmtdesc *) malloc(_len_fd0*sizeof(struct v4l2_fmtdesc));
          for(int _i0 = 0; _i0 < _len_fd0; _i0++) {
              fd[_i0].pixelformat = ((-2 * (next_i()%2)) + 1) * next_i();
          fd[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = pvr2_enum_fmt_vid_cap(file,priv,fd);
          printf("%d\n", benchRet); 
          free(file);
          free(fd);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_file0 = 100;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
              file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * priv;
        
          int _len_fd0 = 100;
          struct v4l2_fmtdesc * fd = (struct v4l2_fmtdesc *) malloc(_len_fd0*sizeof(struct v4l2_fmtdesc));
          for(int _i0 = 0; _i0 < _len_fd0; _i0++) {
              fd[_i0].pixelformat = ((-2 * (next_i()%2)) + 1) * next_i();
          fd[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = pvr2_enum_fmt_vid_cap(file,priv,fd);
          printf("%d\n", benchRet); 
          free(file);
          free(fd);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_file0 = 1;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
              file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * priv;
        
          int _len_fd0 = 1;
          struct v4l2_fmtdesc * fd = (struct v4l2_fmtdesc *) malloc(_len_fd0*sizeof(struct v4l2_fmtdesc));
          for(int _i0 = 0; _i0 < _len_fd0; _i0++) {
              fd[_i0].pixelformat = ((-2 * (next_i()%2)) + 1) * next_i();
          fd[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = pvr2_enum_fmt_vid_cap(file,priv,fd);
          printf("%d\n", benchRet); 
          free(file);
          free(fd);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
