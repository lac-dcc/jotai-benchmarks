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
typedef  int uint32_t ;
struct pll_settings {int actual_pix_clk; int adjusted_pix_clk; int calculated_pix_clk; } ;
struct pixel_clk_params {int requested_pix_clk; scalar_t__ signal_type; int color_depth; } ;
struct dce110_clk_src {int dummy; } ;

/* Variables and functions */
#define  COLOR_DEPTH_101010 130 
#define  COLOR_DEPTH_121212 129 
#define  COLOR_DEPTH_161616 128 
 scalar_t__ SIGNAL_TYPE_HDMI_TYPE_A ; 

__attribute__((used)) static void dce112_get_pix_clk_dividers_helper (
		struct dce110_clk_src *clk_src,
		struct pll_settings *pll_settings,
		struct pixel_clk_params *pix_clk_params)
{
	uint32_t actualPixelClockInKHz;

	actualPixelClockInKHz = pix_clk_params->requested_pix_clk;
	/* Calculate Dividers */
	if (pix_clk_params->signal_type == SIGNAL_TYPE_HDMI_TYPE_A) {
		switch (pix_clk_params->color_depth) {
		case COLOR_DEPTH_101010:
			actualPixelClockInKHz = (actualPixelClockInKHz * 5) >> 2;
			break;
		case COLOR_DEPTH_121212:
			actualPixelClockInKHz = (actualPixelClockInKHz * 6) >> 2;
			break;
		case COLOR_DEPTH_161616:
			actualPixelClockInKHz = actualPixelClockInKHz * 2;
			break;
		default:
			break;
		}
	}
	pll_settings->actual_pix_clk = actualPixelClockInKHz;
	pll_settings->adjusted_pix_clk = actualPixelClockInKHz;
	pll_settings->calculated_pix_clk = pix_clk_params->requested_pix_clk;
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
          int _len_clk_src0 = 1;
          struct dce110_clk_src * clk_src = (struct dce110_clk_src *) malloc(_len_clk_src0*sizeof(struct dce110_clk_src));
          for(int _i0 = 0; _i0 < _len_clk_src0; _i0++) {
            clk_src[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pll_settings0 = 1;
          struct pll_settings * pll_settings = (struct pll_settings *) malloc(_len_pll_settings0*sizeof(struct pll_settings));
          for(int _i0 = 0; _i0 < _len_pll_settings0; _i0++) {
            pll_settings[_i0].actual_pix_clk = ((-2 * (next_i()%2)) + 1) * next_i();
        pll_settings[_i0].adjusted_pix_clk = ((-2 * (next_i()%2)) + 1) * next_i();
        pll_settings[_i0].calculated_pix_clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pix_clk_params0 = 1;
          struct pixel_clk_params * pix_clk_params = (struct pixel_clk_params *) malloc(_len_pix_clk_params0*sizeof(struct pixel_clk_params));
          for(int _i0 = 0; _i0 < _len_pix_clk_params0; _i0++) {
            pix_clk_params[_i0].requested_pix_clk = ((-2 * (next_i()%2)) + 1) * next_i();
        pix_clk_params[_i0].signal_type = ((-2 * (next_i()%2)) + 1) * next_i();
        pix_clk_params[_i0].color_depth = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dce112_get_pix_clk_dividers_helper(clk_src,pll_settings,pix_clk_params);
          free(clk_src);
          free(pll_settings);
          free(pix_clk_params);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
