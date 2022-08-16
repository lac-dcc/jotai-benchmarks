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
typedef  unsigned long u16 ;

/* Variables and functions */
 unsigned int CLKDIV_MAX ; 
 unsigned int HSPCLKDIV_MAX ; 
 unsigned int TBCTL_CLKDIV_SHIFT ; 
 unsigned int TBCTL_HSPCLKDIV_SHIFT ; 

__attribute__((used)) static int set_prescale_div(unsigned long rqst_prescaler, u16 *prescale_div,
			    u16 *tb_clk_div)
{
	unsigned int clkdiv, hspclkdiv;

	for (clkdiv = 0; clkdiv <= CLKDIV_MAX; clkdiv++) {
		for (hspclkdiv = 0; hspclkdiv <= HSPCLKDIV_MAX; hspclkdiv++) {
			/*
			 * calculations for prescaler value :
			 * prescale_div = HSPCLKDIVIDER * CLKDIVIDER.
			 * HSPCLKDIVIDER =  2 ** hspclkdiv
			 * CLKDIVIDER = (1),		if clkdiv == 0 *OR*
			 *		(2 * clkdiv),	if clkdiv != 0
			 *
			 * Configure prescale_div value such that period
			 * register value is less than 65535.
			 */

			*prescale_div = (1 << clkdiv) *
					(hspclkdiv ? (hspclkdiv * 2) : 1);
			if (*prescale_div > rqst_prescaler) {
				*tb_clk_div = (clkdiv << TBCTL_CLKDIV_SHIFT) |
					(hspclkdiv << TBCTL_HSPCLKDIV_SHIFT);
				return 0;
			}
		}
	}

	return 1;
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
          unsigned long rqst_prescaler = 100;
          int _len_prescale_div0 = 1;
          unsigned long * prescale_div = (unsigned long *) malloc(_len_prescale_div0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_prescale_div0; _i0++) {
            prescale_div[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tb_clk_div0 = 1;
          unsigned long * tb_clk_div = (unsigned long *) malloc(_len_tb_clk_div0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_tb_clk_div0; _i0++) {
            tb_clk_div[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = set_prescale_div(rqst_prescaler,prescale_div,tb_clk_div);
          printf("%d\n", benchRet); 
          free(prescale_div);
          free(tb_clk_div);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
