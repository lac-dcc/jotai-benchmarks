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
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  int v4l2_std_id ;
typedef  enum tw5864_vid_std { ____Placeholder_tw5864_vid_std } tw5864_vid_std ;

/* Variables and functions */
 int STD_INVALID ; 
 int STD_NTSC ; 
 int STD_NTSC443 ; 
 int STD_PAL ; 
 int STD_PAL_60 ; 
 int STD_PAL_CN ; 
 int STD_PAL_M ; 
 int STD_SECAM ; 
 int V4L2_STD_NTSC_443 ; 
 int V4L2_STD_NTSC_M ; 
 int V4L2_STD_PAL_60 ; 
 int V4L2_STD_PAL_B ; 
 int V4L2_STD_PAL_M ; 
 int V4L2_STD_PAL_Nc ; 
 int V4L2_STD_SECAM_B ; 

__attribute__((used)) static enum tw5864_vid_std tw5864_from_v4l2_std(v4l2_std_id v4l2_std)
{
	if (v4l2_std & V4L2_STD_NTSC_M)
		return STD_NTSC;
	if (v4l2_std & V4L2_STD_PAL_B)
		return STD_PAL;
	if (v4l2_std & V4L2_STD_SECAM_B)
		return STD_SECAM;
	if (v4l2_std & V4L2_STD_NTSC_443)
		return STD_NTSC443;
	if (v4l2_std & V4L2_STD_PAL_M)
		return STD_PAL_M;
	if (v4l2_std & V4L2_STD_PAL_Nc)
		return STD_PAL_CN;
	if (v4l2_std & V4L2_STD_PAL_60)
		return STD_PAL_60;

	return STD_INVALID;
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
          int v4l2_std = 100;
          enum tw5864_vid_std benchRet = tw5864_from_v4l2_std(v4l2_std);
        
        break;
    }
    // big-arr
    case 1:
    {
          int v4l2_std = 255;
          enum tw5864_vid_std benchRet = tw5864_from_v4l2_std(v4l2_std);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int v4l2_std = 10;
          enum tw5864_vid_std benchRet = tw5864_from_v4l2_std(v4l2_std);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
