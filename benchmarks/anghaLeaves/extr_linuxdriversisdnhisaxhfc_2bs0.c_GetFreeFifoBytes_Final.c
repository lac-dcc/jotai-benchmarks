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
typedef  struct TYPE_10__   TYPE_5__ ;
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {size_t f1; size_t f2; int* send; } ;
struct TYPE_7__ {TYPE_1__ hfc; } ;
struct BCState {TYPE_5__* cs; TYPE_2__ hw; } ;
struct TYPE_8__ {int fifosize; } ;
struct TYPE_9__ {TYPE_3__ hfc; } ;
struct TYPE_10__ {TYPE_4__ hw; } ;

/* Variables and functions */

__attribute__((used)) static int
GetFreeFifoBytes(struct BCState *bcs)
{
	int s;

	if (bcs->hw.hfc.f1 == bcs->hw.hfc.f2)
		return (bcs->cs->hw.hfc.fifosize);
	s = bcs->hw.hfc.send[bcs->hw.hfc.f1] - bcs->hw.hfc.send[bcs->hw.hfc.f2];
	if (s <= 0)
		s += bcs->cs->hw.hfc.fifosize;
	s = bcs->cs->hw.hfc.fifosize - s;
	return (s);
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
          int _len_bcs0 = 1;
          struct BCState * bcs = (struct BCState *) malloc(_len_bcs0*sizeof(struct BCState));
          for(int _i0 = 0; _i0 < _len_bcs0; _i0++) {
              int _len_bcs__i0__cs0 = 1;
          bcs[_i0].cs = (struct TYPE_10__ *) malloc(_len_bcs__i0__cs0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_bcs__i0__cs0; _j0++) {
            bcs[_i0].cs->hw.hfc.fifosize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bcs[_i0].hw.hfc.f1 = ((-2 * (next_i()%2)) + 1) * next_i();
        bcs[_i0].hw.hfc.f2 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bcs__i0__hw_hfc_send0 = 1;
          bcs[_i0].hw.hfc.send = (int *) malloc(_len_bcs__i0__hw_hfc_send0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bcs__i0__hw_hfc_send0; _j0++) {
            bcs[_i0].hw.hfc.send[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = GetFreeFifoBytes(bcs);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bcs0; _aux++) {
          free(bcs[_aux].cs);
          }
          free(bcs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
