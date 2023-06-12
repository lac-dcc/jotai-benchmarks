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
struct uart_port {int iotype; int /*<<< orphan*/  mapbase; int /*<<< orphan*/  hub6; int /*<<< orphan*/  iobase; } ;

/* Variables and functions */
#define  UPIO_AU 135 
#define  UPIO_HUB6 134 
#define  UPIO_MEM 133 
#define  UPIO_MEM16 132 
#define  UPIO_MEM32 131 
#define  UPIO_MEM32BE 130 
#define  UPIO_PORT 129 
#define  UPIO_TSI 128 

int uart_match_port(struct uart_port *port1, struct uart_port *port2)
{
	if (port1->iotype != port2->iotype)
		return 0;

	switch (port1->iotype) {
	case UPIO_PORT:
		return (port1->iobase == port2->iobase);
	case UPIO_HUB6:
		return (port1->iobase == port2->iobase) &&
		       (port1->hub6   == port2->hub6);
	case UPIO_MEM:
	case UPIO_MEM16:
	case UPIO_MEM32:
	case UPIO_MEM32BE:
	case UPIO_AU:
	case UPIO_TSI:
		return (port1->mapbase == port2->mapbase);
	}
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
          // static_instructions_O0 : 36
          // dynamic_instructions_O0 : 36
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int _len_port10 = 65025;
          struct uart_port * port1 = (struct uart_port *) malloc(_len_port10*sizeof(struct uart_port));
          for(int _i0 = 0; _i0 < _len_port10; _i0++) {
              port1[_i0].iotype = ((-2 * (next_i()%2)) + 1) * next_i();
          port1[_i0].mapbase = ((-2 * (next_i()%2)) + 1) * next_i();
          port1[_i0].hub6 = ((-2 * (next_i()%2)) + 1) * next_i();
          port1[_i0].iobase = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_port20 = 65025;
          struct uart_port * port2 = (struct uart_port *) malloc(_len_port20*sizeof(struct uart_port));
          for(int _i0 = 0; _i0 < _len_port20; _i0++) {
              port2[_i0].iotype = ((-2 * (next_i()%2)) + 1) * next_i();
          port2[_i0].mapbase = ((-2 * (next_i()%2)) + 1) * next_i();
          port2[_i0].hub6 = ((-2 * (next_i()%2)) + 1) * next_i();
          port2[_i0].iobase = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = uart_match_port(port1,port2);
          printf("%d\n", benchRet); 
          free(port1);
          free(port2);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 36
          // dynamic_instructions_O0 : 36
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int _len_port10 = 100;
          struct uart_port * port1 = (struct uart_port *) malloc(_len_port10*sizeof(struct uart_port));
          for(int _i0 = 0; _i0 < _len_port10; _i0++) {
              port1[_i0].iotype = ((-2 * (next_i()%2)) + 1) * next_i();
          port1[_i0].mapbase = ((-2 * (next_i()%2)) + 1) * next_i();
          port1[_i0].hub6 = ((-2 * (next_i()%2)) + 1) * next_i();
          port1[_i0].iobase = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_port20 = 100;
          struct uart_port * port2 = (struct uart_port *) malloc(_len_port20*sizeof(struct uart_port));
          for(int _i0 = 0; _i0 < _len_port20; _i0++) {
              port2[_i0].iotype = ((-2 * (next_i()%2)) + 1) * next_i();
          port2[_i0].mapbase = ((-2 * (next_i()%2)) + 1) * next_i();
          port2[_i0].hub6 = ((-2 * (next_i()%2)) + 1) * next_i();
          port2[_i0].iobase = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = uart_match_port(port1,port2);
          printf("%d\n", benchRet); 
          free(port1);
          free(port2);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 36
          // dynamic_instructions_O0 : 36
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int _len_port10 = 1;
          struct uart_port * port1 = (struct uart_port *) malloc(_len_port10*sizeof(struct uart_port));
          for(int _i0 = 0; _i0 < _len_port10; _i0++) {
              port1[_i0].iotype = ((-2 * (next_i()%2)) + 1) * next_i();
          port1[_i0].mapbase = ((-2 * (next_i()%2)) + 1) * next_i();
          port1[_i0].hub6 = ((-2 * (next_i()%2)) + 1) * next_i();
          port1[_i0].iobase = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_port20 = 1;
          struct uart_port * port2 = (struct uart_port *) malloc(_len_port20*sizeof(struct uart_port));
          for(int _i0 = 0; _i0 < _len_port20; _i0++) {
              port2[_i0].iotype = ((-2 * (next_i()%2)) + 1) * next_i();
          port2[_i0].mapbase = ((-2 * (next_i()%2)) + 1) * next_i();
          port2[_i0].hub6 = ((-2 * (next_i()%2)) + 1) * next_i();
          port2[_i0].iobase = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = uart_match_port(port1,port2);
          printf("%d\n", benchRet); 
          free(port1);
          free(port2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
