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
struct budget {TYPE_2__* dvb_frontend; scalar_t__ read_fe_status; } ;
struct TYPE_3__ {scalar_t__ read_status; } ;
struct TYPE_4__ {TYPE_1__ ops; } ;

/* Variables and functions */
 scalar_t__ budget_read_fe_status ; 

void ttpci_budget_init_hooks(struct budget *budget)
{
	if (budget->dvb_frontend && !budget->read_fe_status) {
		budget->read_fe_status = budget->dvb_frontend->ops.read_status;
		budget->dvb_frontend->ops.read_status = budget_read_fe_status;
	}
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
          int _len_budget0 = 1;
          struct budget * budget = (struct budget *) malloc(_len_budget0*sizeof(struct budget));
          for(int _i0 = 0; _i0 < _len_budget0; _i0++) {
              int _len_budget__i0__dvb_frontend0 = 1;
          budget[_i0].dvb_frontend = (struct TYPE_4__ *) malloc(_len_budget__i0__dvb_frontend0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_budget__i0__dvb_frontend0; _j0++) {
            budget[_i0].dvb_frontend->ops.read_status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        budget[_i0].read_fe_status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ttpci_budget_init_hooks(budget);
          for(int _aux = 0; _aux < _len_budget0; _aux++) {
          free(budget[_aux].dvb_frontend);
          }
          free(budget);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
