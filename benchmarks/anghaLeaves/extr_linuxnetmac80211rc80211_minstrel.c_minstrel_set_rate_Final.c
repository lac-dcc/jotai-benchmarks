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
       0            big-arr-10x\n\
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
struct minstrel_sta_info {struct minstrel_rate* r; } ;
struct TYPE_3__ {int /*<<< orphan*/  retry_count_rtscts; } ;
struct minstrel_rate {TYPE_1__ stats; int /*<<< orphan*/  retry_count_cts; int /*<<< orphan*/  adjusted_retry_count; int /*<<< orphan*/  rix; } ;
struct ieee80211_sta_rates {TYPE_2__* rate; } ;
struct TYPE_4__ {int /*<<< orphan*/  count_rts; int /*<<< orphan*/  count_cts; int /*<<< orphan*/  count; int /*<<< orphan*/  idx; } ;

/* Variables and functions */

__attribute__((used)) static void
minstrel_set_rate(struct minstrel_sta_info *mi, struct ieee80211_sta_rates *ratetbl,
		  int offset, int idx)
{
	struct minstrel_rate *r = &mi->r[idx];

	ratetbl->rate[offset].idx = r->rix;
	ratetbl->rate[offset].count = r->adjusted_retry_count;
	ratetbl->rate[offset].count_cts = r->retry_count_cts;
	ratetbl->rate[offset].count_rts = r->stats.retry_count_rtscts;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr-10x
    case 0:
    {
          // static_instructions_O0 : 46
          // dynamic_instructions_O0 : 46
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 18
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int offset = 10;
        
          int idx = 10;
        
          int _len_mi0 = 100;
          struct minstrel_sta_info * mi = (struct minstrel_sta_info *) malloc(_len_mi0*sizeof(struct minstrel_sta_info));
          for(int _i0 = 0; _i0 < _len_mi0; _i0++) {
              int _len_mi__i0__r0 = 1;
          mi[_i0].r = (struct minstrel_rate *) malloc(_len_mi__i0__r0*sizeof(struct minstrel_rate));
          for(int _j0 = 0; _j0 < _len_mi__i0__r0; _j0++) {
              mi[_i0].r->stats.retry_count_rtscts = ((-2 * (next_i()%2)) + 1) * next_i();
        
          mi[_i0].r->retry_count_cts = ((-2 * (next_i()%2)) + 1) * next_i();
          mi[_i0].r->adjusted_retry_count = ((-2 * (next_i()%2)) + 1) * next_i();
          mi[_i0].r->rix = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_ratetbl0 = 100;
          struct ieee80211_sta_rates * ratetbl = (struct ieee80211_sta_rates *) malloc(_len_ratetbl0*sizeof(struct ieee80211_sta_rates));
          for(int _i0 = 0; _i0 < _len_ratetbl0; _i0++) {
              int _len_ratetbl__i0__rate0 = 1;
          ratetbl[_i0].rate = (struct TYPE_4__ *) malloc(_len_ratetbl__i0__rate0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ratetbl__i0__rate0; _j0++) {
              ratetbl[_i0].rate->count_rts = ((-2 * (next_i()%2)) + 1) * next_i();
          ratetbl[_i0].rate->count_cts = ((-2 * (next_i()%2)) + 1) * next_i();
          ratetbl[_i0].rate->count = ((-2 * (next_i()%2)) + 1) * next_i();
          ratetbl[_i0].rate->idx = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          minstrel_set_rate(mi,ratetbl,offset,idx);
          for(int _aux = 0; _aux < _len_mi0; _aux++) {
          free(mi[_aux].r);
          }
          free(mi);
          for(int _aux = 0; _aux < _len_ratetbl0; _aux++) {
          free(ratetbl[_aux].rate);
          }
          free(ratetbl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
