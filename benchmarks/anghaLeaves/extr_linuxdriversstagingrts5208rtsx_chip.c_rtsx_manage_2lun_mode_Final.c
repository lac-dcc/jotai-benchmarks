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
       1            big-arr-10x\n\
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
struct rtsx_chip {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void rtsx_manage_2lun_mode(struct rtsx_chip *chip)
{
#ifdef SUPPORT_OCP
	u8 sd_oc, ms_oc;

	sd_oc = chip->ocp_stat & (SD_OC_NOW | SD_OC_EVER);
	ms_oc = chip->ocp_stat & (MS_OC_NOW | MS_OC_EVER);

	if (sd_oc || ms_oc)
		dev_dbg(rtsx_dev(chip), "Over current, OCPSTAT is 0x%x\n",
			chip->ocp_stat);

	if (sd_oc && (chip->card_exist & SD_CARD)) {
		rtsx_write_register(chip, CARD_OE, SD_OUTPUT_EN, 0);
		card_power_off(chip, SD_CARD);
		chip->card_fail |= SD_CARD;
	}

	if (ms_oc && (chip->card_exist & MS_CARD)) {
		rtsx_write_register(chip, CARD_OE, MS_OUTPUT_EN, 0);
		card_power_off(chip, MS_CARD);
		chip->card_fail |= MS_CARD;
	}
#endif
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
          int _len_chip0 = 1;
          struct rtsx_chip * chip = (struct rtsx_chip *) malloc(_len_chip0*sizeof(struct rtsx_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rtsx_manage_2lun_mode(chip);
          free(chip);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_chip0 = 100;
          struct rtsx_chip * chip = (struct rtsx_chip *) malloc(_len_chip0*sizeof(struct rtsx_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rtsx_manage_2lun_mode(chip);
          free(chip);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
