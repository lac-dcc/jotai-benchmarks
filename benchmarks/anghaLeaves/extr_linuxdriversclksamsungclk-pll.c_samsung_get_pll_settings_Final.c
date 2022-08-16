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
struct samsung_pll_rate_table {unsigned long rate; } ;
struct samsung_clk_pll {int rate_count; struct samsung_pll_rate_table* rate_table; } ;

/* Variables and functions */

__attribute__((used)) static const struct samsung_pll_rate_table *samsung_get_pll_settings(
				struct samsung_clk_pll *pll, unsigned long rate)
{
	const struct samsung_pll_rate_table  *rate_table = pll->rate_table;
	int i;

	for (i = 0; i < pll->rate_count; i++) {
		if (rate == rate_table[i].rate)
			return &rate_table[i];
	}

	return NULL;
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
          unsigned long rate = 100;
          int _len_pll0 = 1;
          struct samsung_clk_pll * pll = (struct samsung_clk_pll *) malloc(_len_pll0*sizeof(struct samsung_clk_pll));
          for(int _i0 = 0; _i0 < _len_pll0; _i0++) {
            pll[_i0].rate_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pll__i0__rate_table0 = 1;
          pll[_i0].rate_table = (struct samsung_pll_rate_table *) malloc(_len_pll__i0__rate_table0*sizeof(struct samsung_pll_rate_table));
          for(int _j0 = 0; _j0 < _len_pll__i0__rate_table0; _j0++) {
            pll[_i0].rate_table->rate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          const struct samsung_pll_rate_table * benchRet = samsung_get_pll_settings(pll,rate);
          for(int _aux = 0; _aux < _len_pll0; _aux++) {
          free(pll[_aux].rate_table);
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
