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
typedef  int /*<<< orphan*/  u8 ;

/* Variables and functions */

__attribute__((used)) static inline void xor_block(u8 * b, u8 * a, size_t len)
{
	int i;
	for (i = 0; i < len; i++)
		b[i] ^= a[i];
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
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 3581
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 1283
          // ------------------------------- 
          // static_instructions_O2 : 85
          // dynamic_instructions_O2 : 361
          // ------------------------------- 
          // static_instructions_O3 : 85
          // dynamic_instructions_O3 : 361
          // ------------------------------- 
          // static_instructions_Ofast : 85
          // dynamic_instructions_Ofast : 361
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 1282
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 1537
          // ------------------------------- 

          unsigned long len = 255;
        
          int _len_b0 = 65025;
          int * b = (int *) malloc(_len_b0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_a0 = 65025;
          int * a = (int *) malloc(_len_a0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          xor_block(b,a,len);
          free(b);
          free(a);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 151
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 58
          // ------------------------------- 
          // static_instructions_O2 : 49
          // dynamic_instructions_O2 : 54
          // ------------------------------- 
          // static_instructions_O3 : 49
          // dynamic_instructions_O3 : 54
          // ------------------------------- 
          // static_instructions_Ofast : 49
          // dynamic_instructions_Ofast : 54
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 57
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 67
          // ------------------------------- 

          unsigned long len = 10;
        
          int _len_b0 = 100;
          int * b = (int *) malloc(_len_b0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_a0 = 100;
          int * a = (int *) malloc(_len_a0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          xor_block(b,a,len);
          free(b);
          free(a);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
