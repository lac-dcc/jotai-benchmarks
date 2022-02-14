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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int uint8_t ;
struct TYPE_3__ {int request_channel_layout; int channel_layout; int channels; } ;
typedef  TYPE_1__ AVCodecContext ;

/* Variables and functions */
 int AV_CH_LAYOUT_NATIVE ; 
 int DCA_SPEAKER_COUNT ; 
 int DCA_SPEAKER_LAYOUT_7POINT0_WIDE ; 
 int DCA_SPEAKER_LAYOUT_7POINT1_WIDE ; 

int ff_dca_set_channel_layout(AVCodecContext *avctx, int *ch_remap, int dca_mask)
{
    static const uint8_t dca2wav_norm[28] = {
         2,  0, 1, 9, 10,  3,  8,  4,  5,  9, 10, 6, 7, 12,
        13, 14, 3, 6,  7, 11, 12, 14, 16, 15, 17, 8, 4,  5,
    };

    static const uint8_t dca2wav_wide[28] = {
         2,  0, 1, 4,  5,  3,  8,  4,  5,  9, 10, 6, 7, 12,
        13, 14, 3, 9, 10, 11, 12, 14, 16, 15, 17, 8, 4,  5,
    };

    int dca_ch, wav_ch, nchannels = 0;

    if (avctx->request_channel_layout & AV_CH_LAYOUT_NATIVE) {
        for (dca_ch = 0; dca_ch < DCA_SPEAKER_COUNT; dca_ch++)
            if (dca_mask & (1U << dca_ch))
                ch_remap[nchannels++] = dca_ch;
        avctx->channel_layout = dca_mask;
    } else {
        int wav_mask = 0;
        int wav_map[18];
        const uint8_t *dca2wav;
        if (dca_mask == DCA_SPEAKER_LAYOUT_7POINT0_WIDE ||
            dca_mask == DCA_SPEAKER_LAYOUT_7POINT1_WIDE)
            dca2wav = dca2wav_wide;
        else
            dca2wav = dca2wav_norm;
        for (dca_ch = 0; dca_ch < 28; dca_ch++) {
            if (dca_mask & (1 << dca_ch)) {
                wav_ch = dca2wav[dca_ch];
                if (!(wav_mask & (1 << wav_ch))) {
                    wav_map[wav_ch] = dca_ch;
                    wav_mask |= 1 << wav_ch;
                }
            }
        }
        for (wav_ch = 0; wav_ch < 18; wav_ch++)
            if (wav_mask & (1 << wav_ch))
                ch_remap[nchannels++] = wav_map[wav_ch];
        avctx->channel_layout = wav_mask;
    }

    avctx->channels = nchannels;
    return nchannels;
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

    // big-arr
    case 0:
    {
          int dca_mask = 255;
          int _len_avctx0 = 1;
          struct TYPE_3__ * avctx = (struct TYPE_3__ *) malloc(_len_avctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_avctx0; _i0++) {
            avctx->request_channel_layout = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx->channel_layout = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx->channels = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ch_remap0 = 65025;
          int * ch_remap = (int *) malloc(_len_ch_remap0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ch_remap0; _i0++) {
            ch_remap[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ff_dca_set_channel_layout(avctx,ch_remap,dca_mask);
          printf("%d\n", benchRet); 
          free(avctx);
          free(ch_remap);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
