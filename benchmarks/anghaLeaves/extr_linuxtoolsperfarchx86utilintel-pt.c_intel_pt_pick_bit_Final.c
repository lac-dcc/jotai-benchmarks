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

__attribute__((used)) static int intel_pt_pick_bit(int bits, int target)
{
	int pos, pick = -1;

	for (pos = 0; bits; bits >>= 1, pos++) {
		if (bits & 1) {
			if (pos <= target || pick < 0)
				pick = pos;
			if (pos >= target)
				break;
		}
	}

	return pick;
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
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 136
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 66
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 66
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 66
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 66
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 66
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 72
          // ------------------------------- 

          int bits = 100;
        
          int target = 100;
        
          int benchRet = intel_pt_pick_bit(bits,target);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 195
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 97
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 97
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 97
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 97
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 97
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 104
          // ------------------------------- 

          int bits = 255;
        
          int target = 255;
        
          int benchRet = intel_pt_pick_bit(bits,target);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 85
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 43
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 43
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 43
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 43
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 43
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 46
          // ------------------------------- 

          int bits = 10;
        
          int target = 10;
        
          int benchRet = intel_pt_pick_bit(bits,target);
          printf("%d\n", benchRet); 
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 26
          // dynamic_instructions_O0 : 26
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          int bits = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int target = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = intel_pt_pick_bit(bits,target);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
