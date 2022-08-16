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
struct ciabase {unsigned char icr_mask; int icr_data; int int_mask; TYPE_1__* cia; } ;
struct TYPE_4__ {int intreq; } ;
struct TYPE_3__ {int icr; } ;

/* Variables and functions */
 unsigned char CIA_ICR_ALL ; 
 unsigned char CIA_ICR_SETCLR ; 
 int IF_SETCLR ; 
 TYPE_2__ amiga_custom ; 

unsigned char cia_able_irq(struct ciabase *base, unsigned char mask)
{
	unsigned char old;

	old = base->icr_mask;
	base->icr_data |= base->cia->icr;
	base->cia->icr = mask;
	if (mask & CIA_ICR_SETCLR)
		base->icr_mask |= mask;
	else
		base->icr_mask &= ~mask;
	base->icr_mask &= CIA_ICR_ALL;
	if (base->icr_data & base->icr_mask)
		amiga_custom.intreq = IF_SETCLR | base->int_mask;
	return old;
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
          unsigned char mask = 100;
          int _len_base0 = 1;
          struct ciabase * base = (struct ciabase *) malloc(_len_base0*sizeof(struct ciabase));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            base[_i0].icr_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        base[_i0].icr_data = ((-2 * (next_i()%2)) + 1) * next_i();
        base[_i0].int_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_base__i0__cia0 = 1;
          base[_i0].cia = (struct TYPE_3__ *) malloc(_len_base__i0__cia0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_base__i0__cia0; _j0++) {
            base[_i0].cia->icr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned char benchRet = cia_able_irq(base,mask);
          printf("%c\n", (benchRet %26) + 'a'); 
          for(int _aux = 0; _aux < _len_base0; _aux++) {
          free(base[_aux].cia);
          }
          free(base);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
