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

/* Variables and functions */
#define  MCURSOR_MODE_128_ARGB_AX 131 
#define  MCURSOR_MODE_256_ARGB_AX 130 
#define  MCURSOR_MODE_64_32B_AX 129 
#define  MCURSOR_MODE_64_ARGB_AX 128 

__attribute__((used)) static int cursor_mode_to_drm(int mode)
{
	int cursor_pixel_formats_index = 4;

	switch (mode) {
	case MCURSOR_MODE_128_ARGB_AX:
		cursor_pixel_formats_index = 0;
		break;
	case MCURSOR_MODE_256_ARGB_AX:
		cursor_pixel_formats_index = 1;
		break;
	case MCURSOR_MODE_64_ARGB_AX:
		cursor_pixel_formats_index = 2;
		break;
	case MCURSOR_MODE_64_32B_AX:
		cursor_pixel_formats_index = 3;
		break;

	default:
		break;
	}

	return cursor_pixel_formats_index;
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
          int mode = 100;
          int benchRet = cursor_mode_to_drm(mode);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int mode = 255;
          int benchRet = cursor_mode_to_drm(mode);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mode = 10;
          int benchRet = cursor_mode_to_drm(mode);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
