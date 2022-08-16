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
struct bfa_fcport_s {int /*<<< orphan*/  fec_state; int /*<<< orphan*/  topology; int /*<<< orphan*/  speed; } ;

/* Variables and functions */
 int /*<<< orphan*/  BFA_FEC_OFFLINE ; 
 int /*<<< orphan*/  BFA_PORT_SPEED_UNKNOWN ; 
 int /*<<< orphan*/  BFA_PORT_TOPOLOGY_NONE ; 

__attribute__((used)) static void
bfa_fcport_reset_linkinfo(struct bfa_fcport_s *fcport)
{
	fcport->speed = BFA_PORT_SPEED_UNKNOWN;
	fcport->topology = BFA_PORT_TOPOLOGY_NONE;
	fcport->fec_state = BFA_FEC_OFFLINE;
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
          int _len_fcport0 = 1;
          struct bfa_fcport_s * fcport = (struct bfa_fcport_s *) malloc(_len_fcport0*sizeof(struct bfa_fcport_s));
          for(int _i0 = 0; _i0 < _len_fcport0; _i0++) {
            fcport[_i0].fec_state = ((-2 * (next_i()%2)) + 1) * next_i();
        fcport[_i0].topology = ((-2 * (next_i()%2)) + 1) * next_i();
        fcport[_i0].speed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bfa_fcport_reset_linkinfo(fcport);
          free(fcport);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
