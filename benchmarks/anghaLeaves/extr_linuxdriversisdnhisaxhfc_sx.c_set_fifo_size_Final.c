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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int chip; int cirm; scalar_t__ b_fifo_size; } ;
struct TYPE_3__ {TYPE_2__ hfcsx; } ;
struct IsdnCardState {TYPE_1__ hw; } ;

/* Variables and functions */
 scalar_t__ B_FIFO_SIZE_32K ; 
 scalar_t__ B_FIFO_SIZE_8K ; 

__attribute__((used)) static int set_fifo_size(struct IsdnCardState *cs)
{

	if (cs->hw.hfcsx.b_fifo_size) return (1); /* already determined */

	if ((cs->hw.hfcsx.chip >> 4) == 9) {
		cs->hw.hfcsx.b_fifo_size = B_FIFO_SIZE_32K;
		return (1);
	}

	cs->hw.hfcsx.b_fifo_size = B_FIFO_SIZE_8K;
	cs->hw.hfcsx.cirm |= 0x10; /* only 8K of ram */
	return (0);

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
          int _len_cs0 = 1;
          struct IsdnCardState * cs = (struct IsdnCardState *) malloc(_len_cs0*sizeof(struct IsdnCardState));
          for(int _i0 = 0; _i0 < _len_cs0; _i0++) {
            cs[_i0].hw.hfcsx.chip = ((-2 * (next_i()%2)) + 1) * next_i();
        cs[_i0].hw.hfcsx.cirm = ((-2 * (next_i()%2)) + 1) * next_i();
        cs[_i0].hw.hfcsx.b_fifo_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = set_fifo_size(cs);
          printf("%d\n", benchRet); 
          free(cs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
