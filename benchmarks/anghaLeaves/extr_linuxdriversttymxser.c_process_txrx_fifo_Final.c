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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct mxser_port {scalar_t__ type; int rx_trigger; int rx_high_water; int rx_low_water; int xmit_fifo_size; TYPE_1__* board; } ;
struct TYPE_4__ {scalar_t__ type; int rx_trigger; int rx_low_water; int rx_high_water; int xmit_fifo_size; } ;
struct TYPE_3__ {scalar_t__ chip_flag; } ;

/* Variables and functions */
 TYPE_2__* Gpci_uart_info ; 
 scalar_t__ PORT_16450 ; 
 scalar_t__ PORT_8250 ; 
 int UART_INFO_NUM ; 

__attribute__((used)) static void process_txrx_fifo(struct mxser_port *info)
{
	int i;

	if ((info->type == PORT_16450) || (info->type == PORT_8250)) {
		info->rx_trigger = 1;
		info->rx_high_water = 1;
		info->rx_low_water = 1;
		info->xmit_fifo_size = 1;
	} else
		for (i = 0; i < UART_INFO_NUM; i++)
			if (info->board->chip_flag == Gpci_uart_info[i].type) {
				info->rx_trigger = Gpci_uart_info[i].rx_trigger;
				info->rx_low_water = Gpci_uart_info[i].rx_low_water;
				info->rx_high_water = Gpci_uart_info[i].rx_high_water;
				info->xmit_fifo_size = Gpci_uart_info[i].xmit_fifo_size;
				break;
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
          int _len_info0 = 1;
          struct mxser_port * info = (struct mxser_port *) malloc(_len_info0*sizeof(struct mxser_port));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].rx_trigger = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].rx_high_water = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].rx_low_water = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].xmit_fifo_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__board0 = 1;
          info[_i0].board = (struct TYPE_3__ *) malloc(_len_info__i0__board0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_info__i0__board0; _j0++) {
            info[_i0].board->chip_flag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          process_txrx_fifo(info);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].board);
          }
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
