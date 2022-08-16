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
struct TYPE_3__ {scalar_t__ wFormatTag; int nChannels; int wBitsPerSample; int nSamplesPerSec; } ;
typedef  TYPE_1__ WAVEFORMATEX ;
typedef  int /*<<< orphan*/  BOOL ;

/* Variables and functions */
 int /*<<< orphan*/  False ; 
 int /*<<< orphan*/  True ; 
 scalar_t__ WAVE_FORMAT_PCM ; 

BOOL
wave_out_format_supported(WAVEFORMATEX * pwfx)
{
	if (pwfx->wFormatTag != WAVE_FORMAT_PCM)
		return False;
	if ((pwfx->nChannels != 1) && (pwfx->nChannels != 2))
		return False;
	if ((pwfx->wBitsPerSample != 8) && (pwfx->wBitsPerSample != 16))
		return False;
	/* The only common denominator between libao output drivers is a sample-rate of
	   44100, we need to upsample 22050 to it */
	if ((pwfx->nSamplesPerSec != 44100) && (pwfx->nSamplesPerSec != 22050))
		return False;

	return True;
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
          int _len_pwfx0 = 1;
          struct TYPE_3__ * pwfx = (struct TYPE_3__ *) malloc(_len_pwfx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pwfx0; _i0++) {
            pwfx[_i0].wFormatTag = ((-2 * (next_i()%2)) + 1) * next_i();
        pwfx[_i0].nChannels = ((-2 * (next_i()%2)) + 1) * next_i();
        pwfx[_i0].wBitsPerSample = ((-2 * (next_i()%2)) + 1) * next_i();
        pwfx[_i0].nSamplesPerSec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = wave_out_format_supported(pwfx);
          printf("%d\n", benchRet); 
          free(pwfx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
