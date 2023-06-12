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
typedef  int u_int ;
typedef  int u32 ;

/* Variables and functions */

__attribute__((used)) static u32 hifn_next_signature(u32 a, u_int cnt)
{
	int i;
	u32 v;

	for (i = 0; i < cnt; i++) {
		/* get the parity */
		v = a & 0x80080125;
		v ^= v >> 16;
		v ^= v >> 8;
		v ^= v >> 4;
		v ^= v >> 2;
		v ^= v >> 1;

		a = (v & 1) ^ (a << 1);
	}

	return a;
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
          // static_instructions_O0 : 44
          // dynamic_instructions_O0 : 371
          // ------------------------------- 
          // static_instructions_O1 : 29
          // dynamic_instructions_O1 : 218
          // ------------------------------- 
          // static_instructions_O2 : 29
          // dynamic_instructions_O2 : 218
          // ------------------------------- 
          // static_instructions_O3 : 29
          // dynamic_instructions_O3 : 218
          // ------------------------------- 
          // static_instructions_Ofast : 29
          // dynamic_instructions_Ofast : 218
          // ------------------------------- 
          // static_instructions_Os : 28
          // dynamic_instructions_Os : 217
          // ------------------------------- 
          // static_instructions_Oz : 31
          // dynamic_instructions_Oz : 240
          // ------------------------------- 

          int a = 10;
        
          int cnt = 10;
        
          int benchRet = hifn_next_signature(a,cnt);
          printf("%d\n", benchRet); 
        
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
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int a = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = hifn_next_signature(a,cnt);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
