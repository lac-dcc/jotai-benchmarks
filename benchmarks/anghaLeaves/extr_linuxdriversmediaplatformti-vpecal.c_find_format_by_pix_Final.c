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
       0            empty\n\
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
typedef  scalar_t__ u32 ;
struct cal_fmt {scalar_t__ fourcc; } ;
struct cal_ctx {unsigned int num_active_fmt; struct cal_fmt** active_fmt; } ;

/* Variables and functions */

__attribute__((used)) static const struct cal_fmt *find_format_by_pix(struct cal_ctx *ctx,
						u32 pixelformat)
{
	const struct cal_fmt *fmt;
	unsigned int k;

	for (k = 0; k < ctx->num_active_fmt; k++) {
		fmt = ctx->active_fmt[k];
		if (fmt->fourcc == pixelformat)
			return fmt;
	}

	return NULL;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // empty
    case 0:
    {
          long pixelformat = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_ctx0 = 1;
          struct cal_ctx * ctx = (struct cal_ctx *) malloc(_len_ctx0*sizeof(struct cal_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              ctx[_i0].num_active_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__active_fmt0 = 1;
          ctx[_i0].active_fmt = (struct cal_fmt **) malloc(_len_ctx__i0__active_fmt0*sizeof(struct cal_fmt *));
          for(int _j0 = 0; _j0 < _len_ctx__i0__active_fmt0; _j0++) {
            int _len_ctx__i0__active_fmt1 = 1;
            ctx[_i0].active_fmt[_j0] = (struct cal_fmt *) malloc(_len_ctx__i0__active_fmt1*sizeof(struct cal_fmt));
            for(int _j1 = 0; _j1 < _len_ctx__i0__active_fmt1; _j1++) {
                ctx[_i0].active_fmt[_j0]->fourcc = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          }
        
          const struct cal_fmt * benchRet = find_format_by_pix(ctx,pixelformat);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(*(ctx[_aux].active_fmt));
        free(ctx[_aux].active_fmt);
          }
          free(ctx);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
