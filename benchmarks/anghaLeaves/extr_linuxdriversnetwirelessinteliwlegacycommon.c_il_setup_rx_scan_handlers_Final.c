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

/* Type definitions */
struct il_priv {int /*<<< orphan*/ * handlers; } ;

/* Variables and functions */
 size_t C_SCAN ; 
 size_t N_SCAN_COMPLETE ; 
 size_t N_SCAN_RESULTS ; 
 size_t N_SCAN_START ; 
 int /*<<< orphan*/  il_hdl_scan ; 
 int /*<<< orphan*/  il_hdl_scan_complete ; 
 int /*<<< orphan*/  il_hdl_scan_results ; 
 int /*<<< orphan*/  il_hdl_scan_start ; 

void
il_setup_rx_scan_handlers(struct il_priv *il)
{
	/* scan handlers */
	il->handlers[C_SCAN] = il_hdl_scan;
	il->handlers[N_SCAN_START] = il_hdl_scan_start;
	il->handlers[N_SCAN_RESULTS] = il_hdl_scan_results;
	il->handlers[N_SCAN_COMPLETE] = il_hdl_scan_complete;
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
          int _len_il0 = 1;
          struct il_priv * il = (struct il_priv *) malloc(_len_il0*sizeof(struct il_priv));
          for(int _i0 = 0; _i0 < _len_il0; _i0++) {
              int _len_il__i0__handlers0 = 1;
          il[_i0].handlers = (int *) malloc(_len_il__i0__handlers0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_il__i0__handlers0; _j0++) {
            il[_i0].handlers[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          il_setup_rx_scan_handlers(il);
          for(int _aux = 0; _aux < _len_il0; _aux++) {
          free(il[_aux].handlers);
          }
          free(il);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
