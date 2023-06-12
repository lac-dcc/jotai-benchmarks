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
       0            empty\n\
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
struct pistachio_pll_rate_table {unsigned long fref; unsigned long fout; } ;
struct pistachio_clk_pll {unsigned int nr_rates; struct pistachio_pll_rate_table* rates; } ;

/* Variables and functions */

__attribute__((used)) static struct pistachio_pll_rate_table *
pll_get_params(struct pistachio_clk_pll *pll, unsigned long fref,
	       unsigned long fout)
{
	unsigned int i;

	for (i = 0; i < pll->nr_rates; i++) {
		if (pll->rates[i].fref == fref && pll->rates[i].fout == fout)
			return &pll->rates[i];
	}

	return NULL;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // empty
    case 0:
    {
          unsigned long fref = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned long fout = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_pll0 = 1;
          struct pistachio_clk_pll * pll = (struct pistachio_clk_pll *) malloc(_len_pll0*sizeof(struct pistachio_clk_pll));
          for(int _i0 = 0; _i0 < _len_pll0; _i0++) {
              pll[_i0].nr_rates = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pll__i0__rates0 = 1;
          pll[_i0].rates = (struct pistachio_pll_rate_table *) malloc(_len_pll__i0__rates0*sizeof(struct pistachio_pll_rate_table));
          for(int _j0 = 0; _j0 < _len_pll__i0__rates0; _j0++) {
              pll[_i0].rates->fref = ((-2 * (next_i()%2)) + 1) * next_i();
          pll[_i0].rates->fout = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          struct pistachio_pll_rate_table * benchRet = pll_get_params(pll,fref,fout);
          printf("%lu\n", (*benchRet).fref);
          printf("%lu\n", (*benchRet).fout);
          for(int _aux = 0; _aux < _len_pll0; _aux++) {
          free(pll[_aux].rates);
          }
          free(pll);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
