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

__attribute__((used)) static inline void
tsi108_stat_carry_one(int carry, int carry_bit, int carry_shift,
		      unsigned long *upper)
{
	if (carry & carry_bit)
		*upper += carry_shift;
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
          int carry = 100;
          int carry_bit = 100;
          int carry_shift = 100;
          int _len_upper0 = 1;
          unsigned long * upper = (unsigned long *) malloc(_len_upper0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_upper0; _i0++) {
            upper[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tsi108_stat_carry_one(carry,carry_bit,carry_shift,upper);
          free(upper);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int carry = 10;
          int carry_bit = 10;
          int carry_shift = 10;
          int _len_upper0 = 100;
          unsigned long * upper = (unsigned long *) malloc(_len_upper0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_upper0; _i0++) {
            upper[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tsi108_stat_carry_one(carry,carry_bit,carry_shift,upper);
          free(upper);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
