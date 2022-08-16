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
struct snd_pcm_runtime {int rate; } ;
struct esschan {int fmt; int frag_size; } ;
struct es1968 {int dummy; } ;

/* Variables and functions */
 int ESM_BOB_FREQ ; 
 int ESM_BOB_FREQ_MAX ; 
 int ESS_FMT_16BIT ; 
 int ESS_FMT_STEREO ; 

__attribute__((used)) static int
snd_es1968_calc_bob_rate(struct es1968 *chip, struct esschan *es,
			 struct snd_pcm_runtime *runtime)
{
	/* we acquire 4 interrupts per period for precise control.. */
	int freq = runtime->rate * 4;
	if (es->fmt & ESS_FMT_STEREO)
		freq <<= 1;
	if (es->fmt & ESS_FMT_16BIT)
		freq <<= 1;
	freq /= es->frag_size;
	if (freq < ESM_BOB_FREQ)
		freq = ESM_BOB_FREQ;
	else if (freq > ESM_BOB_FREQ_MAX)
		freq = ESM_BOB_FREQ_MAX;
	return freq;
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
          int _len_chip0 = 1;
          struct es1968 * chip = (struct es1968 *) malloc(_len_chip0*sizeof(struct es1968));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_es0 = 1;
          struct esschan * es = (struct esschan *) malloc(_len_es0*sizeof(struct esschan));
          for(int _i0 = 0; _i0 < _len_es0; _i0++) {
            es[_i0].fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        es[_i0].frag_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_runtime0 = 1;
          struct snd_pcm_runtime * runtime = (struct snd_pcm_runtime *) malloc(_len_runtime0*sizeof(struct snd_pcm_runtime));
          for(int _i0 = 0; _i0 < _len_runtime0; _i0++) {
            runtime[_i0].rate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = snd_es1968_calc_bob_rate(chip,es,runtime);
          printf("%d\n", benchRet); 
          free(chip);
          free(es);
          free(runtime);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
