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
struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct nfs4_layoutget_res {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int decode_layoutget(struct xdr_stream *xdr, struct rpc_rqst *req,
			    struct nfs4_layoutget_res *res)
{
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
          int _len_xdr0 = 1;
          struct xdr_stream * xdr = (struct xdr_stream *) malloc(_len_xdr0*sizeof(struct xdr_stream));
          for(int _i0 = 0; _i0 < _len_xdr0; _i0++) {
            xdr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_req0 = 1;
          struct rpc_rqst * req = (struct rpc_rqst *) malloc(_len_req0*sizeof(struct rpc_rqst));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_res0 = 1;
          struct nfs4_layoutget_res * res = (struct nfs4_layoutget_res *) malloc(_len_res0*sizeof(struct nfs4_layoutget_res));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
            res[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = decode_layoutget(xdr,req,res);
          printf("%d\n", benchRet); 
          free(xdr);
          free(req);
          free(res);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
