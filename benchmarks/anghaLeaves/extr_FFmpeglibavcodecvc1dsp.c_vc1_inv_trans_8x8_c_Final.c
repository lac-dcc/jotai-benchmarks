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

__attribute__((used)) static void vc1_inv_trans_8x8_c(int16_t block[64])
{
    int i;
    register int t1, t2, t3, t4, t5, t6, t7, t8;
    int16_t *src, *dst, temp[64];

    src = block;
    dst = temp;
    for (i = 0; i < 8; i++) {
        t1 = 12 * (src[ 0] + src[32]) + 4;
        t2 = 12 * (src[ 0] - src[32]) + 4;
        t3 = 16 * src[16] +  6 * src[48];
        t4 =  6 * src[16] - 16 * src[48];

        t5 = t1 + t3;
        t6 = t2 + t4;
        t7 = t2 - t4;
        t8 = t1 - t3;

        t1 = 16 * src[ 8] + 15 * src[24] +  9 * src[40] +  4 * src[56];
        t2 = 15 * src[ 8] -  4 * src[24] - 16 * src[40] -  9 * src[56];
        t3 =  9 * src[ 8] - 16 * src[24] +  4 * src[40] + 15 * src[56];
        t4 =  4 * src[ 8] -  9 * src[24] + 15 * src[40] - 16 * src[56];

        dst[0] = (t5 + t1) >> 3;
        dst[1] = (t6 + t2) >> 3;
        dst[2] = (t7 + t3) >> 3;
        dst[3] = (t8 + t4) >> 3;
        dst[4] = (t8 - t4) >> 3;
        dst[5] = (t7 - t3) >> 3;
        dst[6] = (t6 - t2) >> 3;
        dst[7] = (t5 - t1) >> 3;

        src += 1;
        dst += 8;
    }

    src = temp;
    dst = block;
    for (i = 0; i < 8; i++) {
        t1 = 12 * (src[ 0] + src[32]) + 64;
        t2 = 12 * (src[ 0] - src[32]) + 64;
        t3 = 16 * src[16] +  6 * src[48];
        t4 =  6 * src[16] - 16 * src[48];

        t5 = t1 + t3;
        t6 = t2 + t4;
        t7 = t2 - t4;
        t8 = t1 - t3;

        t1 = 16 * src[ 8] + 15 * src[24] +  9 * src[40] +  4 * src[56];
        t2 = 15 * src[ 8] -  4 * src[24] - 16 * src[40] -  9 * src[56];
        t3 =  9 * src[ 8] - 16 * src[24] +  4 * src[40] + 15 * src[56];
        t4 =  4 * src[ 8] -  9 * src[24] + 15 * src[40] - 16 * src[56];

        dst[ 0] = (t5 + t1) >> 7;
        dst[ 8] = (t6 + t2) >> 7;
        dst[16] = (t7 + t3) >> 7;
        dst[24] = (t8 + t4) >> 7;
        dst[32] = (t8 - t4 + 1) >> 7;
        dst[40] = (t7 - t3 + 1) >> 7;
        dst[48] = (t6 - t2 + 1) >> 7;
        dst[56] = (t5 - t1 + 1) >> 7;

        src++;
        dst++;
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
          // static_instructions_O0 : 317
          // dynamic_instructions_O0 : 2421
          // ------------------------------- 
          // static_instructions_O1 : 206
          // dynamic_instructions_O1 : 1501
          // ------------------------------- 
          // static_instructions_O2 : 206
          // dynamic_instructions_O2 : 1501
          // ------------------------------- 
          // static_instructions_O3 : 206
          // dynamic_instructions_O3 : 1501
          // ------------------------------- 
          // static_instructions_Ofast : 206
          // dynamic_instructions_Ofast : 1501
          // ------------------------------- 
          // static_instructions_Os : 203
          // dynamic_instructions_Os : 1498
          // ------------------------------- 
          // static_instructions_Oz : 187
          // dynamic_instructions_Oz : 1374
          // ------------------------------- 

          int _len_block0 = 65025;
          int * block = (int *) malloc(_len_block0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
            block[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          vc1_inv_trans_8x8_c(block);
          free(block);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 317
          // dynamic_instructions_O0 : 2421
          // ------------------------------- 
          // static_instructions_O1 : 206
          // dynamic_instructions_O1 : 1501
          // ------------------------------- 
          // static_instructions_O2 : 206
          // dynamic_instructions_O2 : 1501
          // ------------------------------- 
          // static_instructions_O3 : 206
          // dynamic_instructions_O3 : 1501
          // ------------------------------- 
          // static_instructions_Ofast : 206
          // dynamic_instructions_Ofast : 1501
          // ------------------------------- 
          // static_instructions_Os : 203
          // dynamic_instructions_Os : 1498
          // ------------------------------- 
          // static_instructions_Oz : 187
          // dynamic_instructions_Oz : 1374
          // ------------------------------- 

          int _len_block0 = 100;
          int * block = (int *) malloc(_len_block0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
            block[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          vc1_inv_trans_8x8_c(block);
          free(block);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 317
          // dynamic_instructions_O0 : 2421
          // ------------------------------- 
          // static_instructions_O1 : 206
          // dynamic_instructions_O1 : 1501
          // ------------------------------- 
          // static_instructions_O2 : 206
          // dynamic_instructions_O2 : 1501
          // ------------------------------- 
          // static_instructions_O3 : 206
          // dynamic_instructions_O3 : 1501
          // ------------------------------- 
          // static_instructions_Ofast : 206
          // dynamic_instructions_Ofast : 1501
          // ------------------------------- 
          // static_instructions_Os : 203
          // dynamic_instructions_Os : 1498
          // ------------------------------- 
          // static_instructions_Oz : 187
          // dynamic_instructions_Oz : 1374
          // ------------------------------- 

          int _len_block0 = 64;
          int * block = (int *) malloc(_len_block0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
            block[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          vc1_inv_trans_8x8_c(block);
          free(block);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
