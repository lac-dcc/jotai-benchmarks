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

__attribute__((used)) static int s3c24xx_i2c_calcdivisor(unsigned long clkin, unsigned int wanted,
				   unsigned int *div1, unsigned int *divs)
{
	unsigned int calc_divs = clkin / wanted;
	unsigned int calc_div1;

	if (calc_divs > (16*16))
		calc_div1 = 512;
	else
		calc_div1 = 16;

	calc_divs += calc_div1-1;
	calc_divs /= calc_div1;

	if (calc_divs == 0)
		calc_divs = 1;
	if (calc_divs > 17)
		calc_divs = 17;

	*divs = calc_divs;
	*div1 = calc_div1;

	return clkin / (calc_divs * calc_div1);
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
          // static_instructions_O0 : 41
          // dynamic_instructions_O0 : 41
          // ------------------------------- 
          // static_instructions_O1 : 34
          // dynamic_instructions_O1 : 34
          // ------------------------------- 
          // static_instructions_O2 : 39
          // dynamic_instructions_O2 : 39
          // ------------------------------- 
          // static_instructions_O3 : 39
          // dynamic_instructions_O3 : 39
          // ------------------------------- 
          // static_instructions_Ofast : 39
          // dynamic_instructions_Ofast : 39
          // ------------------------------- 
          // static_instructions_Os : 34
          // dynamic_instructions_Os : 34
          // ------------------------------- 
          // static_instructions_Oz : 34
          // dynamic_instructions_Oz : 34
          // ------------------------------- 

          unsigned long clkin = 100;
        
          unsigned int wanted = 100;
        
          int _len_div10 = 1;
          unsigned int * div1 = (unsigned int *) malloc(_len_div10*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_div10; _i0++) {
            div1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_divs0 = 1;
          unsigned int * divs = (unsigned int *) malloc(_len_divs0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_divs0; _i0++) {
            divs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = s3c24xx_i2c_calcdivisor(clkin,wanted,div1,divs);
          printf("%d\n", benchRet); 
          free(div1);
          free(divs);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 41
          // dynamic_instructions_O0 : 41
          // ------------------------------- 
          // static_instructions_O1 : 34
          // dynamic_instructions_O1 : 34
          // ------------------------------- 
          // static_instructions_O2 : 39
          // dynamic_instructions_O2 : 39
          // ------------------------------- 
          // static_instructions_O3 : 39
          // dynamic_instructions_O3 : 39
          // ------------------------------- 
          // static_instructions_Ofast : 39
          // dynamic_instructions_Ofast : 39
          // ------------------------------- 
          // static_instructions_Os : 34
          // dynamic_instructions_Os : 34
          // ------------------------------- 
          // static_instructions_Oz : 34
          // dynamic_instructions_Oz : 34
          // ------------------------------- 

          unsigned long clkin = 255;
        
          unsigned int wanted = 255;
        
          int _len_div10 = 65025;
          unsigned int * div1 = (unsigned int *) malloc(_len_div10*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_div10; _i0++) {
            div1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_divs0 = 65025;
          unsigned int * divs = (unsigned int *) malloc(_len_divs0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_divs0; _i0++) {
            divs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = s3c24xx_i2c_calcdivisor(clkin,wanted,div1,divs);
          printf("%d\n", benchRet); 
          free(div1);
          free(divs);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 41
          // dynamic_instructions_O0 : 41
          // ------------------------------- 
          // static_instructions_O1 : 34
          // dynamic_instructions_O1 : 34
          // ------------------------------- 
          // static_instructions_O2 : 39
          // dynamic_instructions_O2 : 39
          // ------------------------------- 
          // static_instructions_O3 : 39
          // dynamic_instructions_O3 : 39
          // ------------------------------- 
          // static_instructions_Ofast : 39
          // dynamic_instructions_Ofast : 39
          // ------------------------------- 
          // static_instructions_Os : 34
          // dynamic_instructions_Os : 34
          // ------------------------------- 
          // static_instructions_Oz : 34
          // dynamic_instructions_Oz : 34
          // ------------------------------- 

          unsigned long clkin = 10;
        
          unsigned int wanted = 10;
        
          int _len_div10 = 100;
          unsigned int * div1 = (unsigned int *) malloc(_len_div10*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_div10; _i0++) {
            div1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_divs0 = 100;
          unsigned int * divs = (unsigned int *) malloc(_len_divs0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_divs0; _i0++) {
            divs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = s3c24xx_i2c_calcdivisor(clkin,wanted,div1,divs);
          printf("%d\n", benchRet); 
          free(div1);
          free(divs);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 41
          // dynamic_instructions_O0 : 41
          // ------------------------------- 
          // static_instructions_O1 : 34
          // dynamic_instructions_O1 : 34
          // ------------------------------- 
          // static_instructions_O2 : 40
          // dynamic_instructions_O2 : 40
          // ------------------------------- 
          // static_instructions_O3 : 40
          // dynamic_instructions_O3 : 40
          // ------------------------------- 
          // static_instructions_Ofast : 40
          // dynamic_instructions_Ofast : 40
          // ------------------------------- 
          // static_instructions_Os : 34
          // dynamic_instructions_Os : 34
          // ------------------------------- 
          // static_instructions_Oz : 34
          // dynamic_instructions_Oz : 34
          // ------------------------------- 

          unsigned long clkin = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned int wanted = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_div10 = 1;
          unsigned int * div1 = (unsigned int *) malloc(_len_div10*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_div10; _i0++) {
            div1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_divs0 = 1;
          unsigned int * divs = (unsigned int *) malloc(_len_divs0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_divs0; _i0++) {
            divs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = s3c24xx_i2c_calcdivisor(clkin,wanted,div1,divs);
          printf("%d\n", benchRet); 
          free(div1);
          free(divs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
