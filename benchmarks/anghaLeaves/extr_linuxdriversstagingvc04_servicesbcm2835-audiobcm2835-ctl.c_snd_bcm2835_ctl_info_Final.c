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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int max; scalar_t__ min; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; void* type; } ;

/* Variables and functions */
 int AUDIO_DEST_MAX ; 
 int CTRL_VOL_MAX ; 
 scalar_t__ CTRL_VOL_MIN ; 
 scalar_t__ PCM_PLAYBACK_DEVICE ; 
 scalar_t__ PCM_PLAYBACK_MUTE ; 
 scalar_t__ PCM_PLAYBACK_VOLUME ; 
 void* SNDRV_CTL_ELEM_TYPE_BOOLEAN ; 
 void* SNDRV_CTL_ELEM_TYPE_INTEGER ; 

__attribute__((used)) static int snd_bcm2835_ctl_info(struct snd_kcontrol *kcontrol,
				struct snd_ctl_elem_info *uinfo)
{
	if (kcontrol->private_value == PCM_PLAYBACK_VOLUME) {
		uinfo->type = SNDRV_CTL_ELEM_TYPE_INTEGER;
		uinfo->count = 1;
		uinfo->value.integer.min = CTRL_VOL_MIN;
		uinfo->value.integer.max = CTRL_VOL_MAX; /* 2303 */
	} else if (kcontrol->private_value == PCM_PLAYBACK_MUTE) {
		uinfo->type = SNDRV_CTL_ELEM_TYPE_BOOLEAN;
		uinfo->count = 1;
		uinfo->value.integer.min = 0;
		uinfo->value.integer.max = 1;
	} else if (kcontrol->private_value == PCM_PLAYBACK_DEVICE) {
		uinfo->type = SNDRV_CTL_ELEM_TYPE_INTEGER;
		uinfo->count = 1;
		uinfo->value.integer.min = 0;
		uinfo->value.integer.max = AUDIO_DEST_MAX - 1;
	}
	return 0;
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
          int _len_kcontrol0 = 1;
          struct snd_kcontrol * kcontrol = (struct snd_kcontrol *) malloc(_len_kcontrol0*sizeof(struct snd_kcontrol));
          for(int _i0 = 0; _i0 < _len_kcontrol0; _i0++) {
            kcontrol[_i0].private_value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_uinfo0 = 1;
          struct snd_ctl_elem_info * uinfo = (struct snd_ctl_elem_info *) malloc(_len_uinfo0*sizeof(struct snd_ctl_elem_info));
          for(int _i0 = 0; _i0 < _len_uinfo0; _i0++) {
            uinfo[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
        uinfo[_i0].value.integer.max = ((-2 * (next_i()%2)) + 1) * next_i();
        uinfo[_i0].value.integer.min = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = snd_bcm2835_ctl_info(kcontrol,uinfo);
          printf("%d\n", benchRet); 
          free(kcontrol);
          free(uinfo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
