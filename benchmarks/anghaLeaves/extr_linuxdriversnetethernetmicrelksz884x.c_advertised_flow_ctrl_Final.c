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
typedef  int /*<<< orphan*/  u16 ;
struct ksz_port {int flow_ctrl; } ;

/* Variables and functions */
#define  PHY_FLOW_CTRL 130 
#define  PHY_RX_ONLY 129 
#define  PHY_TX_ONLY 128 
 int /*<<< orphan*/  PORT_AUTO_NEG_SYM_PAUSE ; 

__attribute__((used)) static u16 advertised_flow_ctrl(struct ksz_port *port, u16 ctrl)
{
	ctrl &= ~PORT_AUTO_NEG_SYM_PAUSE;
	switch (port->flow_ctrl) {
	case PHY_FLOW_CTRL:
		ctrl |= PORT_AUTO_NEG_SYM_PAUSE;
		break;
	/* Not supported. */
	case PHY_TX_ONLY:
	case PHY_RX_ONLY:
	default:
		break;
	}
	return ctrl;
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
          int ctrl = 100;
          int _len_port0 = 1;
          struct ksz_port * port = (struct ksz_port *) malloc(_len_port0*sizeof(struct ksz_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].flow_ctrl = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = advertised_flow_ctrl(port,ctrl);
          printf("%d\n", benchRet); 
          free(port);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int ctrl = 10;
          int _len_port0 = 100;
          struct ksz_port * port = (struct ksz_port *) malloc(_len_port0*sizeof(struct ksz_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].flow_ctrl = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = advertised_flow_ctrl(port,ctrl);
          printf("%d\n", benchRet); 
          free(port);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
