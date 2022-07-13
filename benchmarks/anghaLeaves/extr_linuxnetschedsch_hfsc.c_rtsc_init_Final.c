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
typedef  void* u64 ;
struct runtime_sc {int /*<<< orphan*/  ism2; int /*<<< orphan*/  sm2; int /*<<< orphan*/  dy; int /*<<< orphan*/  dx; int /*<<< orphan*/  ism1; int /*<<< orphan*/  sm1; void* y; void* x; } ;
struct internal_sc {int /*<<< orphan*/  ism2; int /*<<< orphan*/  sm2; int /*<<< orphan*/  dy; int /*<<< orphan*/  dx; int /*<<< orphan*/  ism1; int /*<<< orphan*/  sm1; } ;

/* Variables and functions */

__attribute__((used)) static void
rtsc_init(struct runtime_sc *rtsc, struct internal_sc *isc, u64 x, u64 y)
{
	rtsc->x	   = x;
	rtsc->y    = y;
	rtsc->sm1  = isc->sm1;
	rtsc->ism1 = isc->ism1;
	rtsc->dx   = isc->dx;
	rtsc->dy   = isc->dy;
	rtsc->sm2  = isc->sm2;
	rtsc->ism2 = isc->ism2;
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
          int _len_rtsc0 = 1;
          struct runtime_sc * rtsc = (struct runtime_sc *) malloc(_len_rtsc0*sizeof(struct runtime_sc));
          for(int _i0 = 0; _i0 < _len_rtsc0; _i0++) {
            rtsc[_i0].ism2 = ((-2 * (next_i()%2)) + 1) * next_i();
        rtsc[_i0].sm2 = ((-2 * (next_i()%2)) + 1) * next_i();
        rtsc[_i0].dy = ((-2 * (next_i()%2)) + 1) * next_i();
        rtsc[_i0].dx = ((-2 * (next_i()%2)) + 1) * next_i();
        rtsc[_i0].ism1 = ((-2 * (next_i()%2)) + 1) * next_i();
        rtsc[_i0].sm1 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_isc0 = 1;
          struct internal_sc * isc = (struct internal_sc *) malloc(_len_isc0*sizeof(struct internal_sc));
          for(int _i0 = 0; _i0 < _len_isc0; _i0++) {
            isc[_i0].ism2 = ((-2 * (next_i()%2)) + 1) * next_i();
        isc[_i0].sm2 = ((-2 * (next_i()%2)) + 1) * next_i();
        isc[_i0].dy = ((-2 * (next_i()%2)) + 1) * next_i();
        isc[_i0].dx = ((-2 * (next_i()%2)) + 1) * next_i();
        isc[_i0].ism1 = ((-2 * (next_i()%2)) + 1) * next_i();
        isc[_i0].sm1 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * x;
          void * y;
          rtsc_init(rtsc,isc,x,y);
          free(rtsc);
          free(isc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_rtsc0 = 65025;
          struct runtime_sc * rtsc = (struct runtime_sc *) malloc(_len_rtsc0*sizeof(struct runtime_sc));
          for(int _i0 = 0; _i0 < _len_rtsc0; _i0++) {
            rtsc[_i0].ism2 = ((-2 * (next_i()%2)) + 1) * next_i();
        rtsc[_i0].sm2 = ((-2 * (next_i()%2)) + 1) * next_i();
        rtsc[_i0].dy = ((-2 * (next_i()%2)) + 1) * next_i();
        rtsc[_i0].dx = ((-2 * (next_i()%2)) + 1) * next_i();
        rtsc[_i0].ism1 = ((-2 * (next_i()%2)) + 1) * next_i();
        rtsc[_i0].sm1 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_isc0 = 65025;
          struct internal_sc * isc = (struct internal_sc *) malloc(_len_isc0*sizeof(struct internal_sc));
          for(int _i0 = 0; _i0 < _len_isc0; _i0++) {
            isc[_i0].ism2 = ((-2 * (next_i()%2)) + 1) * next_i();
        isc[_i0].sm2 = ((-2 * (next_i()%2)) + 1) * next_i();
        isc[_i0].dy = ((-2 * (next_i()%2)) + 1) * next_i();
        isc[_i0].dx = ((-2 * (next_i()%2)) + 1) * next_i();
        isc[_i0].ism1 = ((-2 * (next_i()%2)) + 1) * next_i();
        isc[_i0].sm1 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * x;
          void * y;
          rtsc_init(rtsc,isc,x,y);
          free(rtsc);
          free(isc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_rtsc0 = 100;
          struct runtime_sc * rtsc = (struct runtime_sc *) malloc(_len_rtsc0*sizeof(struct runtime_sc));
          for(int _i0 = 0; _i0 < _len_rtsc0; _i0++) {
            rtsc[_i0].ism2 = ((-2 * (next_i()%2)) + 1) * next_i();
        rtsc[_i0].sm2 = ((-2 * (next_i()%2)) + 1) * next_i();
        rtsc[_i0].dy = ((-2 * (next_i()%2)) + 1) * next_i();
        rtsc[_i0].dx = ((-2 * (next_i()%2)) + 1) * next_i();
        rtsc[_i0].ism1 = ((-2 * (next_i()%2)) + 1) * next_i();
        rtsc[_i0].sm1 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_isc0 = 100;
          struct internal_sc * isc = (struct internal_sc *) malloc(_len_isc0*sizeof(struct internal_sc));
          for(int _i0 = 0; _i0 < _len_isc0; _i0++) {
            isc[_i0].ism2 = ((-2 * (next_i()%2)) + 1) * next_i();
        isc[_i0].sm2 = ((-2 * (next_i()%2)) + 1) * next_i();
        isc[_i0].dy = ((-2 * (next_i()%2)) + 1) * next_i();
        isc[_i0].dx = ((-2 * (next_i()%2)) + 1) * next_i();
        isc[_i0].ism1 = ((-2 * (next_i()%2)) + 1) * next_i();
        isc[_i0].sm1 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * x;
          void * y;
          rtsc_init(rtsc,isc,x,y);
          free(rtsc);
          free(isc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
