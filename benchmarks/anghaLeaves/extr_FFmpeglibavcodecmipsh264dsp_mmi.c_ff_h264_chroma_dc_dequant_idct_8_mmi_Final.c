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
typedef  int int16_t ;

/* Variables and functions */

void ff_h264_chroma_dc_dequant_idct_8_mmi(int16_t *block, int qmul)
{
    int a,b,c,d;

    d = block[0] - block[16];
    a = block[0] + block[16];
    b = block[32] - block[48];
    c = block[32] + block[48];
    block[0] = ((a+c)*qmul) >> 7;
    block[16]= ((d+b)*qmul) >> 7;
    block[32]= ((a-c)*qmul) >> 7;
    block[48]= ((d-b)*qmul) >> 7;
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
          int qmul = 255;
        
          int _len_block0 = 65025;
          int * block = (int *) malloc(_len_block0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
            block[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          ff_h264_chroma_dc_dequant_idct_8_mmi(block,qmul);
          free(block);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int qmul = 10;
        
          int _len_block0 = 100;
          int * block = (int *) malloc(_len_block0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
            block[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          ff_h264_chroma_dc_dequant_idct_8_mmi(block,qmul);
          free(block);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
