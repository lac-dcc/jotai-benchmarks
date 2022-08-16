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
struct i2c_child_t {int total_chnls; int /*<<< orphan*/ * mon_type; TYPE_1__* chnl_array; int /*<<< orphan*/  voltage_mask; } ;
struct TYPE_2__ {size_t chnl_no; } ;

/* Variables and functions */
 int /*<<< orphan*/  ENVCTRL_VOLTAGESTAT_MON ; 
 int /*<<< orphan*/ * chnls_mask ; 

__attribute__((used)) static void envctrl_init_voltage_status(struct i2c_child_t *pchild)
{
	int i;

	/* Go through all channels and set up the mask. */
	for (i = 0; i < pchild->total_chnls; i++)
		pchild->voltage_mask |= chnls_mask[(pchild->chnl_array[i]).chnl_no];

	/* We only need to know if this child has voltage status monitored.
	 * We don't care which channels since we have the mask already.
	 */
	pchild->mon_type[0] = ENVCTRL_VOLTAGESTAT_MON;
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
          int _len_pchild0 = 1;
          struct i2c_child_t * pchild = (struct i2c_child_t *) malloc(_len_pchild0*sizeof(struct i2c_child_t));
          for(int _i0 = 0; _i0 < _len_pchild0; _i0++) {
            pchild[_i0].total_chnls = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pchild__i0__mon_type0 = 1;
          pchild[_i0].mon_type = (int *) malloc(_len_pchild__i0__mon_type0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pchild__i0__mon_type0; _j0++) {
            pchild[_i0].mon_type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pchild__i0__chnl_array0 = 1;
          pchild[_i0].chnl_array = (struct TYPE_2__ *) malloc(_len_pchild__i0__chnl_array0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pchild__i0__chnl_array0; _j0++) {
            pchild[_i0].chnl_array->chnl_no = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pchild[_i0].voltage_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          envctrl_init_voltage_status(pchild);
          for(int _aux = 0; _aux < _len_pchild0; _aux++) {
          free(pchild[_aux].mon_type);
          }
          for(int _aux = 0; _aux < _len_pchild0; _aux++) {
          free(pchild[_aux].chnl_array);
          }
          free(pchild);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
