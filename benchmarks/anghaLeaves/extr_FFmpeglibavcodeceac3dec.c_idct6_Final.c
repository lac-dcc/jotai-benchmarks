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

/* Variables and functions */
 int COEFF_0 ; 
 int COEFF_1 ; 
 int COEFF_2 ; 

__attribute__((used)) static void idct6(int pre_mant[6])
{
    int tmp;
    int even0, even1, even2, odd0, odd1, odd2;

    odd1 = pre_mant[1] - pre_mant[3] - pre_mant[5];

    even2 = ( pre_mant[2]                * COEFF_0) >> 23;
    tmp   = ( pre_mant[4]                * COEFF_1) >> 23;
    odd0  = ((pre_mant[1] + pre_mant[5]) * COEFF_2) >> 23;

    even0 = pre_mant[0] + (tmp >> 1);
    even1 = pre_mant[0] - tmp;

    tmp = even0;
    even0 = tmp + even2;
    even2 = tmp - even2;

    tmp = odd0;
    odd0 = tmp + pre_mant[1] + pre_mant[3];
    odd2 = tmp + pre_mant[5] - pre_mant[3];

    pre_mant[0] = even0 + odd0;
    pre_mant[1] = even1 + odd1;
    pre_mant[2] = even2 + odd2;
    pre_mant[3] = even2 - odd2;
    pre_mant[4] = even1 - odd1;
    pre_mant[5] = even0 - odd0;
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
          int _len_pre_mant0 = 6;
          int * pre_mant = (int *) malloc(_len_pre_mant0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pre_mant0; _i0++) {
            pre_mant[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          idct6(pre_mant);
          free(pre_mant);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_pre_mant0 = 100;
          int * pre_mant = (int *) malloc(_len_pre_mant0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pre_mant0; _i0++) {
            pre_mant[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          idct6(pre_mant);
          free(pre_mant);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
