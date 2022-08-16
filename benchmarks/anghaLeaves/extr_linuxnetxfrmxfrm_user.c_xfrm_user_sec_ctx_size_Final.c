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
struct xfrm_user_sec_ctx {int dummy; } ;
struct xfrm_sec_ctx {scalar_t__ ctx_len; } ;

/* Variables and functions */

__attribute__((used)) static inline unsigned int xfrm_user_sec_ctx_size(struct xfrm_sec_ctx *xfrm_ctx)
{
	unsigned int len = 0;

	if (xfrm_ctx) {
		len += sizeof(struct xfrm_user_sec_ctx);
		len += xfrm_ctx->ctx_len;
	}
	return len;
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
          int _len_xfrm_ctx0 = 1;
          struct xfrm_sec_ctx * xfrm_ctx = (struct xfrm_sec_ctx *) malloc(_len_xfrm_ctx0*sizeof(struct xfrm_sec_ctx));
          for(int _i0 = 0; _i0 < _len_xfrm_ctx0; _i0++) {
            xfrm_ctx[_i0].ctx_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = xfrm_user_sec_ctx_size(xfrm_ctx);
          printf("%u\n", benchRet); 
          free(xfrm_ctx);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_xfrm_ctx0 = 100;
          struct xfrm_sec_ctx * xfrm_ctx = (struct xfrm_sec_ctx *) malloc(_len_xfrm_ctx0*sizeof(struct xfrm_sec_ctx));
          for(int _i0 = 0; _i0 < _len_xfrm_ctx0; _i0++) {
            xfrm_ctx[_i0].ctx_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = xfrm_user_sec_ctx_size(xfrm_ctx);
          printf("%u\n", benchRet); 
          free(xfrm_ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
