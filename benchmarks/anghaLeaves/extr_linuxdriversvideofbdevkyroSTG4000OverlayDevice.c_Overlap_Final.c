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
typedef  int u32 ;

/* Variables and functions */

__attribute__((used)) static u32 Overlap(u32 ulBits, u32 ulPattern)
{
	u32 ulCount = 0;

	while (ulBits) {
		if (!(ulPattern & 1))
			ulCount++;
		ulBits--;
		ulPattern = ulPattern >> 1;
	}

	return ulCount;

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
          // dynamic_instructions_O0 : 1601
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 708
          // ------------------------------- 
          // static_instructions_O2 : 38
          // dynamic_instructions_O2 : 518
          // ------------------------------- 
          // static_instructions_O3 : 38
          // dynamic_instructions_O3 : 518
          // ------------------------------- 
          // static_instructions_Ofast : 38
          // dynamic_instructions_Ofast : 518
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 707
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 907
          // ------------------------------- 

          int ulBits = 100;
        
          int ulPattern = 100;
        
          int benchRet = Overlap(ulBits,ulPattern);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 4066
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 1793
          // ------------------------------- 
          // static_instructions_O2 : 46
          // dynamic_instructions_O2 : 1300
          // ------------------------------- 
          // static_instructions_O3 : 46
          // dynamic_instructions_O3 : 1300
          // ------------------------------- 
          // static_instructions_Ofast : 46
          // dynamic_instructions_Ofast : 1300
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 1792
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 2302
          // ------------------------------- 

          int ulBits = 255;
        
          int ulPattern = 255;
        
          int benchRet = Overlap(ulBits,ulPattern);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 164
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 78
          // ------------------------------- 
          // static_instructions_O2 : 46
          // dynamic_instructions_O2 : 73
          // ------------------------------- 
          // static_instructions_O3 : 46
          // dynamic_instructions_O3 : 73
          // ------------------------------- 
          // static_instructions_Ofast : 46
          // dynamic_instructions_Ofast : 73
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 77
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 97
          // ------------------------------- 

          int ulBits = 10;
        
          int ulPattern = 10;
        
          int benchRet = Overlap(ulBits,ulPattern);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
