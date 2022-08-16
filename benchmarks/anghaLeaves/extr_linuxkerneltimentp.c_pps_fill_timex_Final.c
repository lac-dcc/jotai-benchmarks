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
struct timex {scalar_t__ stbcnt; scalar_t__ errcnt; scalar_t__ calcnt; scalar_t__ jitcnt; scalar_t__ stabil; scalar_t__ shift; scalar_t__ jitter; scalar_t__ ppsfreq; } ;

/* Variables and functions */

__attribute__((used)) static inline void pps_fill_timex(struct timex *txc)
{
	/* PPS is not implemented, so these are zero */
	txc->ppsfreq	   = 0;
	txc->jitter	   = 0;
	txc->shift	   = 0;
	txc->stabil	   = 0;
	txc->jitcnt	   = 0;
	txc->calcnt	   = 0;
	txc->errcnt	   = 0;
	txc->stbcnt	   = 0;
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
          int _len_txc0 = 1;
          struct timex * txc = (struct timex *) malloc(_len_txc0*sizeof(struct timex));
          for(int _i0 = 0; _i0 < _len_txc0; _i0++) {
            txc[_i0].stbcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        txc[_i0].errcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        txc[_i0].calcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        txc[_i0].jitcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        txc[_i0].stabil = ((-2 * (next_i()%2)) + 1) * next_i();
        txc[_i0].shift = ((-2 * (next_i()%2)) + 1) * next_i();
        txc[_i0].jitter = ((-2 * (next_i()%2)) + 1) * next_i();
        txc[_i0].ppsfreq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pps_fill_timex(txc);
          free(txc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
