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
typedef  int uint ;
typedef  scalar_t__ u8 ;

/* Variables and functions */

__attribute__((used)) static
u8 dma_align_sizetobits(uint size)
{
	u8 bitpos = 0;
	while (size >>= 1)
		bitpos++;
	return bitpos;
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
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 66
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 34
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 34
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 34
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 34
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 33
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 33
          // ------------------------------- 

          int size = 100;
        
          long benchRet = dma_align_sizetobits(size);
          printf("%ld\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 75
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 38
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 38
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 38
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 38
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 37
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 37
          // ------------------------------- 

          int size = 255;
        
          long benchRet = dma_align_sizetobits(size);
          printf("%ld\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 39
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 22
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 22
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 22
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 22
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 21
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 21
          // ------------------------------- 

          int size = 10;
        
          long benchRet = dma_align_sizetobits(size);
          printf("%ld\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
