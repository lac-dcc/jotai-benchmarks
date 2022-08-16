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
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {scalar_t__ nChannels; scalar_t__ rate; scalar_t__ nBits; } ;
struct TYPE_6__ {int wFormatTag; scalar_t__ nChannels; scalar_t__ nSamplesPerSec; scalar_t__ wBitsPerSample; } ;
typedef  TYPE_1__* LPWAVEFORMATEX ;
typedef  TYPE_2__ Format ;
typedef  int DWORD ;

/* Variables and functions */
 TYPE_2__* MPEG3_Formats ; 
 int NUM_MPEG3_FORMATS ; 
 int NUM_PCM_FORMATS ; 
 TYPE_2__* PCM_Formats ; 
#define  WAVE_FORMAT_MPEG 130 
#define  WAVE_FORMAT_MPEGLAYER3 129 
#define  WAVE_FORMAT_PCM 128 

__attribute__((used)) static	DWORD	MPEG3_GetFormatIndex(LPWAVEFORMATEX wfx)
{
    int 	i, hi;
    const Format *fmts;

    switch (wfx->wFormatTag)
    {
    case WAVE_FORMAT_PCM:
	hi = NUM_PCM_FORMATS;
	fmts = PCM_Formats;
	break;
    case WAVE_FORMAT_MPEG:
    case WAVE_FORMAT_MPEGLAYER3:
	hi = NUM_MPEG3_FORMATS;
	fmts = MPEG3_Formats;
	break;
    default:
	return 0xFFFFFFFF;
    }

    for (i = 0; i < hi; i++)
    {
	if (wfx->nChannels == fmts[i].nChannels &&
	    wfx->nSamplesPerSec == fmts[i].rate &&
	    (wfx->wBitsPerSample == fmts[i].nBits || !fmts[i].nBits))
	    return i;
    }

    return 0xFFFFFFFF;
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
          int _len_wfx0 = 1;
          struct TYPE_6__ * wfx = (struct TYPE_6__ *) malloc(_len_wfx0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_wfx0; _i0++) {
            wfx[_i0].wFormatTag = ((-2 * (next_i()%2)) + 1) * next_i();
        wfx[_i0].nChannels = ((-2 * (next_i()%2)) + 1) * next_i();
        wfx[_i0].nSamplesPerSec = ((-2 * (next_i()%2)) + 1) * next_i();
        wfx[_i0].wBitsPerSample = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = MPEG3_GetFormatIndex(wfx);
          printf("%d\n", benchRet); 
          free(wfx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
