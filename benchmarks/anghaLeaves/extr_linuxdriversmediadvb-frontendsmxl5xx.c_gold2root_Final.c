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

__attribute__((used)) static u32 gold2root(u32 gold)
{
	u32 x, g, tmp = gold;

	if (tmp >= 0x3ffff)
		tmp = 0;
	for (g = 0, x = 1; g < tmp; g++)
		x = (((x ^ (x >> 7)) & 1) << 17) | (x >> 1);
	return x;
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
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 1715
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 911
          // ------------------------------- 
          // static_instructions_O2 : 36
          // dynamic_instructions_O2 : 820
          // ------------------------------- 
          // static_instructions_O3 : 36
          // dynamic_instructions_O3 : 820
          // ------------------------------- 
          // static_instructions_Ofast : 36
          // dynamic_instructions_Ofast : 820
          // ------------------------------- 
          // static_instructions_Os : 19
          // dynamic_instructions_Os : 910
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 1112
          // ------------------------------- 

          int gold = 100;
        
          int benchRet = gold2root(gold);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 4350
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 2306
          // ------------------------------- 
          // static_instructions_O2 : 43
          // dynamic_instructions_O2 : 2059
          // ------------------------------- 
          // static_instructions_O3 : 43
          // dynamic_instructions_O3 : 2059
          // ------------------------------- 
          // static_instructions_Ofast : 43
          // dynamic_instructions_Ofast : 2059
          // ------------------------------- 
          // static_instructions_Os : 19
          // dynamic_instructions_Os : 2305
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 2817
          // ------------------------------- 

          int gold = 255;
        
          int benchRet = gold2root(gold);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 185
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 101
          // ------------------------------- 
          // static_instructions_O2 : 36
          // dynamic_instructions_O2 : 100
          // ------------------------------- 
          // static_instructions_O3 : 36
          // dynamic_instructions_O3 : 100
          // ------------------------------- 
          // static_instructions_Ofast : 36
          // dynamic_instructions_Ofast : 100
          // ------------------------------- 
          // static_instructions_Os : 19
          // dynamic_instructions_Os : 100
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 122
          // ------------------------------- 

          int gold = 10;
        
          int benchRet = gold2root(gold);
          printf("%d\n", benchRet); 
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int gold = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = gold2root(gold);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
