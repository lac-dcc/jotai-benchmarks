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
struct alps_bitmap_point {int start_bit; scalar_t__ num_bits; } ;

/* Variables and functions */

__attribute__((used)) static void alps_get_bitmap_points(unsigned int map,
				   struct alps_bitmap_point *low,
				   struct alps_bitmap_point *high,
				   int *fingers)
{
	struct alps_bitmap_point *point;
	int i, bit, prev_bit = 0;

	point = low;
	for (i = 0; map != 0; i++, map >>= 1) {
		bit = map & 1;
		if (bit) {
			if (!prev_bit) {
				point->start_bit = i;
				point->num_bits = 0;
				(*fingers)++;
			}
			point->num_bits++;
		} else {
			if (prev_bit)
				point = high;
		}
		prev_bit = bit;
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
          unsigned int map = 100;
          int _len_low0 = 1;
          struct alps_bitmap_point * low = (struct alps_bitmap_point *) malloc(_len_low0*sizeof(struct alps_bitmap_point));
          for(int _i0 = 0; _i0 < _len_low0; _i0++) {
            low[_i0].start_bit = ((-2 * (next_i()%2)) + 1) * next_i();
        low[_i0].num_bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_high0 = 1;
          struct alps_bitmap_point * high = (struct alps_bitmap_point *) malloc(_len_high0*sizeof(struct alps_bitmap_point));
          for(int _i0 = 0; _i0 < _len_high0; _i0++) {
            high[_i0].start_bit = ((-2 * (next_i()%2)) + 1) * next_i();
        high[_i0].num_bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fingers0 = 1;
          int * fingers = (int *) malloc(_len_fingers0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fingers0; _i0++) {
            fingers[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          alps_get_bitmap_points(map,low,high,fingers);
          free(low);
          free(high);
          free(fingers);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
