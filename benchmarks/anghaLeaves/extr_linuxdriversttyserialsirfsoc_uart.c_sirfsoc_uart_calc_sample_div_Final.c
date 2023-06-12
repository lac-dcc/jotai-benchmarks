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
 unsigned int SIRF_IOCLK_DIV_MASK ; 
 unsigned long SIRF_IOCLK_DIV_MAX ; 
 unsigned short SIRF_MAX_SAMPLE_DIV ; 
 unsigned short SIRF_MIN_SAMPLE_DIV ; 
 unsigned int SIRF_SAMPLE_DIV_MASK ; 
 unsigned short SIRF_SAMPLE_DIV_SHIFT ; 

__attribute__((used)) static unsigned int
sirfsoc_uart_calc_sample_div(unsigned long baud_rate,
			unsigned long ioclk_rate, unsigned long *set_baud)
{
	unsigned long min_delta = ~0UL;
	unsigned short sample_div;
	unsigned int regv = 0;
	unsigned long ioclk_div;
	unsigned long baud_tmp;
	int temp_delta;

	for (sample_div = SIRF_MIN_SAMPLE_DIV;
			sample_div <= SIRF_MAX_SAMPLE_DIV; sample_div++) {
		ioclk_div = (ioclk_rate / (baud_rate * (sample_div + 1))) - 1;
		if (ioclk_div > SIRF_IOCLK_DIV_MAX)
			continue;
		baud_tmp = ioclk_rate / ((ioclk_div + 1) * (sample_div + 1));
		temp_delta = baud_tmp - baud_rate;
		temp_delta = (temp_delta > 0) ? temp_delta : -temp_delta;
		if (temp_delta < min_delta) {
			regv = regv & (~SIRF_IOCLK_DIV_MASK);
			regv = regv | ioclk_div;
			regv = regv & (~SIRF_SAMPLE_DIV_MASK);
			regv = regv | (sample_div << SIRF_SAMPLE_DIV_SHIFT);
			min_delta = temp_delta;
			*set_baud = baud_tmp;
		}
	}
	return regv;
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
          // static_instructions_O0 : 82
          // dynamic_instructions_O0 : 86
          // ------------------------------- 
          // static_instructions_O1 : 64
          // dynamic_instructions_O1 : 64
          // ------------------------------- 
          // static_instructions_O2 : 72
          // dynamic_instructions_O2 : 72
          // ------------------------------- 
          // static_instructions_O3 : 72
          // dynamic_instructions_O3 : 72
          // ------------------------------- 
          // static_instructions_Ofast : 72
          // dynamic_instructions_Ofast : 72
          // ------------------------------- 
          // static_instructions_Os : 63
          // dynamic_instructions_Os : 63
          // ------------------------------- 
          // static_instructions_Oz : 61
          // dynamic_instructions_Oz : 63
          // ------------------------------- 

          unsigned long baud_rate = 100;
        
          unsigned long ioclk_rate = 100;
        
          int _len_set_baud0 = 1;
          unsigned long * set_baud = (unsigned long *) malloc(_len_set_baud0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_set_baud0; _i0++) {
            set_baud[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          unsigned int benchRet = sirfsoc_uart_calc_sample_div(baud_rate,ioclk_rate,set_baud);
          printf("%u\n", benchRet); 
          free(set_baud);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 82
          // dynamic_instructions_O0 : 86
          // ------------------------------- 
          // static_instructions_O1 : 64
          // dynamic_instructions_O1 : 64
          // ------------------------------- 
          // static_instructions_O2 : 72
          // dynamic_instructions_O2 : 72
          // ------------------------------- 
          // static_instructions_O3 : 72
          // dynamic_instructions_O3 : 72
          // ------------------------------- 
          // static_instructions_Ofast : 72
          // dynamic_instructions_Ofast : 72
          // ------------------------------- 
          // static_instructions_Os : 63
          // dynamic_instructions_Os : 63
          // ------------------------------- 
          // static_instructions_Oz : 61
          // dynamic_instructions_Oz : 63
          // ------------------------------- 

          unsigned long baud_rate = 255;
        
          unsigned long ioclk_rate = 255;
        
          int _len_set_baud0 = 65025;
          unsigned long * set_baud = (unsigned long *) malloc(_len_set_baud0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_set_baud0; _i0++) {
            set_baud[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          unsigned int benchRet = sirfsoc_uart_calc_sample_div(baud_rate,ioclk_rate,set_baud);
          printf("%u\n", benchRet); 
          free(set_baud);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 82
          // dynamic_instructions_O0 : 86
          // ------------------------------- 
          // static_instructions_O1 : 64
          // dynamic_instructions_O1 : 64
          // ------------------------------- 
          // static_instructions_O2 : 72
          // dynamic_instructions_O2 : 72
          // ------------------------------- 
          // static_instructions_O3 : 72
          // dynamic_instructions_O3 : 72
          // ------------------------------- 
          // static_instructions_Ofast : 72
          // dynamic_instructions_Ofast : 72
          // ------------------------------- 
          // static_instructions_Os : 63
          // dynamic_instructions_Os : 63
          // ------------------------------- 
          // static_instructions_Oz : 61
          // dynamic_instructions_Oz : 63
          // ------------------------------- 

          unsigned long baud_rate = 10;
        
          unsigned long ioclk_rate = 10;
        
          int _len_set_baud0 = 100;
          unsigned long * set_baud = (unsigned long *) malloc(_len_set_baud0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_set_baud0; _i0++) {
            set_baud[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          unsigned int benchRet = sirfsoc_uart_calc_sample_div(baud_rate,ioclk_rate,set_baud);
          printf("%u\n", benchRet); 
          free(set_baud);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 82
          // dynamic_instructions_O0 : 86
          // ------------------------------- 
          // static_instructions_O1 : 64
          // dynamic_instructions_O1 : 64
          // ------------------------------- 
          // static_instructions_O2 : 74
          // dynamic_instructions_O2 : 74
          // ------------------------------- 
          // static_instructions_O3 : 74
          // dynamic_instructions_O3 : 74
          // ------------------------------- 
          // static_instructions_Ofast : 74
          // dynamic_instructions_Ofast : 74
          // ------------------------------- 
          // static_instructions_Os : 63
          // dynamic_instructions_Os : 63
          // ------------------------------- 
          // static_instructions_Oz : 61
          // dynamic_instructions_Oz : 63
          // ------------------------------- 

          unsigned long baud_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned long ioclk_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_set_baud0 = 1;
          unsigned long * set_baud = (unsigned long *) malloc(_len_set_baud0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_set_baud0; _i0++) {
            set_baud[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          unsigned int benchRet = sirfsoc_uart_calc_sample_div(baud_rate,ioclk_rate,set_baud);
          printf("%u\n", benchRet); 
          free(set_baud);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
