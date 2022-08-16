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
struct mt76_wcid {int dummy; } ;
struct mt76x2_sta {TYPE_1__* vif; struct mt76_wcid wcid; } ;
struct mt76x2_dev {int dummy; } ;
struct TYPE_2__ {struct mt76_wcid group_wcid; } ;

/* Variables and functions */

__attribute__((used)) static struct mt76_wcid *
mt76x2_rx_get_sta_wcid(struct mt76x2_dev *dev, struct mt76x2_sta *sta,
		       bool unicast)
{
	if (!sta)
		return NULL;

	if (unicast)
		return &sta->wcid;
	else
		return &sta->vif->group_wcid;
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
          int unicast = 100;
          int _len_dev0 = 1;
          struct mt76x2_dev * dev = (struct mt76x2_dev *) malloc(_len_dev0*sizeof(struct mt76x2_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sta0 = 1;
          struct mt76x2_sta * sta = (struct mt76x2_sta *) malloc(_len_sta0*sizeof(struct mt76x2_sta));
          for(int _i0 = 0; _i0 < _len_sta0; _i0++) {
              int _len_sta__i0__vif0 = 1;
          sta[_i0].vif = (struct TYPE_2__ *) malloc(_len_sta__i0__vif0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_sta__i0__vif0; _j0++) {
            sta[_i0].vif->group_wcid.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        sta[_i0].wcid.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct mt76_wcid * benchRet = mt76x2_rx_get_sta_wcid(dev,sta,unicast);
          printf("%d\n", (*benchRet).dummy);
          free(dev);
          for(int _aux = 0; _aux < _len_sta0; _aux++) {
          free(sta[_aux].vif);
          }
          free(sta);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
