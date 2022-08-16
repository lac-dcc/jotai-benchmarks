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
struct dvb_ca_slot {int slot_state; int /*<<< orphan*/  da_irq_supported; } ;
struct dvb_ca_private {int slot_count; int flags; int delay; int /*<<< orphan*/  open; struct dvb_ca_slot* slot_info; } ;

/* Variables and functions */
 int DVB_CA_EN50221_FLAG_IRQ_CAMCHANGE ; 
 int DVB_CA_EN50221_FLAG_IRQ_DA ; 
#define  DVB_CA_SLOTSTATE_INVALID 135 
#define  DVB_CA_SLOTSTATE_LINKINIT 134 
#define  DVB_CA_SLOTSTATE_NONE 133 
#define  DVB_CA_SLOTSTATE_RUNNING 132 
#define  DVB_CA_SLOTSTATE_UNINITIALISED 131 
#define  DVB_CA_SLOTSTATE_VALIDATE 130 
#define  DVB_CA_SLOTSTATE_WAITFR 129 
#define  DVB_CA_SLOTSTATE_WAITREADY 128 
 int HZ ; 

__attribute__((used)) static void dvb_ca_en50221_thread_update_delay(struct dvb_ca_private *ca)
{
	int delay;
	int curdelay = 100000000;
	int slot;

	/*
	 * Beware of too high polling frequency, because one polling
	 * call might take several hundred milliseconds until timeout!
	 */
	for (slot = 0; slot < ca->slot_count; slot++) {
		struct dvb_ca_slot *sl = &ca->slot_info[slot];

		switch (sl->slot_state) {
		default:
		case DVB_CA_SLOTSTATE_NONE:
			delay = HZ * 60;  /* 60s */
			if (!(ca->flags & DVB_CA_EN50221_FLAG_IRQ_CAMCHANGE))
				delay = HZ * 5;  /* 5s */
			break;
		case DVB_CA_SLOTSTATE_INVALID:
			delay = HZ * 60;  /* 60s */
			if (!(ca->flags & DVB_CA_EN50221_FLAG_IRQ_CAMCHANGE))
				delay = HZ / 10;  /* 100ms */
			break;

		case DVB_CA_SLOTSTATE_UNINITIALISED:
		case DVB_CA_SLOTSTATE_WAITREADY:
		case DVB_CA_SLOTSTATE_VALIDATE:
		case DVB_CA_SLOTSTATE_WAITFR:
		case DVB_CA_SLOTSTATE_LINKINIT:
			delay = HZ / 10;  /* 100ms */
			break;

		case DVB_CA_SLOTSTATE_RUNNING:
			delay = HZ * 60;  /* 60s */
			if (!(ca->flags & DVB_CA_EN50221_FLAG_IRQ_CAMCHANGE))
				delay = HZ / 10;  /* 100ms */
			if (ca->open) {
				if ((!sl->da_irq_supported) ||
				    (!(ca->flags & DVB_CA_EN50221_FLAG_IRQ_DA)))
					delay = HZ / 10;  /* 100ms */
			}
			break;
		}

		if (delay < curdelay)
			curdelay = delay;
	}

	ca->delay = curdelay;
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
          int _len_ca0 = 1;
          struct dvb_ca_private * ca = (struct dvb_ca_private *) malloc(_len_ca0*sizeof(struct dvb_ca_private));
          for(int _i0 = 0; _i0 < _len_ca0; _i0++) {
            ca[_i0].slot_count = ((-2 * (next_i()%2)) + 1) * next_i();
        ca[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        ca[_i0].delay = ((-2 * (next_i()%2)) + 1) * next_i();
        ca[_i0].open = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ca__i0__slot_info0 = 1;
          ca[_i0].slot_info = (struct dvb_ca_slot *) malloc(_len_ca__i0__slot_info0*sizeof(struct dvb_ca_slot));
          for(int _j0 = 0; _j0 < _len_ca__i0__slot_info0; _j0++) {
            ca[_i0].slot_info->slot_state = ((-2 * (next_i()%2)) + 1) * next_i();
        ca[_i0].slot_info->da_irq_supported = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          dvb_ca_en50221_thread_update_delay(ca);
          for(int _aux = 0; _aux < _len_ca0; _aux++) {
          free(ca[_aux].slot_info);
          }
          free(ca);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
