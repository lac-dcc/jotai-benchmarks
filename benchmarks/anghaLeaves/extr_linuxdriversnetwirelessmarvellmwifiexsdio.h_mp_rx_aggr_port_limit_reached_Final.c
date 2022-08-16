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
typedef  int u8 ;
struct TYPE_2__ {int start_port; } ;
struct sdio_mmc_card {int curr_rd_port; int mp_end_port; int mp_agg_pkt_limit; int max_ports; TYPE_1__ mpa_rx; scalar_t__ supports_sdio_new_mode; } ;

/* Variables and functions */

__attribute__((used)) static inline bool
mp_rx_aggr_port_limit_reached(struct sdio_mmc_card *card)
{
	u8 tmp;

	if (card->curr_rd_port < card->mpa_rx.start_port) {
		if (card->supports_sdio_new_mode)
			tmp = card->mp_end_port >> 1;
		else
			tmp = card->mp_agg_pkt_limit;

		if (((card->max_ports - card->mpa_rx.start_port) +
		    card->curr_rd_port) >= tmp)
			return true;
	}

	if (!card->supports_sdio_new_mode)
		return false;

	if ((card->curr_rd_port - card->mpa_rx.start_port) >=
	    (card->mp_end_port >> 1))
		return true;

	return false;
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
          struct sdio_mmc_card * card = (struct sdio_mmc_card *) malloc(_len_card0*sizeof(struct sdio_mmc_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].curr_rd_port = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].mp_end_port = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].mp_agg_pkt_limit = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].max_ports = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].mpa_rx.start_port = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].supports_sdio_new_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mp_rx_aggr_port_limit_reached(card);
          printf("%d\n", benchRet); 
          free(card);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
