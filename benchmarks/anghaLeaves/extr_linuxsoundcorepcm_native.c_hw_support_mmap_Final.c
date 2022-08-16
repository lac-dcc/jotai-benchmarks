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
typedef  struct TYPE_10__   TYPE_5__ ;
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_9__ {scalar_t__ type; } ;
struct TYPE_10__ {TYPE_4__ dev; } ;
struct snd_pcm_substream {TYPE_5__ dma_buffer; TYPE_3__* ops; TYPE_2__* runtime; } ;
struct TYPE_8__ {int /*<<< orphan*/  mmap; } ;
struct TYPE_6__ {int info; } ;
struct TYPE_7__ {TYPE_1__ hw; } ;

/* Variables and functions */
 scalar_t__ SNDRV_DMA_TYPE_DEV ; 
 int SNDRV_PCM_INFO_MMAP ; 

__attribute__((used)) static bool hw_support_mmap(struct snd_pcm_substream *substream)
{
	if (!(substream->runtime->hw.info & SNDRV_PCM_INFO_MMAP))
		return false;
	/* architecture supports dma_mmap_coherent()? */
#if defined(CONFIG_ARCH_NO_COHERENT_DMA_MMAP) || !defined(CONFIG_HAS_DMA)
	if (!substream->ops->mmap &&
	    substream->dma_buffer.dev.type == SNDRV_DMA_TYPE_DEV)
		return false;
#endif
	return true;
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
          int _len_substream0 = 1;
          struct snd_pcm_substream * substream = (struct snd_pcm_substream *) malloc(_len_substream0*sizeof(struct snd_pcm_substream));
          for(int _i0 = 0; _i0 < _len_substream0; _i0++) {
            substream[_i0].dma_buffer.dev.type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_substream__i0__ops0 = 1;
          substream[_i0].ops = (struct TYPE_8__ *) malloc(_len_substream__i0__ops0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_substream__i0__ops0; _j0++) {
            substream[_i0].ops->mmap = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_substream__i0__runtime0 = 1;
          substream[_i0].runtime = (struct TYPE_7__ *) malloc(_len_substream__i0__runtime0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_substream__i0__runtime0; _j0++) {
            substream[_i0].runtime->hw.info = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = hw_support_mmap(substream);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_substream0; _aux++) {
          free(substream[_aux].ops);
          }
          for(int _aux = 0; _aux < _len_substream0; _aux++) {
          free(substream[_aux].runtime);
          }
          free(substream);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
