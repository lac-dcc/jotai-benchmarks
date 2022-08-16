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
struct TYPE_2__ {int dsiclk_sel; int vco_measure_time; int kvco_measure_time; int bandgap_timer; int pll_wakeup_timer; int plllock_cnt; int ssc_en; int ssc_spread; int ssc_freq; int ssc_adj_period; int pll_ie_trim; int pll_ip_trim; int pll_cpcset_cur; int pll_cpmset_cur; int pll_icpmset; int pll_icpcset; int pll_lpf_res1; int pll_lpf_cap1; int pll_lpf_cap2; int pll_iptat_trim; int pll_c3ctrl; int pll_r3ctrl; scalar_t__ pll_icpcset_m; scalar_t__ pll_icpcset_p; scalar_t__ pll_icpmset_m; scalar_t__ pll_icpmset_p; scalar_t__ ssc_center; scalar_t__ plllock_rng; scalar_t__ refclk_dbler_en; scalar_t__ ldo_en; scalar_t__ fdata; int /*<<< orphan*/  fref; } ;
struct dsi_pll_14nm {TYPE_1__ in; int /*<<< orphan*/  vco_ref_clk_rate; } ;

/* Variables and functions */

__attribute__((used)) static void dsi_pll_14nm_input_init(struct dsi_pll_14nm *pll)
{
	pll->in.fref = pll->vco_ref_clk_rate;
	pll->in.fdata = 0;
	pll->in.dsiclk_sel = 1;	/* Use the /2 path in Mux */
	pll->in.ldo_en = 0;	/* disabled for now */

	/* fixed input */
	pll->in.refclk_dbler_en = 0;
	pll->in.vco_measure_time = 5;
	pll->in.kvco_measure_time = 5;
	pll->in.bandgap_timer = 4;
	pll->in.pll_wakeup_timer = 5;
	pll->in.plllock_cnt = 1;
	pll->in.plllock_rng = 0;

	/*
	 * SSC is enabled by default. We might need DT props for configuring
	 * some SSC params like PPM and center/down spread etc.
	 */
	pll->in.ssc_en = 1;
	pll->in.ssc_center = 0;		/* down spread by default */
	pll->in.ssc_spread = 5;		/* PPM / 1000 */
	pll->in.ssc_freq = 31500;	/* default recommended */
	pll->in.ssc_adj_period = 37;

	pll->in.pll_ie_trim = 4;
	pll->in.pll_ip_trim = 4;
	pll->in.pll_cpcset_cur = 1;
	pll->in.pll_cpmset_cur = 1;
	pll->in.pll_icpmset = 4;
	pll->in.pll_icpcset = 4;
	pll->in.pll_icpmset_p = 0;
	pll->in.pll_icpmset_m = 0;
	pll->in.pll_icpcset_p = 0;
	pll->in.pll_icpcset_m = 0;
	pll->in.pll_lpf_res1 = 3;
	pll->in.pll_lpf_cap1 = 11;
	pll->in.pll_lpf_cap2 = 1;
	pll->in.pll_iptat_trim = 7;
	pll->in.pll_c3ctrl = 2;
	pll->in.pll_r3ctrl = 1;
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
          int _len_pll0 = 1;
          struct dsi_pll_14nm * pll = (struct dsi_pll_14nm *) malloc(_len_pll0*sizeof(struct dsi_pll_14nm));
          for(int _i0 = 0; _i0 < _len_pll0; _i0++) {
            pll[_i0].in.dsiclk_sel = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].in.vco_measure_time = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].in.kvco_measure_time = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].in.bandgap_timer = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].in.pll_wakeup_timer = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].in.plllock_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].in.ssc_en = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].in.ssc_spread = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].in.ssc_freq = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].in.ssc_adj_period = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].in.pll_ie_trim = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].in.pll_ip_trim = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].in.pll_cpcset_cur = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].in.pll_cpmset_cur = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].in.pll_icpmset = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].in.pll_icpcset = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].in.pll_lpf_res1 = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].in.pll_lpf_cap1 = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].in.pll_lpf_cap2 = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].in.pll_iptat_trim = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].in.pll_c3ctrl = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].in.pll_r3ctrl = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].in.pll_icpcset_m = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].in.pll_icpcset_p = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].in.pll_icpmset_m = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].in.pll_icpmset_p = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].in.ssc_center = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].in.plllock_rng = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].in.refclk_dbler_en = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].in.ldo_en = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].in.fdata = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].in.fref = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].vco_ref_clk_rate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dsi_pll_14nm_input_init(pll);
          free(pll);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
