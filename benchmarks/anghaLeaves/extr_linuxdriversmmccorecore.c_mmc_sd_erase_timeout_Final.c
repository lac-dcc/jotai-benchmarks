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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct TYPE_2__ {int erase_timeout; unsigned int erase_offset; } ;
struct mmc_card {TYPE_1__ ssr; } ;

/* Variables and functions */

__attribute__((used)) static unsigned int mmc_sd_erase_timeout(struct mmc_card *card,
					 unsigned int arg,
					 unsigned int qty)
{
	unsigned int erase_timeout;

	if (card->ssr.erase_timeout) {
		/* Erase timeout specified in SD Status Register (SSR) */
		erase_timeout = card->ssr.erase_timeout * qty +
				card->ssr.erase_offset;
	} else {
		/*
		 * Erase timeout not specified in SD Status Register (SSR) so
		 * use 250ms per write block.
		 */
		erase_timeout = 250 * qty;
	}

	/* Must not be less than 1 second */
	if (erase_timeout < 1000)
		erase_timeout = 1000;

	return erase_timeout;
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
          unsigned int arg = 100;
          unsigned int qty = 100;
          int _len_card0 = 1;
          struct mmc_card * card = (struct mmc_card *) malloc(_len_card0*sizeof(struct mmc_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].ssr.erase_timeout = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].ssr.erase_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = mmc_sd_erase_timeout(card,arg,qty);
          printf("%u\n", benchRet); 
          free(card);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int arg = 255;
          unsigned int qty = 255;
          int _len_card0 = 65025;
          struct mmc_card * card = (struct mmc_card *) malloc(_len_card0*sizeof(struct mmc_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].ssr.erase_timeout = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].ssr.erase_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = mmc_sd_erase_timeout(card,arg,qty);
          printf("%u\n", benchRet); 
          free(card);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int arg = 10;
          unsigned int qty = 10;
          int _len_card0 = 100;
          struct mmc_card * card = (struct mmc_card *) malloc(_len_card0*sizeof(struct mmc_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].ssr.erase_timeout = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].ssr.erase_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = mmc_sd_erase_timeout(card,arg,qty);
          printf("%u\n", benchRet); 
          free(card);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
