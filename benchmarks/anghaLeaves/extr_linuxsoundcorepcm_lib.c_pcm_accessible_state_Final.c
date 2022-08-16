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
struct snd_pcm_runtime {TYPE_1__* status; } ;
struct TYPE_2__ {int state; } ;

/* Variables and functions */
 int EBADFD ; 
 int EPIPE ; 
 int ESTRPIPE ; 
#define  SNDRV_PCM_STATE_PAUSED 132 
#define  SNDRV_PCM_STATE_PREPARED 131 
#define  SNDRV_PCM_STATE_RUNNING 130 
#define  SNDRV_PCM_STATE_SUSPENDED 129 
#define  SNDRV_PCM_STATE_XRUN 128 

__attribute__((used)) static int pcm_accessible_state(struct snd_pcm_runtime *runtime)
{
	switch (runtime->status->state) {
	case SNDRV_PCM_STATE_PREPARED:
	case SNDRV_PCM_STATE_RUNNING:
	case SNDRV_PCM_STATE_PAUSED:
		return 0;
	case SNDRV_PCM_STATE_XRUN:
		return -EPIPE;
	case SNDRV_PCM_STATE_SUSPENDED:
		return -ESTRPIPE;
	default:
		return -EBADFD;
	}
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
          int _len_runtime0 = 1;
          struct snd_pcm_runtime * runtime = (struct snd_pcm_runtime *) malloc(_len_runtime0*sizeof(struct snd_pcm_runtime));
          for(int _i0 = 0; _i0 < _len_runtime0; _i0++) {
              int _len_runtime__i0__status0 = 1;
          runtime[_i0].status = (struct TYPE_2__ *) malloc(_len_runtime__i0__status0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_runtime__i0__status0; _j0++) {
            runtime[_i0].status->state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = pcm_accessible_state(runtime);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_runtime0; _aux++) {
          free(runtime[_aux].status);
          }
          free(runtime);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
