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
struct uart_port {scalar_t__ type; } ;
struct serial_struct {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 
 scalar_t__ PORT_IMX ; 
 scalar_t__ PORT_UNKNOWN ; 

__attribute__((used)) static int mxs_auart_verify_port(struct uart_port *u,
				    struct serial_struct *ser)
{
	if (u->type != PORT_UNKNOWN && u->type != PORT_IMX)
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

    // int-bounds
    case 0:
    {
          int _len_u0 = 1;
          struct uart_port * u = (struct uart_port *) malloc(_len_u0*sizeof(struct uart_port));
          for(int _i0 = 0; _i0 < _len_u0; _i0++) {
            u[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ser0 = 1;
          struct serial_struct * ser = (struct serial_struct *) malloc(_len_ser0*sizeof(struct serial_struct));
          for(int _i0 = 0; _i0 < _len_ser0; _i0++) {
            ser[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mxs_auart_verify_port(u,ser);
          printf("%d\n", benchRet); 
          free(u);
          free(ser);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
