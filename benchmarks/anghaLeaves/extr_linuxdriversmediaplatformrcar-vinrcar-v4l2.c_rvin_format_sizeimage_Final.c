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
typedef  int u32 ;
struct v4l2_pix_format {scalar_t__ pixelformat; int bytesperline; int height; } ;

/* Variables and functions */
 scalar_t__ V4L2_PIX_FMT_NV16 ; 

__attribute__((used)) static u32 rvin_format_sizeimage(struct v4l2_pix_format *pix)
{
	if (pix->pixelformat == V4L2_PIX_FMT_NV16)
		return pix->bytesperline * pix->height * 2;

	return pix->bytesperline * pix->height;
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
          int _len_pix0 = 1;
          struct v4l2_pix_format * pix = (struct v4l2_pix_format *) malloc(_len_pix0*sizeof(struct v4l2_pix_format));
          for(int _i0 = 0; _i0 < _len_pix0; _i0++) {
            pix[_i0].pixelformat = ((-2 * (next_i()%2)) + 1) * next_i();
        pix[_i0].bytesperline = ((-2 * (next_i()%2)) + 1) * next_i();
        pix[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rvin_format_sizeimage(pix);
          printf("%d\n", benchRet); 
          free(pix);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
