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
typedef  int uint16_t ;

/* Variables and functions */

__attribute__((used)) static uint16_t extractDataFromMask(uint16_t data, uint16_t mask) {
	int i, j;
	uint16_t result = 0;
	
	/* i counts through every bit of the data,
	 * j counts through every bit of the data we're copying out. */
	for (i = 0, j = 0; i < 16; i++) {
		/* If the mask has a bit in this position */
		if (mask & (1<<i)) {
			/* If there is a data bit with this mask bit,
			 * then toggle that bit in the extracted data (result).
			 * Notice that it uses its own bit counter j. */
			if (((mask & (1<<i)) & data) != 0)
				result |= (1<<j);
			/* Increment the extracted data bit count. */
			j++;
		}
	}
	
	return result;
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
          // static_instructions_O0 : 42
          // dynamic_instructions_O0 : 303
          // ------------------------------- 
          // static_instructions_O1 : 25
          // dynamic_instructions_O1 : 163
          // ------------------------------- 
          // static_instructions_O2 : 39
          // dynamic_instructions_O2 : 145
          // ------------------------------- 
          // static_instructions_O3 : 73
          // dynamic_instructions_O3 : 73
          // ------------------------------- 
          // static_instructions_Ofast : 73
          // dynamic_instructions_Ofast : 73
          // ------------------------------- 
          // static_instructions_Os : 23
          // dynamic_instructions_Os : 159
          // ------------------------------- 
          // static_instructions_Oz : 25
          // dynamic_instructions_Oz : 178
          // ------------------------------- 

          int data = 100;
        
          int mask = 100;
        
          int benchRet = extractDataFromMask(data,mask);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 42
          // dynamic_instructions_O0 : 388
          // ------------------------------- 
          // static_instructions_O1 : 25
          // dynamic_instructions_O1 : 208
          // ------------------------------- 
          // static_instructions_O2 : 39
          // dynamic_instructions_O2 : 188
          // ------------------------------- 
          // static_instructions_O3 : 103
          // dynamic_instructions_O3 : 103
          // ------------------------------- 
          // static_instructions_Ofast : 103
          // dynamic_instructions_Ofast : 103
          // ------------------------------- 
          // static_instructions_Os : 23
          // dynamic_instructions_Os : 199
          // ------------------------------- 
          // static_instructions_Oz : 25
          // dynamic_instructions_Oz : 218
          // ------------------------------- 

          int data = 255;
        
          int mask = 255;
        
          int benchRet = extractDataFromMask(data,mask);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 42
          // dynamic_instructions_O0 : 286
          // ------------------------------- 
          // static_instructions_O1 : 25
          // dynamic_instructions_O1 : 154
          // ------------------------------- 
          // static_instructions_O2 : 31
          // dynamic_instructions_O2 : 138
          // ------------------------------- 
          // static_instructions_O3 : 68
          // dynamic_instructions_O3 : 68
          // ------------------------------- 
          // static_instructions_Ofast : 68
          // dynamic_instructions_Ofast : 68
          // ------------------------------- 
          // static_instructions_Os : 23
          // dynamic_instructions_Os : 151
          // ------------------------------- 
          // static_instructions_Oz : 25
          // dynamic_instructions_Oz : 170
          // ------------------------------- 

          int data = 10;
        
          int mask = 10;
        
          int benchRet = extractDataFromMask(data,mask);
          printf("%d\n", benchRet); 
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 42
          // dynamic_instructions_O0 : 456
          // ------------------------------- 
          // static_instructions_O1 : 25
          // dynamic_instructions_O1 : 244
          // ------------------------------- 
          // static_instructions_O2 : 39
          // dynamic_instructions_O2 : 222
          // ------------------------------- 
          // static_instructions_O3 : 128
          // dynamic_instructions_O3 : 128
          // ------------------------------- 
          // static_instructions_Ofast : 128
          // dynamic_instructions_Ofast : 128
          // ------------------------------- 
          // static_instructions_Os : 23
          // dynamic_instructions_Os : 231
          // ------------------------------- 
          // static_instructions_Oz : 25
          // dynamic_instructions_Oz : 250
          // ------------------------------- 

          int data = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int mask = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = extractDataFromMask(data,mask);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
