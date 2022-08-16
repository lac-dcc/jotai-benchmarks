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
struct vo_vsync_info {int /*<<< orphan*/  last_queue_display_time; int /*<<< orphan*/  skipped_vsyncs; int /*<<< orphan*/  vsync_duration; } ;
struct ra_ctx {struct priv* priv; } ;
struct priv {int /*<<< orphan*/  last_queue_display_time; int /*<<< orphan*/  last_skipped_vsyncs; int /*<<< orphan*/  vsync_duration; } ;

/* Variables and functions */

__attribute__((used)) static void glx_get_vsync(struct ra_ctx *ctx, struct vo_vsync_info *info)
{
    struct priv *p = ctx->priv;
    info->vsync_duration = p->vsync_duration;
    info->skipped_vsyncs = p->last_skipped_vsyncs;
    info->last_queue_display_time = p->last_queue_display_time;
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
          struct ra_ctx * ctx = (struct ra_ctx *) malloc(_len_ctx0*sizeof(struct ra_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__priv0 = 1;
          ctx[_i0].priv = (struct priv *) malloc(_len_ctx__i0__priv0*sizeof(struct priv));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv0; _j0++) {
            ctx[_i0].priv->last_queue_display_time = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->last_skipped_vsyncs = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->vsync_duration = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_info0 = 1;
          struct vo_vsync_info * info = (struct vo_vsync_info *) malloc(_len_info0*sizeof(struct vo_vsync_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].last_queue_display_time = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].skipped_vsyncs = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].vsync_duration = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          glx_get_vsync(ctx,info);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].priv);
          }
          free(ctx);
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
