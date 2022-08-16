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
struct ac97_pcm {scalar_t__ stream; TYPE_1__* r; scalar_t__ spdif; } ;
struct TYPE_2__ {size_t* rate_table; } ;

/* Variables and functions */
 unsigned char AC97_SPDIF ; 
 scalar_t__ SNDRV_PCM_STREAM_PLAYBACK ; 
 unsigned char* rate_cregs ; 
 unsigned char*** rate_reg_tables ; 

__attribute__((used)) static unsigned char get_slot_reg(struct ac97_pcm *pcm, unsigned short cidx,
				  unsigned short slot, int dbl)
{
	if (slot < 3)
		return 0xff;
	if (slot > 11)
		return 0xff;
	if (pcm->spdif)
		return AC97_SPDIF; /* pseudo register */
	if (pcm->stream == SNDRV_PCM_STREAM_PLAYBACK)
		return rate_reg_tables[dbl][pcm->r[dbl].rate_table[cidx]][slot - 3];
	else
		return rate_cregs[slot - 3];
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
          unsigned short cidx = 100;
          unsigned short slot = 100;
          int dbl = 100;
          int _len_pcm0 = 1;
          struct ac97_pcm * pcm = (struct ac97_pcm *) malloc(_len_pcm0*sizeof(struct ac97_pcm));
          for(int _i0 = 0; _i0 < _len_pcm0; _i0++) {
            pcm[_i0].stream = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pcm__i0__r0 = 1;
          pcm[_i0].r = (struct TYPE_2__ *) malloc(_len_pcm__i0__r0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pcm__i0__r0; _j0++) {
              int _len_pcm__i0__r_rate_table0 = 1;
          pcm[_i0].r->rate_table = (unsigned long *) malloc(_len_pcm__i0__r_rate_table0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_pcm__i0__r_rate_table0; _j0++) {
            pcm[_i0].r->rate_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        pcm[_i0].spdif = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned char benchRet = get_slot_reg(pcm,cidx,slot,dbl);
          printf("%c\n", (benchRet %26) + 'a'); 
          for(int _aux = 0; _aux < _len_pcm0; _aux++) {
          free(pcm[_aux].r);
          }
          free(pcm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
