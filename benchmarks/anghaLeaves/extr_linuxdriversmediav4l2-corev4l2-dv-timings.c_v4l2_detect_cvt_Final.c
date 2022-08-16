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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u32 ;
struct TYPE_2__ {int width; int height; int hfrontporch; int vfrontporch; int hsync; unsigned int vsync; int hbackporch; unsigned int vbackporch; unsigned int il_vbackporch; int il_vfrontporch; unsigned int il_vsync; unsigned int pixelclock; int /*<<< orphan*/  flags; int /*<<< orphan*/  standards; int /*<<< orphan*/  interlaced; scalar_t__ polarities; } ;
struct v4l2_dv_timings {TYPE_1__ bt; int /*<<< orphan*/  type; } ;

/* Variables and functions */
 int CVT_CELL_GRAN ; 
 int CVT_C_PRIME ; 
 int CVT_HSYNC_PERCENT ; 
 unsigned int CVT_MIN_VSYNC_BP ; 
 int CVT_MIN_V_BPORCH ; 
 int CVT_MIN_V_PORCH_RND ; 
 int CVT_M_PRIME ; 
 unsigned int CVT_PXL_CLK_GRAN ; 
 unsigned int CVT_PXL_CLK_GRAN_RB_V2 ; 
 int CVT_RB_H_BLANK ; 
 int CVT_RB_H_SYNC ; 
 unsigned int CVT_RB_MIN_V_BLANK ; 
 int CVT_RB_MIN_V_BPORCH ; 
 int CVT_RB_V2_H_BLANK ; 
 int CVT_RB_V2_MIN_V_FPORCH ; 
 int CVT_RB_V_BPORCH ; 
 int CVT_RB_V_FPORCH ; 
 int /*<<< orphan*/  V4L2_DV_BT_656_1120 ; 
 int /*<<< orphan*/  V4L2_DV_BT_STD_CVT ; 
 int /*<<< orphan*/  V4L2_DV_FL_HALF_LINE ; 
 int /*<<< orphan*/  V4L2_DV_FL_REDUCED_BLANKING ; 
 scalar_t__ V4L2_DV_HSYNC_POS_POL ; 
 int /*<<< orphan*/  V4L2_DV_INTERLACED ; 
 int /*<<< orphan*/  V4L2_DV_PROGRESSIVE ; 
 scalar_t__ V4L2_DV_VSYNC_POS_POL ; 

bool v4l2_detect_cvt(unsigned frame_height,
		     unsigned hfreq,
		     unsigned vsync,
		     unsigned active_width,
		     u32 polarities,
		     bool interlaced,
		     struct v4l2_dv_timings *fmt)
{
	int  v_fp, v_bp, h_fp, h_bp, hsync;
	int  frame_width, image_height, image_width;
	bool reduced_blanking;
	bool rb_v2 = false;
	unsigned pix_clk;

	if (vsync < 4 || vsync > 8)
		return false;

	if (polarities == V4L2_DV_VSYNC_POS_POL)
		reduced_blanking = false;
	else if (polarities == V4L2_DV_HSYNC_POS_POL)
		reduced_blanking = true;
	else
		return false;

	if (reduced_blanking && vsync == 8)
		rb_v2 = true;

	if (rb_v2 && active_width == 0)
		return false;

	if (!rb_v2 && vsync > 7)
		return false;

	if (hfreq == 0)
		return false;

	/* Vertical */
	if (reduced_blanking) {
		if (rb_v2) {
			v_bp = CVT_RB_V_BPORCH;
			v_fp = (CVT_RB_MIN_V_BLANK * hfreq) / 1000000 + 1;
			v_fp -= vsync + v_bp;

			if (v_fp < CVT_RB_V2_MIN_V_FPORCH)
				v_fp = CVT_RB_V2_MIN_V_FPORCH;
		} else {
			v_fp = CVT_RB_V_FPORCH;
			v_bp = (CVT_RB_MIN_V_BLANK * hfreq) / 1000000 + 1;
			v_bp -= vsync + v_fp;

			if (v_bp < CVT_RB_MIN_V_BPORCH)
				v_bp = CVT_RB_MIN_V_BPORCH;
		}
	} else {
		v_fp = CVT_MIN_V_PORCH_RND;
		v_bp = (CVT_MIN_VSYNC_BP * hfreq) / 1000000 + 1 - vsync;

		if (v_bp < CVT_MIN_V_BPORCH)
			v_bp = CVT_MIN_V_BPORCH;
	}

	if (interlaced)
		image_height = (frame_height - 2 * v_fp - 2 * vsync - 2 * v_bp) & ~0x1;
	else
		image_height = (frame_height - v_fp - vsync - v_bp + 1) & ~0x1;

	if (image_height < 0)
		return false;

	/* Aspect ratio based on vsync */
	switch (vsync) {
	case 4:
		image_width = (image_height * 4) / 3;
		break;
	case 5:
		image_width = (image_height * 16) / 9;
		break;
	case 6:
		image_width = (image_height * 16) / 10;
		break;
	case 7:
		/* special case */
		if (image_height == 1024)
			image_width = (image_height * 5) / 4;
		else if (image_height == 768)
			image_width = (image_height * 15) / 9;
		else
			return false;
		break;
	case 8:
		image_width = active_width;
		break;
	default:
		return false;
	}

	if (!rb_v2)
		image_width = image_width & ~7;

	/* Horizontal */
	if (reduced_blanking) {
		int h_blank;
		int clk_gran;

		h_blank = rb_v2 ? CVT_RB_V2_H_BLANK : CVT_RB_H_BLANK;
		clk_gran = rb_v2 ? CVT_PXL_CLK_GRAN_RB_V2 : CVT_PXL_CLK_GRAN;

		pix_clk = (image_width + h_blank) * hfreq;
		pix_clk = (pix_clk / clk_gran) * clk_gran;

		h_bp  = h_blank / 2;
		hsync = CVT_RB_H_SYNC;
		h_fp  = h_blank - h_bp - hsync;

		frame_width = image_width + h_blank;
	} else {
		unsigned ideal_duty_cycle_per_myriad =
			100 * CVT_C_PRIME - (CVT_M_PRIME * 100000) / hfreq;
		int h_blank;

		if (ideal_duty_cycle_per_myriad < 2000)
			ideal_duty_cycle_per_myriad = 2000;

		h_blank = image_width * ideal_duty_cycle_per_myriad /
					(10000 - ideal_duty_cycle_per_myriad);
		h_blank = (h_blank / (2 * CVT_CELL_GRAN)) * 2 * CVT_CELL_GRAN;

		pix_clk = (image_width + h_blank) * hfreq;
		pix_clk = (pix_clk / CVT_PXL_CLK_GRAN) * CVT_PXL_CLK_GRAN;

		h_bp = h_blank / 2;
		frame_width = image_width + h_blank;

		hsync = frame_width * CVT_HSYNC_PERCENT / 100;
		hsync = (hsync / CVT_CELL_GRAN) * CVT_CELL_GRAN;
		h_fp = h_blank - hsync - h_bp;
	}

	fmt->type = V4L2_DV_BT_656_1120;
	fmt->bt.polarities = polarities;
	fmt->bt.width = image_width;
	fmt->bt.height = image_height;
	fmt->bt.hfrontporch = h_fp;
	fmt->bt.vfrontporch = v_fp;
	fmt->bt.hsync = hsync;
	fmt->bt.vsync = vsync;
	fmt->bt.hbackporch = frame_width - image_width - h_fp - hsync;

	if (!interlaced) {
		fmt->bt.vbackporch = frame_height - image_height - v_fp - vsync;
		fmt->bt.interlaced = V4L2_DV_PROGRESSIVE;
	} else {
		fmt->bt.vbackporch = (frame_height - image_height - 2 * v_fp -
				      2 * vsync) / 2;
		fmt->bt.il_vbackporch = frame_height - image_height - 2 * v_fp -
					2 * vsync - fmt->bt.vbackporch;
		fmt->bt.il_vfrontporch = v_fp;
		fmt->bt.il_vsync = vsync;
		fmt->bt.flags |= V4L2_DV_FL_HALF_LINE;
		fmt->bt.interlaced = V4L2_DV_INTERLACED;
	}

	fmt->bt.pixelclock = pix_clk;
	fmt->bt.standards = V4L2_DV_BT_STD_CVT;

	if (reduced_blanking)
		fmt->bt.flags |= V4L2_DV_FL_REDUCED_BLANKING;

	return true;
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
          unsigned int frame_height = 100;
          unsigned int hfreq = 100;
          unsigned int vsync = 100;
          unsigned int active_width = 100;
          long polarities = 100;
          int interlaced = 100;
          int _len_fmt0 = 1;
          struct v4l2_dv_timings * fmt = (struct v4l2_dv_timings *) malloc(_len_fmt0*sizeof(struct v4l2_dv_timings));
          for(int _i0 = 0; _i0 < _len_fmt0; _i0++) {
            fmt[_i0].bt.width = ((-2 * (next_i()%2)) + 1) * next_i();
        fmt[_i0].bt.height = ((-2 * (next_i()%2)) + 1) * next_i();
        fmt[_i0].bt.hfrontporch = ((-2 * (next_i()%2)) + 1) * next_i();
        fmt[_i0].bt.vfrontporch = ((-2 * (next_i()%2)) + 1) * next_i();
        fmt[_i0].bt.hsync = ((-2 * (next_i()%2)) + 1) * next_i();
        fmt[_i0].bt.vsync = ((-2 * (next_i()%2)) + 1) * next_i();
        fmt[_i0].bt.hbackporch = ((-2 * (next_i()%2)) + 1) * next_i();
        fmt[_i0].bt.vbackporch = ((-2 * (next_i()%2)) + 1) * next_i();
        fmt[_i0].bt.il_vbackporch = ((-2 * (next_i()%2)) + 1) * next_i();
        fmt[_i0].bt.il_vfrontporch = ((-2 * (next_i()%2)) + 1) * next_i();
        fmt[_i0].bt.il_vsync = ((-2 * (next_i()%2)) + 1) * next_i();
        fmt[_i0].bt.pixelclock = ((-2 * (next_i()%2)) + 1) * next_i();
        fmt[_i0].bt.flags = ((-2 * (next_i()%2)) + 1) * next_i();
        fmt[_i0].bt.standards = ((-2 * (next_i()%2)) + 1) * next_i();
        fmt[_i0].bt.interlaced = ((-2 * (next_i()%2)) + 1) * next_i();
        fmt[_i0].bt.polarities = ((-2 * (next_i()%2)) + 1) * next_i();
        fmt[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = v4l2_detect_cvt(frame_height,hfreq,vsync,active_width,polarities,interlaced,fmt);
          printf("%d\n", benchRet); 
          free(fmt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
