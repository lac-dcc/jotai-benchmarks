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
typedef  scalar_t__ uint32_t ;
struct csio_q {scalar_t__ pidx; scalar_t__ cidx; scalar_t__ credits; } ;

/* Variables and functions */

__attribute__((used)) static inline uint32_t
csio_wr_avail_qcredits(struct csio_q *q)
{
	if (q->pidx > q->cidx)
		return q->pidx - q->cidx;
	else if (q->cidx > q->pidx)
		return q->credits - (q->cidx - q->pidx);
	else
		return 0;	/* cidx == pidx, empty queue */
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
          int _len_q0 = 1;
          struct csio_q * q = (struct csio_q *) malloc(_len_q0*sizeof(struct csio_q));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0].pidx = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].cidx = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].credits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = csio_wr_avail_qcredits(q);
          printf("%ld\n", benchRet); 
          free(q);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
