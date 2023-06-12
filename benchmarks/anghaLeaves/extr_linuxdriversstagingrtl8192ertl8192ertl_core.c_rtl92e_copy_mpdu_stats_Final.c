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

/* Type definitions */
struct rtllib_rx_stats {int /*<<< orphan*/  bFirstMPDU; int /*<<< orphan*/  bIsAMPDU; } ;

/* Variables and functions */

void rtl92e_copy_mpdu_stats(struct rtllib_rx_stats *psrc_stats,
			    struct rtllib_rx_stats *ptarget_stats)
{
	ptarget_stats->bIsAMPDU = psrc_stats->bIsAMPDU;
	ptarget_stats->bFirstMPDU = psrc_stats->bFirstMPDU;
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
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_psrc_stats0 = 65025;
          struct rtllib_rx_stats * psrc_stats = (struct rtllib_rx_stats *) malloc(_len_psrc_stats0*sizeof(struct rtllib_rx_stats));
          for(int _i0 = 0; _i0 < _len_psrc_stats0; _i0++) {
              psrc_stats[_i0].bFirstMPDU = ((-2 * (next_i()%2)) + 1) * next_i();
          psrc_stats[_i0].bIsAMPDU = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_ptarget_stats0 = 65025;
          struct rtllib_rx_stats * ptarget_stats = (struct rtllib_rx_stats *) malloc(_len_ptarget_stats0*sizeof(struct rtllib_rx_stats));
          for(int _i0 = 0; _i0 < _len_ptarget_stats0; _i0++) {
              ptarget_stats[_i0].bFirstMPDU = ((-2 * (next_i()%2)) + 1) * next_i();
          ptarget_stats[_i0].bIsAMPDU = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          rtl92e_copy_mpdu_stats(psrc_stats,ptarget_stats);
          free(psrc_stats);
          free(ptarget_stats);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_psrc_stats0 = 100;
          struct rtllib_rx_stats * psrc_stats = (struct rtllib_rx_stats *) malloc(_len_psrc_stats0*sizeof(struct rtllib_rx_stats));
          for(int _i0 = 0; _i0 < _len_psrc_stats0; _i0++) {
              psrc_stats[_i0].bFirstMPDU = ((-2 * (next_i()%2)) + 1) * next_i();
          psrc_stats[_i0].bIsAMPDU = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_ptarget_stats0 = 100;
          struct rtllib_rx_stats * ptarget_stats = (struct rtllib_rx_stats *) malloc(_len_ptarget_stats0*sizeof(struct rtllib_rx_stats));
          for(int _i0 = 0; _i0 < _len_ptarget_stats0; _i0++) {
              ptarget_stats[_i0].bFirstMPDU = ((-2 * (next_i()%2)) + 1) * next_i();
          ptarget_stats[_i0].bIsAMPDU = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          rtl92e_copy_mpdu_stats(psrc_stats,ptarget_stats);
          free(psrc_stats);
          free(ptarget_stats);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_psrc_stats0 = 1;
          struct rtllib_rx_stats * psrc_stats = (struct rtllib_rx_stats *) malloc(_len_psrc_stats0*sizeof(struct rtllib_rx_stats));
          for(int _i0 = 0; _i0 < _len_psrc_stats0; _i0++) {
              psrc_stats[_i0].bFirstMPDU = ((-2 * (next_i()%2)) + 1) * next_i();
          psrc_stats[_i0].bIsAMPDU = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_ptarget_stats0 = 1;
          struct rtllib_rx_stats * ptarget_stats = (struct rtllib_rx_stats *) malloc(_len_ptarget_stats0*sizeof(struct rtllib_rx_stats));
          for(int _i0 = 0; _i0 < _len_ptarget_stats0; _i0++) {
              ptarget_stats[_i0].bFirstMPDU = ((-2 * (next_i()%2)) + 1) * next_i();
          ptarget_stats[_i0].bIsAMPDU = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          rtl92e_copy_mpdu_stats(psrc_stats,ptarget_stats);
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
