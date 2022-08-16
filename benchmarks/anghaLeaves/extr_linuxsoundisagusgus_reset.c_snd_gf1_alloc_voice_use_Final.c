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
struct snd_gus_voice {int use; int pcm; int synth; int client; int port; int midi; } ;
struct TYPE_2__ {int /*<<< orphan*/  pcm_alloc_voices; } ;
struct snd_gus_card {TYPE_1__ gf1; } ;

/* Variables and functions */
#define  SNDRV_GF1_VOICE_TYPE_MIDI 130 
#define  SNDRV_GF1_VOICE_TYPE_PCM 129 
#define  SNDRV_GF1_VOICE_TYPE_SYNTH 128 

__attribute__((used)) static void snd_gf1_alloc_voice_use(struct snd_gus_card * gus, 
				    struct snd_gus_voice * pvoice,
				    int type, int client, int port)
{
	pvoice->use = 1;
	switch (type) {
	case SNDRV_GF1_VOICE_TYPE_PCM:
		gus->gf1.pcm_alloc_voices++;
		pvoice->pcm = 1;
		break;
	case SNDRV_GF1_VOICE_TYPE_SYNTH:
		pvoice->synth = 1;
		pvoice->client = client;
		pvoice->port = port;
		break;
	case SNDRV_GF1_VOICE_TYPE_MIDI:
		pvoice->midi = 1;
		pvoice->client = client;
		pvoice->port = port;
		break;
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
          int type = 100;
          int client = 100;
          int port = 100;
          int _len_gus0 = 1;
          struct snd_gus_card * gus = (struct snd_gus_card *) malloc(_len_gus0*sizeof(struct snd_gus_card));
          for(int _i0 = 0; _i0 < _len_gus0; _i0++) {
            gus[_i0].gf1.pcm_alloc_voices = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pvoice0 = 1;
          struct snd_gus_voice * pvoice = (struct snd_gus_voice *) malloc(_len_pvoice0*sizeof(struct snd_gus_voice));
          for(int _i0 = 0; _i0 < _len_pvoice0; _i0++) {
            pvoice[_i0].use = ((-2 * (next_i()%2)) + 1) * next_i();
        pvoice[_i0].pcm = ((-2 * (next_i()%2)) + 1) * next_i();
        pvoice[_i0].synth = ((-2 * (next_i()%2)) + 1) * next_i();
        pvoice[_i0].client = ((-2 * (next_i()%2)) + 1) * next_i();
        pvoice[_i0].port = ((-2 * (next_i()%2)) + 1) * next_i();
        pvoice[_i0].midi = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          snd_gf1_alloc_voice_use(gus,pvoice,type,client,port);
          free(gus);
          free(pvoice);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
