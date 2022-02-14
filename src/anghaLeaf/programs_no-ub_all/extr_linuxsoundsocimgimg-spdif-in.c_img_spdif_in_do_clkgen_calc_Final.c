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
       0            big-arr\n\
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

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int img_spdif_in_do_clkgen_calc(unsigned int rate, unsigned int *pnom,
		unsigned int *phld, unsigned long clk_rate)
{
	unsigned int ori, nom, hld;

	/*
	 * Calculate oversampling ratio, nominal phase increment and hold
	 * increment for the given rate / frequency
	 */

	if (!rate)
		return -EINVAL;

	ori = clk_rate / (rate * 64);

	if (!ori)
		return -EINVAL;

	nom = (4096 / ori) + 1;
	do
		hld = 4096 - (--nom * (ori - 1));
	while (hld < 120);

	*pnom = nom;
	*phld = hld;

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

    // big-arr
    case 0:
    {
          unsigned int rate = 255;
          unsigned long clk_rate = 255;
          int _len_pnom0 = 65025;
          unsigned int * pnom = (unsigned int *) malloc(_len_pnom0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_pnom0; _i0++) {
            pnom[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phld0 = 65025;
          unsigned int * phld = (unsigned int *) malloc(_len_phld0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_phld0; _i0++) {
            phld[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = img_spdif_in_do_clkgen_calc(rate,pnom,phld,clk_rate);
          printf("%d\n", benchRet); 
          free(pnom);
          free(phld);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
