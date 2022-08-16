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
struct moschip_port {TYPE_1__* port; } ;
struct async_icount {int /*<<< orphan*/  frame; int /*<<< orphan*/  parity; int /*<<< orphan*/  overrun; int /*<<< orphan*/  brk; } ;
typedef  int __u8 ;
struct TYPE_2__ {struct async_icount icount; } ;

/* Variables and functions */
 int SERIAL_LSR_BI ; 
 int SERIAL_LSR_FE ; 
 int SERIAL_LSR_OE ; 
 int SERIAL_LSR_PE ; 

__attribute__((used)) static void mos7840_handle_new_lsr(struct moschip_port *port, __u8 new_lsr)
{
	struct async_icount *icount;

	if (new_lsr & SERIAL_LSR_BI) {
		/*
		 * Parity and Framing errors only count if they
		 * occur exclusive of a break being
		 * received.
		 */
		new_lsr &= (__u8) (SERIAL_LSR_OE | SERIAL_LSR_BI);
	}

	/* update input line counters */
	icount = &port->port->icount;
	if (new_lsr & SERIAL_LSR_BI)
		icount->brk++;
	if (new_lsr & SERIAL_LSR_OE)
		icount->overrun++;
	if (new_lsr & SERIAL_LSR_PE)
		icount->parity++;
	if (new_lsr & SERIAL_LSR_FE)
		icount->frame++;
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
          int new_lsr = 100;
          int _len_port0 = 1;
          struct moschip_port * port = (struct moschip_port *) malloc(_len_port0*sizeof(struct moschip_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
              int _len_port__i0__port0 = 1;
          port[_i0].port = (struct TYPE_2__ *) malloc(_len_port__i0__port0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_port__i0__port0; _j0++) {
            port[_i0].port->icount.frame = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].port->icount.parity = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].port->icount.overrun = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].port->icount.brk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mos7840_handle_new_lsr(port,new_lsr);
          for(int _aux = 0; _aux < _len_port0; _aux++) {
          free(port[_aux].port);
          }
          free(port);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
