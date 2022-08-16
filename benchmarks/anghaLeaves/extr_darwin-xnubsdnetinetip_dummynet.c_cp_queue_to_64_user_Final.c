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
struct dn_flow_queue_64 {int /*<<< orphan*/  F; int /*<<< orphan*/  S; int /*<<< orphan*/  sched_time; int /*<<< orphan*/  heap_pos; int /*<<< orphan*/  q_time; int /*<<< orphan*/  random; int /*<<< orphan*/  count; int /*<<< orphan*/  avg; int /*<<< orphan*/  hash_slot; int /*<<< orphan*/  drops; int /*<<< orphan*/  tot_bytes; int /*<<< orphan*/  tot_pkts; int /*<<< orphan*/  numbytes; int /*<<< orphan*/  len_bytes; int /*<<< orphan*/  len; int /*<<< orphan*/  id; } ;
struct dn_flow_queue {int /*<<< orphan*/  F; int /*<<< orphan*/  S; int /*<<< orphan*/  sched_time; int /*<<< orphan*/  heap_pos; int /*<<< orphan*/  q_time; int /*<<< orphan*/  random; int /*<<< orphan*/  count; int /*<<< orphan*/  avg; int /*<<< orphan*/  hash_slot; int /*<<< orphan*/  drops; int /*<<< orphan*/  tot_bytes; int /*<<< orphan*/  tot_pkts; int /*<<< orphan*/  numbytes; int /*<<< orphan*/  len_bytes; int /*<<< orphan*/  len; int /*<<< orphan*/  id; } ;

/* Variables and functions */

__attribute__((used)) static
void cp_queue_to_64_user( struct dn_flow_queue *q, struct dn_flow_queue_64 *qp)
{
	qp->id = q->id;
	qp->len = q->len;
	qp->len_bytes = q->len_bytes;
	qp->numbytes = q->numbytes;
	qp->tot_pkts = q->tot_pkts;
	qp->tot_bytes = q->tot_bytes;
	qp->drops = q->drops;
	qp->hash_slot = q->hash_slot;
	qp->avg = q->avg;
	qp->count = q->count;
	qp->random = q->random;
	qp->q_time = q->q_time;
	qp->heap_pos = q->heap_pos;
	qp->sched_time = q->sched_time;
	qp->S = q->S;
	qp->F = q->F;
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
          struct dn_flow_queue * q = (struct dn_flow_queue *) malloc(_len_q0*sizeof(struct dn_flow_queue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0].F = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].S = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].sched_time = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].heap_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].q_time = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].random = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].avg = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].hash_slot = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].drops = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].tot_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].tot_pkts = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].numbytes = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].len_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_qp0 = 1;
          struct dn_flow_queue_64 * qp = (struct dn_flow_queue_64 *) malloc(_len_qp0*sizeof(struct dn_flow_queue_64));
          for(int _i0 = 0; _i0 < _len_qp0; _i0++) {
            qp[_i0].F = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].S = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].sched_time = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].heap_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].q_time = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].random = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].avg = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].hash_slot = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].drops = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].tot_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].tot_pkts = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].numbytes = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].len_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cp_queue_to_64_user(q,qp);
          free(q);
          free(qp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
