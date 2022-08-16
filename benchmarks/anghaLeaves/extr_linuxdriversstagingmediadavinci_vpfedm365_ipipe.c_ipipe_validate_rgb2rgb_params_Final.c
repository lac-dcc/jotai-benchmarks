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
typedef  scalar_t__ u32 ;
struct TYPE_18__ {scalar_t__ decimal; scalar_t__ integer; } ;
struct TYPE_17__ {scalar_t__ decimal; scalar_t__ integer; } ;
struct TYPE_16__ {scalar_t__ decimal; scalar_t__ integer; } ;
struct TYPE_15__ {scalar_t__ decimal; scalar_t__ integer; } ;
struct TYPE_14__ {scalar_t__ decimal; scalar_t__ integer; } ;
struct TYPE_13__ {scalar_t__ decimal; scalar_t__ integer; } ;
struct TYPE_12__ {scalar_t__ decimal; scalar_t__ integer; } ;
struct TYPE_11__ {scalar_t__ decimal; scalar_t__ integer; } ;
struct TYPE_10__ {scalar_t__ decimal; scalar_t__ integer; } ;
struct vpfe_ipipe_rgb2rgb {scalar_t__ out_ofst_r; scalar_t__ out_ofst_g; scalar_t__ out_ofst_b; TYPE_9__ coef_bb; TYPE_8__ coef_gb; TYPE_7__ coef_rb; TYPE_6__ coef_bg; TYPE_5__ coef_gg; TYPE_4__ coef_rg; TYPE_3__ coef_br; TYPE_2__ coef_gr; TYPE_1__ coef_rr; } ;

/* Variables and functions */
 int EINVAL ; 
 unsigned int IPIPE_RGB2RGB_2 ; 
 scalar_t__ RGB2RGB_1_GAIN_INT_MASK ; 
 scalar_t__ RGB2RGB_1_OFST_MASK ; 
 scalar_t__ RGB2RGB_2_GAIN_INT_MASK ; 
 scalar_t__ RGB2RGB_2_OFST_MASK ; 
 scalar_t__ RGB2RGB_GAIN_DECI_MASK ; 

__attribute__((used)) static int
ipipe_validate_rgb2rgb_params(struct vpfe_ipipe_rgb2rgb *rgb2rgb,
			      unsigned int id)
{
	u32 gain_int_upper = RGB2RGB_1_GAIN_INT_MASK;
	u32 offset_upper = RGB2RGB_1_OFST_MASK;

	if (id == IPIPE_RGB2RGB_2) {
		offset_upper = RGB2RGB_2_OFST_MASK;
		gain_int_upper = RGB2RGB_2_GAIN_INT_MASK;
	}

	if (rgb2rgb->coef_rr.decimal > RGB2RGB_GAIN_DECI_MASK ||
	    rgb2rgb->coef_rr.integer > gain_int_upper)
		return -EINVAL;

	if (rgb2rgb->coef_gr.decimal > RGB2RGB_GAIN_DECI_MASK ||
	    rgb2rgb->coef_gr.integer > gain_int_upper)
		return -EINVAL;

	if (rgb2rgb->coef_br.decimal > RGB2RGB_GAIN_DECI_MASK ||
	    rgb2rgb->coef_br.integer > gain_int_upper)
		return -EINVAL;

	if (rgb2rgb->coef_rg.decimal > RGB2RGB_GAIN_DECI_MASK ||
	    rgb2rgb->coef_rg.integer > gain_int_upper)
		return -EINVAL;

	if (rgb2rgb->coef_gg.decimal > RGB2RGB_GAIN_DECI_MASK ||
	    rgb2rgb->coef_gg.integer > gain_int_upper)
		return -EINVAL;

	if (rgb2rgb->coef_bg.decimal > RGB2RGB_GAIN_DECI_MASK ||
	    rgb2rgb->coef_bg.integer > gain_int_upper)
		return -EINVAL;

	if (rgb2rgb->coef_rb.decimal > RGB2RGB_GAIN_DECI_MASK ||
	    rgb2rgb->coef_rb.integer > gain_int_upper)
		return -EINVAL;

	if (rgb2rgb->coef_gb.decimal > RGB2RGB_GAIN_DECI_MASK ||
	    rgb2rgb->coef_gb.integer > gain_int_upper)
		return -EINVAL;

	if (rgb2rgb->coef_bb.decimal > RGB2RGB_GAIN_DECI_MASK ||
	    rgb2rgb->coef_bb.integer > gain_int_upper)
		return -EINVAL;

	if (rgb2rgb->out_ofst_r > offset_upper ||
	    rgb2rgb->out_ofst_g > offset_upper ||
	    rgb2rgb->out_ofst_b > offset_upper)
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
          unsigned int id = 100;
          int _len_rgb2rgb0 = 1;
          struct vpfe_ipipe_rgb2rgb * rgb2rgb = (struct vpfe_ipipe_rgb2rgb *) malloc(_len_rgb2rgb0*sizeof(struct vpfe_ipipe_rgb2rgb));
          for(int _i0 = 0; _i0 < _len_rgb2rgb0; _i0++) {
            rgb2rgb[_i0].out_ofst_r = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2rgb[_i0].out_ofst_g = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2rgb[_i0].out_ofst_b = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2rgb[_i0].coef_bb.decimal = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2rgb[_i0].coef_bb.integer = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2rgb[_i0].coef_gb.decimal = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2rgb[_i0].coef_gb.integer = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2rgb[_i0].coef_rb.decimal = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2rgb[_i0].coef_rb.integer = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2rgb[_i0].coef_bg.decimal = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2rgb[_i0].coef_bg.integer = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2rgb[_i0].coef_gg.decimal = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2rgb[_i0].coef_gg.integer = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2rgb[_i0].coef_rg.decimal = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2rgb[_i0].coef_rg.integer = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2rgb[_i0].coef_br.decimal = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2rgb[_i0].coef_br.integer = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2rgb[_i0].coef_gr.decimal = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2rgb[_i0].coef_gr.integer = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2rgb[_i0].coef_rr.decimal = ((-2 * (next_i()%2)) + 1) * next_i();
        rgb2rgb[_i0].coef_rr.integer = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ipipe_validate_rgb2rgb_params(rgb2rgb,id);
          printf("%d\n", benchRet); 
          free(rgb2rgb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
