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
typedef  int uint16_t ;

/* Variables and functions */
 int AC3_MAX_BLOCKS ; 
 int* ff_ac3_bap_bits ; 

__attribute__((used)) static int ac3_compute_mantissa_size_c(uint16_t mant_cnt[6][16])
{
    int blk, bap;
    int bits = 0;

    for (blk = 0; blk < AC3_MAX_BLOCKS; blk++) {
        // bap=1 : 3 mantissas in 5 bits
        bits += (mant_cnt[blk][1] / 3) * 5;
        // bap=2 : 3 mantissas in 7 bits
        // bap=4 : 2 mantissas in 7 bits
        bits += ((mant_cnt[blk][2] / 3) + (mant_cnt[blk][4] >> 1)) * 7;
        // bap=3 : 1 mantissa in 3 bits
        bits += mant_cnt[blk][3] * 3;
        // bap=5 to 15 : get bits per mantissa from table
        for (bap = 5; bap < 16; bap++)
            bits += mant_cnt[blk][bap] * ff_ac3_bap_bits[bap];
    }
    return bits;
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
          int _len_mant_cnt0 = 65025;
          int ** mant_cnt = (int **) malloc(_len_mant_cnt0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_mant_cnt0; _i0++) {
            int _len_mant_cnt1 = 16;
            mant_cnt[_i0] = (int *) malloc(_len_mant_cnt1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_mant_cnt1; _i1++) {
              mant_cnt[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        
          int benchRet = ac3_compute_mantissa_size_c(mant_cnt);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_mant_cnt0; i1++) {
              free(mant_cnt[i1]);
          }
          free(mant_cnt);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_mant_cnt0 = 100;
          int ** mant_cnt = (int **) malloc(_len_mant_cnt0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_mant_cnt0; _i0++) {
            int _len_mant_cnt1 = 16;
            mant_cnt[_i0] = (int *) malloc(_len_mant_cnt1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_mant_cnt1; _i1++) {
              mant_cnt[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        
          int benchRet = ac3_compute_mantissa_size_c(mant_cnt);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_mant_cnt0; i1++) {
              free(mant_cnt[i1]);
          }
          free(mant_cnt);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_mant_cnt0 = 6;
          int ** mant_cnt = (int **) malloc(_len_mant_cnt0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_mant_cnt0; _i0++) {
            int _len_mant_cnt1 = 16;
            mant_cnt[_i0] = (int *) malloc(_len_mant_cnt1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_mant_cnt1; _i1++) {
              mant_cnt[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        
          int benchRet = ac3_compute_mantissa_size_c(mant_cnt);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_mant_cnt0; i1++) {
              free(mant_cnt[i1]);
          }
          free(mant_cnt);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
