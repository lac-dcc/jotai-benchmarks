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
       1            big-arr-10x\n\
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
struct lan743x_tx {int /*<<< orphan*/  ts_flags; } ;

/* Variables and functions */
 int /*<<< orphan*/  TX_TS_FLAG_ONE_STEP_SYNC ; 
 int /*<<< orphan*/  TX_TS_FLAG_TIMESTAMPING_ENABLED ; 

void lan743x_tx_set_timestamping_mode(struct lan743x_tx *tx,
				      bool enable_timestamping,
				      bool enable_onestep_sync)
{
	if (enable_timestamping)
		tx->ts_flags |= TX_TS_FLAG_TIMESTAMPING_ENABLED;
	else
		tx->ts_flags &= ~TX_TS_FLAG_TIMESTAMPING_ENABLED;
	if (enable_onestep_sync)
		tx->ts_flags |= TX_TS_FLAG_ONE_STEP_SYNC;
	else
		tx->ts_flags &= ~TX_TS_FLAG_ONE_STEP_SYNC;
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
          int enable_timestamping = 100;
          int enable_onestep_sync = 100;
          int _len_tx0 = 1;
          struct lan743x_tx * tx = (struct lan743x_tx *) malloc(_len_tx0*sizeof(struct lan743x_tx));
          for(int _i0 = 0; _i0 < _len_tx0; _i0++) {
            tx[_i0].ts_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          lan743x_tx_set_timestamping_mode(tx,enable_timestamping,enable_onestep_sync);
          free(tx);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int enable_timestamping = 10;
          int enable_onestep_sync = 10;
          int _len_tx0 = 100;
          struct lan743x_tx * tx = (struct lan743x_tx *) malloc(_len_tx0*sizeof(struct lan743x_tx));
          for(int _i0 = 0; _i0 < _len_tx0; _i0++) {
            tx[_i0].ts_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          lan743x_tx_set_timestamping_mode(tx,enable_timestamping,enable_onestep_sync);
          free(tx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
