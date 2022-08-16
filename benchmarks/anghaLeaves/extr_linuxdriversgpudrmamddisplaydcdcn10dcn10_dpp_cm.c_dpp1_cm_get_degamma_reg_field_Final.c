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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {int /*<<< orphan*/  exp_resion_start_segment; int /*<<< orphan*/  exp_region_start; int /*<<< orphan*/  field_region_linear_slope; int /*<<< orphan*/  field_region_end_base; int /*<<< orphan*/  field_region_end_slope; int /*<<< orphan*/  field_region_end; int /*<<< orphan*/  exp_region1_num_segments; int /*<<< orphan*/  exp_region1_lut_offset; int /*<<< orphan*/  exp_region0_num_segments; int /*<<< orphan*/  exp_region0_lut_offset; } ;
struct TYPE_5__ {int /*<<< orphan*/  exp_resion_start_segment; int /*<<< orphan*/  exp_region_start; int /*<<< orphan*/  field_region_linear_slope; int /*<<< orphan*/  field_region_end_base; int /*<<< orphan*/  field_region_end_slope; int /*<<< orphan*/  field_region_end; int /*<<< orphan*/  exp_region1_num_segments; int /*<<< orphan*/  exp_region1_lut_offset; int /*<<< orphan*/  exp_region0_num_segments; int /*<<< orphan*/  exp_region0_lut_offset; } ;
struct xfer_func_reg {TYPE_3__ masks; TYPE_1__ shifts; } ;
struct dcn10_dpp {TYPE_4__* tf_mask; TYPE_2__* tf_shift; } ;
struct TYPE_8__ {int /*<<< orphan*/  CM_DGAM_RAMB_EXP_REGION_START_SEGMENT_B; int /*<<< orphan*/  CM_DGAM_RAMB_EXP_REGION_START_B; int /*<<< orphan*/  CM_DGAM_RAMB_EXP_REGION_LINEAR_SLOPE_B; int /*<<< orphan*/  CM_DGAM_RAMB_EXP_REGION_END_BASE_B; int /*<<< orphan*/  CM_DGAM_RAMB_EXP_REGION_END_SLOPE_B; int /*<<< orphan*/  CM_DGAM_RAMB_EXP_REGION_END_B; int /*<<< orphan*/  CM_DGAM_RAMA_EXP_REGION1_NUM_SEGMENTS; int /*<<< orphan*/  CM_DGAM_RAMA_EXP_REGION1_LUT_OFFSET; int /*<<< orphan*/  CM_DGAM_RAMA_EXP_REGION0_NUM_SEGMENTS; int /*<<< orphan*/  CM_DGAM_RAMA_EXP_REGION0_LUT_OFFSET; } ;
struct TYPE_6__ {int /*<<< orphan*/  CM_DGAM_RAMB_EXP_REGION_START_SEGMENT_B; int /*<<< orphan*/  CM_DGAM_RAMB_EXP_REGION_START_B; int /*<<< orphan*/  CM_DGAM_RAMB_EXP_REGION_LINEAR_SLOPE_B; int /*<<< orphan*/  CM_DGAM_RAMB_EXP_REGION_END_BASE_B; int /*<<< orphan*/  CM_DGAM_RAMB_EXP_REGION_END_SLOPE_B; int /*<<< orphan*/  CM_DGAM_RAMB_EXP_REGION_END_B; int /*<<< orphan*/  CM_DGAM_RAMA_EXP_REGION1_NUM_SEGMENTS; int /*<<< orphan*/  CM_DGAM_RAMA_EXP_REGION1_LUT_OFFSET; int /*<<< orphan*/  CM_DGAM_RAMA_EXP_REGION0_NUM_SEGMENTS; int /*<<< orphan*/  CM_DGAM_RAMA_EXP_REGION0_LUT_OFFSET; } ;

/* Variables and functions */

__attribute__((used)) static void dpp1_cm_get_degamma_reg_field(
		struct dcn10_dpp *dpp,
		struct xfer_func_reg *reg)
{
	reg->shifts.exp_region0_lut_offset = dpp->tf_shift->CM_DGAM_RAMA_EXP_REGION0_LUT_OFFSET;
	reg->masks.exp_region0_lut_offset = dpp->tf_mask->CM_DGAM_RAMA_EXP_REGION0_LUT_OFFSET;
	reg->shifts.exp_region0_num_segments = dpp->tf_shift->CM_DGAM_RAMA_EXP_REGION0_NUM_SEGMENTS;
	reg->masks.exp_region0_num_segments = dpp->tf_mask->CM_DGAM_RAMA_EXP_REGION0_NUM_SEGMENTS;
	reg->shifts.exp_region1_lut_offset = dpp->tf_shift->CM_DGAM_RAMA_EXP_REGION1_LUT_OFFSET;
	reg->masks.exp_region1_lut_offset = dpp->tf_mask->CM_DGAM_RAMA_EXP_REGION1_LUT_OFFSET;
	reg->shifts.exp_region1_num_segments = dpp->tf_shift->CM_DGAM_RAMA_EXP_REGION1_NUM_SEGMENTS;
	reg->masks.exp_region1_num_segments = dpp->tf_mask->CM_DGAM_RAMA_EXP_REGION1_NUM_SEGMENTS;

	reg->shifts.field_region_end = dpp->tf_shift->CM_DGAM_RAMB_EXP_REGION_END_B;
	reg->masks.field_region_end = dpp->tf_mask->CM_DGAM_RAMB_EXP_REGION_END_B;
	reg->shifts.field_region_end_slope = dpp->tf_shift->CM_DGAM_RAMB_EXP_REGION_END_SLOPE_B;
	reg->masks.field_region_end_slope = dpp->tf_mask->CM_DGAM_RAMB_EXP_REGION_END_SLOPE_B;
	reg->shifts.field_region_end_base = dpp->tf_shift->CM_DGAM_RAMB_EXP_REGION_END_BASE_B;
	reg->masks.field_region_end_base = dpp->tf_mask->CM_DGAM_RAMB_EXP_REGION_END_BASE_B;
	reg->shifts.field_region_linear_slope = dpp->tf_shift->CM_DGAM_RAMB_EXP_REGION_LINEAR_SLOPE_B;
	reg->masks.field_region_linear_slope = dpp->tf_mask->CM_DGAM_RAMB_EXP_REGION_LINEAR_SLOPE_B;
	reg->shifts.exp_region_start = dpp->tf_shift->CM_DGAM_RAMB_EXP_REGION_START_B;
	reg->masks.exp_region_start = dpp->tf_mask->CM_DGAM_RAMB_EXP_REGION_START_B;
	reg->shifts.exp_resion_start_segment = dpp->tf_shift->CM_DGAM_RAMB_EXP_REGION_START_SEGMENT_B;
	reg->masks.exp_resion_start_segment = dpp->tf_mask->CM_DGAM_RAMB_EXP_REGION_START_SEGMENT_B;
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
          int _len_dpp0 = 1;
          struct dcn10_dpp * dpp = (struct dcn10_dpp *) malloc(_len_dpp0*sizeof(struct dcn10_dpp));
          for(int _i0 = 0; _i0 < _len_dpp0; _i0++) {
              int _len_dpp__i0__tf_mask0 = 1;
          dpp[_i0].tf_mask = (struct TYPE_8__ *) malloc(_len_dpp__i0__tf_mask0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_dpp__i0__tf_mask0; _j0++) {
            dpp[_i0].tf_mask->CM_DGAM_RAMB_EXP_REGION_START_SEGMENT_B = ((-2 * (next_i()%2)) + 1) * next_i();
        dpp[_i0].tf_mask->CM_DGAM_RAMB_EXP_REGION_START_B = ((-2 * (next_i()%2)) + 1) * next_i();
        dpp[_i0].tf_mask->CM_DGAM_RAMB_EXP_REGION_LINEAR_SLOPE_B = ((-2 * (next_i()%2)) + 1) * next_i();
        dpp[_i0].tf_mask->CM_DGAM_RAMB_EXP_REGION_END_BASE_B = ((-2 * (next_i()%2)) + 1) * next_i();
        dpp[_i0].tf_mask->CM_DGAM_RAMB_EXP_REGION_END_SLOPE_B = ((-2 * (next_i()%2)) + 1) * next_i();
        dpp[_i0].tf_mask->CM_DGAM_RAMB_EXP_REGION_END_B = ((-2 * (next_i()%2)) + 1) * next_i();
        dpp[_i0].tf_mask->CM_DGAM_RAMA_EXP_REGION1_NUM_SEGMENTS = ((-2 * (next_i()%2)) + 1) * next_i();
        dpp[_i0].tf_mask->CM_DGAM_RAMA_EXP_REGION1_LUT_OFFSET = ((-2 * (next_i()%2)) + 1) * next_i();
        dpp[_i0].tf_mask->CM_DGAM_RAMA_EXP_REGION0_NUM_SEGMENTS = ((-2 * (next_i()%2)) + 1) * next_i();
        dpp[_i0].tf_mask->CM_DGAM_RAMA_EXP_REGION0_LUT_OFFSET = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dpp__i0__tf_shift0 = 1;
          dpp[_i0].tf_shift = (struct TYPE_6__ *) malloc(_len_dpp__i0__tf_shift0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_dpp__i0__tf_shift0; _j0++) {
            dpp[_i0].tf_shift->CM_DGAM_RAMB_EXP_REGION_START_SEGMENT_B = ((-2 * (next_i()%2)) + 1) * next_i();
        dpp[_i0].tf_shift->CM_DGAM_RAMB_EXP_REGION_START_B = ((-2 * (next_i()%2)) + 1) * next_i();
        dpp[_i0].tf_shift->CM_DGAM_RAMB_EXP_REGION_LINEAR_SLOPE_B = ((-2 * (next_i()%2)) + 1) * next_i();
        dpp[_i0].tf_shift->CM_DGAM_RAMB_EXP_REGION_END_BASE_B = ((-2 * (next_i()%2)) + 1) * next_i();
        dpp[_i0].tf_shift->CM_DGAM_RAMB_EXP_REGION_END_SLOPE_B = ((-2 * (next_i()%2)) + 1) * next_i();
        dpp[_i0].tf_shift->CM_DGAM_RAMB_EXP_REGION_END_B = ((-2 * (next_i()%2)) + 1) * next_i();
        dpp[_i0].tf_shift->CM_DGAM_RAMA_EXP_REGION1_NUM_SEGMENTS = ((-2 * (next_i()%2)) + 1) * next_i();
        dpp[_i0].tf_shift->CM_DGAM_RAMA_EXP_REGION1_LUT_OFFSET = ((-2 * (next_i()%2)) + 1) * next_i();
        dpp[_i0].tf_shift->CM_DGAM_RAMA_EXP_REGION0_NUM_SEGMENTS = ((-2 * (next_i()%2)) + 1) * next_i();
        dpp[_i0].tf_shift->CM_DGAM_RAMA_EXP_REGION0_LUT_OFFSET = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_reg0 = 1;
          struct xfer_func_reg * reg = (struct xfer_func_reg *) malloc(_len_reg0*sizeof(struct xfer_func_reg));
          for(int _i0 = 0; _i0 < _len_reg0; _i0++) {
            reg[_i0].masks.exp_resion_start_segment = ((-2 * (next_i()%2)) + 1) * next_i();
        reg[_i0].masks.exp_region_start = ((-2 * (next_i()%2)) + 1) * next_i();
        reg[_i0].masks.field_region_linear_slope = ((-2 * (next_i()%2)) + 1) * next_i();
        reg[_i0].masks.field_region_end_base = ((-2 * (next_i()%2)) + 1) * next_i();
        reg[_i0].masks.field_region_end_slope = ((-2 * (next_i()%2)) + 1) * next_i();
        reg[_i0].masks.field_region_end = ((-2 * (next_i()%2)) + 1) * next_i();
        reg[_i0].masks.exp_region1_num_segments = ((-2 * (next_i()%2)) + 1) * next_i();
        reg[_i0].masks.exp_region1_lut_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        reg[_i0].masks.exp_region0_num_segments = ((-2 * (next_i()%2)) + 1) * next_i();
        reg[_i0].masks.exp_region0_lut_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        reg[_i0].shifts.exp_resion_start_segment = ((-2 * (next_i()%2)) + 1) * next_i();
        reg[_i0].shifts.exp_region_start = ((-2 * (next_i()%2)) + 1) * next_i();
        reg[_i0].shifts.field_region_linear_slope = ((-2 * (next_i()%2)) + 1) * next_i();
        reg[_i0].shifts.field_region_end_base = ((-2 * (next_i()%2)) + 1) * next_i();
        reg[_i0].shifts.field_region_end_slope = ((-2 * (next_i()%2)) + 1) * next_i();
        reg[_i0].shifts.field_region_end = ((-2 * (next_i()%2)) + 1) * next_i();
        reg[_i0].shifts.exp_region1_num_segments = ((-2 * (next_i()%2)) + 1) * next_i();
        reg[_i0].shifts.exp_region1_lut_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        reg[_i0].shifts.exp_region0_num_segments = ((-2 * (next_i()%2)) + 1) * next_i();
        reg[_i0].shifts.exp_region0_lut_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dpp1_cm_get_degamma_reg_field(dpp,reg);
          for(int _aux = 0; _aux < _len_dpp0; _aux++) {
          free(dpp[_aux].tf_mask);
          }
          for(int _aux = 0; _aux < _len_dpp0; _aux++) {
          free(dpp[_aux].tf_shift);
          }
          free(dpp);
          free(reg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
