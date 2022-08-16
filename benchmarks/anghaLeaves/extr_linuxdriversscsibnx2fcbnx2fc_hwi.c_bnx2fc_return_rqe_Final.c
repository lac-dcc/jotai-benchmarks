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
typedef  int u8 ;
typedef  int u32 ;
struct bnx2fc_rport {int rq_prod_idx; TYPE_1__* conn_db; } ;
struct TYPE_2__ {int rq_prod; } ;

/* Variables and functions */
 int BNX2FC_RQ_WQES_MAX ; 

void bnx2fc_return_rqe(struct bnx2fc_rport *tgt, u8 num_items)
{
	/* return the rq buffer */
	u32 next_prod_idx = tgt->rq_prod_idx + num_items;
	if ((next_prod_idx & 0x7fff) == BNX2FC_RQ_WQES_MAX) {
		/* Wrap around RQ */
		next_prod_idx += 0x8000 - BNX2FC_RQ_WQES_MAX;
	}
	tgt->rq_prod_idx = next_prod_idx;
	tgt->conn_db->rq_prod = tgt->rq_prod_idx;
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
          int num_items = 100;
          int _len_tgt0 = 1;
          struct bnx2fc_rport * tgt = (struct bnx2fc_rport *) malloc(_len_tgt0*sizeof(struct bnx2fc_rport));
          for(int _i0 = 0; _i0 < _len_tgt0; _i0++) {
            tgt[_i0].rq_prod_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tgt__i0__conn_db0 = 1;
          tgt[_i0].conn_db = (struct TYPE_2__ *) malloc(_len_tgt__i0__conn_db0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_tgt__i0__conn_db0; _j0++) {
            tgt[_i0].conn_db->rq_prod = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          bnx2fc_return_rqe(tgt,num_items);
          for(int _aux = 0; _aux < _len_tgt0; _aux++) {
          free(tgt[_aux].conn_db);
          }
          free(tgt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
