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
       0            big-arr\n\
       1            big-arr-10x\n\
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
typedef  int ut8 ;

/* Variables and functions */

__attribute__((used)) static int mips_j(ut8 *b, int op, int addr) {
	addr /= 4;
	b[3] = ((op<<2)&0xfc) | ((addr>>24)&3);
	b[2] = (addr>>16)&0xff;
	b[1] = (addr>>8) &0xff;
	b[0] = addr & 0xff;
	return 4;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 36
          // dynamic_instructions_O0 : 36
          // ------------------------------- 
          // static_instructions_O1 : 24
          // dynamic_instructions_O1 : 24
          // ------------------------------- 
          // static_instructions_O2 : 24
          // dynamic_instructions_O2 : 24
          // ------------------------------- 
          // static_instructions_O3 : 24
          // dynamic_instructions_O3 : 24
          // ------------------------------- 
          // static_instructions_Ofast : 24
          // dynamic_instructions_Ofast : 24
          // ------------------------------- 
          // static_instructions_Os : 26
          // dynamic_instructions_Os : 26
          // ------------------------------- 
          // static_instructions_Oz : 26
          // dynamic_instructions_Oz : 26
          // ------------------------------- 

          int op = 255;
        
          int addr = 255;
        
          int _len_b0 = 65025;
          int * b = (int *) malloc(_len_b0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = mips_j(b,op,addr);
          printf("%d\n", benchRet); 
          free(b);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 36
          // dynamic_instructions_O0 : 36
          // ------------------------------- 
          // static_instructions_O1 : 24
          // dynamic_instructions_O1 : 24
          // ------------------------------- 
          // static_instructions_O2 : 24
          // dynamic_instructions_O2 : 24
          // ------------------------------- 
          // static_instructions_O3 : 24
          // dynamic_instructions_O3 : 24
          // ------------------------------- 
          // static_instructions_Ofast : 24
          // dynamic_instructions_Ofast : 24
          // ------------------------------- 
          // static_instructions_Os : 26
          // dynamic_instructions_Os : 26
          // ------------------------------- 
          // static_instructions_Oz : 26
          // dynamic_instructions_Oz : 26
          // ------------------------------- 

          int op = 10;
        
          int addr = 10;
        
          int _len_b0 = 100;
          int * b = (int *) malloc(_len_b0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = mips_j(b,op,addr);
          printf("%d\n", benchRet); 
          free(b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
