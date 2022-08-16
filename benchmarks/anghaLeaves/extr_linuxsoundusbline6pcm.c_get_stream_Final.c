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
struct line6_pcm_stream {int dummy; } ;
struct snd_line6_pcm {struct line6_pcm_stream in; struct line6_pcm_stream out; } ;

/* Variables and functions */
 int SNDRV_PCM_STREAM_PLAYBACK ; 

__attribute__((used)) static inline struct line6_pcm_stream *
get_stream(struct snd_line6_pcm *line6pcm, int direction)
{
	return (direction == SNDRV_PCM_STREAM_PLAYBACK) ?
		&line6pcm->out : &line6pcm->in;
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
          int direction = 100;
          int _len_line6pcm0 = 1;
          struct snd_line6_pcm * line6pcm = (struct snd_line6_pcm *) malloc(_len_line6pcm0*sizeof(struct snd_line6_pcm));
          for(int _i0 = 0; _i0 < _len_line6pcm0; _i0++) {
            line6pcm[_i0].in.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        line6pcm[_i0].out.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct line6_pcm_stream * benchRet = get_stream(line6pcm,direction);
          printf("%d\n", (*benchRet).dummy);
          free(line6pcm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
