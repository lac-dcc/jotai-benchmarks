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
typedef  int int16_t ;

/* Variables and functions */

__attribute__((used)) static void linear_perm(int16_t *out, int16_t *in, int n_blocks, int size)
{
    int block_size = size / n_blocks;
    int i;

    for (i = 0; i < size; i++)
        out[i] = block_size * (in[i] % n_blocks) + in[i] / n_blocks;
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
          // static_instructions_O0 : 40
          // dynamic_instructions_O0 : 6901
          // ------------------------------- 
          // static_instructions_O1 : 24
          // dynamic_instructions_O1 : 2310
          // ------------------------------- 
          // static_instructions_O2 : 24
          // dynamic_instructions_O2 : 2310
          // ------------------------------- 
          // static_instructions_O3 : 24
          // dynamic_instructions_O3 : 2310
          // ------------------------------- 
          // static_instructions_Ofast : 24
          // dynamic_instructions_Ofast : 2310
          // ------------------------------- 
          // static_instructions_Os : 23
          // dynamic_instructions_Os : 2309
          // ------------------------------- 
          // static_instructions_Oz : 23
          // dynamic_instructions_Oz : 2565
          // ------------------------------- 

          int n_blocks = 255;
        
          int size = 255;
        
          int _len_out0 = 65025;
          int * out = (int *) malloc(_len_out0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_in0 = 65025;
          int * in = (int *) malloc(_len_in0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          linear_perm(out,in,n_blocks,size);
          free(out);
          free(in);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 40
          // dynamic_instructions_O0 : 286
          // ------------------------------- 
          // static_instructions_O1 : 24
          // dynamic_instructions_O1 : 105
          // ------------------------------- 
          // static_instructions_O2 : 24
          // dynamic_instructions_O2 : 105
          // ------------------------------- 
          // static_instructions_O3 : 24
          // dynamic_instructions_O3 : 105
          // ------------------------------- 
          // static_instructions_Ofast : 24
          // dynamic_instructions_Ofast : 105
          // ------------------------------- 
          // static_instructions_Os : 23
          // dynamic_instructions_Os : 104
          // ------------------------------- 
          // static_instructions_Oz : 23
          // dynamic_instructions_Oz : 115
          // ------------------------------- 

          int n_blocks = 10;
        
          int size = 10;
        
          int _len_out0 = 100;
          int * out = (int *) malloc(_len_out0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_in0 = 100;
          int * in = (int *) malloc(_len_in0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          linear_perm(out,in,n_blocks,size);
          free(out);
          free(in);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          int n_blocks = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_out0 = 1;
          int * out = (int *) malloc(_len_out0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_in0 = 1;
          int * in = (int *) malloc(_len_in0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          linear_perm(out,in,n_blocks,size);
          free(out);
          free(in);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
