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
struct TYPE_3__ {int wFormatTag; int nChannels; int wBitsPerSample; int nSamplesPerSec; int nBlockAlign; int nAvgBytesPerSec; scalar_t__ cbSize; } ;
typedef  TYPE_1__ WAVEFORMATEX ;

/* Variables and functions */

void init_format(WAVEFORMATEX* wfx, int format, int rate, int depth,
                 int channels)
{
    wfx->wFormatTag=format;
    wfx->nChannels=channels;
    wfx->wBitsPerSample=depth;
    wfx->nSamplesPerSec=rate;
    wfx->nBlockAlign=wfx->nChannels*wfx->wBitsPerSample/8;
    /* FIXME: Shouldn't this test be if (format!=WAVE_FORMAT_PCM) */
    if (wfx->nBlockAlign==0)
    {
        /* align compressed formats to byte boundary */
        wfx->nBlockAlign=1;
    }
    wfx->nAvgBytesPerSec=wfx->nSamplesPerSec*wfx->nBlockAlign;
    wfx->cbSize=0;
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
          int format = 100;
          int rate = 100;
          int depth = 100;
          int channels = 100;
          int _len_wfx0 = 1;
          struct TYPE_3__ * wfx = (struct TYPE_3__ *) malloc(_len_wfx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_wfx0; _i0++) {
            wfx[_i0].wFormatTag = ((-2 * (next_i()%2)) + 1) * next_i();
        wfx[_i0].nChannels = ((-2 * (next_i()%2)) + 1) * next_i();
        wfx[_i0].wBitsPerSample = ((-2 * (next_i()%2)) + 1) * next_i();
        wfx[_i0].nSamplesPerSec = ((-2 * (next_i()%2)) + 1) * next_i();
        wfx[_i0].nBlockAlign = ((-2 * (next_i()%2)) + 1) * next_i();
        wfx[_i0].nAvgBytesPerSec = ((-2 * (next_i()%2)) + 1) * next_i();
        wfx[_i0].cbSize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_format(wfx,format,rate,depth,channels);
          free(wfx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
