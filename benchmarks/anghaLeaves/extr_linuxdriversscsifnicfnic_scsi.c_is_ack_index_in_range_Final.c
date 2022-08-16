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
typedef  scalar_t__ u16 ;
struct vnic_wq_copy {scalar_t__ to_clean_index; scalar_t__ to_use_index; } ;

/* Variables and functions */

__attribute__((used)) static inline int is_ack_index_in_range(struct vnic_wq_copy *wq,
					u16 request_out)
{
	if (wq->to_clean_index <= wq->to_use_index) {
		/* out of range, stale request_out index */
		if (request_out < wq->to_clean_index ||
		    request_out >= wq->to_use_index)
			return 0;
	} else {
		/* out of range, stale request_out index */
		if (request_out < wq->to_clean_index &&
		    request_out >= wq->to_use_index)
			return 0;
	}
	/* request_out index is in range */
	return 1;
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
          long request_out = 100;
          int _len_wq0 = 1;
          struct vnic_wq_copy * wq = (struct vnic_wq_copy *) malloc(_len_wq0*sizeof(struct vnic_wq_copy));
          for(int _i0 = 0; _i0 < _len_wq0; _i0++) {
            wq[_i0].to_clean_index = ((-2 * (next_i()%2)) + 1) * next_i();
        wq[_i0].to_use_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_ack_index_in_range(wq,request_out);
          printf("%d\n", benchRet); 
          free(wq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
