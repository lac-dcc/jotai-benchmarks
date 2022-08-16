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
struct usb_mixer_elem_info {int /*<<< orphan*/  channels; } ;
struct snd_kcontrol {scalar_t__ private_value; struct usb_mixer_elem_info* private_data; } ;
struct TYPE_3__ {int step; scalar_t__ max; scalar_t__ min; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_info {TYPE_2__ value; int /*<<< orphan*/  count; int /*<<< orphan*/  type; } ;

/* Variables and functions */
 int /*<<< orphan*/  SNDRV_CTL_ELEM_TYPE_INTEGER ; 
 scalar_t__ SND_SCARLETT_LEVEL_BIAS ; 

__attribute__((used)) static int scarlett_ctl_info(struct snd_kcontrol *kctl,
			     struct snd_ctl_elem_info *uinfo)
{
	struct usb_mixer_elem_info *elem = kctl->private_data;

	uinfo->type = SNDRV_CTL_ELEM_TYPE_INTEGER;
	uinfo->count = elem->channels;
	uinfo->value.integer.min = 0;
	uinfo->value.integer.max = (int)kctl->private_value +
		SND_SCARLETT_LEVEL_BIAS;
	uinfo->value.integer.step = 1;
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
          int _len_kctl0 = 1;
          struct snd_kcontrol * kctl = (struct snd_kcontrol *) malloc(_len_kctl0*sizeof(struct snd_kcontrol));
          for(int _i0 = 0; _i0 < _len_kctl0; _i0++) {
            kctl[_i0].private_value = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_kctl__i0__private_data0 = 1;
          kctl[_i0].private_data = (struct usb_mixer_elem_info *) malloc(_len_kctl__i0__private_data0*sizeof(struct usb_mixer_elem_info));
          for(int _j0 = 0; _j0 < _len_kctl__i0__private_data0; _j0++) {
            kctl[_i0].private_data->channels = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_uinfo0 = 1;
          struct snd_ctl_elem_info * uinfo = (struct snd_ctl_elem_info *) malloc(_len_uinfo0*sizeof(struct snd_ctl_elem_info));
          for(int _i0 = 0; _i0 < _len_uinfo0; _i0++) {
            uinfo[_i0].value.integer.step = ((-2 * (next_i()%2)) + 1) * next_i();
        uinfo[_i0].value.integer.max = ((-2 * (next_i()%2)) + 1) * next_i();
        uinfo[_i0].value.integer.min = ((-2 * (next_i()%2)) + 1) * next_i();
        uinfo[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
        uinfo[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = scarlett_ctl_info(kctl,uinfo);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_kctl0; _aux++) {
          free(kctl[_aux].private_data);
          }
          free(kctl);
          free(uinfo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
