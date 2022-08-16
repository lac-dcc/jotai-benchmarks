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
struct snd_soc_dai_driver {int symmetric_rates; int symmetric_channels; int symmetric_samplebits; } ;

/* Variables and functions */
 unsigned int SND_SOC_TPLG_DAI_FLGBIT_SYMMETRIC_CHANNELS ; 
 unsigned int SND_SOC_TPLG_DAI_FLGBIT_SYMMETRIC_RATES ; 
 unsigned int SND_SOC_TPLG_DAI_FLGBIT_SYMMETRIC_SAMPLEBITS ; 

__attribute__((used)) static void set_dai_flags(struct snd_soc_dai_driver *dai_drv,
			  unsigned int flag_mask, unsigned int flags)
{
	if (flag_mask & SND_SOC_TPLG_DAI_FLGBIT_SYMMETRIC_RATES)
		dai_drv->symmetric_rates =
			flags & SND_SOC_TPLG_DAI_FLGBIT_SYMMETRIC_RATES ? 1 : 0;

	if (flag_mask & SND_SOC_TPLG_DAI_FLGBIT_SYMMETRIC_CHANNELS)
		dai_drv->symmetric_channels =
			flags & SND_SOC_TPLG_DAI_FLGBIT_SYMMETRIC_CHANNELS ?
			1 : 0;

	if (flag_mask & SND_SOC_TPLG_DAI_FLGBIT_SYMMETRIC_SAMPLEBITS)
		dai_drv->symmetric_samplebits =
			flags & SND_SOC_TPLG_DAI_FLGBIT_SYMMETRIC_SAMPLEBITS ?
			1 : 0;
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
          unsigned int flag_mask = 100;
          unsigned int flags = 100;
          int _len_dai_drv0 = 1;
          struct snd_soc_dai_driver * dai_drv = (struct snd_soc_dai_driver *) malloc(_len_dai_drv0*sizeof(struct snd_soc_dai_driver));
          for(int _i0 = 0; _i0 < _len_dai_drv0; _i0++) {
            dai_drv[_i0].symmetric_rates = ((-2 * (next_i()%2)) + 1) * next_i();
        dai_drv[_i0].symmetric_channels = ((-2 * (next_i()%2)) + 1) * next_i();
        dai_drv[_i0].symmetric_samplebits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_dai_flags(dai_drv,flag_mask,flags);
          free(dai_drv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
