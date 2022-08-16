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
struct TYPE_2__ {scalar_t__ mode; } ;
struct ldc_channel {unsigned long tx_acked; unsigned long tx_head; TYPE_1__ cfg; } ;

/* Variables and functions */
 scalar_t__ LDC_MODE_STREAM ; 

__attribute__((used)) static unsigned long head_for_data(struct ldc_channel *lp)
{
	if (lp->cfg.mode == LDC_MODE_STREAM)
		return lp->tx_acked;
	return lp->tx_head;
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
          int _len_lp0 = 1;
          struct ldc_channel * lp = (struct ldc_channel *) malloc(_len_lp0*sizeof(struct ldc_channel));
          for(int _i0 = 0; _i0 < _len_lp0; _i0++) {
            lp[_i0].tx_acked = ((-2 * (next_i()%2)) + 1) * next_i();
        lp[_i0].tx_head = ((-2 * (next_i()%2)) + 1) * next_i();
        lp[_i0].cfg.mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = head_for_data(lp);
          printf("%lu\n", benchRet); 
          free(lp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
