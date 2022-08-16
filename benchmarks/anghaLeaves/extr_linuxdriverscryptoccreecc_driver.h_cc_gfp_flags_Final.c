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
       1            big-arr-10x\n\
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
struct crypto_async_request {int flags; } ;
typedef  int /*<<< orphan*/  gfp_t ;

/* Variables and functions */
 int CRYPTO_TFM_REQ_MAY_SLEEP ; 
 int /*<<< orphan*/  GFP_ATOMIC ; 
 int /*<<< orphan*/  GFP_KERNEL ; 

__attribute__((used)) static inline gfp_t cc_gfp_flags(struct crypto_async_request *req)
{
	return (req->flags & CRYPTO_TFM_REQ_MAY_SLEEP) ?
			GFP_KERNEL : GFP_ATOMIC;
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
          int _len_req0 = 1;
          struct crypto_async_request * req = (struct crypto_async_request *) malloc(_len_req0*sizeof(struct crypto_async_request));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cc_gfp_flags(req);
          printf("%d\n", benchRet); 
          free(req);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_req0 = 100;
          struct crypto_async_request * req = (struct crypto_async_request *) malloc(_len_req0*sizeof(struct crypto_async_request));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cc_gfp_flags(req);
          printf("%d\n", benchRet); 
          free(req);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
