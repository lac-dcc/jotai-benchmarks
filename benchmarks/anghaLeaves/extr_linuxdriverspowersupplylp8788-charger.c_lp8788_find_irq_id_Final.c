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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct lp8788_charger {int num_irqs; TYPE_1__* irqs; } ;
struct TYPE_2__ {int virq; int which; } ;

/* Variables and functions */

__attribute__((used)) static bool lp8788_find_irq_id(struct lp8788_charger *pchg, int virq, int *id)
{
	bool found = false;
	int i;

	for (i = 0; i < pchg->num_irqs; i++) {
		if (pchg->irqs[i].virq == virq) {
			*id = pchg->irqs[i].which;
			found = true;
			break;
		}
	}

	return found;
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
          int virq = 100;
          int _len_pchg0 = 1;
          struct lp8788_charger * pchg = (struct lp8788_charger *) malloc(_len_pchg0*sizeof(struct lp8788_charger));
          for(int _i0 = 0; _i0 < _len_pchg0; _i0++) {
            pchg[_i0].num_irqs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pchg__i0__irqs0 = 1;
          pchg[_i0].irqs = (struct TYPE_2__ *) malloc(_len_pchg__i0__irqs0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pchg__i0__irqs0; _j0++) {
            pchg[_i0].irqs->virq = ((-2 * (next_i()%2)) + 1) * next_i();
        pchg[_i0].irqs->which = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_id0 = 1;
          int * id = (int *) malloc(_len_id0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_id0; _i0++) {
            id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = lp8788_find_irq_id(pchg,virq,id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pchg0; _aux++) {
          free(pchg[_aux].irqs);
          }
          free(pchg);
          free(id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
