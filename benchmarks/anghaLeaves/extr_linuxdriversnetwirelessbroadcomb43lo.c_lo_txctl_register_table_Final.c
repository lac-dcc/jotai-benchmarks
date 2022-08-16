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
typedef  int u16 ;
struct b43_phy {scalar_t__ type; int radio_rev; int rev; } ;
struct b43_wldev {struct b43_phy phy; } ;

/* Variables and functions */
 scalar_t__ B43_PHYTYPE_B ; 

__attribute__((used)) static u16 lo_txctl_register_table(struct b43_wldev *dev,
				   u16 *value, u16 *pad_mix_gain)
{
	struct b43_phy *phy = &dev->phy;
	u16 reg, v, padmix;

	if (phy->type == B43_PHYTYPE_B) {
		v = 0x30;
		if (phy->radio_rev <= 5) {
			reg = 0x43;
			padmix = 0;
		} else {
			reg = 0x52;
			padmix = 5;
		}
	} else {
		if (phy->rev >= 2 && phy->radio_rev == 8) {
			reg = 0x43;
			v = 0x10;
			padmix = 2;
		} else {
			reg = 0x52;
			v = 0x30;
			padmix = 5;
		}
	}
	if (value)
		*value = v;
	if (pad_mix_gain)
		*pad_mix_gain = padmix;

	return reg;
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
          int _len_dev0 = 1;
          struct b43_wldev * dev = (struct b43_wldev *) malloc(_len_dev0*sizeof(struct b43_wldev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].phy.type = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].phy.radio_rev = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].phy.rev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_value0 = 1;
          int * value = (int *) malloc(_len_value0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pad_mix_gain0 = 1;
          int * pad_mix_gain = (int *) malloc(_len_pad_mix_gain0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pad_mix_gain0; _i0++) {
            pad_mix_gain[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = lo_txctl_register_table(dev,value,pad_mix_gain);
          printf("%d\n", benchRet); 
          free(dev);
          free(value);
          free(pad_mix_gain);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
