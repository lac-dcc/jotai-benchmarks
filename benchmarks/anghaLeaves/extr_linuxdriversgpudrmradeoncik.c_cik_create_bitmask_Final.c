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
       0            big-arr-10x\n\
       1            empty\n\
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
typedef  scalar_t__ u32 ;

/* Variables and functions */

__attribute__((used)) static u32 cik_create_bitmask(u32 bit_width)
{
	u32 i, mask = 0;

	for (i = 0; i < bit_width; i++) {
		mask <<= 1;
		mask |= 1;
	}
	return mask;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr-10x
    case 0:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 141
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 48
          // ------------------------------- 
          // static_instructions_O2 : 27
          // dynamic_instructions_O2 : 31
          // ------------------------------- 
          // static_instructions_O3 : 27
          // dynamic_instructions_O3 : 31
          // ------------------------------- 
          // static_instructions_Ofast : 27
          // dynamic_instructions_Ofast : 31
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 47
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 69
          // ------------------------------- 

          long bit_width = 10;
        
          long benchRet = cik_create_bitmask(bit_width);
          printf("%ld\n", benchRet); 
        
        break;
    }


    // empty
    case 1:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          long bit_width = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long benchRet = cik_create_bitmask(bit_width);
          printf("%ld\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
