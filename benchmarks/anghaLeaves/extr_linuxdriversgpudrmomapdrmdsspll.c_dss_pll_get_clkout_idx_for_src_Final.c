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
typedef  enum dss_clk_source { ____Placeholder_dss_clk_source } dss_clk_source ;

/* Variables and functions */
#define  DSS_CLK_SRC_HDMI_PLL 134 
#define  DSS_CLK_SRC_PLL1_1 133 
#define  DSS_CLK_SRC_PLL1_2 132 
#define  DSS_CLK_SRC_PLL1_3 131 
#define  DSS_CLK_SRC_PLL2_1 130 
#define  DSS_CLK_SRC_PLL2_2 129 
#define  DSS_CLK_SRC_PLL2_3 128 

unsigned int dss_pll_get_clkout_idx_for_src(enum dss_clk_source src)
{
	switch (src) {
	case DSS_CLK_SRC_HDMI_PLL:
		return 0;

	case DSS_CLK_SRC_PLL1_1:
	case DSS_CLK_SRC_PLL2_1:
		return 0;

	case DSS_CLK_SRC_PLL1_2:
	case DSS_CLK_SRC_PLL2_2:
		return 1;

	case DSS_CLK_SRC_PLL1_3:
	case DSS_CLK_SRC_PLL2_3:
		return 2;

	default:
		return 0;
	}
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
          enum dss_clk_source src = 0;
          unsigned int benchRet = dss_pll_get_clkout_idx_for_src(src);
          printf("%u\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
