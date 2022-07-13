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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {unsigned int first_sendbuf; unsigned int last_sendbuf; } ;
struct qib_pportdata {TYPE_1__ sdma_state; } ;
struct qib_devdata {unsigned int num_pports; struct qib_pportdata* pport; } ;

/* Variables and functions */

__attribute__((used)) static struct qib_pportdata *is_sdma_buf(struct qib_devdata *dd, unsigned i)
{
	struct qib_pportdata *ppd;
	unsigned pidx;

	for (pidx = 0; pidx < dd->num_pports; pidx++) {
		ppd = dd->pport + pidx;
		if (i >= ppd->sdma_state.first_sendbuf &&
		    i < ppd->sdma_state.last_sendbuf)
			return ppd;
	}
	return NULL;
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
          unsigned int i = 255;
          int _len_dd0 = 65025;
          struct qib_devdata * dd = (struct qib_devdata *) malloc(_len_dd0*sizeof(struct qib_devdata));
          for(int _i0 = 0; _i0 < _len_dd0; _i0++) {
            dd[_i0].num_pports = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dd__i0__pport0 = 1;
          dd[_i0].pport = (struct qib_pportdata *) malloc(_len_dd__i0__pport0*sizeof(struct qib_pportdata));
          for(int _j0 = 0; _j0 < _len_dd__i0__pport0; _j0++) {
            dd[_i0].pport->sdma_state.first_sendbuf = ((-2 * (next_i()%2)) + 1) * next_i();
        dd[_i0].pport->sdma_state.last_sendbuf = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct qib_pportdata * benchRet = is_sdma_buf(dd,i);
          for(int _aux = 0; _aux < _len_dd0; _aux++) {
          free(dd[_aux].pport);
          }
          free(dd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
