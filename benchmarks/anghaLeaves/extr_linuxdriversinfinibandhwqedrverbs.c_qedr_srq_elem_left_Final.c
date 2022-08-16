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
typedef  scalar_t__ u32 ;
struct qedr_srq_hwq_info {scalar_t__ max_wr; scalar_t__ wr_cons_cnt; scalar_t__ wr_prod_cnt; } ;

/* Variables and functions */

__attribute__((used)) static u32 qedr_srq_elem_left(struct qedr_srq_hwq_info *hw_srq)
{
	u32 used;

	/* Calculate number of elements used based on producer
	 * count and consumer count and subtract it from max
	 * work request supported so that we get elements left.
	 */
	used = hw_srq->wr_prod_cnt - hw_srq->wr_cons_cnt;

	return hw_srq->max_wr - used;
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
          int _len_hw_srq0 = 1;
          struct qedr_srq_hwq_info * hw_srq = (struct qedr_srq_hwq_info *) malloc(_len_hw_srq0*sizeof(struct qedr_srq_hwq_info));
          for(int _i0 = 0; _i0 < _len_hw_srq0; _i0++) {
            hw_srq[_i0].max_wr = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_srq[_i0].wr_cons_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_srq[_i0].wr_prod_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = qedr_srq_elem_left(hw_srq);
          printf("%ld\n", benchRet); 
          free(hw_srq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
