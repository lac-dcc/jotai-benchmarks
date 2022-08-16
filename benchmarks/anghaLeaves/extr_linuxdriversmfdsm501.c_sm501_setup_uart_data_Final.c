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
struct sm501_devdata {int /*<<< orphan*/  irq; TYPE_1__* io_res; scalar_t__ regs; } ;
struct plat_serial8250_port {int flags; int regshift; int uartclk; int /*<<< orphan*/  irq; int /*<<< orphan*/  iotype; scalar_t__ mapbase; scalar_t__ membase; } ;
struct TYPE_2__ {scalar_t__ start; } ;

/* Variables and functions */
 int UPF_BOOT_AUTOCONF ; 
 int UPF_SHARE_IRQ ; 
 int UPF_SKIP_TEST ; 
 int /*<<< orphan*/  UPIO_MEM ; 

__attribute__((used)) static void sm501_setup_uart_data(struct sm501_devdata *sm,
				  struct plat_serial8250_port *uart_data,
				  unsigned int offset)
{
	uart_data->membase = sm->regs + offset;
	uart_data->mapbase = sm->io_res->start + offset;
	uart_data->iotype = UPIO_MEM;
	uart_data->irq = sm->irq;
	uart_data->flags = UPF_BOOT_AUTOCONF | UPF_SKIP_TEST | UPF_SHARE_IRQ;
	uart_data->regshift = 2;
	uart_data->uartclk = (9600 * 16);
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
          unsigned int offset = 100;
          int _len_sm0 = 1;
          struct sm501_devdata * sm = (struct sm501_devdata *) malloc(_len_sm0*sizeof(struct sm501_devdata));
          for(int _i0 = 0; _i0 < _len_sm0; _i0++) {
            sm[_i0].irq = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sm__i0__io_res0 = 1;
          sm[_i0].io_res = (struct TYPE_2__ *) malloc(_len_sm__i0__io_res0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_sm__i0__io_res0; _j0++) {
            sm[_i0].io_res->start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        sm[_i0].regs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_uart_data0 = 1;
          struct plat_serial8250_port * uart_data = (struct plat_serial8250_port *) malloc(_len_uart_data0*sizeof(struct plat_serial8250_port));
          for(int _i0 = 0; _i0 < _len_uart_data0; _i0++) {
            uart_data[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        uart_data[_i0].regshift = ((-2 * (next_i()%2)) + 1) * next_i();
        uart_data[_i0].uartclk = ((-2 * (next_i()%2)) + 1) * next_i();
        uart_data[_i0].irq = ((-2 * (next_i()%2)) + 1) * next_i();
        uart_data[_i0].iotype = ((-2 * (next_i()%2)) + 1) * next_i();
        uart_data[_i0].mapbase = ((-2 * (next_i()%2)) + 1) * next_i();
        uart_data[_i0].membase = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sm501_setup_uart_data(sm,uart_data,offset);
          for(int _aux = 0; _aux < _len_sm0; _aux++) {
          free(sm[_aux].io_res);
          }
          free(sm);
          free(uart_data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
