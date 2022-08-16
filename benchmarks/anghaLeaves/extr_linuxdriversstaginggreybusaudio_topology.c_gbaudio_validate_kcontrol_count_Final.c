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
struct gb_audio_widget {int type; int ncontrols; } ;

/* Variables and functions */
 int EINVAL ; 
#define  snd_soc_dapm_hp 134 
#define  snd_soc_dapm_input 133 
#define  snd_soc_dapm_mic 132 
#define  snd_soc_dapm_mux 131 
#define  snd_soc_dapm_output 130 
#define  snd_soc_dapm_spk 129 
#define  snd_soc_dapm_switch 128 

__attribute__((used)) static int gbaudio_validate_kcontrol_count(struct gb_audio_widget *w)
{
	int ret = 0;

	switch (w->type) {
	case snd_soc_dapm_spk:
	case snd_soc_dapm_hp:
	case snd_soc_dapm_mic:
	case snd_soc_dapm_output:
	case snd_soc_dapm_input:
		if (w->ncontrols)
			ret = -EINVAL;
		break;
	case snd_soc_dapm_switch:
	case snd_soc_dapm_mux:
		if (w->ncontrols != 1)
			ret = -EINVAL;
		break;
	default:
		break;
	}

	return ret;
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
          int _len_w0 = 1;
          struct gb_audio_widget * w = (struct gb_audio_widget *) malloc(_len_w0*sizeof(struct gb_audio_widget));
          for(int _i0 = 0; _i0 < _len_w0; _i0++) {
            w[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        w[_i0].ncontrols = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gbaudio_validate_kcontrol_count(w);
          printf("%d\n", benchRet); 
          free(w);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
