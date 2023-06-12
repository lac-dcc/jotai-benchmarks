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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 19
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 19
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 19
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          unsigned int rate = 100;
        
          unsigned long clk_rate = 100;
        
          int _len_pnom0 = 1;
          unsigned int * pnom = (unsigned int *) malloc(_len_pnom0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_pnom0; _i0++) {
            pnom[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_phld0 = 1;
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


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 19
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 19
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 19
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

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


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 19
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 19
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 19
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          unsigned int rate = 10;
        
          unsigned long clk_rate = 10;
        
          int _len_pnom0 = 100;
          unsigned int * pnom = (unsigned int *) malloc(_len_pnom0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_pnom0; _i0++) {
            pnom[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_phld0 = 100;
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


    // empty
    case 3:
    {
          // static_instructions_O0 : 43
          // dynamic_instructions_O0 : 43
          // ------------------------------- 
          // static_instructions_O1 : 33
          // dynamic_instructions_O1 : 33
          // ------------------------------- 
          // static_instructions_O2 : 34
          // dynamic_instructions_O2 : 34
          // ------------------------------- 
          // static_instructions_O3 : 34
          // dynamic_instructions_O3 : 34
          // ------------------------------- 
          // static_instructions_Ofast : 34
          // dynamic_instructions_Ofast : 34
          // ------------------------------- 
          // static_instructions_Os : 32
          // dynamic_instructions_Os : 32
          // ------------------------------- 
          // static_instructions_Oz : 32
          // dynamic_instructions_Oz : 32
          // ------------------------------- 

          unsigned int rate = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned long clk_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_pnom0 = 1;
          unsigned int * pnom = (unsigned int *) malloc(_len_pnom0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_pnom0; _i0++) {
            pnom[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_phld0 = 1;
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
