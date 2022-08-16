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
struct TYPE_3__ {int type; } ;
typedef  TYPE_1__ audio_in_t ;

/* Variables and functions */

int audio_in_read_chunk(audio_in_t *ai, unsigned char *buffer)
{
    int ret;

    switch (ai->type) {
#if HAVE_ALSA
    case AUDIO_IN_ALSA:
        ret = snd_pcm_readi(ai->alsa.handle, buffer, ai->alsa.chunk_size);
        if (ret != ai->alsa.chunk_size) {
            if (ret < 0) {
                MP_ERR(ai, "\nError reading audio: %s\n", snd_strerror(ret));
                if (ret == -EPIPE) {
                    if (ai_alsa_xrun(ai) == 0) {
                        MP_ERR(ai, "Recovered from cross-run, some frames may be left out!\n");
                    } else {
                        MP_ERR(ai, "Fatal error, cannot recover!\n");
                    }
                }
            } else {
                MP_ERR(ai, "\nNot enough audio samples!\n");
            }
            return -1;
        }
        return ret;
#endif
#if HAVE_OSS_AUDIO
    case AUDIO_IN_OSS:
        ret = read(ai->oss.audio_fd, buffer, ai->blocksize);
       if (ret != ai->blocksize) {
           if (ret < 0) {
               MP_ERR(ai, "\nError reading audio: %s\n", mp_strerror(errno));

           } else {
               MP_ERR(ai, "\nNot enough audio samples!\n");
           }
           return -1;
       }
       return ret;
#endif
#if HAVE_SNDIO
    case AUDIO_IN_SNDIO:
       ret = sio_read(ai->sndio.hdl, buffer, ai->blocksize);
        if (ret != ai->blocksize) {
            if (ret < 0) {
                MP_ERR(ai, "\nError reading audio: %s\n", mp_strerror(errno));
            } else {
                MP_ERR(ai, "\nNot enough audio samples!\n");
            }
            return -1;
        }
        return ret;
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
          }
          int _len_buffer0 = 1;
          unsigned char * buffer = (unsigned char *) malloc(_len_buffer0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = audio_in_read_chunk(ai,buffer);
          printf("%d\n", benchRet); 
          free(ai);
          free(buffer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
