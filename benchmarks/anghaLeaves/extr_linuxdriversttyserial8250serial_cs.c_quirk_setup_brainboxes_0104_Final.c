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
struct TYPE_2__ {int uartclk; } ;
struct uart_8250_port {TYPE_1__ port; } ;
struct pcmcia_device {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void quirk_setup_brainboxes_0104(struct pcmcia_device *link, struct uart_8250_port *uart)
{
	uart->port.uartclk = 14745600;
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
          int _len_link0 = 1;
          struct pcmcia_device * link = (struct pcmcia_device *) malloc(_len_link0*sizeof(struct pcmcia_device));
          for(int _i0 = 0; _i0 < _len_link0; _i0++) {
            link[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_uart0 = 1;
          struct uart_8250_port * uart = (struct uart_8250_port *) malloc(_len_uart0*sizeof(struct uart_8250_port));
          for(int _i0 = 0; _i0 < _len_uart0; _i0++) {
            uart[_i0].port.uartclk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          quirk_setup_brainboxes_0104(link,uart);
          free(link);
          free(uart);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
