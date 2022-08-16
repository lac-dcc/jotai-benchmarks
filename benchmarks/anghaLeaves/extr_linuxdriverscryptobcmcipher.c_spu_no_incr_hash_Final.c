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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct spu_hw {scalar_t__ spu_type; } ;
struct TYPE_3__ {scalar_t__ alg; scalar_t__ mode; } ;
struct iproc_ctx_s {TYPE_1__ auth; } ;
struct TYPE_4__ {struct spu_hw spu; } ;

/* Variables and functions */
 scalar_t__ HASH_ALG_AES ; 
 scalar_t__ HASH_MODE_XCBC ; 
 scalar_t__ SPU_TYPE_SPU2 ; 
 TYPE_2__ iproc_priv ; 

bool spu_no_incr_hash(struct iproc_ctx_s *ctx)
{
	struct spu_hw *spu = &iproc_priv.spu;

	if (spu->spu_type == SPU_TYPE_SPU2)
		return true;

	if ((ctx->auth.alg == HASH_ALG_AES) &&
	    (ctx->auth.mode == HASH_MODE_XCBC))
		return true;

	/* Otherwise, incremental hashing is supported */
	return false;
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
          struct iproc_ctx_s * ctx = (struct iproc_ctx_s *) malloc(_len_ctx0*sizeof(struct iproc_ctx_s));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].auth.alg = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].auth.mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = spu_no_incr_hash(ctx);
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
