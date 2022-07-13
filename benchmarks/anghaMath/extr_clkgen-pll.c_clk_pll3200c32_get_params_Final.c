// ========================================================================= //

// includes
#include <math.h>
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "limits.h"
#include "float.h"



#define JOTAI_NUM_RANDS_ 25

const unsigned rand_primes[JOTAI_NUM_RANDS_] = {179, 103, 479, 647, 229, 37, 271, 557, 263, 607, 18743, 50359, 21929, 48757, 98179, 12907, 52937, 64579, 49957, 52567, 507163, 149939, 412157, 680861, 757751};

int next_i() {
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct stm_pll {unsigned long idf; unsigned long ndiv; int cp; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int clk_pll3200c32_get_params(unsigned long input, unsigned long output,
			  struct stm_pll *pll)
{
	unsigned long i, n;
	unsigned long deviation = ~0;
	unsigned long new_freq;
	long new_deviation;
	/* Charge pump table: highest ndiv value for cp=6 to 25 */
	static const unsigned char cp_table[] = {
		48, 56, 64, 72, 80, 88, 96, 104, 112, 120,
		128, 136, 144, 152, 160, 168, 176, 184, 192
	};

	/* Output clock range: 800Mhz to 1600Mhz */
	if (output < 800000000 || output > 1600000000)
		return -EINVAL;

	input /= 1000;
	output /= 1000;

	for (i = 1; i <= 7 && deviation; i++) {
		n = i * output / (2 * input);

		/* Checks */
		if (n < 8)
			continue;
		if (n > 200)
			break;

		new_freq = (input * 2 * n) / i;

		new_deviation = abs(new_freq - output);

		if (!new_deviation || new_deviation < deviation) {
			pll->idf  = i;
			pll->ndiv = n;
			deviation = new_deviation;
		}
	}

	if (deviation == ~0) /* No solution found */
		return -EINVAL;

	/* Computing recommended charge pump value */
	for (pll->cp = 6; pll->ndiv > cp_table[pll->cp-6]; (pll->cp)++)
		;

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
          unsigned long output = 100;
          int _len_pll0 = 1;
          struct stm_pll * pll = (struct stm_pll *) malloc(_len_pll0*sizeof(struct stm_pll));
          for(int _i0 = 0; _i0 < _len_pll0; _i0++) {
            pll[_i0].idf = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].ndiv = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].cp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = clk_pll3200c32_get_params(input,output,pll);
          printf("%d\n", benchRet); 
          free(pll);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long input = 255;
          unsigned long output = 255;
          int _len_pll0 = 65025;
          struct stm_pll * pll = (struct stm_pll *) malloc(_len_pll0*sizeof(struct stm_pll));
          for(int _i0 = 0; _i0 < _len_pll0; _i0++) {
            pll[_i0].idf = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].ndiv = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].cp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = clk_pll3200c32_get_params(input,output,pll);
          printf("%d\n", benchRet); 
          free(pll);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long input = 10;
          unsigned long output = 10;
          int _len_pll0 = 100;
          struct stm_pll * pll = (struct stm_pll *) malloc(_len_pll0*sizeof(struct stm_pll));
          for(int _i0 = 0; _i0 < _len_pll0; _i0++) {
            pll[_i0].idf = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].ndiv = ((-2 * (next_i()%2)) + 1) * next_i();
        pll[_i0].cp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = clk_pll3200c32_get_params(input,output,pll);
          printf("%d\n", benchRet); 
          free(pll);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
