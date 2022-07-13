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
       0            big-arr-10x\n\
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
struct pxa_camera_dev {int platform_flags; int width_flags; } ;

/* Variables and functions */
 int EINVAL ; 
 int PXA_CAMERA_MASTER ; 
 unsigned long V4L2_MBUS_DATA_ACTIVE_HIGH ; 
 unsigned long V4L2_MBUS_HSYNC_ACTIVE_HIGH ; 
 unsigned long V4L2_MBUS_HSYNC_ACTIVE_LOW ; 
 unsigned long V4L2_MBUS_MASTER ; 
 unsigned long V4L2_MBUS_PCLK_SAMPLE_FALLING ; 
 unsigned long V4L2_MBUS_PCLK_SAMPLE_RISING ; 
 unsigned long V4L2_MBUS_SLAVE ; 
 unsigned long V4L2_MBUS_VSYNC_ACTIVE_HIGH ; 
 unsigned long V4L2_MBUS_VSYNC_ACTIVE_LOW ; 

__attribute__((used)) static int test_platform_param(struct pxa_camera_dev *pcdev,
			       unsigned char buswidth, unsigned long *flags)
{
	/*
	 * Platform specified synchronization and pixel clock polarities are
	 * only a recommendation and are only used during probing. The PXA270
	 * quick capture interface supports both.
	 */
	*flags = (pcdev->platform_flags & PXA_CAMERA_MASTER ?
		  V4L2_MBUS_MASTER : V4L2_MBUS_SLAVE) |
		V4L2_MBUS_HSYNC_ACTIVE_HIGH |
		V4L2_MBUS_HSYNC_ACTIVE_LOW |
		V4L2_MBUS_VSYNC_ACTIVE_HIGH |
		V4L2_MBUS_VSYNC_ACTIVE_LOW |
		V4L2_MBUS_DATA_ACTIVE_HIGH |
		V4L2_MBUS_PCLK_SAMPLE_RISING |
		V4L2_MBUS_PCLK_SAMPLE_FALLING;

	/* If requested data width is supported by the platform, use it */
	if ((1 << (buswidth - 1)) & pcdev->width_flags)
		return 0;

	return -EINVAL;
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

    // big-arr-10x
    case 0:
    {
          unsigned char buswidth = 10;
          int _len_pcdev0 = 100;
          struct pxa_camera_dev * pcdev = (struct pxa_camera_dev *) malloc(_len_pcdev0*sizeof(struct pxa_camera_dev));
          for(int _i0 = 0; _i0 < _len_pcdev0; _i0++) {
            pcdev[_i0].platform_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        pcdev[_i0].width_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_flags0 = 100;
          unsigned long * flags = (unsigned long *) malloc(_len_flags0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_flags0; _i0++) {
            flags[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = test_platform_param(pcdev,buswidth,flags);
          printf("%d\n", benchRet); 
          free(pcdev);
          free(flags);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
