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
       0            int-bounds\n\
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
typedef  int UInt32 ;

/* Variables and functions */
 int kBitModelTotal ; 
 int const kNumBitModelTotalBits ; 
 int kNumBitPriceShiftBits ; 
 int kNumMoveReducingBits ; 

void LzmaEnc_InitPriceTables(UInt32 *ProbPrices)
{
  UInt32 i;
  for (i = (1 << kNumMoveReducingBits) / 2; i < kBitModelTotal; i += (1 << kNumMoveReducingBits))
  {
    const int kCyclesBits = kNumBitPriceShiftBits;
    UInt32 w = i;
    UInt32 bitCount = 0;
    int j;
    for (j = 0; j < kCyclesBits; j++)
    {
      w = w * w;
      bitCount <<= 1;
      while (w >= ((UInt32)1 << 16))
      {
        w >>= 1;
        bitCount++;
      }
    }
    ProbPrices[i >> kNumMoveReducingBits] = ((kNumBitModelTotalBits << kCyclesBits) - 15 - bitCount);
  }
}


// ------------------------------------------------------------------------- //




// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // int-bounds
    case 0:
    {
          int _len_ProbPrices0 = 1;
          int * ProbPrices = (int *) malloc(_len_ProbPrices0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ProbPrices0; _i0++) {
            ProbPrices[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          LzmaEnc_InitPriceTables(ProbPrices);
          free(ProbPrices);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_ProbPrices0 = 100;
          int * ProbPrices = (int *) malloc(_len_ProbPrices0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ProbPrices0; _i0++) {
            ProbPrices[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          LzmaEnc_InitPriceTables(ProbPrices);
          free(ProbPrices);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
