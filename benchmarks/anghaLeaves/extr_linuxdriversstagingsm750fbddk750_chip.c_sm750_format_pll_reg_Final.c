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
struct pll_value {unsigned int POD; unsigned int OD; unsigned int M; unsigned int N; } ;

/* Variables and functions */
 unsigned int PLL_CTRL_M_MASK ; 
 unsigned int PLL_CTRL_M_SHIFT ; 
 unsigned int PLL_CTRL_N_MASK ; 
 unsigned int PLL_CTRL_N_SHIFT ; 
 unsigned int PLL_CTRL_OD_MASK ; 
 unsigned int PLL_CTRL_OD_SHIFT ; 
 unsigned int PLL_CTRL_POD_MASK ; 
 unsigned int PLL_CTRL_POD_SHIFT ; 
 unsigned int PLL_CTRL_POWER ; 

unsigned int sm750_format_pll_reg(struct pll_value *pPLL)
{
#ifndef VALIDATION_CHIP
	unsigned int POD = pPLL->POD;
#endif
	unsigned int OD = pPLL->OD;
	unsigned int M = pPLL->M;
	unsigned int N = pPLL->N;
	unsigned int reg = 0;

	/*
	 * Note that all PLL's have the same format. Here, we just use
	 * Panel PLL parameter to work out the bit fields in the
	 * register. On returning a 32 bit number, the value can be
	 * applied to any PLL in the calling function.
	 */
	reg = PLL_CTRL_POWER |
#ifndef VALIDATION_CHIP
		((POD << PLL_CTRL_POD_SHIFT) & PLL_CTRL_POD_MASK) |
#endif
		((OD << PLL_CTRL_OD_SHIFT) & PLL_CTRL_OD_MASK) |
		((N << PLL_CTRL_N_SHIFT) & PLL_CTRL_N_MASK) |
		((M << PLL_CTRL_M_SHIFT) & PLL_CTRL_M_MASK);

	return reg;
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
          int _len_pPLL0 = 1;
          struct pll_value * pPLL = (struct pll_value *) malloc(_len_pPLL0*sizeof(struct pll_value));
          for(int _i0 = 0; _i0 < _len_pPLL0; _i0++) {
            pPLL[_i0].POD = ((-2 * (next_i()%2)) + 1) * next_i();
        pPLL[_i0].OD = ((-2 * (next_i()%2)) + 1) * next_i();
        pPLL[_i0].M = ((-2 * (next_i()%2)) + 1) * next_i();
        pPLL[_i0].N = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = sm750_format_pll_reg(pPLL);
          printf("%u\n", benchRet); 
          free(pPLL);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
