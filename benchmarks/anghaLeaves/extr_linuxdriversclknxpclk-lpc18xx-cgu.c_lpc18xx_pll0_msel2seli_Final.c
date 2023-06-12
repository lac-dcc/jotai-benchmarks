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
typedef  int u32 ;

/* Variables and functions */

__attribute__((used)) static u32 lpc18xx_pll0_msel2seli(u32 msel)
{
	u32 tmp;

	if (msel > 16384) return 1;
	if (msel >  8192) return 2;
	if (msel >  2048) return 4;
	if (msel >=  501) return 8;
	if (msel >=   60) {
		tmp = 1024 / (msel + 9);
		return ((1024 == (tmp * (msel + 9))) == 0) ? tmp * 4 : (tmp + 1) * 4;
	}

	return (msel & 0x3c) + 4;
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
          // static_instructions_O0 : 40
          // dynamic_instructions_O0 : 40
          // ------------------------------- 
          // static_instructions_O1 : 27
          // dynamic_instructions_O1 : 27
          // ------------------------------- 
          // static_instructions_O2 : 28
          // dynamic_instructions_O2 : 28
          // ------------------------------- 
          // static_instructions_O3 : 28
          // dynamic_instructions_O3 : 28
          // ------------------------------- 
          // static_instructions_Ofast : 28
          // dynamic_instructions_Ofast : 28
          // ------------------------------- 
          // static_instructions_Os : 29
          // dynamic_instructions_Os : 29
          // ------------------------------- 
          // static_instructions_Oz : 26
          // dynamic_instructions_Oz : 26
          // ------------------------------- 

          int msel = 100;
        
          int benchRet = lpc18xx_pll0_msel2seli(msel);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 40
          // dynamic_instructions_O0 : 40
          // ------------------------------- 
          // static_instructions_O1 : 27
          // dynamic_instructions_O1 : 27
          // ------------------------------- 
          // static_instructions_O2 : 28
          // dynamic_instructions_O2 : 28
          // ------------------------------- 
          // static_instructions_O3 : 28
          // dynamic_instructions_O3 : 28
          // ------------------------------- 
          // static_instructions_Ofast : 28
          // dynamic_instructions_Ofast : 28
          // ------------------------------- 
          // static_instructions_Os : 29
          // dynamic_instructions_Os : 29
          // ------------------------------- 
          // static_instructions_Oz : 26
          // dynamic_instructions_Oz : 26
          // ------------------------------- 

          int msel = 255;
        
          int benchRet = lpc18xx_pll0_msel2seli(msel);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 21
          // ------------------------------- 
          // static_instructions_O2 : 21
          // dynamic_instructions_O2 : 21
          // ------------------------------- 
          // static_instructions_O3 : 21
          // dynamic_instructions_O3 : 21
          // ------------------------------- 
          // static_instructions_Ofast : 21
          // dynamic_instructions_Ofast : 21
          // ------------------------------- 
          // static_instructions_Os : 21
          // dynamic_instructions_Os : 21
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int msel = 10;
        
          int benchRet = lpc18xx_pll0_msel2seli(msel);
          printf("%d\n", benchRet); 
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 21
          // ------------------------------- 
          // static_instructions_O2 : 21
          // dynamic_instructions_O2 : 21
          // ------------------------------- 
          // static_instructions_O3 : 21
          // dynamic_instructions_O3 : 21
          // ------------------------------- 
          // static_instructions_Ofast : 21
          // dynamic_instructions_Ofast : 21
          // ------------------------------- 
          // static_instructions_Os : 21
          // dynamic_instructions_Os : 21
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int msel = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = lpc18xx_pll0_msel2seli(msel);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
