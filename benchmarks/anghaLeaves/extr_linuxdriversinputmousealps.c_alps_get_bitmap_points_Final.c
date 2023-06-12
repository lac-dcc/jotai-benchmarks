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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
          // static_instructions_O0 : 49
          // dynamic_instructions_O0 : 179
          // ------------------------------- 
          // static_instructions_O1 : 25
          // dynamic_instructions_O1 : 84
          // ------------------------------- 
          // static_instructions_O2 : 29
          // dynamic_instructions_O2 : 91
          // ------------------------------- 
          // static_instructions_O3 : 32
          // dynamic_instructions_O3 : 88
          // ------------------------------- 
          // static_instructions_Ofast : 32
          // dynamic_instructions_Ofast : 88
          // ------------------------------- 
          // static_instructions_Os : 28
          // dynamic_instructions_Os : 91
          // ------------------------------- 
          // static_instructions_Oz : 28
          // dynamic_instructions_Oz : 105
          // ------------------------------- 

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


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 44
          // dynamic_instructions_O0 : 207
          // ------------------------------- 
          // static_instructions_O1 : 23
          // dynamic_instructions_O1 : 100
          // ------------------------------- 
          // static_instructions_O2 : 27
          // dynamic_instructions_O2 : 123
          // ------------------------------- 
          // static_instructions_O3 : 26
          // dynamic_instructions_O3 : 115
          // ------------------------------- 
          // static_instructions_Ofast : 26
          // dynamic_instructions_Ofast : 115
          // ------------------------------- 
          // static_instructions_Os : 25
          // dynamic_instructions_Os : 114
          // ------------------------------- 
          // static_instructions_Oz : 25
          // dynamic_instructions_Oz : 130
          // ------------------------------- 

          unsigned int map = 255;
        
          int _len_low0 = 65025;
          struct alps_bitmap_point * low = (struct alps_bitmap_point *) malloc(_len_low0*sizeof(struct alps_bitmap_point));
          for(int _i0 = 0; _i0 < _len_low0; _i0++) {
              low[_i0].start_bit = ((-2 * (next_i()%2)) + 1) * next_i();
          low[_i0].num_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_high0 = 65025;
          struct alps_bitmap_point * high = (struct alps_bitmap_point *) malloc(_len_high0*sizeof(struct alps_bitmap_point));
          for(int _i0 = 0; _i0 < _len_high0; _i0++) {
              high[_i0].start_bit = ((-2 * (next_i()%2)) + 1) * next_i();
          high[_i0].num_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_fingers0 = 65025;
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


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 49
          // dynamic_instructions_O0 : 118
          // ------------------------------- 
          // static_instructions_O1 : 25
          // dynamic_instructions_O1 : 55
          // ------------------------------- 
          // static_instructions_O2 : 27
          // dynamic_instructions_O2 : 59
          // ------------------------------- 
          // static_instructions_O3 : 30
          // dynamic_instructions_O3 : 57
          // ------------------------------- 
          // static_instructions_Ofast : 30
          // dynamic_instructions_Ofast : 57
          // ------------------------------- 
          // static_instructions_Os : 26
          // dynamic_instructions_Os : 58
          // ------------------------------- 
          // static_instructions_Oz : 26
          // dynamic_instructions_Oz : 66
          // ------------------------------- 

          unsigned int map = 10;
        
          int _len_low0 = 100;
          struct alps_bitmap_point * low = (struct alps_bitmap_point *) malloc(_len_low0*sizeof(struct alps_bitmap_point));
          for(int _i0 = 0; _i0 < _len_low0; _i0++) {
              low[_i0].start_bit = ((-2 * (next_i()%2)) + 1) * next_i();
          low[_i0].num_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_high0 = 100;
          struct alps_bitmap_point * high = (struct alps_bitmap_point *) malloc(_len_high0*sizeof(struct alps_bitmap_point));
          for(int _i0 = 0; _i0 < _len_high0; _i0++) {
              high[_i0].start_bit = ((-2 * (next_i()%2)) + 1) * next_i();
          high[_i0].num_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_fingers0 = 100;
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


    // empty
    case 3:
    {
          // static_instructions_O0 : 49
          // dynamic_instructions_O0 : 765
          // ------------------------------- 
          // static_instructions_O1 : 25
          // dynamic_instructions_O1 : 362
          // ------------------------------- 
          // static_instructions_O2 : 29
          // dynamic_instructions_O2 : 443
          // ------------------------------- 
          // static_instructions_O3 : 32
          // dynamic_instructions_O3 : 415
          // ------------------------------- 
          // static_instructions_Ofast : 32
          // dynamic_instructions_Ofast : 415
          // ------------------------------- 
          // static_instructions_Os : 28
          // dynamic_instructions_Os : 418
          // ------------------------------- 
          // static_instructions_Oz : 28
          // dynamic_instructions_Oz : 482
          // ------------------------------- 

          unsigned int map = ((-2 * (next_i()%2)) + 1) * next_i();
        
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
