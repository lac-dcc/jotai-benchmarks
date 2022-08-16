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
struct tty_struct {struct ipoctal_channel* driver_data; } ;
struct serial_icounter_struct {int /*<<< orphan*/  brk; int /*<<< orphan*/  parity; int /*<<< orphan*/  frame; int /*<<< orphan*/  tx; int /*<<< orphan*/  rx; scalar_t__ dcd; scalar_t__ rng; scalar_t__ dsr; scalar_t__ cts; } ;
struct TYPE_2__ {int /*<<< orphan*/  rcv_break; int /*<<< orphan*/  parity_err; int /*<<< orphan*/  framing_err; int /*<<< orphan*/  tx; int /*<<< orphan*/  rx; } ;
struct ipoctal_channel {TYPE_1__ stats; } ;

/* Variables and functions */

__attribute__((used)) static int ipoctal_get_icount(struct tty_struct *tty,
			      struct serial_icounter_struct *icount)
{
	struct ipoctal_channel *channel = tty->driver_data;

	icount->cts = 0;
	icount->dsr = 0;
	icount->rng = 0;
	icount->dcd = 0;
	icount->rx = channel->stats.rx;
	icount->tx = channel->stats.tx;
	icount->frame = channel->stats.framing_err;
	icount->parity = channel->stats.parity_err;
	icount->brk = channel->stats.rcv_break;
	return 0;
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
          int _len_tty0 = 1;
          struct tty_struct * tty = (struct tty_struct *) malloc(_len_tty0*sizeof(struct tty_struct));
          for(int _i0 = 0; _i0 < _len_tty0; _i0++) {
              int _len_tty__i0__driver_data0 = 1;
          tty[_i0].driver_data = (struct ipoctal_channel *) malloc(_len_tty__i0__driver_data0*sizeof(struct ipoctal_channel));
          for(int _j0 = 0; _j0 < _len_tty__i0__driver_data0; _j0++) {
            tty[_i0].driver_data->stats.rcv_break = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].driver_data->stats.parity_err = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].driver_data->stats.framing_err = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].driver_data->stats.tx = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].driver_data->stats.rx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_icount0 = 1;
          struct serial_icounter_struct * icount = (struct serial_icounter_struct *) malloc(_len_icount0*sizeof(struct serial_icounter_struct));
          for(int _i0 = 0; _i0 < _len_icount0; _i0++) {
            icount[_i0].brk = ((-2 * (next_i()%2)) + 1) * next_i();
        icount[_i0].parity = ((-2 * (next_i()%2)) + 1) * next_i();
        icount[_i0].frame = ((-2 * (next_i()%2)) + 1) * next_i();
        icount[_i0].tx = ((-2 * (next_i()%2)) + 1) * next_i();
        icount[_i0].rx = ((-2 * (next_i()%2)) + 1) * next_i();
        icount[_i0].dcd = ((-2 * (next_i()%2)) + 1) * next_i();
        icount[_i0].rng = ((-2 * (next_i()%2)) + 1) * next_i();
        icount[_i0].dsr = ((-2 * (next_i()%2)) + 1) * next_i();
        icount[_i0].cts = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ipoctal_get_icount(tty,icount);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tty0; _aux++) {
          free(tty[_aux].driver_data);
          }
          free(tty);
          free(icount);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
