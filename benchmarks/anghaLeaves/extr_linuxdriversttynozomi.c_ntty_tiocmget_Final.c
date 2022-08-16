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
struct tty_struct {struct port* driver_data; } ;
struct ctrl_ul {scalar_t__ DTR; scalar_t__ RTS; } ;
struct ctrl_dl {scalar_t__ CTS; scalar_t__ DSR; scalar_t__ RI; scalar_t__ DCD; } ;
struct port {struct ctrl_ul ctrl_ul; struct ctrl_dl ctrl_dl; } ;

/* Variables and functions */
 int TIOCM_CAR ; 
 int TIOCM_CTS ; 
 int TIOCM_DSR ; 
 int TIOCM_DTR ; 
 int TIOCM_RNG ; 
 int TIOCM_RTS ; 

__attribute__((used)) static int ntty_tiocmget(struct tty_struct *tty)
{
	const struct port *port = tty->driver_data;
	const struct ctrl_dl *ctrl_dl = &port->ctrl_dl;
	const struct ctrl_ul *ctrl_ul = &port->ctrl_ul;

	/* Note: these could change under us but it is not clear this
	   matters if so */
	return (ctrl_ul->RTS ? TIOCM_RTS : 0)
		| (ctrl_ul->DTR ? TIOCM_DTR : 0)
		| (ctrl_dl->DCD ? TIOCM_CAR : 0)
		| (ctrl_dl->RI  ? TIOCM_RNG : 0)
		| (ctrl_dl->DSR ? TIOCM_DSR : 0)
		| (ctrl_dl->CTS ? TIOCM_CTS : 0);
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
          tty[_i0].driver_data = (struct port *) malloc(_len_tty__i0__driver_data0*sizeof(struct port));
          for(int _j0 = 0; _j0 < _len_tty__i0__driver_data0; _j0++) {
            tty[_i0].driver_data->ctrl_ul.DTR = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].driver_data->ctrl_ul.RTS = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].driver_data->ctrl_dl.CTS = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].driver_data->ctrl_dl.DSR = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].driver_data->ctrl_dl.RI = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].driver_data->ctrl_dl.DCD = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ntty_tiocmget(tty);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tty0; _aux++) {
          free(tty[_aux].driver_data);
          }
          free(tty);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
