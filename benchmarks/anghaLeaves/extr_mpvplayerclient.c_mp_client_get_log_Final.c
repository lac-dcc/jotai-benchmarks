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
struct mpv_handle {struct mp_log* log; } ;
struct mp_log {int dummy; } ;

/* Variables and functions */

struct mp_log *mp_client_get_log(struct mpv_handle *ctx)
{
    return ctx->log;
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
          struct mpv_handle * ctx = (struct mpv_handle *) malloc(_len_ctx0*sizeof(struct mpv_handle));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__log0 = 1;
          ctx[_i0].log = (struct mp_log *) malloc(_len_ctx__i0__log0*sizeof(struct mp_log));
          for(int _j0 = 0; _j0 < _len_ctx__i0__log0; _j0++) {
            ctx[_i0].log->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct mp_log * benchRet = mp_client_get_log(ctx);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].log);
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
