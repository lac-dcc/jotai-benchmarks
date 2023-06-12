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
typedef  int uint64_t ;

/* Variables and functions */
 int P ; 

__attribute__((used)) static inline uint64_t
mul_mod_p(uint64_t a, uint64_t b) {
	uint64_t m = 0;
	while(b) {
		if(b&1) {
			uint64_t t = P-a;
			if ( m >= t) {
				m -= t;
			} else {
				m += a;
			}
		}
		if (a >= P - a) {
			a = a * 2 - P;
		} else {
			a = a * 2;
		}
		b>>=1;
	}
	return m;
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
          // static_instructions_O0 : 40
          // dynamic_instructions_O0 : 186
          // ------------------------------- 
          // static_instructions_O1 : 30
          // dynamic_instructions_O1 : 118
          // ------------------------------- 
          // static_instructions_O2 : 30
          // dynamic_instructions_O2 : 144
          // ------------------------------- 
          // static_instructions_O3 : 30
          // dynamic_instructions_O3 : 144
          // ------------------------------- 
          // static_instructions_Ofast : 30
          // dynamic_instructions_Ofast : 144
          // ------------------------------- 
          // static_instructions_Os : 28
          // dynamic_instructions_Os : 142
          // ------------------------------- 
          // static_instructions_Oz : 28
          // dynamic_instructions_Oz : 156
          // ------------------------------- 

          int a = 100;
        
          int b = 100;
        
          int benchRet = mul_mod_p(a,b);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 40
          // dynamic_instructions_O0 : 266
          // ------------------------------- 
          // static_instructions_O1 : 30
          // dynamic_instructions_O1 : 170
          // ------------------------------- 
          // static_instructions_O2 : 30
          // dynamic_instructions_O2 : 163
          // ------------------------------- 
          // static_instructions_O3 : 30
          // dynamic_instructions_O3 : 163
          // ------------------------------- 
          // static_instructions_Ofast : 30
          // dynamic_instructions_Ofast : 163
          // ------------------------------- 
          // static_instructions_Os : 28
          // dynamic_instructions_Os : 161
          // ------------------------------- 
          // static_instructions_Oz : 28
          // dynamic_instructions_Oz : 177
          // ------------------------------- 

          int a = 255;
        
          int b = 255;
        
          int benchRet = mul_mod_p(a,b);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 40
          // dynamic_instructions_O0 : 114
          // ------------------------------- 
          // static_instructions_O1 : 30
          // dynamic_instructions_O1 : 74
          // ------------------------------- 
          // static_instructions_O2 : 30
          // dynamic_instructions_O2 : 87
          // ------------------------------- 
          // static_instructions_O3 : 30
          // dynamic_instructions_O3 : 87
          // ------------------------------- 
          // static_instructions_Ofast : 30
          // dynamic_instructions_Ofast : 87
          // ------------------------------- 
          // static_instructions_Os : 28
          // dynamic_instructions_Os : 85
          // ------------------------------- 
          // static_instructions_Oz : 28
          // dynamic_instructions_Oz : 93
          // ------------------------------- 

          int a = 10;
        
          int b = 10;
        
          int benchRet = mul_mod_p(a,b);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
