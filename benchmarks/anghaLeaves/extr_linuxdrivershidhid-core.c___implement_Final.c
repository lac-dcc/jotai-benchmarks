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
typedef  unsigned int u32 ;

/* Variables and functions */

__attribute__((used)) static void __implement(u8 *report, unsigned offset, int n, u32 value)
{
	unsigned int idx = offset / 8;
	unsigned int bit_shift = offset % 8;
	int bits_to_set = 8 - bit_shift;

	while (n - bits_to_set >= 0) {
		report[idx] &= ~(0xff << bit_shift);
		report[idx] |= value << bit_shift;
		value >>= bits_to_set;
		n -= bits_to_set;
		bits_to_set = 8;
		bit_shift = 0;
		idx++;
	}

	/* last nibble */
	if (n) {
		u8 bit_mask = ((1U << n) - 1);
		report[idx] &= ~(bit_mask << bit_shift);
		report[idx] |= value << bit_shift;
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

    // big-arr-10x
    case 0:
    {
          unsigned int offset = 10;
          int n = 10;
          unsigned int value = 10;
          int _len_report0 = 100;
          int * report = (int *) malloc(_len_report0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_report0; _i0++) {
            report[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __implement(report,offset,n,value);
          free(report);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
