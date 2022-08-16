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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u32 ;
struct TYPE_7__ {int /*<<< orphan*/  cur_sz; } ;
struct TYPE_8__ {TYPE_3__ wq; } ;
struct TYPE_5__ {int /*<<< orphan*/  cur_sz; } ;
struct TYPE_6__ {TYPE_1__ wq; } ;
struct mlx5e_rq {int wq_type; TYPE_4__ wqe; TYPE_2__ mpwqe; } ;

/* Variables and functions */
#define  MLX5_WQ_TYPE_LINKED_LIST_STRIDING_RQ 128 

__attribute__((used)) static u32 mlx5e_rqwq_get_cur_sz(struct mlx5e_rq *rq)
{
	switch (rq->wq_type) {
	case MLX5_WQ_TYPE_LINKED_LIST_STRIDING_RQ:
		return rq->mpwqe.wq.cur_sz;
	default:
		return rq->wqe.wq.cur_sz;
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
          int _len_rq0 = 1;
          struct mlx5e_rq * rq = (struct mlx5e_rq *) malloc(_len_rq0*sizeof(struct mlx5e_rq));
          for(int _i0 = 0; _i0 < _len_rq0; _i0++) {
            rq[_i0].wq_type = ((-2 * (next_i()%2)) + 1) * next_i();
        rq[_i0].wqe.wq.cur_sz = ((-2 * (next_i()%2)) + 1) * next_i();
        rq[_i0].mpwqe.wq.cur_sz = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mlx5e_rqwq_get_cur_sz(rq);
          printf("%d\n", benchRet); 
          free(rq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
