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
struct tcpm_port {scalar_t__ hard_reset_count; scalar_t__ pwr_role; scalar_t__ state; scalar_t__ pd_capable; } ;
typedef  enum tcpm_state { ____Placeholder_tcpm_state } tcpm_state ;

/* Variables and functions */
 int ERROR_RECOVERY ; 
 int HARD_RESET_SEND ; 
 scalar_t__ PD_N_HARD_RESET_COUNT ; 
 int SNK_READY ; 
 int SNK_UNATTACHED ; 
 scalar_t__ SNK_WAIT_CAPABILITIES ; 
 int SRC_UNATTACHED ; 
 scalar_t__ TYPEC_SOURCE ; 

__attribute__((used)) static inline enum tcpm_state hard_reset_state(struct tcpm_port *port)
{
	if (port->hard_reset_count < PD_N_HARD_RESET_COUNT)
		return HARD_RESET_SEND;
	if (port->pd_capable)
		return ERROR_RECOVERY;
	if (port->pwr_role == TYPEC_SOURCE)
		return SRC_UNATTACHED;
	if (port->state == SNK_WAIT_CAPABILITIES)
		return SNK_READY;
	return SNK_UNATTACHED;
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
          int _len_port0 = 1;
          struct tcpm_port * port = (struct tcpm_port *) malloc(_len_port0*sizeof(struct tcpm_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].hard_reset_count = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].pwr_role = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].pd_capable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum tcpm_state benchRet = hard_reset_state(port);
          free(port);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
