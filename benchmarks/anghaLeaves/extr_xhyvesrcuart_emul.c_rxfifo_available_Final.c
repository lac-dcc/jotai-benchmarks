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
struct fifo {scalar_t__ num; scalar_t__ size; } ;
struct uart_softc {struct fifo rxfifo; } ;

/* Variables and functions */

__attribute__((used)) static int
rxfifo_available(struct uart_softc *sc)
{
	struct fifo *fifo;

	fifo = &sc->rxfifo;
	return (fifo->num < fifo->size);
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
          int _len_sc0 = 1;
          struct uart_softc * sc = (struct uart_softc *) malloc(_len_sc0*sizeof(struct uart_softc));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
            sc[_i0].rxfifo.num = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].rxfifo.size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rxfifo_available(sc);
          printf("%d\n", benchRet); 
          free(sc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
