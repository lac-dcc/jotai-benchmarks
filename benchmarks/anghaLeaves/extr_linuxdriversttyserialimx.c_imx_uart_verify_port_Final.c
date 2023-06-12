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
       0            big-arr\n\
       1            big-arr-10x\n\
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
struct uart_port {int dummy; } ;
struct serial_struct {scalar_t__ type; scalar_t__ irq; scalar_t__ io_type; int baud_base; scalar_t__ port; scalar_t__ hub6; scalar_t__ iomem_base; } ;
struct TYPE_2__ {scalar_t__ irq; int uartclk; unsigned long mapbase; scalar_t__ iobase; } ;
struct imx_port {TYPE_1__ port; } ;

/* Variables and functions */
 int EINVAL ; 
 scalar_t__ PORT_IMX ; 
 scalar_t__ PORT_UNKNOWN ; 
 scalar_t__ UPIO_MEM ; 

__attribute__((used)) static int
imx_uart_verify_port(struct uart_port *port, struct serial_struct *ser)
{
	struct imx_port *sport = (struct imx_port *)port;
	int ret = 0;

	if (ser->type != PORT_UNKNOWN && ser->type != PORT_IMX)
		ret = -EINVAL;
	if (sport->port.irq != ser->irq)
		ret = -EINVAL;
	if (ser->io_type != UPIO_MEM)
		ret = -EINVAL;
	if (sport->port.uartclk / 16 != ser->baud_base)
		ret = -EINVAL;
	if (sport->port.mapbase != (unsigned long)ser->iomem_base)
		ret = -EINVAL;
	if (sport->port.iobase != ser->port)
		ret = -EINVAL;
	if (ser->hub6 != 0)
		ret = -EINVAL;
	return ret;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 69
          // dynamic_instructions_O0 : 69
          // ------------------------------- 
          // static_instructions_O1 : 34
          // dynamic_instructions_O1 : 34
          // ------------------------------- 
          // static_instructions_O2 : 34
          // dynamic_instructions_O2 : 34
          // ------------------------------- 
          // static_instructions_O3 : 34
          // dynamic_instructions_O3 : 34
          // ------------------------------- 
          // static_instructions_Ofast : 34
          // dynamic_instructions_Ofast : 34
          // ------------------------------- 
          // static_instructions_Os : 34
          // dynamic_instructions_Os : 34
          // ------------------------------- 
          // static_instructions_Oz : 35
          // dynamic_instructions_Oz : 35
          // ------------------------------- 

          int _len_port0 = 65025;
          struct uart_port * port = (struct uart_port *) malloc(_len_port0*sizeof(struct uart_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
              port[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_ser0 = 65025;
          struct serial_struct * ser = (struct serial_struct *) malloc(_len_ser0*sizeof(struct serial_struct));
          for(int _i0 = 0; _i0 < _len_ser0; _i0++) {
              ser[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          ser[_i0].irq = ((-2 * (next_i()%2)) + 1) * next_i();
          ser[_i0].io_type = ((-2 * (next_i()%2)) + 1) * next_i();
          ser[_i0].baud_base = ((-2 * (next_i()%2)) + 1) * next_i();
          ser[_i0].port = ((-2 * (next_i()%2)) + 1) * next_i();
          ser[_i0].hub6 = ((-2 * (next_i()%2)) + 1) * next_i();
          ser[_i0].iomem_base = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = imx_uart_verify_port(port,ser);
          printf("%d\n", benchRet); 
          free(port);
          free(ser);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 69
          // dynamic_instructions_O0 : 69
          // ------------------------------- 
          // static_instructions_O1 : 34
          // dynamic_instructions_O1 : 34
          // ------------------------------- 
          // static_instructions_O2 : 34
          // dynamic_instructions_O2 : 34
          // ------------------------------- 
          // static_instructions_O3 : 34
          // dynamic_instructions_O3 : 34
          // ------------------------------- 
          // static_instructions_Ofast : 34
          // dynamic_instructions_Ofast : 34
          // ------------------------------- 
          // static_instructions_Os : 34
          // dynamic_instructions_Os : 34
          // ------------------------------- 
          // static_instructions_Oz : 35
          // dynamic_instructions_Oz : 35
          // ------------------------------- 

          int _len_port0 = 100;
          struct uart_port * port = (struct uart_port *) malloc(_len_port0*sizeof(struct uart_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
              port[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_ser0 = 100;
          struct serial_struct * ser = (struct serial_struct *) malloc(_len_ser0*sizeof(struct serial_struct));
          for(int _i0 = 0; _i0 < _len_ser0; _i0++) {
              ser[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          ser[_i0].irq = ((-2 * (next_i()%2)) + 1) * next_i();
          ser[_i0].io_type = ((-2 * (next_i()%2)) + 1) * next_i();
          ser[_i0].baud_base = ((-2 * (next_i()%2)) + 1) * next_i();
          ser[_i0].port = ((-2 * (next_i()%2)) + 1) * next_i();
          ser[_i0].hub6 = ((-2 * (next_i()%2)) + 1) * next_i();
          ser[_i0].iomem_base = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = imx_uart_verify_port(port,ser);
          printf("%d\n", benchRet); 
          free(port);
          free(ser);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
