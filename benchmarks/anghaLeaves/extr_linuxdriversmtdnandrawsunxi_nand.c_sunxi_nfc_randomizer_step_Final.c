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
typedef  int u16 ;

/* Variables and functions */

__attribute__((used)) static u16 sunxi_nfc_randomizer_step(u16 state, int count)
{
	state &= 0x7fff;

	/*
	 * This loop is just a simple implementation of a Fibonacci LFSR using
	 * the x16 + x15 + 1 polynomial.
	 */
	while (count--)
		state = ((state >> 1) |
			 (((state ^ (state >> 1)) & 1) << 14)) & 0x7fff;

	return state;
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
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 1816
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 811
          // ------------------------------- 
          // static_instructions_O2 : 39
          // dynamic_instructions_O2 : 591
          // ------------------------------- 
          // static_instructions_O3 : 39
          // dynamic_instructions_O3 : 591
          // ------------------------------- 
          // static_instructions_Ofast : 39
          // dynamic_instructions_Ofast : 591
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 810
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 1108
          // ------------------------------- 

          int state = 100;
        
          int count = 100;
        
          int benchRet = sunxi_nfc_randomizer_step(state,count);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 4606
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 2051
          // ------------------------------- 
          // static_instructions_O2 : 54
          // dynamic_instructions_O2 : 1502
          // ------------------------------- 
          // static_instructions_O3 : 54
          // dynamic_instructions_O3 : 1502
          // ------------------------------- 
          // static_instructions_Ofast : 54
          // dynamic_instructions_Ofast : 1502
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 2050
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 2813
          // ------------------------------- 

          int state = 255;
        
          int count = 255;
        
          int benchRet = sunxi_nfc_randomizer_step(state,count);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 196
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 91
          // ------------------------------- 
          // static_instructions_O2 : 54
          // dynamic_instructions_O2 : 88
          // ------------------------------- 
          // static_instructions_O3 : 54
          // dynamic_instructions_O3 : 88
          // ------------------------------- 
          // static_instructions_Ofast : 54
          // dynamic_instructions_Ofast : 88
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 90
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 118
          // ------------------------------- 

          int state = 10;
        
          int count = 10;
        
          int benchRet = sunxi_nfc_randomizer_step(state,count);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
