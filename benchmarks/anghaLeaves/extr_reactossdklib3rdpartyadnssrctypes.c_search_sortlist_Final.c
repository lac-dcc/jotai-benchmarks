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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int s_addr; } ;
struct TYPE_5__ {int s_addr; } ;
struct sortlist {TYPE_2__ base; TYPE_1__ mask; } ;
struct in_addr {int s_addr; } ;
typedef  TYPE_3__* adns_state ;
struct TYPE_7__ {int nsortlist; struct sortlist* sortlist; } ;

/* Variables and functions */

__attribute__((used)) static int search_sortlist(adns_state ads, struct in_addr ad) {
  const struct sortlist *slp;
  int i;

  for (i=0, slp=ads->sortlist;
       i<ads->nsortlist && !((ad.s_addr & slp->mask.s_addr) == slp->base.s_addr);
       i++, slp++);
  return i;
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
          int _len_ads0 = 1;
          struct TYPE_7__ * ads = (struct TYPE_7__ *) malloc(_len_ads0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_ads0; _i0++) {
            ads[_i0].nsortlist = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ads__i0__sortlist0 = 1;
          ads[_i0].sortlist = (struct sortlist *) malloc(_len_ads__i0__sortlist0*sizeof(struct sortlist));
          for(int _j0 = 0; _j0 < _len_ads__i0__sortlist0; _j0++) {
            ads[_i0].sortlist->base.s_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        ads[_i0].sortlist->mask.s_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct in_addr ad;
        ad.s_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          int benchRet = search_sortlist(ads,ad);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ads0; _aux++) {
          free(ads[_aux].sortlist);
          }
          free(ads);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
