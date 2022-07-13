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
struct __stripe_pages_2d {unsigned int pages_in_unit; struct __1_page_stripe* _1p_stripes; } ;
struct __1_page_stripe {scalar_t__ write_count; } ;

/* Variables and functions */

__attribute__((used)) static unsigned _sp2d_min_pg(struct __stripe_pages_2d *sp2d)
{
	unsigned p;

	for (p = 0; p < sp2d->pages_in_unit; p++) {
		struct __1_page_stripe *_1ps = &sp2d->_1p_stripes[p];

		if (_1ps->write_count)
			return p;
	}

	return ~0;
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
          int _len_sp2d0 = 1;
          struct __stripe_pages_2d * sp2d = (struct __stripe_pages_2d *) malloc(_len_sp2d0*sizeof(struct __stripe_pages_2d));
          for(int _i0 = 0; _i0 < _len_sp2d0; _i0++) {
            sp2d[_i0].pages_in_unit = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sp2d__i0___1p_stripes0 = 1;
          sp2d[_i0]._1p_stripes = (struct __1_page_stripe *) malloc(_len_sp2d__i0___1p_stripes0*sizeof(struct __1_page_stripe));
          for(int _j0 = 0; _j0 < _len_sp2d__i0___1p_stripes0; _j0++) {
            sp2d[_i0]._1p_stripes->write_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = _sp2d_min_pg(sp2d);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_sp2d0; _aux++) {
          free(sp2d[_aux]._1p_stripes);
          }
          free(sp2d);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sp2d0 = 65025;
          struct __stripe_pages_2d * sp2d = (struct __stripe_pages_2d *) malloc(_len_sp2d0*sizeof(struct __stripe_pages_2d));
          for(int _i0 = 0; _i0 < _len_sp2d0; _i0++) {
            sp2d[_i0].pages_in_unit = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sp2d__i0___1p_stripes0 = 1;
          sp2d[_i0]._1p_stripes = (struct __1_page_stripe *) malloc(_len_sp2d__i0___1p_stripes0*sizeof(struct __1_page_stripe));
          for(int _j0 = 0; _j0 < _len_sp2d__i0___1p_stripes0; _j0++) {
            sp2d[_i0]._1p_stripes->write_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = _sp2d_min_pg(sp2d);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_sp2d0; _aux++) {
          free(sp2d[_aux]._1p_stripes);
          }
          free(sp2d);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sp2d0 = 100;
          struct __stripe_pages_2d * sp2d = (struct __stripe_pages_2d *) malloc(_len_sp2d0*sizeof(struct __stripe_pages_2d));
          for(int _i0 = 0; _i0 < _len_sp2d0; _i0++) {
            sp2d[_i0].pages_in_unit = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sp2d__i0___1p_stripes0 = 1;
          sp2d[_i0]._1p_stripes = (struct __1_page_stripe *) malloc(_len_sp2d__i0___1p_stripes0*sizeof(struct __1_page_stripe));
          for(int _j0 = 0; _j0 < _len_sp2d__i0___1p_stripes0; _j0++) {
            sp2d[_i0]._1p_stripes->write_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = _sp2d_min_pg(sp2d);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_sp2d0; _aux++) {
          free(sp2d[_aux]._1p_stripes);
          }
          free(sp2d);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
