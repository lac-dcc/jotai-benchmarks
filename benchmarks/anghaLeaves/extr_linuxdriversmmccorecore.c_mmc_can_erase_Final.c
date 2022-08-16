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
struct TYPE_4__ {int cmdclass; } ;
struct mmc_card {int quirks; scalar_t__ erase_size; TYPE_2__ csd; TYPE_1__* host; } ;
struct TYPE_3__ {int caps; } ;

/* Variables and functions */
 int CCC_ERASE ; 
 int MMC_CAP_ERASE ; 
 int MMC_QUIRK_ERASE_BROKEN ; 

int mmc_can_erase(struct mmc_card *card)
{
	if ((card->host->caps & MMC_CAP_ERASE) &&
	    (card->csd.cmdclass & CCC_ERASE) && card->erase_size &&
	    !(card->quirks & MMC_QUIRK_ERASE_BROKEN))
		return 1;
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
          int _len_card0 = 1;
          struct mmc_card * card = (struct mmc_card *) malloc(_len_card0*sizeof(struct mmc_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].quirks = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].erase_size = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].csd.cmdclass = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_card__i0__host0 = 1;
          card[_i0].host = (struct TYPE_3__ *) malloc(_len_card__i0__host0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_card__i0__host0; _j0++) {
            card[_i0].host->caps = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mmc_can_erase(card);
          printf("%d\n", benchRet); 
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
