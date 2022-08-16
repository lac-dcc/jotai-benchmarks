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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {int /*<<< orphan*/  cs8403_bits; int /*<<< orphan*/  cs8403_stream_bits; } ;
struct snd_ice1712 {TYPE_1__ spdif; } ;

/* Variables and functions */

__attribute__((used)) static void delta_open_spdif(struct snd_ice1712 *ice, struct snd_pcm_substream *substream)
{
	ice->spdif.cs8403_stream_bits = ice->spdif.cs8403_bits;
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
          int _len_ice0 = 1;
          struct snd_ice1712 * ice = (struct snd_ice1712 *) malloc(_len_ice0*sizeof(struct snd_ice1712));
          for(int _i0 = 0; _i0 < _len_ice0; _i0++) {
            ice[_i0].spdif.cs8403_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        ice[_i0].spdif.cs8403_stream_bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_substream0 = 1;
          struct snd_pcm_substream * substream = (struct snd_pcm_substream *) malloc(_len_substream0*sizeof(struct snd_pcm_substream));
          for(int _i0 = 0; _i0 < _len_substream0; _i0++) {
            substream[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          delta_open_spdif(ice,substream);
          free(ice);
          free(substream);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
