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
struct omap_sham_reqctx {int flags; } ;

/* Variables and functions */
 int FLAGS_MODE_MASK ; 
#define  FLAGS_MODE_MD5 133 
#define  FLAGS_MODE_SHA1 132 
#define  FLAGS_MODE_SHA224 131 
#define  FLAGS_MODE_SHA256 130 
#define  FLAGS_MODE_SHA384 129 
#define  FLAGS_MODE_SHA512 128 
 int SHA1_BLOCK_SIZE ; 
 int SHA256_BLOCK_SIZE ; 
 int SHA512_BLOCK_SIZE ; 

__attribute__((used)) static int get_block_size(struct omap_sham_reqctx *ctx)
{
	int d;

	switch (ctx->flags & FLAGS_MODE_MASK) {
	case FLAGS_MODE_MD5:
	case FLAGS_MODE_SHA1:
		d = SHA1_BLOCK_SIZE;
		break;
	case FLAGS_MODE_SHA224:
	case FLAGS_MODE_SHA256:
		d = SHA256_BLOCK_SIZE;
		break;
	case FLAGS_MODE_SHA384:
	case FLAGS_MODE_SHA512:
		d = SHA512_BLOCK_SIZE;
		break;
	default:
		d = 0;
	}

	return d;
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
          int _len_ctx0 = 1;
          struct omap_sham_reqctx * ctx = (struct omap_sham_reqctx *) malloc(_len_ctx0*sizeof(struct omap_sham_reqctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_block_size(ctx);
          printf("%d\n", benchRet); 
          free(ctx);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_ctx0 = 100;
          struct omap_sham_reqctx * ctx = (struct omap_sham_reqctx *) malloc(_len_ctx0*sizeof(struct omap_sham_reqctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_block_size(ctx);
          printf("%d\n", benchRet); 
          free(ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
