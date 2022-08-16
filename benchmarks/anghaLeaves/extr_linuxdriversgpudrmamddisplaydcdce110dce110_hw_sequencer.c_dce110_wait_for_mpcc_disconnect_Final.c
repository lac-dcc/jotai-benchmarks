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
struct resource_pool {int dummy; } ;
struct pipe_ctx {int dummy; } ;
struct dc {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void dce110_wait_for_mpcc_disconnect(
		struct dc *dc,
		struct resource_pool *res_pool,
		struct pipe_ctx *pipe_ctx)
{
	/* do nothing*/
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
          int _len_dc0 = 1;
          struct dc * dc = (struct dc *) malloc(_len_dc0*sizeof(struct dc));
          for(int _i0 = 0; _i0 < _len_dc0; _i0++) {
            dc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_res_pool0 = 1;
          struct resource_pool * res_pool = (struct resource_pool *) malloc(_len_res_pool0*sizeof(struct resource_pool));
          for(int _i0 = 0; _i0 < _len_res_pool0; _i0++) {
            res_pool[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pipe_ctx0 = 1;
          struct pipe_ctx * pipe_ctx = (struct pipe_ctx *) malloc(_len_pipe_ctx0*sizeof(struct pipe_ctx));
          for(int _i0 = 0; _i0 < _len_pipe_ctx0; _i0++) {
            pipe_ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dce110_wait_for_mpcc_disconnect(dc,res_pool,pipe_ctx);
          free(dc);
          free(res_pool);
          free(pipe_ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
