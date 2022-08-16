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
       0            big-arr-10x\n\
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

__attribute__((used)) static inline void idct_row(int16_t *blk)
{
    int t0, t1, t2, t3, t4, t5, t6, t7, t8, t9, tA, tB, tC, tD, tE, tF;
    int t10, t11, t12, t13;

    t0  =  (blk[3] * 19266 + blk[5] * 12873) >> 14;
    t1  =  (blk[5] * 19266 - blk[3] * 12873) >> 14;
    t2  = ((blk[7] * 4520  + blk[1] * 22725) >> 14) - t0;
    t3  = ((blk[1] * 4520  - blk[7] * 22725) >> 14) - t1;
    t4  = t0 * 2 + t2;
    t5  = t1 * 2 + t3;
    t6  = t2 - t3;
    t7  = t3 * 2 + t6;
    t8  = (t6 * 11585) >> 14;
    t9  = (t7 * 11585) >> 14;
    tA  = (blk[2] * 8867 - blk[6] * 21407) >> 14;
    tB  = (blk[6] * 8867 + blk[2] * 21407) >> 14;
    tC  = blk[0] - blk[4];
    tD  = blk[4] * 2 + tC;
    tE  = tC - tA;
    tF  = tD - tB;
    t10 = tF - t5;
    t11 = tE - t8;
    t12 = tE + tA * 2 - t9;
    t13 = tF + tB * 2 - t4;

    blk[0] = (t13 + t4 * 2 + 4) >> 3;
    blk[1] = (t12 + t9 * 2 + 4) >> 3;
    blk[2] = (t11 + t8 * 2 + 4) >> 3;
    blk[3] = (t10 + t5 * 2 + 4) >> 3;
    blk[4] = (t10          + 4) >> 3;
    blk[5] = (t11          + 4) >> 3;
    blk[6] = (t12          + 4) >> 3;
    blk[7] = (t13          + 4) >> 3;
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

    // big-arr-10x
    case 0:
    {
          int _len_blk0 = 100;
          int * blk = (int *) malloc(_len_blk0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_blk0; _i0++) {
            blk[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          idct_row(blk);
          free(blk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
