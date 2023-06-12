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
       2            empty\n\
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
struct uart_port {scalar_t__ type; scalar_t__ irq; scalar_t__ iotype; unsigned long mapbase; } ;
struct serial_struct {scalar_t__ irq; scalar_t__ io_type; scalar_t__ iomem_base; } ;

/* Variables and functions */
 int EINVAL ; 
 scalar_t__ PORT_VR41XX_DSIU ; 
 scalar_t__ PORT_VR41XX_SIU ; 

__attribute__((used)) static int siu_verify_port(struct uart_port *port, struct serial_struct *serial)
{
	if (port->type != PORT_VR41XX_SIU && port->type != PORT_VR41XX_DSIU)
		return -EINVAL;
	if (port->irq != serial->irq)
		return -EINVAL;
	if (port->iotype != serial->io_type)
		return -EINVAL;
	if (port->mapbase != (unsigned long)serial->iomem_base)
		return -EINVAL;

	return 0;
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
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_port0 = 65025;
          struct uart_port * port = (struct uart_port *) malloc(_len_port0*sizeof(struct uart_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
              port[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          port[_i0].irq = ((-2 * (next_i()%2)) + 1) * next_i();
          port[_i0].iotype = ((-2 * (next_i()%2)) + 1) * next_i();
          port[_i0].mapbase = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_serial0 = 65025;
          struct serial_struct * serial = (struct serial_struct *) malloc(_len_serial0*sizeof(struct serial_struct));
          for(int _i0 = 0; _i0 < _len_serial0; _i0++) {
              serial[_i0].irq = ((-2 * (next_i()%2)) + 1) * next_i();
          serial[_i0].io_type = ((-2 * (next_i()%2)) + 1) * next_i();
          serial[_i0].iomem_base = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = siu_verify_port(port,serial);
          printf("%d\n", benchRet); 
          free(port);
          free(serial);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_port0 = 100;
          struct uart_port * port = (struct uart_port *) malloc(_len_port0*sizeof(struct uart_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
              port[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          port[_i0].irq = ((-2 * (next_i()%2)) + 1) * next_i();
          port[_i0].iotype = ((-2 * (next_i()%2)) + 1) * next_i();
          port[_i0].mapbase = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_serial0 = 100;
          struct serial_struct * serial = (struct serial_struct *) malloc(_len_serial0*sizeof(struct serial_struct));
          for(int _i0 = 0; _i0 < _len_serial0; _i0++) {
              serial[_i0].irq = ((-2 * (next_i()%2)) + 1) * next_i();
          serial[_i0].io_type = ((-2 * (next_i()%2)) + 1) * next_i();
          serial[_i0].iomem_base = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = siu_verify_port(port,serial);
          printf("%d\n", benchRet); 
          free(port);
          free(serial);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_port0 = 1;
          struct uart_port * port = (struct uart_port *) malloc(_len_port0*sizeof(struct uart_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
              port[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          port[_i0].irq = ((-2 * (next_i()%2)) + 1) * next_i();
          port[_i0].iotype = ((-2 * (next_i()%2)) + 1) * next_i();
          port[_i0].mapbase = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_serial0 = 1;
          struct serial_struct * serial = (struct serial_struct *) malloc(_len_serial0*sizeof(struct serial_struct));
          for(int _i0 = 0; _i0 < _len_serial0; _i0++) {
              serial[_i0].irq = ((-2 * (next_i()%2)) + 1) * next_i();
          serial[_i0].io_type = ((-2 * (next_i()%2)) + 1) * next_i();
          serial[_i0].iomem_base = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = siu_verify_port(port,serial);
          printf("%d\n", benchRet); 
          free(port);
          free(serial);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
