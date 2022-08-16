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
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
typedef  int uint64_t ;
struct TYPE_8__ {int nb_inputs; TYPE_2__** inputs; } ;
struct TYPE_7__ {int channel_layout; } ;
struct TYPE_6__ {int out_channel; int input; int in_channel; } ;
typedef  TYPE_1__ ChannelMap ;
typedef  TYPE_2__ AVFilterLink ;
typedef  TYPE_3__ AVFilterContext ;

/* Variables and functions */

__attribute__((used)) static void guess_map_matching(AVFilterContext *ctx, ChannelMap *ch,
                               uint64_t *inputs)
{
    int i;

    for (i = 0; i < ctx->nb_inputs; i++) {
        AVFilterLink *link = ctx->inputs[i];

        if (ch->out_channel & link->channel_layout &&
            !(ch->out_channel & inputs[i])) {
            ch->input      = i;
            ch->in_channel = ch->out_channel;
            inputs[i]     |= ch->out_channel;
            return;
        }
    }
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
          struct TYPE_8__ * ctx = (struct TYPE_8__ *) malloc(_len_ctx0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].nb_inputs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__inputs0 = 1;
          ctx[_i0].inputs = (struct TYPE_7__ **) malloc(_len_ctx__i0__inputs0*sizeof(struct TYPE_7__ *));
          for(int _j0 = 0; _j0 < _len_ctx__i0__inputs0; _j0++) {
            int _len_ctx__i0__inputs1 = 1;
            ctx[_i0].inputs[_j0] = (struct TYPE_7__ *) malloc(_len_ctx__i0__inputs1*sizeof(struct TYPE_7__));
            for(int _j1 = 0; _j1 < _len_ctx__i0__inputs1; _j1++) {
              ctx[_i0].inputs[_j0]->channel_layout = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_ch0 = 1;
          struct TYPE_6__ * ch = (struct TYPE_6__ *) malloc(_len_ch0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_ch0; _i0++) {
            ch[_i0].out_channel = ((-2 * (next_i()%2)) + 1) * next_i();
        ch[_i0].input = ((-2 * (next_i()%2)) + 1) * next_i();
        ch[_i0].in_channel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_inputs0 = 1;
          int * inputs = (int *) malloc(_len_inputs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_inputs0; _i0++) {
            inputs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          guess_map_matching(ctx,ch,inputs);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(*(ctx[_aux].inputs));
        free(ctx[_aux].inputs);
          }
          free(ctx);
          free(ch);
          free(inputs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
