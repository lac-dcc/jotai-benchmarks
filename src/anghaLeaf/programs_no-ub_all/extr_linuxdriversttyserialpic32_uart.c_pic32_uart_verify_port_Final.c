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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct uart_port {scalar_t__ type; scalar_t__ irq; scalar_t__ iotype; unsigned long mapbase; } ;
struct serial_struct {scalar_t__ irq; scalar_t__ io_type; scalar_t__ iomem_base; } ;

/* Variables and functions */
 int EINVAL ; 
 scalar_t__ PORT_PIC32 ; 

__attribute__((used)) static int pic32_uart_verify_port(struct uart_port *port,
				  struct serial_struct *serinfo)
{
	if (port->type != PORT_PIC32)
		return -EINVAL;
	if (port->irq != serinfo->irq)
		return -EINVAL;
	if (port->iotype != serinfo->io_type)
		return -EINVAL;
	if (port->mapbase != (unsigned long)serinfo->iomem_base)
		return -EINVAL;

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

    // big-arr
    case 0:
    {
          int _len_port0 = 1;
          struct uart_port * port = (struct uart_port *) malloc(_len_port0*sizeof(struct uart_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port->type = ((-2 * (next_i()%2)) + 1) * next_i();
        port->irq = ((-2 * (next_i()%2)) + 1) * next_i();
        port->iotype = ((-2 * (next_i()%2)) + 1) * next_i();
        port->mapbase = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_serinfo0 = 1;
          struct serial_struct * serinfo = (struct serial_struct *) malloc(_len_serinfo0*sizeof(struct serial_struct));
          for(int _i0 = 0; _i0 < _len_serinfo0; _i0++) {
            serinfo->irq = ((-2 * (next_i()%2)) + 1) * next_i();
        serinfo->io_type = ((-2 * (next_i()%2)) + 1) * next_i();
        serinfo->iomem_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pic32_uart_verify_port(port,serinfo);
          printf("%d\n", benchRet); 
          free(port);
          free(serinfo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
