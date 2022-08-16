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
struct vpfe_ipipe_lutdpc {int en; int repl_white; int dpc_size; TYPE_1__* table; } ;
struct TYPE_2__ {scalar_t__ horz_pos; scalar_t__ vert_pos; } ;

/* Variables and functions */
 int EINVAL ; 
 scalar_t__ LUT_DPC_H_POS_MASK ; 
 int LUT_DPC_MAX_SIZE ; 
 scalar_t__ LUT_DPC_V_POS_MASK ; 

__attribute__((used)) static int ipipe_validate_lutdpc_params(struct vpfe_ipipe_lutdpc *lutdpc)
{
	int i;

	if (lutdpc->en > 1 || lutdpc->repl_white > 1 ||
	    lutdpc->dpc_size > LUT_DPC_MAX_SIZE)
		return -EINVAL;

	if (lutdpc->en)
		return -EINVAL;

	for (i = 0; i < lutdpc->dpc_size; i++)
		if (lutdpc->table[i].horz_pos > LUT_DPC_H_POS_MASK ||
		   lutdpc->table[i].vert_pos > LUT_DPC_V_POS_MASK)
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
          int _len_lutdpc0 = 1;
          struct vpfe_ipipe_lutdpc * lutdpc = (struct vpfe_ipipe_lutdpc *) malloc(_len_lutdpc0*sizeof(struct vpfe_ipipe_lutdpc));
          for(int _i0 = 0; _i0 < _len_lutdpc0; _i0++) {
            lutdpc[_i0].en = ((-2 * (next_i()%2)) + 1) * next_i();
        lutdpc[_i0].repl_white = ((-2 * (next_i()%2)) + 1) * next_i();
        lutdpc[_i0].dpc_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_lutdpc__i0__table0 = 1;
          lutdpc[_i0].table = (struct TYPE_2__ *) malloc(_len_lutdpc__i0__table0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_lutdpc__i0__table0; _j0++) {
            lutdpc[_i0].table->horz_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        lutdpc[_i0].table->vert_pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ipipe_validate_lutdpc_params(lutdpc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_lutdpc0; _aux++) {
          free(lutdpc[_aux].table);
          }
          free(lutdpc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
