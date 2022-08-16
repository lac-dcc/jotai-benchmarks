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
struct rds_info_rdma_connection {int /*<<< orphan*/  rdma_mr_size; int /*<<< orphan*/  rdma_mr_max; } ;
struct TYPE_2__ {int /*<<< orphan*/  max_pages; } ;
struct rds_ib_mr_pool {TYPE_1__ fmr_attr; int /*<<< orphan*/  max_items; } ;
struct rds_ib_device {struct rds_ib_mr_pool* mr_1m_pool; } ;

/* Variables and functions */

void rds_ib_get_mr_info(struct rds_ib_device *rds_ibdev, struct rds_info_rdma_connection *iinfo)
{
	struct rds_ib_mr_pool *pool_1m = rds_ibdev->mr_1m_pool;

	iinfo->rdma_mr_max = pool_1m->max_items;
	iinfo->rdma_mr_size = pool_1m->fmr_attr.max_pages;
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
          int _len_rds_ibdev0 = 1;
          struct rds_ib_device * rds_ibdev = (struct rds_ib_device *) malloc(_len_rds_ibdev0*sizeof(struct rds_ib_device));
          for(int _i0 = 0; _i0 < _len_rds_ibdev0; _i0++) {
              int _len_rds_ibdev__i0__mr_1m_pool0 = 1;
          rds_ibdev[_i0].mr_1m_pool = (struct rds_ib_mr_pool *) malloc(_len_rds_ibdev__i0__mr_1m_pool0*sizeof(struct rds_ib_mr_pool));
          for(int _j0 = 0; _j0 < _len_rds_ibdev__i0__mr_1m_pool0; _j0++) {
            rds_ibdev[_i0].mr_1m_pool->fmr_attr.max_pages = ((-2 * (next_i()%2)) + 1) * next_i();
        rds_ibdev[_i0].mr_1m_pool->max_items = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_iinfo0 = 1;
          struct rds_info_rdma_connection * iinfo = (struct rds_info_rdma_connection *) malloc(_len_iinfo0*sizeof(struct rds_info_rdma_connection));
          for(int _i0 = 0; _i0 < _len_iinfo0; _i0++) {
            iinfo[_i0].rdma_mr_size = ((-2 * (next_i()%2)) + 1) * next_i();
        iinfo[_i0].rdma_mr_max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rds_ib_get_mr_info(rds_ibdev,iinfo);
          for(int _aux = 0; _aux < _len_rds_ibdev0; _aux++) {
          free(rds_ibdev[_aux].mr_1m_pool);
          }
          free(rds_ibdev);
          free(iinfo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
