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
struct request_queue {int nr_requests; int nr_congestion_on; int nr_congestion_off; } ;

/* Variables and functions */

void blk_queue_congestion_threshold(struct request_queue *q)
{
	int nr;

	nr = q->nr_requests - (q->nr_requests / 8) + 1;
	if (nr > q->nr_requests)
		nr = q->nr_requests;
	q->nr_congestion_on = nr;

	nr = q->nr_requests - (q->nr_requests / 8) - (q->nr_requests / 16) - 1;
	if (nr < 1)
		nr = 1;
	q->nr_congestion_off = nr;
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
          struct request_queue * q = (struct request_queue *) malloc(_len_q0*sizeof(struct request_queue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0].nr_requests = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].nr_congestion_on = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].nr_congestion_off = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          blk_queue_congestion_threshold(q);
          free(q);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_q0 = 65025;
          struct request_queue * q = (struct request_queue *) malloc(_len_q0*sizeof(struct request_queue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0].nr_requests = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].nr_congestion_on = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].nr_congestion_off = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          blk_queue_congestion_threshold(q);
          free(q);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_q0 = 100;
          struct request_queue * q = (struct request_queue *) malloc(_len_q0*sizeof(struct request_queue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0].nr_requests = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].nr_congestion_on = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].nr_congestion_off = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          blk_queue_congestion_threshold(q);
          free(q);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
