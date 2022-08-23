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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {scalar_t__ quantum; scalar_t__ memory_limit; scalar_t__ limit; } ;
struct TYPE_5__ {TYPE_1__* wiphy; } ;
struct ieee80211_local {TYPE_3__ fq; TYPE_2__ hw; } ;
struct TYPE_4__ {scalar_t__ txq_quantum; scalar_t__ txq_memory_limit; scalar_t__ txq_limit; } ;

/* Variables and functions */

void ieee80211_txq_set_params(struct ieee80211_local *local)
{
	if (local->hw.wiphy->txq_limit)
		local->fq.limit = local->hw.wiphy->txq_limit;
	else
		local->hw.wiphy->txq_limit = local->fq.limit;

	if (local->hw.wiphy->txq_memory_limit)
		local->fq.memory_limit = local->hw.wiphy->txq_memory_limit;
	else
		local->hw.wiphy->txq_memory_limit = local->fq.memory_limit;

	if (local->hw.wiphy->txq_quantum)
		local->fq.quantum = local->hw.wiphy->txq_quantum;
	else
		local->hw.wiphy->txq_quantum = local->fq.quantum;
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
          int _len_local0 = 1;
          struct ieee80211_local * local = (struct ieee80211_local *) malloc(_len_local0*sizeof(struct ieee80211_local));
          for(int _i0 = 0; _i0 < _len_local0; _i0++) {
            local[_i0].fq.quantum = ((-2 * (next_i()%2)) + 1) * next_i();
        local[_i0].fq.memory_limit = ((-2 * (next_i()%2)) + 1) * next_i();
        local[_i0].fq.limit = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_local__i0__hw_wiphy0 = 1;
          local[_i0].hw.wiphy = (struct TYPE_4__ *) malloc(_len_local__i0__hw_wiphy0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_local__i0__hw_wiphy0; _j0++) {
            local[_i0].hw.wiphy->txq_quantum = ((-2 * (next_i()%2)) + 1) * next_i();
        local[_i0].hw.wiphy->txq_memory_limit = ((-2 * (next_i()%2)) + 1) * next_i();
        local[_i0].hw.wiphy->txq_limit = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ieee80211_txq_set_params(local);
          free(local);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}