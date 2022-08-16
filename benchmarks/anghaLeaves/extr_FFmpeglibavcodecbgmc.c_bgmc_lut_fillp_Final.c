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
typedef  int /*<<< orphan*/  uint8_t ;

/* Variables and functions */
 unsigned int FREQ_BITS ; 
 unsigned int LUT_BITS ; 
 unsigned int LUT_SIZE ; 
 unsigned int** cf_table ; 

__attribute__((used)) static void bgmc_lut_fillp(uint8_t *lut, int *lut_status, int delta)
{
    unsigned int sx, i;

    for (sx = 0; sx < 16; sx++)
        for (i = 0; i < LUT_SIZE; i++) {
            unsigned int target = (i + 1) << (FREQ_BITS - LUT_BITS);
            unsigned int symbol = 1 << delta;

            while (cf_table[sx][symbol] > target)
                symbol += 1 << delta;

            *lut++ = symbol >> delta;
        }

    *lut_status = delta;
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
          int delta = 100;
          int _len_lut0 = 1;
          int * lut = (int *) malloc(_len_lut0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lut0; _i0++) {
            lut[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lut_status0 = 1;
          int * lut_status = (int *) malloc(_len_lut_status0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lut_status0; _i0++) {
            lut_status[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bgmc_lut_fillp(lut,lut_status,delta);
          free(lut);
          free(lut_status);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
