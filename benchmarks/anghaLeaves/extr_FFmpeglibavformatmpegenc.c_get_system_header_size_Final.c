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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_9__ {int nb_streams; TYPE_1__** streams; TYPE_3__* priv_data; } ;
struct TYPE_8__ {scalar_t__ is_dvd; } ;
struct TYPE_7__ {int id; } ;
struct TYPE_6__ {TYPE_2__* priv_data; } ;
typedef  TYPE_2__ StreamInfo ;
typedef  TYPE_3__ MpegMuxContext ;
typedef  TYPE_4__ AVFormatContext ;

/* Variables and functions */

__attribute__((used)) static int get_system_header_size(AVFormatContext *ctx)
{
    int buf_index, i, private_stream_coded;
    StreamInfo *stream;
    MpegMuxContext *s = ctx->priv_data;

    if (s->is_dvd)
        return 18; // DVD-Video system headers are 18 bytes fixed length.

    buf_index = 12;
    private_stream_coded = 0;
    for (i = 0; i < ctx->nb_streams; i++) {
        stream = ctx->streams[i]->priv_data;
        if (stream->id < 0xc0) {
            if (private_stream_coded)
                continue;
            private_stream_coded = 1;
        }
        buf_index += 3;
    }
    return buf_index;
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
          struct TYPE_9__ * ctx = (struct TYPE_9__ *) malloc(_len_ctx0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].nb_streams = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__streams0 = 1;
          ctx[_i0].streams = (struct TYPE_6__ **) malloc(_len_ctx__i0__streams0*sizeof(struct TYPE_6__ *));
          for(int _j0 = 0; _j0 < _len_ctx__i0__streams0; _j0++) {
            int _len_ctx__i0__streams1 = 1;
            ctx[_i0].streams[_j0] = (struct TYPE_6__ *) malloc(_len_ctx__i0__streams1*sizeof(struct TYPE_6__));
            for(int _j1 = 0; _j1 < _len_ctx__i0__streams1; _j1++) {
                int _len_ctx__i0__streams__j0__priv_data0 = 1;
          ctx[_i0].streams[_j0]->priv_data = (struct TYPE_7__ *) malloc(_len_ctx__i0__streams__j0__priv_data0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__streams__j0__priv_data0; _j0++) {
            ctx[_i0].streams[_j0]->priv_data->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          int _len_ctx__i0__priv_data0 = 1;
          ctx[_i0].priv_data = (struct TYPE_8__ *) malloc(_len_ctx__i0__priv_data0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv_data0; _j0++) {
            ctx[_i0].priv_data->is_dvd = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = get_system_header_size(ctx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(*(ctx[_aux].streams));
        free(ctx[_aux].streams);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].priv_data);
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
