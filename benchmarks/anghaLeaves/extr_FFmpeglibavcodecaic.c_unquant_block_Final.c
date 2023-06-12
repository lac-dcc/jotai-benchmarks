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
typedef  int uint8_t ;
typedef  int uint16_t ;
typedef  int int16_t ;

/* Variables and functions */

__attribute__((used)) static void unquant_block(int16_t *block, int q, uint8_t *quant_matrix)
{
    int i;

    for (i = 0; i < 64; i++) {
        int val  = (uint16_t)block[i];
        int sign = val & 1;

        block[i] = (((val >> 1) ^ -sign) * q * quant_matrix[i] >> 4)
                   + sign;
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
          // static_instructions_O0 : 35
          // dynamic_instructions_O0 : 1738
          // ------------------------------- 
          // static_instructions_O1 : 22
          // dynamic_instructions_O1 : 1030
          // ------------------------------- 
          // static_instructions_O2 : 59
          // dynamic_instructions_O2 : 360
          // ------------------------------- 
          // static_instructions_O3 : 332
          // dynamic_instructions_O3 : 332
          // ------------------------------- 
          // static_instructions_Ofast : 332
          // dynamic_instructions_Ofast : 332
          // ------------------------------- 
          // static_instructions_Os : 21
          // dynamic_instructions_Os : 1029
          // ------------------------------- 
          // static_instructions_Oz : 22
          // dynamic_instructions_Oz : 1095
          // ------------------------------- 

          int q = 255;
        
          int _len_block0 = 65025;
          int * block = (int *) malloc(_len_block0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
            block[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_quant_matrix0 = 65025;
          int * quant_matrix = (int *) malloc(_len_quant_matrix0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_quant_matrix0; _i0++) {
            quant_matrix[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          unquant_block(block,q,quant_matrix);
          free(block);
          free(quant_matrix);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 35
          // dynamic_instructions_O0 : 1738
          // ------------------------------- 
          // static_instructions_O1 : 22
          // dynamic_instructions_O1 : 1030
          // ------------------------------- 
          // static_instructions_O2 : 59
          // dynamic_instructions_O2 : 360
          // ------------------------------- 
          // static_instructions_O3 : 332
          // dynamic_instructions_O3 : 332
          // ------------------------------- 
          // static_instructions_Ofast : 332
          // dynamic_instructions_Ofast : 332
          // ------------------------------- 
          // static_instructions_Os : 21
          // dynamic_instructions_Os : 1029
          // ------------------------------- 
          // static_instructions_Oz : 22
          // dynamic_instructions_Oz : 1095
          // ------------------------------- 

          int q = 10;
        
          int _len_block0 = 100;
          int * block = (int *) malloc(_len_block0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
            block[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_quant_matrix0 = 100;
          int * quant_matrix = (int *) malloc(_len_quant_matrix0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_quant_matrix0; _i0++) {
            quant_matrix[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          unquant_block(block,q,quant_matrix);
          free(block);
          free(quant_matrix);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
