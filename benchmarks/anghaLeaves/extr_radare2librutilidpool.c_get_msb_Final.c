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
typedef  int ut32 ;

/* Variables and functions */

__attribute__((used)) static ut32 get_msb(ut32 v) {
	int i;
	for (i = 31; i > (-1); i--) {
		if (v & (0x1U << i)) {
			return (v & (0x1U << i));
		}
	}
	return 0;
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
          // static_instructions_O0 : 30
          // dynamic_instructions_O0 : 400
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 160
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 212
          // ------------------------------- 
          // static_instructions_O3 : 82
          // dynamic_instructions_O3 : 82
          // ------------------------------- 
          // static_instructions_Ofast : 82
          // dynamic_instructions_Ofast : 82
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 211
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 189
          // ------------------------------- 

          int v = 100;
        
          int benchRet = get_msb(v);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 30
          // dynamic_instructions_O0 : 385
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 154
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 204
          // ------------------------------- 
          // static_instructions_O3 : 79
          // dynamic_instructions_O3 : 79
          // ------------------------------- 
          // static_instructions_Ofast : 79
          // dynamic_instructions_Ofast : 79
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 203
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 182
          // ------------------------------- 

          int v = 255;
        
          int benchRet = get_msb(v);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 30
          // dynamic_instructions_O0 : 445
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 178
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 236
          // ------------------------------- 
          // static_instructions_O3 : 91
          // dynamic_instructions_O3 : 91
          // ------------------------------- 
          // static_instructions_Ofast : 91
          // dynamic_instructions_Ofast : 91
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 235
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 210
          // ------------------------------- 

          int v = 10;
        
          int benchRet = get_msb(v);
          printf("%d\n", benchRet); 
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int v = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = get_msb(v);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
