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

/* Type definitions */
typedef  int /*<<< orphan*/  v4l2_std_id ;
typedef  enum tw5864_vid_std { ____Placeholder_tw5864_vid_std } tw5864_vid_std ;

/* Variables and functions */
#define  STD_INVALID 135 
#define  STD_NTSC 134 
#define  STD_NTSC443 133 
#define  STD_PAL 132 
#define  STD_PAL_60 131 
#define  STD_PAL_CN 130 
#define  STD_PAL_M 129 
#define  STD_SECAM 128 
 int /*<<< orphan*/  V4L2_STD_NTSC_443 ; 
 int /*<<< orphan*/  V4L2_STD_NTSC_M ; 
 int /*<<< orphan*/  V4L2_STD_PAL_60 ; 
 int /*<<< orphan*/  V4L2_STD_PAL_B ; 
 int /*<<< orphan*/  V4L2_STD_PAL_M ; 
 int /*<<< orphan*/  V4L2_STD_PAL_Nc ; 
 int /*<<< orphan*/  V4L2_STD_SECAM_B ; 
 int /*<<< orphan*/  V4L2_STD_UNKNOWN ; 

__attribute__((used)) static v4l2_std_id tw5864_get_v4l2_std(enum tw5864_vid_std std)
{
	switch (std) {
	case STD_NTSC:    return V4L2_STD_NTSC_M;
	case STD_PAL:     return V4L2_STD_PAL_B;
	case STD_SECAM:   return V4L2_STD_SECAM_B;
	case STD_NTSC443: return V4L2_STD_NTSC_443;
	case STD_PAL_M:   return V4L2_STD_PAL_M;
	case STD_PAL_CN:  return V4L2_STD_PAL_Nc;
	case STD_PAL_60:  return V4L2_STD_PAL_60;
	case STD_INVALID: return V4L2_STD_UNKNOWN;
	}
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
          enum tw5864_vid_std std = 0;
          int benchRet = tw5864_get_v4l2_std(std);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          enum tw5864_vid_std std = 0;
          int benchRet = tw5864_get_v4l2_std(std);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum tw5864_vid_std std = 0;
          int benchRet = tw5864_get_v4l2_std(std);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
