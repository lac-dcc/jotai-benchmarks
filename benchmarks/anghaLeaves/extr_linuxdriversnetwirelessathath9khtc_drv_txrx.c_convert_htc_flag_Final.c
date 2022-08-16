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
struct ath_rx_status {int /*<<< orphan*/  enc_flags; int /*<<< orphan*/  bw; } ;
struct ath_htc_rx_status {int rs_flags; } ;

/* Variables and functions */
 int ATH9K_RX_2040 ; 
 int ATH9K_RX_GI ; 
 int /*<<< orphan*/  RATE_INFO_BW_20 ; 
 int /*<<< orphan*/  RATE_INFO_BW_40 ; 
 int /*<<< orphan*/  RX_ENC_FLAG_SHORT_GI ; 

__attribute__((used)) static inline void convert_htc_flag(struct ath_rx_status *rx_stats,
				   struct ath_htc_rx_status *rxstatus)
{
	rx_stats->enc_flags = 0;
	rx_stats->bw = RATE_INFO_BW_20;
	if (rxstatus->rs_flags & ATH9K_RX_2040)
		rx_stats->bw = RATE_INFO_BW_40;
	if (rxstatus->rs_flags & ATH9K_RX_GI)
		rx_stats->enc_flags |= RX_ENC_FLAG_SHORT_GI;
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
          int _len_rx_stats0 = 1;
          struct ath_rx_status * rx_stats = (struct ath_rx_status *) malloc(_len_rx_stats0*sizeof(struct ath_rx_status));
          for(int _i0 = 0; _i0 < _len_rx_stats0; _i0++) {
            rx_stats[_i0].enc_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        rx_stats[_i0].bw = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rxstatus0 = 1;
          struct ath_htc_rx_status * rxstatus = (struct ath_htc_rx_status *) malloc(_len_rxstatus0*sizeof(struct ath_htc_rx_status));
          for(int _i0 = 0; _i0 < _len_rxstatus0; _i0++) {
            rxstatus[_i0].rs_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          convert_htc_flag(rx_stats,rxstatus);
          free(rx_stats);
          free(rxstatus);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
