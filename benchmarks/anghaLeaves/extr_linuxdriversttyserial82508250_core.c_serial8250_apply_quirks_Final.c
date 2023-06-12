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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int /*<<< orphan*/  quirks; } ;
struct uart_8250_port {TYPE_1__ port; } ;

/* Variables and functions */
 int /*<<< orphan*/  UPQ_NO_TXEN_TEST ; 
 scalar_t__ skip_txen_test ; 

__attribute__((used)) static inline void serial8250_apply_quirks(struct uart_8250_port *up)
{
	up->port.quirks |= skip_txen_test ? UPQ_NO_TXEN_TEST : 0;
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
          int _len_up0 = 65025;
          struct uart_8250_port * up = (struct uart_8250_port *) malloc(_len_up0*sizeof(struct uart_8250_port));
          for(int _i0 = 0; _i0 < _len_up0; _i0++) {
              up[_i0].port.quirks = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          serial8250_apply_quirks(up);
          free(up);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_up0 = 100;
          struct uart_8250_port * up = (struct uart_8250_port *) malloc(_len_up0*sizeof(struct uart_8250_port));
          for(int _i0 = 0; _i0 < _len_up0; _i0++) {
              up[_i0].port.quirks = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          serial8250_apply_quirks(up);
          free(up);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_up0 = 1;
          struct uart_8250_port * up = (struct uart_8250_port *) malloc(_len_up0*sizeof(struct uart_8250_port));
          for(int _i0 = 0; _i0 < _len_up0; _i0++) {
              up[_i0].port.quirks = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          serial8250_apply_quirks(up);
          free(up);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
