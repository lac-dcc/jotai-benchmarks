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
typedef  int /*<<< orphan*/  u32 ;
typedef  enum rmi_f54_report_type { ____Placeholder_rmi_f54_report_type } rmi_f54_report_type ;

/* Variables and functions */
 int EINVAL ; 
#define  F54_16BIT_IMAGE 135 
#define  F54_8BIT_IMAGE 134 
#define  F54_FULL_RAW_CAP 133 
#define  F54_FULL_RAW_CAP_RX_OFFSET_REMOVED 132 
#define  F54_MAX_REPORT_TYPE 131 
#define  F54_RAW_16BIT_IMAGE 130 
#define  F54_REPORT_NONE 129 
#define  F54_TRUE_BASELINE 128 
 int /*<<< orphan*/  V4L2_TCH_FMT_DELTA_TD08 ; 
 int /*<<< orphan*/  V4L2_TCH_FMT_DELTA_TD16 ; 
 int /*<<< orphan*/  V4L2_TCH_FMT_TU16 ; 

__attribute__((used)) static int rmi_f54_get_pixel_fmt(enum rmi_f54_report_type reptype, u32 *pixfmt)
{
	int ret = 0;

	switch (reptype) {
	case F54_8BIT_IMAGE:
		*pixfmt = V4L2_TCH_FMT_DELTA_TD08;
		break;

	case F54_16BIT_IMAGE:
		*pixfmt = V4L2_TCH_FMT_DELTA_TD16;
		break;

	case F54_RAW_16BIT_IMAGE:
	case F54_TRUE_BASELINE:
	case F54_FULL_RAW_CAP:
	case F54_FULL_RAW_CAP_RX_OFFSET_REMOVED:
		*pixfmt = V4L2_TCH_FMT_TU16;
		break;

	case F54_REPORT_NONE:
	case F54_MAX_REPORT_TYPE:
		ret = -EINVAL;
		break;
	}

	return ret;
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
          enum rmi_f54_report_type reptype = 0;
          int _len_pixfmt0 = 1;
          int * pixfmt = (int *) malloc(_len_pixfmt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pixfmt0; _i0++) {
            pixfmt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rmi_f54_get_pixel_fmt(reptype,pixfmt);
          printf("%d\n", benchRet); 
          free(pixfmt);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          enum rmi_f54_report_type reptype = 0;
          int _len_pixfmt0 = 100;
          int * pixfmt = (int *) malloc(_len_pixfmt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pixfmt0; _i0++) {
            pixfmt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rmi_f54_get_pixel_fmt(reptype,pixfmt);
          printf("%d\n", benchRet); 
          free(pixfmt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
