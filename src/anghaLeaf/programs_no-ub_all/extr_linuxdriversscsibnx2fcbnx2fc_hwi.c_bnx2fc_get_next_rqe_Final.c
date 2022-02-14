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
       0            big-arr\n\
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
typedef  int u8 ;
struct bnx2fc_rport {int rq_cons_idx; scalar_t__ rq; } ;

/* Variables and functions */
 int BNX2FC_RQ_BUF_SZ ; 
 int BNX2FC_RQ_WQES_MAX ; 

char *bnx2fc_get_next_rqe(struct bnx2fc_rport *tgt, u8 num_items)
{
	char *buf = (char *)tgt->rq + (tgt->rq_cons_idx * BNX2FC_RQ_BUF_SZ);

	if (tgt->rq_cons_idx + num_items > BNX2FC_RQ_WQES_MAX)
		return NULL;

	tgt->rq_cons_idx += num_items;

	if (tgt->rq_cons_idx >= BNX2FC_RQ_WQES_MAX)
		tgt->rq_cons_idx -= BNX2FC_RQ_WQES_MAX;

	return buf;
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

    // big-arr
    case 0:
    {
          int num_items = 255;
          int _len_tgt0 = 1;
          struct bnx2fc_rport * tgt = (struct bnx2fc_rport *) malloc(_len_tgt0*sizeof(struct bnx2fc_rport));
          for(int _i0 = 0; _i0 < _len_tgt0; _i0++) {
            tgt->rq_cons_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        tgt->rq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = bnx2fc_get_next_rqe(tgt,num_items);
          printf("{{other_type}} %p\n", &benchRet); 
          free(tgt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
