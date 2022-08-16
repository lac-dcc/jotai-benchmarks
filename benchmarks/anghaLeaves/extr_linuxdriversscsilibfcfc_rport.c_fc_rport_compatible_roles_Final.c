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
struct TYPE_2__ {int roles; } ;
struct fc_rport_priv {TYPE_1__ ids; } ;
struct fc_lport {int service_params; } ;

/* Variables and functions */
 int FCP_SPPF_INIT_FCN ; 
 int FCP_SPPF_TARG_FCN ; 
 int FC_PORT_ROLE_FCP_INITIATOR ; 
 int FC_PORT_ROLE_FCP_TARGET ; 
 int FC_PORT_ROLE_UNKNOWN ; 

__attribute__((used)) static bool
fc_rport_compatible_roles(struct fc_lport *lport, struct fc_rport_priv *rdata)
{
	if (rdata->ids.roles == FC_PORT_ROLE_UNKNOWN)
		return true;
	if ((rdata->ids.roles & FC_PORT_ROLE_FCP_TARGET) &&
	    (lport->service_params & FCP_SPPF_INIT_FCN))
		return true;
	if ((rdata->ids.roles & FC_PORT_ROLE_FCP_INITIATOR) &&
	    (lport->service_params & FCP_SPPF_TARG_FCN))
		return true;
	return false;
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
          int _len_lport0 = 1;
          struct fc_lport * lport = (struct fc_lport *) malloc(_len_lport0*sizeof(struct fc_lport));
          for(int _i0 = 0; _i0 < _len_lport0; _i0++) {
            lport[_i0].service_params = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rdata0 = 1;
          struct fc_rport_priv * rdata = (struct fc_rport_priv *) malloc(_len_rdata0*sizeof(struct fc_rport_priv));
          for(int _i0 = 0; _i0 < _len_rdata0; _i0++) {
            rdata[_i0].ids.roles = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fc_rport_compatible_roles(lport,rdata);
          printf("%d\n", benchRet); 
          free(lport);
          free(rdata);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
