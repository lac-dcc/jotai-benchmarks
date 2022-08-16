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
typedef  int u64 ;
typedef  int s64 ;
typedef  enum v4l2_ctrl_type { ____Placeholder_v4l2_ctrl_type } v4l2_ctrl_type ;

/* Variables and functions */
 int EINVAL ; 
 int ERANGE ; 
#define  V4L2_CTRL_TYPE_BITMASK 137 
#define  V4L2_CTRL_TYPE_BOOLEAN 136 
#define  V4L2_CTRL_TYPE_INTEGER 135 
#define  V4L2_CTRL_TYPE_INTEGER64 134 
#define  V4L2_CTRL_TYPE_INTEGER_MENU 133 
#define  V4L2_CTRL_TYPE_MENU 132 
#define  V4L2_CTRL_TYPE_STRING 131 
#define  V4L2_CTRL_TYPE_U16 130 
#define  V4L2_CTRL_TYPE_U32 129 
#define  V4L2_CTRL_TYPE_U8 128 

__attribute__((used)) static int check_range(enum v4l2_ctrl_type type,
		s64 min, s64 max, u64 step, s64 def)
{
	switch (type) {
	case V4L2_CTRL_TYPE_BOOLEAN:
		if (step != 1 || max > 1 || min < 0)
			return -ERANGE;
		/* fall through */
	case V4L2_CTRL_TYPE_U8:
	case V4L2_CTRL_TYPE_U16:
	case V4L2_CTRL_TYPE_U32:
	case V4L2_CTRL_TYPE_INTEGER:
	case V4L2_CTRL_TYPE_INTEGER64:
		if (step == 0 || min > max || def < min || def > max)
			return -ERANGE;
		return 0;
	case V4L2_CTRL_TYPE_BITMASK:
		if (step || min || !max || (def & ~max))
			return -ERANGE;
		return 0;
	case V4L2_CTRL_TYPE_MENU:
	case V4L2_CTRL_TYPE_INTEGER_MENU:
		if (min > max || def < min || def > max)
			return -ERANGE;
		/* Note: step == menu_skip_mask for menu controls.
		   So here we check if the default value is masked out. */
		if (step && ((1 << def) & step))
			return -EINVAL;
		return 0;
	case V4L2_CTRL_TYPE_STRING:
		if (min > max || min < 0 || step < 1 || def)
			return -ERANGE;
		return 0;
	default:
		return 0;
	}
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
          enum v4l2_ctrl_type type = 0;
          int min = 100;
          int max = 100;
          int step = 100;
          int def = 100;
          int benchRet = check_range(type,min,max,step,def);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          enum v4l2_ctrl_type type = 0;
          int min = 255;
          int max = 255;
          int step = 255;
          int def = 255;
          int benchRet = check_range(type,min,max,step,def);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum v4l2_ctrl_type type = 0;
          int min = 10;
          int max = 10;
          int step = 10;
          int def = 10;
          int benchRet = check_range(type,min,max,step,def);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
