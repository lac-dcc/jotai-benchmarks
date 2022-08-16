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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct rdma_ucm_conn_param {int /*<<< orphan*/  qkey; int /*<<< orphan*/  qp_num; int /*<<< orphan*/  srq; int /*<<< orphan*/  rnr_retry_count; int /*<<< orphan*/  retry_count; int /*<<< orphan*/  flow_control; int /*<<< orphan*/  initiator_depth; int /*<<< orphan*/  responder_resources; int /*<<< orphan*/  private_data_len; int /*<<< orphan*/  private_data; } ;
struct rdma_conn_param {int /*<<< orphan*/  qkey; int /*<<< orphan*/  qp_num; int /*<<< orphan*/  srq; int /*<<< orphan*/  rnr_retry_count; int /*<<< orphan*/  retry_count; int /*<<< orphan*/  flow_control; int /*<<< orphan*/  initiator_depth; int /*<<< orphan*/  responder_resources; int /*<<< orphan*/  private_data_len; int /*<<< orphan*/  private_data; } ;
struct TYPE_4__ {scalar_t__ ss_family; } ;
struct TYPE_5__ {TYPE_1__ src_addr; } ;
struct TYPE_6__ {TYPE_2__ addr; } ;
struct rdma_cm_id {TYPE_3__ route; } ;

/* Variables and functions */
 scalar_t__ AF_IB ; 

__attribute__((used)) static void ucma_copy_conn_param(struct rdma_cm_id *id,
				 struct rdma_conn_param *dst,
				 struct rdma_ucm_conn_param *src)
{
	dst->private_data = src->private_data;
	dst->private_data_len = src->private_data_len;
	dst->responder_resources =src->responder_resources;
	dst->initiator_depth = src->initiator_depth;
	dst->flow_control = src->flow_control;
	dst->retry_count = src->retry_count;
	dst->rnr_retry_count = src->rnr_retry_count;
	dst->srq = src->srq;
	dst->qp_num = src->qp_num;
	dst->qkey = (id->route.addr.src_addr.ss_family == AF_IB) ? src->qkey : 0;
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
          int _len_id0 = 1;
          struct rdma_cm_id * id = (struct rdma_cm_id *) malloc(_len_id0*sizeof(struct rdma_cm_id));
          for(int _i0 = 0; _i0 < _len_id0; _i0++) {
            id[_i0].route.addr.src_addr.ss_family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 1;
          struct rdma_conn_param * dst = (struct rdma_conn_param *) malloc(_len_dst0*sizeof(struct rdma_conn_param));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0].qkey = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].qp_num = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].srq = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].rnr_retry_count = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].retry_count = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].flow_control = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].initiator_depth = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].responder_resources = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].private_data_len = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].private_data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 1;
          struct rdma_ucm_conn_param * src = (struct rdma_ucm_conn_param *) malloc(_len_src0*sizeof(struct rdma_ucm_conn_param));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0].qkey = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].qp_num = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].srq = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].rnr_retry_count = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].retry_count = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].flow_control = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].initiator_depth = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].responder_resources = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].private_data_len = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].private_data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ucma_copy_conn_param(id,dst,src);
          free(id);
          free(dst);
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
