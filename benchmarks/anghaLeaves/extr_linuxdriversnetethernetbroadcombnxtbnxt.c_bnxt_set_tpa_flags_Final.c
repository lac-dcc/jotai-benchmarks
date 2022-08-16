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
struct bnxt {int flags; TYPE_1__* dev; } ;
struct TYPE_2__ {int features; } ;

/* Variables and functions */
 int BNXT_FLAG_GRO ; 
 int BNXT_FLAG_LRO ; 
 int BNXT_FLAG_NO_AGG_RINGS ; 
 int BNXT_FLAG_TPA ; 
 int NETIF_F_GRO_HW ; 
 int NETIF_F_LRO ; 

void bnxt_set_tpa_flags(struct bnxt *bp)
{
	bp->flags &= ~BNXT_FLAG_TPA;
	if (bp->flags & BNXT_FLAG_NO_AGG_RINGS)
		return;
	if (bp->dev->features & NETIF_F_LRO)
		bp->flags |= BNXT_FLAG_LRO;
	else if (bp->dev->features & NETIF_F_GRO_HW)
		bp->flags |= BNXT_FLAG_GRO;
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
          int _len_bp0 = 1;
          struct bnxt * bp = (struct bnxt *) malloc(_len_bp0*sizeof(struct bnxt));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bp__i0__dev0 = 1;
          bp[_i0].dev = (struct TYPE_2__ *) malloc(_len_bp__i0__dev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_bp__i0__dev0; _j0++) {
            bp[_i0].dev->features = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          bnxt_set_tpa_flags(bp);
          for(int _aux = 0; _aux < _len_bp0; _aux++) {
          free(bp[_aux].dev);
          }
          free(bp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
