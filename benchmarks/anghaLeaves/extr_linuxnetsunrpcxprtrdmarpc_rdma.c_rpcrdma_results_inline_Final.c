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
struct rpcrdma_ia {scalar_t__ ri_max_inline_read; } ;
struct rpcrdma_xprt {struct rpcrdma_ia rx_ia; } ;
struct TYPE_2__ {scalar_t__ buflen; } ;
struct rpc_rqst {TYPE_1__ rq_rcv_buf; } ;

/* Variables and functions */

__attribute__((used)) static bool rpcrdma_results_inline(struct rpcrdma_xprt *r_xprt,
				   struct rpc_rqst *rqst)
{
	struct rpcrdma_ia *ia = &r_xprt->rx_ia;

	return rqst->rq_rcv_buf.buflen <= ia->ri_max_inline_read;
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
          int _len_r_xprt0 = 1;
          struct rpcrdma_xprt * r_xprt = (struct rpcrdma_xprt *) malloc(_len_r_xprt0*sizeof(struct rpcrdma_xprt));
          for(int _i0 = 0; _i0 < _len_r_xprt0; _i0++) {
            r_xprt[_i0].rx_ia.ri_max_inline_read = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rqst0 = 1;
          struct rpc_rqst * rqst = (struct rpc_rqst *) malloc(_len_rqst0*sizeof(struct rpc_rqst));
          for(int _i0 = 0; _i0 < _len_rqst0; _i0++) {
            rqst[_i0].rq_rcv_buf.buflen = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rpcrdma_results_inline(r_xprt,rqst);
          printf("%d\n", benchRet); 
          free(r_xprt);
          free(rqst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
