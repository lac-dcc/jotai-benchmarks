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
struct ieee80211_tx_rate {int flags; } ;
struct ar9170 {int erp_mode; } ;

/* Variables and functions */
#define  CARL9170_ERP_AUTO 130 
#define  CARL9170_ERP_CTS 129 
#define  CARL9170_ERP_MAC80211 128 
 int IEEE80211_TX_RC_USE_CTS_PROTECT ; 

__attribute__((used)) static bool carl9170_tx_cts_check(struct ar9170 *ar,
				  struct ieee80211_tx_rate *rate)
{
	switch (ar->erp_mode) {
	case CARL9170_ERP_AUTO:
	case CARL9170_ERP_MAC80211:
		if (!(rate->flags & IEEE80211_TX_RC_USE_CTS_PROTECT))
			break;

	case CARL9170_ERP_CTS:
		return true;

	default:
		break;
	}

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
          int _len_ar0 = 1;
          struct ar9170 * ar = (struct ar9170 *) malloc(_len_ar0*sizeof(struct ar9170));
          for(int _i0 = 0; _i0 < _len_ar0; _i0++) {
            ar[_i0].erp_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rate0 = 1;
          struct ieee80211_tx_rate * rate = (struct ieee80211_tx_rate *) malloc(_len_rate0*sizeof(struct ieee80211_tx_rate));
          for(int _i0 = 0; _i0 < _len_rate0; _i0++) {
            rate[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = carl9170_tx_cts_check(ar,rate);
          printf("%d\n", benchRet); 
          free(ar);
          free(rate);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
