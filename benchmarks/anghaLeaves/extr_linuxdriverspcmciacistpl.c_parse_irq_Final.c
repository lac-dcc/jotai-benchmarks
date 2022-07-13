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
       1            big-arr-10x\n\
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int u_char ;
struct TYPE_3__ {int IRQInfo1; int IRQInfo2; } ;
typedef  TYPE_1__ cistpl_irq_t ;

/* Variables and functions */
 int IRQ_INFO2_VALID ; 

__attribute__((used)) static u_char *parse_irq(u_char *p, u_char *q, cistpl_irq_t *irq)
{
	if (p == q)
		return NULL;
	irq->IRQInfo1 = *p; p++;
	if (irq->IRQInfo1 & IRQ_INFO2_VALID) {
		if (p+2 > q)
			return NULL;
		irq->IRQInfo2 = (p[1]<<8) + p[0];
		p += 2;
	}
	return p;
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
          int _len_p0 = 65025;
          int * p = (int *) malloc(_len_p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_q0 = 65025;
          int * q = (int *) malloc(_len_q0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_irq0 = 65025;
          struct TYPE_3__ * irq = (struct TYPE_3__ *) malloc(_len_irq0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_irq0; _i0++) {
            irq[_i0].IRQInfo1 = ((-2 * (next_i()%2)) + 1) * next_i();
        irq[_i0].IRQInfo2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = parse_irq(p,q,irq);
          printf("%d\n", (*benchRet)); 
          free(p);
          free(q);
          free(irq);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_p0 = 100;
          int * p = (int *) malloc(_len_p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_q0 = 100;
          int * q = (int *) malloc(_len_q0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_irq0 = 100;
          struct TYPE_3__ * irq = (struct TYPE_3__ *) malloc(_len_irq0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_irq0; _i0++) {
            irq[_i0].IRQInfo1 = ((-2 * (next_i()%2)) + 1) * next_i();
        irq[_i0].IRQInfo2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = parse_irq(p,q,irq);
          printf("%d\n", (*benchRet)); 
          free(p);
          free(q);
          free(irq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
