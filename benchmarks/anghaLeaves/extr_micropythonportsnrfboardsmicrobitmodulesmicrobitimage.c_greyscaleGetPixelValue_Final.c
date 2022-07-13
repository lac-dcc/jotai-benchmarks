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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  unsigned int uint8_t ;
typedef  unsigned int mp_int_t ;
struct TYPE_3__ {unsigned int width; unsigned int* byte_data; } ;
typedef  TYPE_1__ greyscale_t ;

/* Variables and functions */

uint8_t greyscaleGetPixelValue(greyscale_t * p_greyscale, mp_int_t x, mp_int_t y) {
    unsigned int index = y*p_greyscale->width+x;
    unsigned int shift = ((index<<2)&4);
    return (p_greyscale->byte_data[index>>1] >> shift)&15;
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

    // big-arr
    case 0:
    {
          unsigned int x = 255;
          unsigned int y = 255;
          int _len_p_greyscale0 = 65025;
          struct TYPE_3__ * p_greyscale = (struct TYPE_3__ *) malloc(_len_p_greyscale0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p_greyscale0; _i0++) {
            p_greyscale[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p_greyscale__i0__byte_data0 = 1;
          p_greyscale[_i0].byte_data = (unsigned int *) malloc(_len_p_greyscale__i0__byte_data0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_p_greyscale__i0__byte_data0; _j0++) {
            p_greyscale[_i0].byte_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = greyscaleGetPixelValue(p_greyscale,x,y);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_p_greyscale0; _aux++) {
          free(p_greyscale[_aux].byte_data);
          }
          free(p_greyscale);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
