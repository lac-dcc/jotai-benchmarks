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
struct radeonfb_info {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void radeon_fixup_panel_info(struct radeonfb_info *rinfo)
{
#ifdef CONFIG_PPC
	/*
	 * LCD Flat panels should use fixed dividers, we enfore that on
	 * PPC only for now...
	 */
	if (!rinfo->panel_info.use_bios_dividers && rinfo->mon1_type == MT_LCD
	    && rinfo->is_mobility) {
		int ppll_div_sel;
		u32 ppll_divn;
		ppll_div_sel = INREG8(CLOCK_CNTL_INDEX + 1) & 0x3;
		radeon_pll_errata_after_index(rinfo);
		ppll_divn = INPLL(PPLL_DIV_0 + ppll_div_sel);
		rinfo->panel_info.ref_divider = rinfo->pll.ref_div;
		rinfo->panel_info.fbk_divider = ppll_divn & 0x7ff;
		rinfo->panel_info.post_divider = (ppll_divn >> 16) & 0x7;
		rinfo->panel_info.use_bios_dividers = 1;

		printk(KERN_DEBUG "radeonfb: Using Firmware dividers 0x%08x "
		       "from PPLL %d\n",
		       rinfo->panel_info.fbk_divider |
		       (rinfo->panel_info.post_divider << 16),
		       ppll_div_sel);
	}
#endif /* CONFIG_PPC */
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
          int _len_rinfo0 = 1;
          struct radeonfb_info * rinfo = (struct radeonfb_info *) malloc(_len_rinfo0*sizeof(struct radeonfb_info));
          for(int _i0 = 0; _i0 < _len_rinfo0; _i0++) {
            rinfo[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          radeon_fixup_panel_info(rinfo);
          free(rinfo);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_rinfo0 = 100;
          struct radeonfb_info * rinfo = (struct radeonfb_info *) malloc(_len_rinfo0*sizeof(struct radeonfb_info));
          for(int _i0 = 0; _i0 < _len_rinfo0; _i0++) {
            rinfo[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          radeon_fixup_panel_info(rinfo);
          free(rinfo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
