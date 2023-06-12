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
typedef  int ulong_t ;

/* Variables and functions */

__attribute__((used)) static int
fasttrap_highbit(ulong_t i)
{
	int h = 1;

	if (i == 0)
		return (0);
#ifdef _LP64
	if (i & 0xffffffff00000000ul) {
		h += 32; i >>= 32;
	}
#endif
	if (i & 0xffff0000) {
		h += 16; i >>= 16;
	}
	if (i & 0xff00) {
		h += 8; i >>= 8;
	}
	if (i & 0xf0) {
		h += 4; i >>= 4;
	}
	if (i & 0xc) {
		h += 2; i >>= 2;
	}
	if (i & 0x2) {
		h += 1;
	}
	return (h);
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
          // static_instructions_O0 : 48
          // dynamic_instructions_O0 : 48
          // ------------------------------- 
          // static_instructions_O1 : 37
          // dynamic_instructions_O1 : 37
          // ------------------------------- 
          // static_instructions_O2 : 37
          // dynamic_instructions_O2 : 37
          // ------------------------------- 
          // static_instructions_O3 : 37
          // dynamic_instructions_O3 : 37
          // ------------------------------- 
          // static_instructions_Ofast : 37
          // dynamic_instructions_Ofast : 37
          // ------------------------------- 
          // static_instructions_Os : 38
          // dynamic_instructions_Os : 38
          // ------------------------------- 
          // static_instructions_Oz : 38
          // dynamic_instructions_Oz : 38
          // ------------------------------- 

          int i = 100;
        
          int benchRet = fasttrap_highbit(i);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 51
          // dynamic_instructions_O0 : 51
          // ------------------------------- 
          // static_instructions_O1 : 37
          // dynamic_instructions_O1 : 37
          // ------------------------------- 
          // static_instructions_O2 : 37
          // dynamic_instructions_O2 : 37
          // ------------------------------- 
          // static_instructions_O3 : 37
          // dynamic_instructions_O3 : 37
          // ------------------------------- 
          // static_instructions_Ofast : 37
          // dynamic_instructions_Ofast : 37
          // ------------------------------- 
          // static_instructions_Os : 38
          // dynamic_instructions_Os : 38
          // ------------------------------- 
          // static_instructions_Oz : 38
          // dynamic_instructions_Oz : 38
          // ------------------------------- 

          int i = 255;
        
          int benchRet = fasttrap_highbit(i);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 45
          // dynamic_instructions_O0 : 45
          // ------------------------------- 
          // static_instructions_O1 : 37
          // dynamic_instructions_O1 : 37
          // ------------------------------- 
          // static_instructions_O2 : 37
          // dynamic_instructions_O2 : 37
          // ------------------------------- 
          // static_instructions_O3 : 37
          // dynamic_instructions_O3 : 37
          // ------------------------------- 
          // static_instructions_Ofast : 37
          // dynamic_instructions_Ofast : 37
          // ------------------------------- 
          // static_instructions_Os : 38
          // dynamic_instructions_Os : 38
          // ------------------------------- 
          // static_instructions_Oz : 38
          // dynamic_instructions_Oz : 38
          // ------------------------------- 

          int i = 10;
        
          int benchRet = fasttrap_highbit(i);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
