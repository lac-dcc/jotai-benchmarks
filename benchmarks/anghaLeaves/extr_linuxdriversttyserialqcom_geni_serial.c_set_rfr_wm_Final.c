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
struct qcom_geni_serial_port {int /*<<< orphan*/  tx_wm; int /*<<< orphan*/  rx_wm; scalar_t__ rx_fifo_depth; scalar_t__ rx_rfr; } ;

/* Variables and functions */
 int /*<<< orphan*/  DEF_TX_WM ; 
 int /*<<< orphan*/  UART_CONSOLE_RX_WM ; 

__attribute__((used)) static void set_rfr_wm(struct qcom_geni_serial_port *port)
{
	/*
	 * Set RFR (Flow off) to FIFO_DEPTH - 2.
	 * RX WM level at 10% RX_FIFO_DEPTH.
	 * TX WM level at 10% TX_FIFO_DEPTH.
	 */
	port->rx_rfr = port->rx_fifo_depth - 2;
	port->rx_wm = UART_CONSOLE_RX_WM;
	port->tx_wm = DEF_TX_WM;
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
          int _len_port0 = 1;
          struct qcom_geni_serial_port * port = (struct qcom_geni_serial_port *) malloc(_len_port0*sizeof(struct qcom_geni_serial_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].tx_wm = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].rx_wm = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].rx_fifo_depth = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].rx_rfr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_rfr_wm(port);
          free(port);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
