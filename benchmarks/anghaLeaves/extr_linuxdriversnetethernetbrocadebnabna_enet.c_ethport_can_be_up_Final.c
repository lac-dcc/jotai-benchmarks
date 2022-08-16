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
struct bna_ethport {int flags; TYPE_2__* bna; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct TYPE_4__ {TYPE_1__ enet; } ;

/* Variables and functions */
 scalar_t__ BNA_ENET_T_REGULAR ; 
 int BNA_ETHPORT_F_ADMIN_UP ; 
 int BNA_ETHPORT_F_PORT_ENABLED ; 
 int BNA_ETHPORT_F_RX_STARTED ; 

__attribute__((used)) static inline int
ethport_can_be_up(struct bna_ethport *ethport)
{
	int ready = 0;
	if (ethport->bna->enet.type == BNA_ENET_T_REGULAR)
		ready = ((ethport->flags & BNA_ETHPORT_F_ADMIN_UP) &&
			 (ethport->flags & BNA_ETHPORT_F_RX_STARTED) &&
			 (ethport->flags & BNA_ETHPORT_F_PORT_ENABLED));
	else
		ready = ((ethport->flags & BNA_ETHPORT_F_ADMIN_UP) &&
			 (ethport->flags & BNA_ETHPORT_F_RX_STARTED) &&
			 !(ethport->flags & BNA_ETHPORT_F_PORT_ENABLED));
	return ready;
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
          int _len_ethport0 = 1;
          struct bna_ethport * ethport = (struct bna_ethport *) malloc(_len_ethport0*sizeof(struct bna_ethport));
          for(int _i0 = 0; _i0 < _len_ethport0; _i0++) {
            ethport[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ethport__i0__bna0 = 1;
          ethport[_i0].bna = (struct TYPE_4__ *) malloc(_len_ethport__i0__bna0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ethport__i0__bna0; _j0++) {
            ethport[_i0].bna->enet.type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ethport_can_be_up(ethport);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ethport0; _aux++) {
          free(ethport[_aux].bna);
          }
          free(ethport);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
