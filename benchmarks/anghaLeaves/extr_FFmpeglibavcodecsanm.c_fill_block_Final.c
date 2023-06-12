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
typedef  int /*<<< orphan*/  uint16_t ;
typedef  int ptrdiff_t ;

/* Variables and functions */

__attribute__((used)) static void fill_block(uint16_t *pdest, uint16_t color, int block_size, ptrdiff_t pitch)
{
    int x, y;

    pitch -= block_size;
    for (y = 0; y < block_size; y++, pdest += pitch)
        for (x = 0; x < block_size; x++)
            *pdest++ = color;
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
          // static_instructions_O0 : 41
          // dynamic_instructions_O0 : 849931
          // ------------------------------- 
          // static_instructions_O1 : 27
          // dynamic_instructions_O1 : 327179
          // ------------------------------- 
          // static_instructions_O2 : 91
          // dynamic_instructions_O2 : 37521
          // ------------------------------- 
          // static_instructions_O3 : 91
          // dynamic_instructions_O3 : 37521
          // ------------------------------- 
          // static_instructions_Ofast : 91
          // dynamic_instructions_Ofast : 37521
          // ------------------------------- 
          // static_instructions_Os : 24
          // dynamic_instructions_Os : 326668
          // ------------------------------- 
          // static_instructions_Oz : 27
          // dynamic_instructions_Oz : 392461
          // ------------------------------- 

          int color = 255;
        
          int block_size = 255;
        
          int pitch = 255;
        
          int _len_pdest0 = 65025;
          int * pdest = (int *) malloc(_len_pdest0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pdest0; _i0++) {
            pdest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          fill_block(pdest,color,block_size,pitch);
          free(pdest);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 41
          // dynamic_instructions_O0 : 1496
          // ------------------------------- 
          // static_instructions_O1 : 27
          // dynamic_instructions_O1 : 594
          // ------------------------------- 
          // static_instructions_O2 : 70
          // dynamic_instructions_O2 : 416
          // ------------------------------- 
          // static_instructions_O3 : 70
          // dynamic_instructions_O3 : 416
          // ------------------------------- 
          // static_instructions_Ofast : 70
          // dynamic_instructions_Ofast : 416
          // ------------------------------- 
          // static_instructions_Os : 24
          // dynamic_instructions_Os : 573
          // ------------------------------- 
          // static_instructions_Oz : 27
          // dynamic_instructions_Oz : 706
          // ------------------------------- 

          int color = 10;
        
          int block_size = 10;
        
          int pitch = 10;
        
          int _len_pdest0 = 100;
          int * pdest = (int *) malloc(_len_pdest0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pdest0; _i0++) {
            pdest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          fill_block(pdest,color,block_size,pitch);
          free(pdest);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int color = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int block_size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int pitch = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_pdest0 = 1;
          int * pdest = (int *) malloc(_len_pdest0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pdest0; _i0++) {
            pdest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          fill_block(pdest,color,block_size,pitch);
          free(pdest);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
