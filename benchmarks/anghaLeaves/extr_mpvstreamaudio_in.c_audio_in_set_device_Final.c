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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int type; scalar_t__ setup; } ;
typedef  TYPE_1__ audio_in_t ;

/* Variables and functions */

int audio_in_set_device(audio_in_t *ai, char *device)
{
#if HAVE_ALSA
    int i;
#endif
    if (ai->setup) return -1;
    switch (ai->type) {
#if HAVE_ALSA
    case AUDIO_IN_ALSA:
        free(ai->alsa.device);
        ai->alsa.device = strdup(device);
        if (ai->alsa.device) {
            /* mplayer could not handle colons in arguments */
            for (i = 0; i < (int)strlen(ai->alsa.device); i++) {
                if (ai->alsa.device[i] == '.') ai->alsa.device[i] = ':';
            }
        }
        return 0;
#endif
#if HAVE_OSS_AUDIO
    case AUDIO_IN_OSS:
        free(ai->oss.device);
        ai->oss.device = strdup(device);
        return 0;
#endif
#if HAVE_SNDIO
    case AUDIO_IN_SNDIO:
       if (ai->sndio.device) free(ai->sndio.device);
       ai->sndio.device = strdup(device);
       return 0;
#endif
    default:
        return -1;
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
          int _len_ai0 = 1;
          struct TYPE_3__ * ai = (struct TYPE_3__ *) malloc(_len_ai0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ai0; _i0++) {
            ai[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        ai[_i0].setup = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_device0 = 1;
          char * device = (char *) malloc(_len_device0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_device0; _i0++) {
            device[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = audio_in_set_device(ai,device);
          printf("%d\n", benchRet); 
          free(ai);
          free(device);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
