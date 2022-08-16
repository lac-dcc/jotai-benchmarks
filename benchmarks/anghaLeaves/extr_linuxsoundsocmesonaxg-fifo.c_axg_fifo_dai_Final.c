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
struct snd_soc_pcm_runtime {struct snd_soc_dai* cpu_dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;

/* Variables and functions */

__attribute__((used)) static struct snd_soc_dai *axg_fifo_dai(struct snd_pcm_substream *ss)
{
	struct snd_soc_pcm_runtime *rtd = ss->private_data;

	return rtd->cpu_dai;
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
          int _len_ss0 = 1;
          struct snd_pcm_substream * ss = (struct snd_pcm_substream *) malloc(_len_ss0*sizeof(struct snd_pcm_substream));
          for(int _i0 = 0; _i0 < _len_ss0; _i0++) {
              int _len_ss__i0__private_data0 = 1;
          ss[_i0].private_data = (struct snd_soc_pcm_runtime *) malloc(_len_ss__i0__private_data0*sizeof(struct snd_soc_pcm_runtime));
          for(int _j0 = 0; _j0 < _len_ss__i0__private_data0; _j0++) {
              int _len_ss__i0__private_data_cpu_dai0 = 1;
          ss[_i0].private_data->cpu_dai = (struct snd_soc_dai *) malloc(_len_ss__i0__private_data_cpu_dai0*sizeof(struct snd_soc_dai));
          for(int _j0 = 0; _j0 < _len_ss__i0__private_data_cpu_dai0; _j0++) {
            ss[_i0].private_data->cpu_dai->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct snd_soc_dai * benchRet = axg_fifo_dai(ss);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ss0; _aux++) {
          free(ss[_aux].private_data);
          }
          free(ss);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
