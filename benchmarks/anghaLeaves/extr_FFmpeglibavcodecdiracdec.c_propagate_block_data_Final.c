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
       2            empty\n\
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
typedef  int /*<<< orphan*/  DiracBlock ;

/* Variables and functions */

__attribute__((used)) static void propagate_block_data(DiracBlock *block, int stride, int size)
{
    int x, y;
    DiracBlock *dst = block;

    for (x = 1; x < size; x++)
        dst[x] = *block;

    for (y = 1; y < size; y++) {
        dst += stride;
        for (x = 0; x < size; x++)
            dst[x] = *block;
    }
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
          // static_instructions_O0 : 50
          // dynamic_instructions_O0 : 784877
          // ------------------------------- 
          // static_instructions_O1 : 35
          // dynamic_instructions_O1 : 326663
          // ------------------------------- 
          // static_instructions_O2 : 110
          // dynamic_instructions_O2 : 183821
          // ------------------------------- 
          // static_instructions_O3 : 110
          // dynamic_instructions_O3 : 183821
          // ------------------------------- 
          // static_instructions_Ofast : 110
          // dynamic_instructions_Ofast : 183821
          // ------------------------------- 
          // static_instructions_Os : 29
          // dynamic_instructions_Os : 326151
          // ------------------------------- 
          // static_instructions_Oz : 29
          // dynamic_instructions_Oz : 392191
          // ------------------------------- 

          int stride = 255;
        
          int size = 255;
        
          int _len_block0 = 65025;
          int * block = (int *) malloc(_len_block0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
            block[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          propagate_block_data(block,stride,size);
          free(block);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 50
          // dynamic_instructions_O0 : 1367
          // ------------------------------- 
          // static_instructions_O1 : 35
          // dynamic_instructions_O1 : 568
          // ------------------------------- 
          // static_instructions_O2 : 96
          // dynamic_instructions_O2 : 488
          // ------------------------------- 
          // static_instructions_O3 : 96
          // dynamic_instructions_O3 : 488
          // ------------------------------- 
          // static_instructions_Ofast : 96
          // dynamic_instructions_Ofast : 488
          // ------------------------------- 
          // static_instructions_Os : 29
          // dynamic_instructions_Os : 546
          // ------------------------------- 
          // static_instructions_Oz : 29
          // dynamic_instructions_Oz : 681
          // ------------------------------- 

          int stride = 10;
        
          int size = 10;
        
          int _len_block0 = 100;
          int * block = (int *) malloc(_len_block0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
            block[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          propagate_block_data(block,stride,size);
          free(block);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          int stride = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_block0 = 1;
          int * block = (int *) malloc(_len_block0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
            block[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          propagate_block_data(block,stride,size);
          free(block);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
