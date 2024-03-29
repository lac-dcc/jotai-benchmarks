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
struct v4l2_capability {int capabilities; } ;

/* Variables and functions */
 int V4L2_CAP_STREAMING ; 
 int V4L2_CAP_VIDEO_CAPTURE ; 
 int V4L2_CAP_VIDEO_M2M ; 
 int V4L2_CAP_VIDEO_OUTPUT ; 

__attribute__((used)) static inline int v4l2_splane_video(struct v4l2_capability *cap)
{
    if (cap->capabilities & (V4L2_CAP_VIDEO_CAPTURE | V4L2_CAP_VIDEO_OUTPUT) &&
        cap->capabilities & V4L2_CAP_STREAMING)
        return 1;

    if (cap->capabilities & V4L2_CAP_VIDEO_M2M)
        return 1;

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
          int _len_cap0 = 65025;
          struct v4l2_capability * cap = (struct v4l2_capability *) malloc(_len_cap0*sizeof(struct v4l2_capability));
          for(int _i0 = 0; _i0 < _len_cap0; _i0++) {
              cap[_i0].capabilities = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = v4l2_splane_video(cap);
          printf("%d\n", benchRet); 
          free(cap);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_cap0 = 100;
          struct v4l2_capability * cap = (struct v4l2_capability *) malloc(_len_cap0*sizeof(struct v4l2_capability));
          for(int _i0 = 0; _i0 < _len_cap0; _i0++) {
              cap[_i0].capabilities = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = v4l2_splane_video(cap);
          printf("%d\n", benchRet); 
          free(cap);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_cap0 = 1;
          struct v4l2_capability * cap = (struct v4l2_capability *) malloc(_len_cap0*sizeof(struct v4l2_capability));
          for(int _i0 = 0; _i0 < _len_cap0; _i0++) {
              cap[_i0].capabilities = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = v4l2_splane_video(cap);
          printf("%d\n", benchRet); 
          free(cap);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
