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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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

/* Type definitions */
struct dmx_filter {int* mode; } ;

/* Variables and functions */
 int DMX_FILTER_SIZE ; 

__attribute__((used)) static inline void invert_mode(struct dmx_filter *filter)
{
	int i;

	for (i = 0; i < DMX_FILTER_SIZE; i++)
		filter->mode[i] ^= 0xff;
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
          int _len_filter0 = 1;
          struct dmx_filter * filter = (struct dmx_filter *) malloc(_len_filter0*sizeof(struct dmx_filter));
          for(int _i0 = 0; _i0 < _len_filter0; _i0++) {
              int _len_filter__i0__mode0 = 1;
          filter[_i0].mode = (int *) malloc(_len_filter__i0__mode0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_filter__i0__mode0; _j0++) {
            filter[_i0].mode[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          invert_mode(filter);
          for(int _aux = 0; _aux < _len_filter0; _aux++) {
          free(filter[_aux].mode);
          }
          free(filter);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_filter0 = 65025;
          struct dmx_filter * filter = (struct dmx_filter *) malloc(_len_filter0*sizeof(struct dmx_filter));
          for(int _i0 = 0; _i0 < _len_filter0; _i0++) {
              int _len_filter__i0__mode0 = 1;
          filter[_i0].mode = (int *) malloc(_len_filter__i0__mode0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_filter__i0__mode0; _j0++) {
            filter[_i0].mode[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          invert_mode(filter);
          for(int _aux = 0; _aux < _len_filter0; _aux++) {
          free(filter[_aux].mode);
          }
          free(filter);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_filter0 = 100;
          struct dmx_filter * filter = (struct dmx_filter *) malloc(_len_filter0*sizeof(struct dmx_filter));
          for(int _i0 = 0; _i0 < _len_filter0; _i0++) {
              int _len_filter__i0__mode0 = 1;
          filter[_i0].mode = (int *) malloc(_len_filter__i0__mode0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_filter__i0__mode0; _j0++) {
            filter[_i0].mode[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          invert_mode(filter);
          for(int _aux = 0; _aux < _len_filter0; _aux++) {
          free(filter[_aux].mode);
          }
          free(filter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
