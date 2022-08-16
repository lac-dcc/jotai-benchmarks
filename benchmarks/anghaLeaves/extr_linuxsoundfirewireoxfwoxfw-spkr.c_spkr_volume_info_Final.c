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
struct snd_oxfw {struct fw_spkr* spec; } ;
struct snd_kcontrol {struct snd_oxfw* private_data; } ;
struct TYPE_4__ {int /*<<< orphan*/  max; int /*<<< orphan*/  min; } ;
struct TYPE_3__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_info {TYPE_1__ value; int /*<<< orphan*/  count; int /*<<< orphan*/  type; } ;
struct fw_spkr {int /*<<< orphan*/  volume_max; int /*<<< orphan*/  volume_min; int /*<<< orphan*/  mixer_channels; } ;

/* Variables and functions */
 int /*<<< orphan*/  SNDRV_CTL_ELEM_TYPE_INTEGER ; 

__attribute__((used)) static int spkr_volume_info(struct snd_kcontrol *control,
			    struct snd_ctl_elem_info *info)
{
	struct snd_oxfw *oxfw = control->private_data;
	struct fw_spkr *spkr = oxfw->spec;

	info->type = SNDRV_CTL_ELEM_TYPE_INTEGER;
	info->count = spkr->mixer_channels;
	info->value.integer.min = spkr->volume_min;
	info->value.integer.max = spkr->volume_max;

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
          int _len_control0 = 1;
          struct snd_kcontrol * control = (struct snd_kcontrol *) malloc(_len_control0*sizeof(struct snd_kcontrol));
          for(int _i0 = 0; _i0 < _len_control0; _i0++) {
              int _len_control__i0__private_data0 = 1;
          control[_i0].private_data = (struct snd_oxfw *) malloc(_len_control__i0__private_data0*sizeof(struct snd_oxfw));
          for(int _j0 = 0; _j0 < _len_control__i0__private_data0; _j0++) {
              int _len_control__i0__private_data_spec0 = 1;
          control[_i0].private_data->spec = (struct fw_spkr *) malloc(_len_control__i0__private_data_spec0*sizeof(struct fw_spkr));
          for(int _j0 = 0; _j0 < _len_control__i0__private_data_spec0; _j0++) {
            control[_i0].private_data->spec->volume_max = ((-2 * (next_i()%2)) + 1) * next_i();
        control[_i0].private_data->spec->volume_min = ((-2 * (next_i()%2)) + 1) * next_i();
        control[_i0].private_data->spec->mixer_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_info0 = 1;
          struct snd_ctl_elem_info * info = (struct snd_ctl_elem_info *) malloc(_len_info0*sizeof(struct snd_ctl_elem_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].value.integer.max = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].value.integer.min = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = spkr_volume_info(control,info);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_control0; _aux++) {
          free(control[_aux].private_data);
          }
          free(control);
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
