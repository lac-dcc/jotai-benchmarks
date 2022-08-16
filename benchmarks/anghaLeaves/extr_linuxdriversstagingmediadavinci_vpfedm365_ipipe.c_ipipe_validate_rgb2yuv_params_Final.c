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
typedef  struct TYPE_18__   TYPE_9__ ;
typedef  struct TYPE_17__   TYPE_8__ ;
typedef  struct TYPE_16__   TYPE_7__ ;
typedef  struct TYPE_15__   TYPE_6__ ;
typedef  struct TYPE_14__   TYPE_5__ ;
typedef  struct TYPE_13__   TYPE_4__ ;
typedef  struct TYPE_12__   TYPE_3__ ;
typedef  struct TYPE_11__   TYPE_2__ ;
typedef  struct TYPE_10__   TYPE_1__ ;

/* Type definitions */
struct TYPE_18__ {scalar_t__ decimal; scalar_t__ integer; } ;
struct TYPE_17__ {scalar_t__ decimal; scalar_t__ integer; } ;
struct TYPE_16__ {scalar_t__ decimal; scalar_t__ integer; } ;
struct TYPE_15__ {scalar_t__ decimal; scalar_t__ integer; } ;
struct TYPE_14__ {scalar_t__ decimal; scalar_t__ integer; } ;
struct TYPE_13__ {scalar_t__ decimal; scalar_t__ integer; } ;
struct TYPE_12__ {scalar_t__ decimal; scalar_t__ integer; } ;
struct TYPE_11__ {scalar_t__ decimal; scalar_t__ integer; } ;
struct TYPE_10__ {scalar_t__ decimal; scalar_t__ integer; } ;
struct vpfe_ipipe_rgb2yuv {scalar_t__ out_ofst_y; scalar_t__ out_ofst_cb; scalar_t__ out_ofst_cr; TYPE_9__ coef_bcr; TYPE_8__ coef_gcr; TYPE_7__ coef_rcr; TYPE_6__ coef_bcb; TYPE_5__ coef_gcb; TYPE_4__ coef_rcb; TYPE_3__ coef_by; TYPE_2__ coef_gy; TYPE_1__ coef_ry; } ;

/* Variables and functions */
 int EINVAL ; 
 scalar_t__ RGB2YCBCR_COEF_DECI_MASK ; 
 scalar_t__ RGB2YCBCR_COEF_INT_MASK ; 
 scalar_t__ RGB2YCBCR_OFST_MASK ; 

__attribute__((used)) static int ipipe_validate_rgb2yuv_params(struct vpfe_ipipe_rgb2yuv *rgb2yuv)
{
	if (rgb2yuv->coef_ry.decimal > RGB2YCBCR_COEF_DECI_MASK ||
	   rgb2yuv->coef_ry.integer > RGB2YCBCR_COEF_INT_MASK)
		return -EINVAL;

	if (rgb2yuv->coef_gy.decimal > RGB2YCBCR_COEF_DECI_MASK ||
	   rgb2yuv->coef_gy.integer > RGB2YCBCR_COEF_INT_MASK)
		return -EINVAL;

	if (rgb2yuv->coef_by.decimal > RGB2YCBCR_COEF_DECI_MASK ||
	   rgb2yuv->coef_by.integer > RGB2YCBCR_COEF_INT_MASK)
		return -EINVAL;

	if (rgb2yuv->coef_rcb.decimal > RGB2YCBCR_COEF_DECI_MASK ||
	   rgb2yuv->coef_rcb.integer > RGB2YCBCR_COEF_INT_MASK)
		return -EINVAL;

	if (rgb2yuv->coef_gcb.decimal > RGB2YCBCR_COEF_DECI_MASK ||
	   rgb2yuv->coef_gcb.integer > RGB2YCBCR_COEF_INT_MASK)
		return -EINVAL;

	if (rgb2yuv->coef_bcb.decimal > RGB2YCBCR_COEF_DECI_MASK ||
	   rgb2yuv->coef_bcb.integer > RGB2YCBCR_COEF_INT_MASK)
		return -EINVAL;

	if (rgb2yuv->coef_rcr.decimal > RGB2YCBCR_COEF_DECI_MASK ||
	   rgb2yuv->coef_rcr.integer > RGB2YCBCR_COEF_INT_MASK)
		return -EINVAL;

	if (rgb2yuv->coef_gcr.decimal > RGB2YCBCR_COEF_DECI_MASK ||
	   rgb2yuv->coef_gcr.integer > RGB2YCBCR_COEF_INT_MASK)
		return -EINVAL;

	if (rgb2yuv->coef_bcr.decimal > RGB2YCBCR_COEF_DECI_MASK ||
	   rgb2yuv->coef_bcr.integer > RGB2YCBCR_COEF_INT_MASK)
		return -EINVAL;

	if (rgb2yuv->out_ofst_y > RGB2YCBCR_OFST_MASK ||
	   rgb2yuv->out_ofst_cb > RGB2YCBCR_OFST_MASK ||
	   rgb2yuv->out_ofst_cr > RGB2YCBCR_OFST_MASK)
		return -EINVAL;

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
          int _len_rgb2yuv0 = 1;
          struct vpfe_ipipe_rgb2yuv * rgb2yuv = (struct vpfe_ipipe_rgb2yuv *) malloc(_len_rgb2yuv0*sizeof(struct vpfe_ipipe_rgb2yuv));
          for(int _i0 = 0; _i0 < _len_rgb2yuv0; _i0++) {
            rgb2yuv[_i0].out_ofst_y = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2yuv[_i0].out_ofst_cb = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2yuv[_i0].out_ofst_cr = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2yuv[_i0].coef_bcr.decimal = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2yuv[_i0].coef_bcr.integer = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2yuv[_i0].coef_gcr.decimal = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2yuv[_i0].coef_gcr.integer = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2yuv[_i0].coef_rcr.decimal = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2yuv[_i0].coef_rcr.integer = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2yuv[_i0].coef_bcb.decimal = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2yuv[_i0].coef_bcb.integer = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2yuv[_i0].coef_gcb.decimal = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2yuv[_i0].coef_gcb.integer = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2yuv[_i0].coef_rcb.decimal = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2yuv[_i0].coef_rcb.integer = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2yuv[_i0].coef_by.decimal = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2yuv[_i0].coef_by.integer = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2yuv[_i0].coef_gy.decimal = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2yuv[_i0].coef_gy.integer = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2yuv[_i0].coef_ry.decimal = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2yuv[_i0].coef_ry.integer = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ipipe_validate_rgb2yuv_params(rgb2yuv);
          printf("%d\n", benchRet); 
          free(rgb2yuv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
