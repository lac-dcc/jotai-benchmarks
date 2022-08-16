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
typedef  int /*<<< orphan*/  uint32_t ;
typedef  enum as_signal_type { ____Placeholder_as_signal_type } as_signal_type ;

/* Variables and functions */
 int /*<<< orphan*/  ASIC_INTERNAL_GPUPLL_SS ; 
 int /*<<< orphan*/  ASIC_INTERNAL_SS_ON_DP ; 
 int /*<<< orphan*/  ASIC_INTERNAL_SS_ON_HDMI ; 
 int /*<<< orphan*/  ASIC_INTERNAL_SS_ON_LVDS ; 
 int /*<<< orphan*/  ASIC_INTERNAL_SS_ON_TMDS ; 
#define  AS_SIGNAL_TYPE_DISPLAY_PORT 132 
#define  AS_SIGNAL_TYPE_DVI 131 
#define  AS_SIGNAL_TYPE_GPU_PLL 130 
#define  AS_SIGNAL_TYPE_HDMI 129 
#define  AS_SIGNAL_TYPE_LVDS 128 

__attribute__((used)) static uint32_t signal_to_ss_id(enum as_signal_type signal)
{
	uint32_t clk_id_ss = 0;

	switch (signal) {
	case AS_SIGNAL_TYPE_DVI:
		clk_id_ss = ASIC_INTERNAL_SS_ON_TMDS;
		break;
	case AS_SIGNAL_TYPE_HDMI:
		clk_id_ss = ASIC_INTERNAL_SS_ON_HDMI;
		break;
	case AS_SIGNAL_TYPE_LVDS:
		clk_id_ss = ASIC_INTERNAL_SS_ON_LVDS;
		break;
	case AS_SIGNAL_TYPE_DISPLAY_PORT:
		clk_id_ss = ASIC_INTERNAL_SS_ON_DP;
		break;
	case AS_SIGNAL_TYPE_GPU_PLL:
		clk_id_ss = ASIC_INTERNAL_GPUPLL_SS;
		break;
	default:
		break;
	}
	return clk_id_ss;
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
          enum as_signal_type signal = 0;
          int benchRet = signal_to_ss_id(signal);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
