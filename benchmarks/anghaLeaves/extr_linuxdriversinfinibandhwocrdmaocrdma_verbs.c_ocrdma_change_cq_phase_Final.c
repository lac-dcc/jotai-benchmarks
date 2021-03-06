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
typedef  scalar_t__ u16 ;
struct ocrdma_cqe {scalar_t__ flags_status_srcqpn; } ;
struct ocrdma_cq {int phase; scalar_t__ phase_change; } ;

/* Variables and functions */
 int OCRDMA_CQE_VALID ; 

__attribute__((used)) static void ocrdma_change_cq_phase(struct ocrdma_cq *cq, struct ocrdma_cqe *cqe,
				   u16 cur_getp)
{
	if (cq->phase_change) {
		if (cur_getp == 0)
			cq->phase = (~cq->phase & OCRDMA_CQE_VALID);
	} else {
		/* clear valid bit */
		cqe->flags_status_srcqpn = 0;
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
          long cur_getp = 100;
          int _len_cq0 = 1;
          struct ocrdma_cq * cq = (struct ocrdma_cq *) malloc(_len_cq0*sizeof(struct ocrdma_cq));
          for(int _i0 = 0; _i0 < _len_cq0; _i0++) {
            cq[_i0].phase = ((-2 * (next_i()%2)) + 1) * next_i();
        cq[_i0].phase_change = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cqe0 = 1;
          struct ocrdma_cqe * cqe = (struct ocrdma_cqe *) malloc(_len_cqe0*sizeof(struct ocrdma_cqe));
          for(int _i0 = 0; _i0 < _len_cqe0; _i0++) {
            cqe[_i0].flags_status_srcqpn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ocrdma_change_cq_phase(cq,cqe,cur_getp);
          free(cq);
          free(cqe);
        
        break;
    }
    // big-arr
    case 1:
    {
          long cur_getp = 255;
          int _len_cq0 = 65025;
          struct ocrdma_cq * cq = (struct ocrdma_cq *) malloc(_len_cq0*sizeof(struct ocrdma_cq));
          for(int _i0 = 0; _i0 < _len_cq0; _i0++) {
            cq[_i0].phase = ((-2 * (next_i()%2)) + 1) * next_i();
        cq[_i0].phase_change = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cqe0 = 65025;
          struct ocrdma_cqe * cqe = (struct ocrdma_cqe *) malloc(_len_cqe0*sizeof(struct ocrdma_cqe));
          for(int _i0 = 0; _i0 < _len_cqe0; _i0++) {
            cqe[_i0].flags_status_srcqpn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ocrdma_change_cq_phase(cq,cqe,cur_getp);
          free(cq);
          free(cqe);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long cur_getp = 10;
          int _len_cq0 = 100;
          struct ocrdma_cq * cq = (struct ocrdma_cq *) malloc(_len_cq0*sizeof(struct ocrdma_cq));
          for(int _i0 = 0; _i0 < _len_cq0; _i0++) {
            cq[_i0].phase = ((-2 * (next_i()%2)) + 1) * next_i();
        cq[_i0].phase_change = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cqe0 = 100;
          struct ocrdma_cqe * cqe = (struct ocrdma_cqe *) malloc(_len_cqe0*sizeof(struct ocrdma_cqe));
          for(int _i0 = 0; _i0 < _len_cqe0; _i0++) {
            cqe[_i0].flags_status_srcqpn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ocrdma_change_cq_phase(cq,cqe,cur_getp);
          free(cq);
          free(cqe);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
