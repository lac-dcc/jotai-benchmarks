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
struct uart_port {struct dw8250_data* private_data; } ;
struct dw8250_data {int msr_mask_on; int msr_mask_off; } ;

/* Variables and functions */
 int UART_MSR ; 

__attribute__((used)) static inline int dw8250_modify_msr(struct uart_port *p, int offset, int value)
{
	struct dw8250_data *d = p->private_data;

	/* Override any modem control signals if needed */
	if (offset == UART_MSR) {
		value |= d->msr_mask_on;
		value &= ~d->msr_mask_off;
	}

	return value;
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
          int offset = 100;
          int value = 100;
          int _len_p0 = 1;
          struct uart_port * p = (struct uart_port *) malloc(_len_p0*sizeof(struct uart_port));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__private_data0 = 1;
          p[_i0].private_data = (struct dw8250_data *) malloc(_len_p__i0__private_data0*sizeof(struct dw8250_data));
          for(int _j0 = 0; _j0 < _len_p__i0__private_data0; _j0++) {
            p[_i0].private_data->msr_mask_on = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].private_data->msr_mask_off = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = dw8250_modify_msr(p,offset,value);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].private_data);
          }
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
