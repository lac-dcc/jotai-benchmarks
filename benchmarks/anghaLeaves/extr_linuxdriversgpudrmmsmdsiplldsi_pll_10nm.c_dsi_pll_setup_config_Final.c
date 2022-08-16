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
struct dsi_pll_config {int output_div; int dec_bits; int frac_bits; int lock_timer; int ssc_freq; int ssc_offset; int ssc_adj_per; int thresh_cycles; int refclk_cycles; int div_override; int ignore_frac; int disable_prescaler; int enable_ssc; scalar_t__ ssc_center; int /*<<< orphan*/  ref_freq; } ;
struct dsi_pll_10nm {int /*<<< orphan*/  vco_ref_clk_rate; struct dsi_pll_config pll_configuration; } ;

/* Variables and functions */

__attribute__((used)) static void dsi_pll_setup_config(struct dsi_pll_10nm *pll)
{
	struct dsi_pll_config *config = &pll->pll_configuration;

	config->ref_freq = pll->vco_ref_clk_rate;
	config->output_div = 1;
	config->dec_bits = 8;
	config->frac_bits = 18;
	config->lock_timer = 64;
	config->ssc_freq = 31500;
	config->ssc_offset = 5000;
	config->ssc_adj_per = 2;
	config->thresh_cycles = 32;
	config->refclk_cycles = 256;

	config->div_override = false;
	config->ignore_frac = false;
	config->disable_prescaler = false;

	config->enable_ssc = false;
	config->ssc_center = 0;
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
          struct dsi_pll_10nm * pll = (struct dsi_pll_10nm *) malloc(_len_pll0*sizeof(struct dsi_pll_10nm));
          for(int _i0 = 0; _i0 < _len_pll0; _i0++) {
            pll[_i0].vco_ref_clk_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].pll_configuration.output_div = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].pll_configuration.dec_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].pll_configuration.frac_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].pll_configuration.lock_timer = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].pll_configuration.ssc_freq = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].pll_configuration.ssc_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].pll_configuration.ssc_adj_per = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].pll_configuration.thresh_cycles = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].pll_configuration.refclk_cycles = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].pll_configuration.div_override = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].pll_configuration.ignore_frac = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].pll_configuration.disable_prescaler = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].pll_configuration.enable_ssc = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].pll_configuration.ssc_center = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].pll_configuration.ref_freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dsi_pll_setup_config(pll);
          free(pll);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
