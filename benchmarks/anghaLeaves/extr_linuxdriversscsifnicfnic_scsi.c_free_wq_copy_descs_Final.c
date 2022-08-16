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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int desc_count; int /*<<< orphan*/  desc_avail; } ;
struct vnic_wq_copy {int to_clean_index; TYPE_1__ ring; } ;
struct fnic {int* fw_ack_index; scalar_t__* fw_ack_recd; } ;

/* Variables and functions */

__attribute__((used)) static int free_wq_copy_descs(struct fnic *fnic, struct vnic_wq_copy *wq)
{
	/* if no Ack received from firmware, then nothing to clean */
	if (!fnic->fw_ack_recd[0])
		return 1;

	/*
	 * Update desc_available count based on number of freed descriptors
	 * Account for wraparound
	 */
	if (wq->to_clean_index <= fnic->fw_ack_index[0])
		wq->ring.desc_avail += (fnic->fw_ack_index[0]
					- wq->to_clean_index + 1);
	else
		wq->ring.desc_avail += (wq->ring.desc_count
					- wq->to_clean_index
					+ fnic->fw_ack_index[0] + 1);

	/*
	 * just bump clean index to ack_index+1 accounting for wraparound
	 * this will essentially free up all descriptors between
	 * to_clean_index and fw_ack_index, both inclusive
	 */
	wq->to_clean_index =
		(fnic->fw_ack_index[0] + 1) % wq->ring.desc_count;

	/* we have processed the acks received so far */
	fnic->fw_ack_recd[0] = 0;
	return 0;
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
          int _len_fnic0 = 1;
          struct fnic * fnic = (struct fnic *) malloc(_len_fnic0*sizeof(struct fnic));
          for(int _i0 = 0; _i0 < _len_fnic0; _i0++) {
              int _len_fnic__i0__fw_ack_index0 = 1;
          fnic[_i0].fw_ack_index = (int *) malloc(_len_fnic__i0__fw_ack_index0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fnic__i0__fw_ack_index0; _j0++) {
            fnic[_i0].fw_ack_index[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fnic__i0__fw_ack_recd0 = 1;
          fnic[_i0].fw_ack_recd = (long *) malloc(_len_fnic__i0__fw_ack_recd0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_fnic__i0__fw_ack_recd0; _j0++) {
            fnic[_i0].fw_ack_recd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_wq0 = 1;
          struct vnic_wq_copy * wq = (struct vnic_wq_copy *) malloc(_len_wq0*sizeof(struct vnic_wq_copy));
          for(int _i0 = 0; _i0 < _len_wq0; _i0++) {
            wq[_i0].to_clean_index = ((-2 * (next_i()%2)) + 1) * next_i();
        wq[_i0].ring.desc_count = ((-2 * (next_i()%2)) + 1) * next_i();
        wq[_i0].ring.desc_avail = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = free_wq_copy_descs(fnic,wq);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fnic0; _aux++) {
          free(fnic[_aux].fw_ack_index);
          }
          for(int _aux = 0; _aux < _len_fnic0; _aux++) {
          free(fnic[_aux].fw_ack_recd);
          }
          free(fnic);
          free(wq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
