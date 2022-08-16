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
typedef  unsigned int u8 ;
typedef  int u32 ;
struct mmc_host {int caps; int caps2; } ;
struct TYPE_2__ {unsigned int raw_card_type; unsigned int hs_max_dtr; unsigned int hs200_max_dtr; scalar_t__ strobe_support; } ;
struct mmc_card {unsigned int mmc_avail_type; TYPE_1__ ext_csd; struct mmc_host* host; } ;

/* Variables and functions */
 unsigned int EXT_CSD_CARD_TYPE_DDR_1_2V ; 
 unsigned int EXT_CSD_CARD_TYPE_DDR_1_8V ; 
 unsigned int EXT_CSD_CARD_TYPE_HS200_1_2V ; 
 unsigned int EXT_CSD_CARD_TYPE_HS200_1_8V ; 
 unsigned int EXT_CSD_CARD_TYPE_HS400 ; 
 unsigned int EXT_CSD_CARD_TYPE_HS400ES ; 
 unsigned int EXT_CSD_CARD_TYPE_HS400_1_2V ; 
 unsigned int EXT_CSD_CARD_TYPE_HS400_1_8V ; 
 unsigned int EXT_CSD_CARD_TYPE_HS_26 ; 
 unsigned int EXT_CSD_CARD_TYPE_HS_52 ; 
 int MMC_CAP2_HS200_1_2V_SDR ; 
 int MMC_CAP2_HS200_1_8V_SDR ; 
 int MMC_CAP2_HS400_1_2V ; 
 int MMC_CAP2_HS400_1_8V ; 
 int MMC_CAP2_HS400_ES ; 
 int MMC_CAP_1_2V_DDR ; 
 int MMC_CAP_1_8V_DDR ; 
 int MMC_CAP_3_3V_DDR ; 
 int MMC_CAP_MMC_HIGHSPEED ; 
 unsigned int MMC_HIGH_26_MAX_DTR ; 
 unsigned int MMC_HIGH_52_MAX_DTR ; 
 unsigned int MMC_HIGH_DDR_MAX_DTR ; 
 unsigned int MMC_HS200_MAX_DTR ; 

__attribute__((used)) static void mmc_select_card_type(struct mmc_card *card)
{
	struct mmc_host *host = card->host;
	u8 card_type = card->ext_csd.raw_card_type;
	u32 caps = host->caps, caps2 = host->caps2;
	unsigned int hs_max_dtr = 0, hs200_max_dtr = 0;
	unsigned int avail_type = 0;

	if (caps & MMC_CAP_MMC_HIGHSPEED &&
	    card_type & EXT_CSD_CARD_TYPE_HS_26) {
		hs_max_dtr = MMC_HIGH_26_MAX_DTR;
		avail_type |= EXT_CSD_CARD_TYPE_HS_26;
	}

	if (caps & MMC_CAP_MMC_HIGHSPEED &&
	    card_type & EXT_CSD_CARD_TYPE_HS_52) {
		hs_max_dtr = MMC_HIGH_52_MAX_DTR;
		avail_type |= EXT_CSD_CARD_TYPE_HS_52;
	}

	if (caps & (MMC_CAP_1_8V_DDR | MMC_CAP_3_3V_DDR) &&
	    card_type & EXT_CSD_CARD_TYPE_DDR_1_8V) {
		hs_max_dtr = MMC_HIGH_DDR_MAX_DTR;
		avail_type |= EXT_CSD_CARD_TYPE_DDR_1_8V;
	}

	if (caps & MMC_CAP_1_2V_DDR &&
	    card_type & EXT_CSD_CARD_TYPE_DDR_1_2V) {
		hs_max_dtr = MMC_HIGH_DDR_MAX_DTR;
		avail_type |= EXT_CSD_CARD_TYPE_DDR_1_2V;
	}

	if (caps2 & MMC_CAP2_HS200_1_8V_SDR &&
	    card_type & EXT_CSD_CARD_TYPE_HS200_1_8V) {
		hs200_max_dtr = MMC_HS200_MAX_DTR;
		avail_type |= EXT_CSD_CARD_TYPE_HS200_1_8V;
	}

	if (caps2 & MMC_CAP2_HS200_1_2V_SDR &&
	    card_type & EXT_CSD_CARD_TYPE_HS200_1_2V) {
		hs200_max_dtr = MMC_HS200_MAX_DTR;
		avail_type |= EXT_CSD_CARD_TYPE_HS200_1_2V;
	}

	if (caps2 & MMC_CAP2_HS400_1_8V &&
	    card_type & EXT_CSD_CARD_TYPE_HS400_1_8V) {
		hs200_max_dtr = MMC_HS200_MAX_DTR;
		avail_type |= EXT_CSD_CARD_TYPE_HS400_1_8V;
	}

	if (caps2 & MMC_CAP2_HS400_1_2V &&
	    card_type & EXT_CSD_CARD_TYPE_HS400_1_2V) {
		hs200_max_dtr = MMC_HS200_MAX_DTR;
		avail_type |= EXT_CSD_CARD_TYPE_HS400_1_2V;
	}

	if ((caps2 & MMC_CAP2_HS400_ES) &&
	    card->ext_csd.strobe_support &&
	    (avail_type & EXT_CSD_CARD_TYPE_HS400))
		avail_type |= EXT_CSD_CARD_TYPE_HS400ES;

	card->ext_csd.hs_max_dtr = hs_max_dtr;
	card->ext_csd.hs200_max_dtr = hs200_max_dtr;
	card->mmc_avail_type = avail_type;
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
          int _len_card0 = 1;
          struct mmc_card * card = (struct mmc_card *) malloc(_len_card0*sizeof(struct mmc_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].mmc_avail_type = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].ext_csd.raw_card_type = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].ext_csd.hs_max_dtr = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].ext_csd.hs200_max_dtr = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].ext_csd.strobe_support = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_card__i0__host0 = 1;
          card[_i0].host = (struct mmc_host *) malloc(_len_card__i0__host0*sizeof(struct mmc_host));
          for(int _j0 = 0; _j0 < _len_card__i0__host0; _j0++) {
            card[_i0].host->caps = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].host->caps2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mmc_select_card_type(card);
          for(int _aux = 0; _aux < _len_card0; _aux++) {
          free(card[_aux].host);
          }
          free(card);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
