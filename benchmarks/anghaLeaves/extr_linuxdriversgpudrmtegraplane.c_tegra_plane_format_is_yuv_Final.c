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
       1            big-arr-10x\n\
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
#define  WIN_COLOR_DEPTH_YCbCr420P 137 
#define  WIN_COLOR_DEPTH_YCbCr422 136 
#define  WIN_COLOR_DEPTH_YCbCr422P 135 
#define  WIN_COLOR_DEPTH_YCbCr422R 134 
#define  WIN_COLOR_DEPTH_YCbCr422RA 133 
#define  WIN_COLOR_DEPTH_YUV420P 132 
#define  WIN_COLOR_DEPTH_YUV422 131 
#define  WIN_COLOR_DEPTH_YUV422P 130 
#define  WIN_COLOR_DEPTH_YUV422R 129 
#define  WIN_COLOR_DEPTH_YUV422RA 128 

bool tegra_plane_format_is_yuv(unsigned int format, bool *planar)
{
	switch (format) {
	case WIN_COLOR_DEPTH_YCbCr422:
	case WIN_COLOR_DEPTH_YUV422:
		if (planar)
			*planar = false;

		return true;

	case WIN_COLOR_DEPTH_YCbCr420P:
	case WIN_COLOR_DEPTH_YUV420P:
	case WIN_COLOR_DEPTH_YCbCr422P:
	case WIN_COLOR_DEPTH_YUV422P:
	case WIN_COLOR_DEPTH_YCbCr422R:
	case WIN_COLOR_DEPTH_YUV422R:
	case WIN_COLOR_DEPTH_YCbCr422RA:
	case WIN_COLOR_DEPTH_YUV422RA:
		if (planar)
			*planar = true;

		return true;
	}

	if (planar)
		*planar = false;

	return false;
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
          unsigned int format = 100;
          int _len_planar0 = 1;
          int * planar = (int *) malloc(_len_planar0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_planar0; _i0++) {
            planar[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tegra_plane_format_is_yuv(format,planar);
          printf("%d\n", benchRet); 
          free(planar);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned int format = 10;
          int _len_planar0 = 100;
          int * planar = (int *) malloc(_len_planar0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_planar0; _i0++) {
            planar[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tegra_plane_format_is_yuv(format,planar);
          printf("%d\n", benchRet); 
          free(planar);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
