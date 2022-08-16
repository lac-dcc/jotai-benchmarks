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
struct soc_tplg {int dummy; } ;
struct snd_soc_tplg_channel {int id; int shift; } ;

/* Variables and functions */
 int EINVAL ; 
 int SND_SOC_TPLG_MAX_CHAN ; 

__attribute__((used)) static int tplc_chan_get_shift(struct soc_tplg *tplg,
	struct snd_soc_tplg_channel *chan, int map)
{
	int i;

	for (i = 0; i < SND_SOC_TPLG_MAX_CHAN; i++) {
		if (chan[i].id == map)
			return chan[i].shift;
	}

	return -EINVAL;
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
          int map = 100;
          int _len_tplg0 = 1;
          struct soc_tplg * tplg = (struct soc_tplg *) malloc(_len_tplg0*sizeof(struct soc_tplg));
          for(int _i0 = 0; _i0 < _len_tplg0; _i0++) {
            tplg[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chan0 = 1;
          struct snd_soc_tplg_channel * chan = (struct snd_soc_tplg_channel *) malloc(_len_chan0*sizeof(struct snd_soc_tplg_channel));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
            chan[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].shift = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tplc_chan_get_shift(tplg,chan,map);
          printf("%d\n", benchRet); 
          free(tplg);
          free(chan);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
