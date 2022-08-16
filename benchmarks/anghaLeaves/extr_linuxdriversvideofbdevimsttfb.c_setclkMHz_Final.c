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
struct TYPE_2__ {int pclk_m; int pclk_n; scalar_t__ pclk_p; } ;
struct imstt_par {TYPE_1__ init; } ;
typedef  int __u32 ;

/* Variables and functions */

__attribute__((used)) static void
setclkMHz(struct imstt_par *par, __u32 MHz)
{
	__u32 clk_m, clk_n, x, stage, spilled;

	clk_m = clk_n = 0;
	stage = spilled = 0;
	for (;;) {
		switch (stage) {
			case 0:
				clk_m++;
				break;
			case 1:
				clk_n++;
				break;
		}
		x = 20 * (clk_m + 1) / (clk_n + 1);
		if (x == MHz)
			break;
		if (x > MHz) {
			spilled = 1;
			stage = 1;
		} else if (spilled && x < MHz) {
			stage = 0;
		}
	}

	par->init.pclk_m = clk_m;
	par->init.pclk_n = clk_n;
	par->init.pclk_p = 0;
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
          int MHz = 100;
          int _len_par0 = 1;
          struct imstt_par * par = (struct imstt_par *) malloc(_len_par0*sizeof(struct imstt_par));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
            par[_i0].init.pclk_m = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].init.pclk_n = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].init.pclk_p = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          setclkMHz(par,MHz);
          free(par);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
