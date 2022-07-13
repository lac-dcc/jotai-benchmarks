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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  scalar_t__ u8 ;

/* Variables and functions */
 size_t ATH_BTCOEX_STOMP_ALL ; 
 size_t ATH_BTCOEX_STOMP_LOW ; 
 size_t ATH_BTCOEX_STOMP_NONE ; 
 scalar_t__ ATH_MCI_HI_PRIO ; 

__attribute__((used)) static void ath_mci_update_stomp_txprio(u8 cur_txprio, u8 *stomp_prio)
{
	if (cur_txprio < stomp_prio[ATH_BTCOEX_STOMP_NONE])
		stomp_prio[ATH_BTCOEX_STOMP_NONE] = cur_txprio;

	if (cur_txprio > stomp_prio[ATH_BTCOEX_STOMP_ALL])
		stomp_prio[ATH_BTCOEX_STOMP_ALL] = cur_txprio;

	if ((cur_txprio > ATH_MCI_HI_PRIO) &&
	    (cur_txprio < stomp_prio[ATH_BTCOEX_STOMP_LOW]))
		stomp_prio[ATH_BTCOEX_STOMP_LOW] = cur_txprio;
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
          long cur_txprio = 100;
          int _len_stomp_prio0 = 1;
          long * stomp_prio = (long *) malloc(_len_stomp_prio0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_stomp_prio0; _i0++) {
            stomp_prio[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ath_mci_update_stomp_txprio(cur_txprio,stomp_prio);
          free(stomp_prio);
        
        break;
    }
    // big-arr
    case 1:
    {
          long cur_txprio = 255;
          int _len_stomp_prio0 = 65025;
          long * stomp_prio = (long *) malloc(_len_stomp_prio0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_stomp_prio0; _i0++) {
            stomp_prio[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ath_mci_update_stomp_txprio(cur_txprio,stomp_prio);
          free(stomp_prio);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long cur_txprio = 10;
          int _len_stomp_prio0 = 100;
          long * stomp_prio = (long *) malloc(_len_stomp_prio0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_stomp_prio0; _i0++) {
            stomp_prio[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ath_mci_update_stomp_txprio(cur_txprio,stomp_prio);
          free(stomp_prio);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
