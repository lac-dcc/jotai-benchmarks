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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct bdi_writeback {TYPE_1__* bdi; } ;
struct TYPE_2__ {unsigned long min_ratio; unsigned long max_ratio; } ;

/* Variables and functions */

__attribute__((used)) static void wb_min_max_ratio(struct bdi_writeback *wb,
			     unsigned long *minp, unsigned long *maxp)
{
	*minp = wb->bdi->min_ratio;
	*maxp = wb->bdi->max_ratio;
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
          int _len_wb0 = 1;
          struct bdi_writeback * wb = (struct bdi_writeback *) malloc(_len_wb0*sizeof(struct bdi_writeback));
          for(int _i0 = 0; _i0 < _len_wb0; _i0++) {
              int _len_wb__i0__bdi0 = 1;
          wb[_i0].bdi = (struct TYPE_2__ *) malloc(_len_wb__i0__bdi0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_wb__i0__bdi0; _j0++) {
            wb[_i0].bdi->min_ratio = ((-2 * (next_i()%2)) + 1) * next_i();
        wb[_i0].bdi->max_ratio = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_minp0 = 1;
          unsigned long * minp = (unsigned long *) malloc(_len_minp0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_minp0; _i0++) {
            minp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_maxp0 = 1;
          unsigned long * maxp = (unsigned long *) malloc(_len_maxp0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_maxp0; _i0++) {
            maxp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          wb_min_max_ratio(wb,minp,maxp);
          for(int _aux = 0; _aux < _len_wb0; _aux++) {
          free(wb[_aux].bdi);
          }
          free(wb);
          free(minp);
          free(maxp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_wb0 = 65025;
          struct bdi_writeback * wb = (struct bdi_writeback *) malloc(_len_wb0*sizeof(struct bdi_writeback));
          for(int _i0 = 0; _i0 < _len_wb0; _i0++) {
              int _len_wb__i0__bdi0 = 1;
          wb[_i0].bdi = (struct TYPE_2__ *) malloc(_len_wb__i0__bdi0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_wb__i0__bdi0; _j0++) {
            wb[_i0].bdi->min_ratio = ((-2 * (next_i()%2)) + 1) * next_i();
        wb[_i0].bdi->max_ratio = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_minp0 = 65025;
          unsigned long * minp = (unsigned long *) malloc(_len_minp0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_minp0; _i0++) {
            minp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_maxp0 = 65025;
          unsigned long * maxp = (unsigned long *) malloc(_len_maxp0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_maxp0; _i0++) {
            maxp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          wb_min_max_ratio(wb,minp,maxp);
          for(int _aux = 0; _aux < _len_wb0; _aux++) {
          free(wb[_aux].bdi);
          }
          free(wb);
          free(minp);
          free(maxp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_wb0 = 100;
          struct bdi_writeback * wb = (struct bdi_writeback *) malloc(_len_wb0*sizeof(struct bdi_writeback));
          for(int _i0 = 0; _i0 < _len_wb0; _i0++) {
              int _len_wb__i0__bdi0 = 1;
          wb[_i0].bdi = (struct TYPE_2__ *) malloc(_len_wb__i0__bdi0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_wb__i0__bdi0; _j0++) {
            wb[_i0].bdi->min_ratio = ((-2 * (next_i()%2)) + 1) * next_i();
        wb[_i0].bdi->max_ratio = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_minp0 = 100;
          unsigned long * minp = (unsigned long *) malloc(_len_minp0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_minp0; _i0++) {
            minp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_maxp0 = 100;
          unsigned long * maxp = (unsigned long *) malloc(_len_maxp0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_maxp0; _i0++) {
            maxp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          wb_min_max_ratio(wb,minp,maxp);
          for(int _aux = 0; _aux < _len_wb0; _aux++) {
          free(wb[_aux].bdi);
          }
          free(wb);
          free(minp);
          free(maxp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
