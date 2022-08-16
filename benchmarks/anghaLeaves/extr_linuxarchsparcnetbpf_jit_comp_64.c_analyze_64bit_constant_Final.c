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
typedef  int u32 ;

/* Variables and functions */

__attribute__((used)) static void analyze_64bit_constant(u32 high_bits, u32 low_bits,
				   int *hbsp, int *lbsp, int *abbasp)
{
	int lowest_bit_set, highest_bit_set, all_bits_between_are_set;
	int i;

	lowest_bit_set = highest_bit_set = -1;
	i = 0;
	do {
		if ((lowest_bit_set == -1) && ((low_bits >> i) & 1))
			lowest_bit_set = i;
		if ((highest_bit_set == -1) && ((high_bits >> (32 - i - 1)) & 1))
			highest_bit_set = (64 - i - 1);
	}  while (++i < 32 && (highest_bit_set == -1 ||
			       lowest_bit_set == -1));
	if (i == 32) {
		i = 0;
		do {
			if (lowest_bit_set == -1 && ((high_bits >> i) & 1))
				lowest_bit_set = i + 32;
			if (highest_bit_set == -1 &&
			    ((low_bits >> (32 - i - 1)) & 1))
				highest_bit_set = 32 - i - 1;
		} while (++i < 32 && (highest_bit_set == -1 ||
				      lowest_bit_set == -1));
	}

	all_bits_between_are_set = 1;
	for (i = lowest_bit_set; i <= highest_bit_set; i++) {
		if (i < 32) {
			if ((low_bits & (1 << i)) != 0)
				continue;
		} else {
			if ((high_bits & (1 << (i - 32))) != 0)
				continue;
		}
		all_bits_between_are_set = 0;
		break;
	}
	*hbsp = highest_bit_set;
	*lbsp = lowest_bit_set;
	*abbasp = all_bits_between_are_set;
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
          int high_bits = 100;
          int low_bits = 100;
          int _len_hbsp0 = 1;
          int * hbsp = (int *) malloc(_len_hbsp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_hbsp0; _i0++) {
            hbsp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lbsp0 = 1;
          int * lbsp = (int *) malloc(_len_lbsp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lbsp0; _i0++) {
            lbsp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_abbasp0 = 1;
          int * abbasp = (int *) malloc(_len_abbasp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_abbasp0; _i0++) {
            abbasp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          analyze_64bit_constant(high_bits,low_bits,hbsp,lbsp,abbasp);
          free(hbsp);
          free(lbsp);
          free(abbasp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
