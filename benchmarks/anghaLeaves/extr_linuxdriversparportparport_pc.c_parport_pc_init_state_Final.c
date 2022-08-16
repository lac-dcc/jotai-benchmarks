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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int ctr; int ecr; } ;
struct TYPE_6__ {TYPE_2__ pc; } ;
struct parport_state {TYPE_3__ u; } ;
struct pardevice {TYPE_1__* port; scalar_t__ irq_func; } ;
struct TYPE_4__ {scalar_t__ irq; } ;

/* Variables and functions */
 scalar_t__ PARPORT_IRQ_NONE ; 

__attribute__((used)) static void parport_pc_init_state(struct pardevice *dev,
						struct parport_state *s)
{
	s->u.pc.ctr = 0xc;
	if (dev->irq_func &&
	    dev->port->irq != PARPORT_IRQ_NONE)
		/* Set ackIntEn */
		s->u.pc.ctr |= 0x10;

	s->u.pc.ecr = 0x34; /* NetMos chip can cause problems 0x24;
			     * D.Gruszka VScom */
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
          int _len_dev0 = 1;
          struct pardevice * dev = (struct pardevice *) malloc(_len_dev0*sizeof(struct pardevice));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__port0 = 1;
          dev[_i0].port = (struct TYPE_4__ *) malloc(_len_dev__i0__port0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dev__i0__port0; _j0++) {
            dev[_i0].port->irq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev[_i0].irq_func = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s0 = 1;
          struct parport_state * s = (struct parport_state *) malloc(_len_s0*sizeof(struct parport_state));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].u.pc.ctr = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].u.pc.ecr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          parport_pc_init_state(dev,s);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].port);
          }
          free(dev);
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
