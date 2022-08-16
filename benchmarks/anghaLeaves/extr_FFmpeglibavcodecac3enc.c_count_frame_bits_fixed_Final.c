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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int num_blocks; int fbw_channels; int num_blks_code; size_t channel_mode; int frame_bits_fixed; scalar_t__ eac3; scalar_t__ lfe_on; scalar_t__ use_frame_exp_strategy; } ;
typedef  TYPE_1__ AC3EncodeContext ;

/* Variables and functions */

__attribute__((used)) static void count_frame_bits_fixed(AC3EncodeContext *s)
{
    static const int frame_bits_inc[8] = { 0, 0, 2, 2, 2, 4, 2, 4 };
    int blk;
    int frame_bits;

    /* assumptions:
     *   no dynamic range codes
     *   bit allocation parameters do not change between blocks
     *   no delta bit allocation
     *   no skipped data
     *   no auxiliary data
     *   no E-AC-3 metadata
     */

    /* header */
    frame_bits = 16; /* sync info */
    if (s->eac3) {
        /* bitstream info header */
        frame_bits += 35;
        frame_bits += 1 + 1;
        if (s->num_blocks != 0x6)
            frame_bits++;
        frame_bits++;
        /* audio frame header */
        if (s->num_blocks == 6)
            frame_bits += 2;
        frame_bits += 10;
        /* exponent strategy */
        if (s->use_frame_exp_strategy)
            frame_bits += 5 * s->fbw_channels;
        else
            frame_bits += s->num_blocks * 2 * s->fbw_channels;
        if (s->lfe_on)
            frame_bits += s->num_blocks;
        /* converter exponent strategy */
        if (s->num_blks_code != 0x3)
            frame_bits++;
        else
            frame_bits += s->fbw_channels * 5;
        /* snr offsets */
        frame_bits += 10;
        /* block start info */
        if (s->num_blocks != 1)
            frame_bits++;
    } else {
        frame_bits += 49;
        frame_bits += frame_bits_inc[s->channel_mode];
    }

    /* audio blocks */
    for (blk = 0; blk < s->num_blocks; blk++) {
        if (!s->eac3) {
            /* block switch flags */
            frame_bits += s->fbw_channels;

            /* dither flags */
            frame_bits += s->fbw_channels;
        }

        /* dynamic range */
        frame_bits++;

        /* spectral extension */
        if (s->eac3)
            frame_bits++;

        if (!s->eac3) {
            /* exponent strategy */
            frame_bits += 2 * s->fbw_channels;
            if (s->lfe_on)
                frame_bits++;

            /* bit allocation params */
            frame_bits++;
            if (!blk)
                frame_bits += 2 + 2 + 2 + 2 + 3;
        }

        /* converter snr offset */
        if (s->eac3)
            frame_bits++;

        if (!s->eac3) {
            /* delta bit allocation */
            frame_bits++;

            /* skipped data */
            frame_bits++;
        }
    }

    /* auxiliary data */
    frame_bits++;

    /* CRC */
    frame_bits += 1 + 16;

    s->frame_bits_fixed = frame_bits;
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
          int _len_s0 = 1;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].num_blocks = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].fbw_channels = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].num_blks_code = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].channel_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].frame_bits_fixed = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].eac3 = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].lfe_on = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].use_frame_exp_strategy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          count_frame_bits_fixed(s);
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
