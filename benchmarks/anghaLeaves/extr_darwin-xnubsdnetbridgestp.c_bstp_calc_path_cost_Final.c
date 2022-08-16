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
typedef  int uint32_t ;
struct ifnet {int if_baudrate; } ;
struct bstp_port {int bp_flags; int bp_path_cost; scalar_t__ bp_if_link_state; scalar_t__ bp_protover; struct ifnet* bp_ifp; } ;

/* Variables and functions */
 int BSTP_DEFAULT_PATH_COST ; 
 int BSTP_MAX_PATH_COST ; 
 int BSTP_PORT_ADMCOST ; 
 int BSTP_PORT_PNDCOST ; 
 scalar_t__ BSTP_PROTO_STP ; 
 scalar_t__ LINK_STATE_DOWN ; 

__attribute__((used)) static uint32_t
bstp_calc_path_cost(struct bstp_port *bp)
{
	struct ifnet *ifp = bp->bp_ifp;
	uint32_t path_cost;

	/* If the priority has been manually set then retain the value */
	if (bp->bp_flags & BSTP_PORT_ADMCOST)
		return bp->bp_path_cost;

	if (bp->bp_if_link_state == LINK_STATE_DOWN) {
		/* Recalc when the link comes up again */
		bp->bp_flags |= BSTP_PORT_PNDCOST;
		return (BSTP_DEFAULT_PATH_COST);
	}

	if (ifp->if_baudrate < 1000)
		return (BSTP_DEFAULT_PATH_COST);

 	/* formula from section 17.14, IEEE Std 802.1D-2004 */
	path_cost = 20000000000ULL / (ifp->if_baudrate / 1000);

	if (path_cost > BSTP_MAX_PATH_COST)
		path_cost = BSTP_MAX_PATH_COST;

	/* STP compat mode only uses 16 bits of the 32 */
	if (bp->bp_protover == BSTP_PROTO_STP && path_cost > 65535)
		path_cost = 65535;

	return (path_cost);
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
          struct bstp_port * bp = (struct bstp_port *) malloc(_len_bp0*sizeof(struct bstp_port));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].bp_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].bp_path_cost = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].bp_if_link_state = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].bp_protover = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bp__i0__bp_ifp0 = 1;
          bp[_i0].bp_ifp = (struct ifnet *) malloc(_len_bp__i0__bp_ifp0*sizeof(struct ifnet));
          for(int _j0 = 0; _j0 < _len_bp__i0__bp_ifp0; _j0++) {
            bp[_i0].bp_ifp->if_baudrate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = bstp_calc_path_cost(bp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bp0; _aux++) {
          free(bp[_aux].bp_ifp);
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
