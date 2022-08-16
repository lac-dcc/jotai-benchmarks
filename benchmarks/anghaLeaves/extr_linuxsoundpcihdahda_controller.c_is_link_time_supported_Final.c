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
struct TYPE_2__ {int info; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;
struct snd_pcm_audio_tstamp_config {scalar_t__ type_requested; } ;

/* Variables and functions */
 scalar_t__ SNDRV_PCM_AUDIO_TSTAMP_TYPE_LINK_SYNCHRONIZED ; 
 int SNDRV_PCM_INFO_HAS_LINK_SYNCHRONIZED_ATIME ; 

__attribute__((used)) static inline bool is_link_time_supported(struct snd_pcm_runtime *runtime,
				struct snd_pcm_audio_tstamp_config *ts)
{
	if (runtime->hw.info & SNDRV_PCM_INFO_HAS_LINK_SYNCHRONIZED_ATIME)
		if (ts->type_requested == SNDRV_PCM_AUDIO_TSTAMP_TYPE_LINK_SYNCHRONIZED)
			return true;

	return false;
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
            runtime[_i0].hw.info = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ts0 = 1;
          struct snd_pcm_audio_tstamp_config * ts = (struct snd_pcm_audio_tstamp_config *) malloc(_len_ts0*sizeof(struct snd_pcm_audio_tstamp_config));
          for(int _i0 = 0; _i0 < _len_ts0; _i0++) {
            ts[_i0].type_requested = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_link_time_supported(runtime,ts);
          printf("%d\n", benchRet); 
          free(runtime);
          free(ts);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
