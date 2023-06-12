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

/* Variables and functions */

__attribute__((used)) static inline uint num_channels(uint chanmask)
{
	uint num = 0;

	while (chanmask) {
		num += (chanmask & 1);
		chanmask >>= 1;
	}

	return num;
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
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 79
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 43
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 43
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 43
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 43
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 42
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 56
          // ------------------------------- 

          int chanmask = 100;
        
          int benchRet = num_channels(chanmask);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 89
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 48
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 48
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 48
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 48
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 47
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 63
          // ------------------------------- 

          int chanmask = 255;
        
          int benchRet = num_channels(chanmask);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 49
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 28
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 28
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 28
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 28
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 27
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 35
          // ------------------------------- 

          int chanmask = 10;
        
          int benchRet = num_channels(chanmask);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
