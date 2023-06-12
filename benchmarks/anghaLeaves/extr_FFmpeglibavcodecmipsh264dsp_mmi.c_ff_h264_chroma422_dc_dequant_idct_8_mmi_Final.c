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

void ff_h264_chroma422_dc_dequant_idct_8_mmi(int16_t *block, int qmul)
{
    int temp[8];
    int t[8];

    temp[0] = block[0] + block[16];
    temp[1] = block[0] - block[16];
    temp[2] = block[32] + block[48];
    temp[3] = block[32] - block[48];
    temp[4] = block[64] + block[80];
    temp[5] = block[64] - block[80];
    temp[6] = block[96] + block[112];
    temp[7] = block[96] - block[112];

    t[0] = temp[0] + temp[4] + temp[2] + temp[6];
    t[1] = temp[0] - temp[4] + temp[2] - temp[6];
    t[2] = temp[0] - temp[4] - temp[2] + temp[6];
    t[3] = temp[0] + temp[4] - temp[2] - temp[6];
    t[4] = temp[1] + temp[5] + temp[3] + temp[7];
    t[5] = temp[1] - temp[5] + temp[3] - temp[7];
    t[6] = temp[1] - temp[5] - temp[3] + temp[7];
    t[7] = temp[1] + temp[5] - temp[3] - temp[7];

    block[  0]= (t[0]*qmul + 128) >> 8;
    block[ 32]= (t[1]*qmul + 128) >> 8;
    block[ 64]= (t[2]*qmul + 128) >> 8;
    block[ 96]= (t[3]*qmul + 128) >> 8;
    block[ 16]= (t[4]*qmul + 128) >> 8;
    block[ 48]= (t[5]*qmul + 128) >> 8;
    block[ 80]= (t[6]*qmul + 128) >> 8;
    block[112]= (t[7]*qmul + 128) >> 8;
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
          // static_instructions_O0 : 134
          // dynamic_instructions_O0 : 134
          // ------------------------------- 
          // static_instructions_O1 : 80
          // dynamic_instructions_O1 : 80
          // ------------------------------- 
          // static_instructions_O2 : 80
          // dynamic_instructions_O2 : 80
          // ------------------------------- 
          // static_instructions_O3 : 80
          // dynamic_instructions_O3 : 80
          // ------------------------------- 
          // static_instructions_Ofast : 80
          // dynamic_instructions_Ofast : 80
          // ------------------------------- 
          // static_instructions_Os : 81
          // dynamic_instructions_Os : 81
          // ------------------------------- 
          // static_instructions_Oz : 81
          // dynamic_instructions_Oz : 81
          // ------------------------------- 

          int qmul = 255;
        
          int _len_block0 = 65025;
          int * block = (int *) malloc(_len_block0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
            block[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          ff_h264_chroma422_dc_dequant_idct_8_mmi(block,qmul);
          free(block);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
