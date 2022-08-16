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
struct icom_port {int port; scalar_t__ int_reg; scalar_t__ global_reg; } ;
struct icom_adapter {scalar_t__ version; scalar_t__ base_addr; } ;

/* Variables and functions */
 scalar_t__ ADAPTER_V1 ; 

__attribute__((used)) static void icom_port_active(struct icom_port *icom_port, struct icom_adapter *icom_adapter, int port_num)
{
	if (icom_adapter->version == ADAPTER_V1) {
		icom_port->global_reg = icom_adapter->base_addr + 0x4000;
		icom_port->int_reg = icom_adapter->base_addr +
		    0x4004 + 2 - 2 * port_num;
	} else {
		icom_port->global_reg = icom_adapter->base_addr + 0x8000;
		if (icom_port->port < 2)
			icom_port->int_reg = icom_adapter->base_addr +
			    0x8004 + 2 - 2 * icom_port->port;
		else
			icom_port->int_reg = icom_adapter->base_addr +
			    0x8024 + 2 - 2 * (icom_port->port - 2);
	}
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
          int port_num = 100;
          int _len_icom_port0 = 1;
          struct icom_port * icom_port = (struct icom_port *) malloc(_len_icom_port0*sizeof(struct icom_port));
          for(int _i0 = 0; _i0 < _len_icom_port0; _i0++) {
            icom_port[_i0].port = ((-2 * (next_i()%2)) + 1) * next_i();
        icom_port[_i0].int_reg = ((-2 * (next_i()%2)) + 1) * next_i();
        icom_port[_i0].global_reg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_icom_adapter0 = 1;
          struct icom_adapter * icom_adapter = (struct icom_adapter *) malloc(_len_icom_adapter0*sizeof(struct icom_adapter));
          for(int _i0 = 0; _i0 < _len_icom_adapter0; _i0++) {
            icom_adapter[_i0].version = ((-2 * (next_i()%2)) + 1) * next_i();
        icom_adapter[_i0].base_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          icom_port_active(icom_port,icom_adapter,port_num);
          free(icom_port);
          free(icom_adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
