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
struct v4l2_pix_format {scalar_t__ xfer_func; scalar_t__ quantization; scalar_t__ ycbcr_enc; scalar_t__ flags; int /*<<< orphan*/  colorspace; int /*<<< orphan*/  field; } ;

/* Variables and functions */
 int /*<<< orphan*/  V4L2_COLORSPACE_RAW ; 
 int /*<<< orphan*/  V4L2_FIELD_NONE ; 

__attribute__((used)) static void v4l_pix_format_touch(struct v4l2_pix_format *p)
{
	/*
	 * The v4l2_pix_format structure contains fields that make no sense for
	 * touch. Set them to default values in this case.
	 */

	p->field = V4L2_FIELD_NONE;
	p->colorspace = V4L2_COLORSPACE_RAW;
	p->flags = 0;
	p->ycbcr_enc = 0;
	p->quantization = 0;
	p->xfer_func = 0;
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
          int _len_p0 = 1;
          struct v4l2_pix_format * p = (struct v4l2_pix_format *) malloc(_len_p0*sizeof(struct v4l2_pix_format));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].xfer_func = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].quantization = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].ycbcr_enc = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].colorspace = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].field = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          v4l_pix_format_touch(p);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
