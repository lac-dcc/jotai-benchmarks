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
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {int subdivision; int params; scalar_t__ fragshift; } ;
struct snd_pcm_runtime {TYPE_1__ oss; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int snd_pcm_oss_set_subdivide1(struct snd_pcm_substream *substream, int subdivide)
{
	struct snd_pcm_runtime *runtime;

	runtime = substream->runtime;
	if (subdivide == 0) {
		subdivide = runtime->oss.subdivision;
		if (subdivide == 0)
			subdivide = 1;
		return subdivide;
	}
	if (runtime->oss.subdivision || runtime->oss.fragshift)
		return -EINVAL;
	if (subdivide != 1 && subdivide != 2 && subdivide != 4 &&
	    subdivide != 8 && subdivide != 16)
		return -EINVAL;
	runtime->oss.subdivision = subdivide;
	runtime->oss.params = 1;
	return subdivide;
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
          int subdivide = 100;
          int _len_substream0 = 1;
          struct snd_pcm_substream * substream = (struct snd_pcm_substream *) malloc(_len_substream0*sizeof(struct snd_pcm_substream));
          for(int _i0 = 0; _i0 < _len_substream0; _i0++) {
              int _len_substream__i0__runtime0 = 1;
          substream[_i0].runtime = (struct snd_pcm_runtime *) malloc(_len_substream__i0__runtime0*sizeof(struct snd_pcm_runtime));
          for(int _j0 = 0; _j0 < _len_substream__i0__runtime0; _j0++) {
            substream[_i0].runtime->oss.subdivision = ((-2 * (next_i()%2)) + 1) * next_i();
        substream[_i0].runtime->oss.params = ((-2 * (next_i()%2)) + 1) * next_i();
        substream[_i0].runtime->oss.fragshift = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = snd_pcm_oss_set_subdivide1(substream,subdivide);
          printf("%d\n", benchRet); 
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
