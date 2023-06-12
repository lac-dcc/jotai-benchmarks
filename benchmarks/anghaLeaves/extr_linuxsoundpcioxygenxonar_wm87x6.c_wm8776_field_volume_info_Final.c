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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int min; int max; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; int /*<<< orphan*/  type; } ;

/* Variables and functions */
 int /*<<< orphan*/  SNDRV_CTL_ELEM_TYPE_INTEGER ; 

__attribute__((used)) static int wm8776_field_volume_info(struct snd_kcontrol *ctl,
				    struct snd_ctl_elem_info *info)
{
	info->type = SNDRV_CTL_ELEM_TYPE_INTEGER;
	info->count = 1;
	info->value.integer.min = (ctl->private_value >> 8) & 0xf;
	info->value.integer.max = (ctl->private_value >> 12) & 0xf;
	return 0;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int _len_ctl0 = 65025;
          struct snd_kcontrol * ctl = (struct snd_kcontrol *) malloc(_len_ctl0*sizeof(struct snd_kcontrol));
          for(int _i0 = 0; _i0 < _len_ctl0; _i0++) {
              ctl[_i0].private_value = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_info0 = 65025;
          struct snd_ctl_elem_info * info = (struct snd_ctl_elem_info *) malloc(_len_info0*sizeof(struct snd_ctl_elem_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              info[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].value.integer.min = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].value.integer.max = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          info[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = wm8776_field_volume_info(ctl,info);
          printf("%d\n", benchRet); 
          free(ctl);
          free(info);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int _len_ctl0 = 100;
          struct snd_kcontrol * ctl = (struct snd_kcontrol *) malloc(_len_ctl0*sizeof(struct snd_kcontrol));
          for(int _i0 = 0; _i0 < _len_ctl0; _i0++) {
              ctl[_i0].private_value = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_info0 = 100;
          struct snd_ctl_elem_info * info = (struct snd_ctl_elem_info *) malloc(_len_info0*sizeof(struct snd_ctl_elem_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              info[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].value.integer.min = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].value.integer.max = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          info[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = wm8776_field_volume_info(ctl,info);
          printf("%d\n", benchRet); 
          free(ctl);
          free(info);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int _len_ctl0 = 1;
          struct snd_kcontrol * ctl = (struct snd_kcontrol *) malloc(_len_ctl0*sizeof(struct snd_kcontrol));
          for(int _i0 = 0; _i0 < _len_ctl0; _i0++) {
              ctl[_i0].private_value = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_info0 = 1;
          struct snd_ctl_elem_info * info = (struct snd_ctl_elem_info *) malloc(_len_info0*sizeof(struct snd_ctl_elem_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              info[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].value.integer.min = ((-2 * (next_i()%2)) + 1) * next_i();
          info[_i0].value.integer.max = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          info[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = wm8776_field_volume_info(ctl,info);
          printf("%d\n", benchRet); 
          free(ctl);
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
