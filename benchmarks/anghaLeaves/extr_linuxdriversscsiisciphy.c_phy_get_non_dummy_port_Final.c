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
struct isci_port {scalar_t__ physical_port_index; } ;
struct isci_phy {struct isci_port* owning_port; } ;

/* Variables and functions */
 scalar_t__ SCIC_SDS_DUMMY_PORT ; 

struct isci_port *phy_get_non_dummy_port(struct isci_phy *iphy)
{
	struct isci_port *iport = iphy->owning_port;

	if (iport->physical_port_index == SCIC_SDS_DUMMY_PORT)
		return NULL;

	return iphy->owning_port;
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
          int _len_iphy0 = 1;
          struct isci_phy * iphy = (struct isci_phy *) malloc(_len_iphy0*sizeof(struct isci_phy));
          for(int _i0 = 0; _i0 < _len_iphy0; _i0++) {
              int _len_iphy__i0__owning_port0 = 1;
          iphy[_i0].owning_port = (struct isci_port *) malloc(_len_iphy__i0__owning_port0*sizeof(struct isci_port));
          for(int _j0 = 0; _j0 < _len_iphy__i0__owning_port0; _j0++) {
            iphy[_i0].owning_port->physical_port_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct isci_port * benchRet = phy_get_non_dummy_port(iphy);
          printf("%ld\n", (*benchRet).physical_port_index);
          for(int _aux = 0; _aux < _len_iphy0; _aux++) {
          free(iphy[_aux].owning_port);
          }
          free(iphy);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
