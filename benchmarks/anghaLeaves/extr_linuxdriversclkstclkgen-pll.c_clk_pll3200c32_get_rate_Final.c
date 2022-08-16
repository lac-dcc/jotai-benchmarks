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
struct stm_pll {int idf; int ndiv; } ;

/* Variables and functions */

__attribute__((used)) static int clk_pll3200c32_get_rate(unsigned long input, struct stm_pll *pll,
			unsigned long *rate)
{
	if (!pll->idf)
		pll->idf = 1;

	*rate = ((2 * (input / 1000) * pll->ndiv) / pll->idf) * 1000;

	return 0;
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
          unsigned long input = 100;
          int _len_pll0 = 1;
          struct stm_pll * pll = (struct stm_pll *) malloc(_len_pll0*sizeof(struct stm_pll));
          for(int _i0 = 0; _i0 < _len_pll0; _i0++) {
            pll[_i0].idf = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].ndiv = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rate0 = 1;
          unsigned long * rate = (unsigned long *) malloc(_len_rate0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_rate0; _i0++) {
            rate[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = clk_pll3200c32_get_rate(input,pll,rate);
          printf("%d\n", benchRet); 
          free(pll);
          free(rate);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
