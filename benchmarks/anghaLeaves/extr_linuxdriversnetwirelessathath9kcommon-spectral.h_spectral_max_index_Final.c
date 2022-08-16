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
typedef  int u8 ;
typedef  int s8 ;

/* Variables and functions */

__attribute__((used)) static inline u8 spectral_max_index(u8 *bins, int num_bins)
{
	s8 m = (bins[2] & 0xfc) >> 2;
	u8 zero_idx = num_bins / 2;

	/* It's a 5 bit signed int, remove its sign and use one's
	 * complement interpretation to add the sign back to the 8
	 * bit int
	 */
	if (m & 0x20) {
		m &= ~0x20;
		m |= 0xe0;
	}

	/* Bring the zero point to the beginning
	 * instead of the middle so that we can use
	 * it for array lookup and that we don't deal
	 * with negative values later
	 */
	m += zero_idx;

	/* Sanity check to make sure index is within bounds */
	if (m < 0 || m > num_bins - 1)
		m = 0;

	return m;
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
          int num_bins = 10;
          int _len_bins0 = 100;
          int * bins = (int *) malloc(_len_bins0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bins0; _i0++) {
            bins[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = spectral_max_index(bins,num_bins);
          printf("%d\n", benchRet); 
          free(bins);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
