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
struct ieee80211_rx_stats {int /*<<< orphan*/  Seq_Num; int /*<<< orphan*/  bFirstMPDU; int /*<<< orphan*/  bIsAMPDU; } ;

/* Variables and functions */

__attribute__((used)) static void rtl8192_record_rxdesc_forlateruse(
		struct ieee80211_rx_stats *psrc_stats,
		struct ieee80211_rx_stats *ptarget_stats)
{
	ptarget_stats->bIsAMPDU = psrc_stats->bIsAMPDU;
	ptarget_stats->bFirstMPDU = psrc_stats->bFirstMPDU;
	ptarget_stats->Seq_Num = psrc_stats->Seq_Num;
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
          int _len_psrc_stats0 = 1;
          struct ieee80211_rx_stats * psrc_stats = (struct ieee80211_rx_stats *) malloc(_len_psrc_stats0*sizeof(struct ieee80211_rx_stats));
          for(int _i0 = 0; _i0 < _len_psrc_stats0; _i0++) {
            psrc_stats[_i0].Seq_Num = ((-2 * (next_i()%2)) + 1) * next_i();
        psrc_stats[_i0].bFirstMPDU = ((-2 * (next_i()%2)) + 1) * next_i();
        psrc_stats[_i0].bIsAMPDU = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ptarget_stats0 = 1;
          struct ieee80211_rx_stats * ptarget_stats = (struct ieee80211_rx_stats *) malloc(_len_ptarget_stats0*sizeof(struct ieee80211_rx_stats));
          for(int _i0 = 0; _i0 < _len_ptarget_stats0; _i0++) {
            ptarget_stats[_i0].Seq_Num = ((-2 * (next_i()%2)) + 1) * next_i();
        ptarget_stats[_i0].bFirstMPDU = ((-2 * (next_i()%2)) + 1) * next_i();
        ptarget_stats[_i0].bIsAMPDU = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rtl8192_record_rxdesc_forlateruse(psrc_stats,ptarget_stats);
          free(psrc_stats);
          free(ptarget_stats);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
