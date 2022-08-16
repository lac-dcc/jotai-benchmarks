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
typedef  scalar_t__ u32 ;
struct vpfe_ipipe_gbce {scalar_t__ type; scalar_t__* table; int /*<<< orphan*/  en; } ;

/* Variables and functions */
 int EINVAL ; 
 scalar_t__ GBCE_GAIN_VAL_MASK ; 
 scalar_t__ GBCE_Y_VAL_MASK ; 
 scalar_t__ VPFE_IPIPE_GBCE_GAIN_TBL ; 
 int VPFE_IPIPE_MAX_SIZE_GBCE_LUT ; 

__attribute__((used)) static int ipipe_validate_gbce_params(struct vpfe_ipipe_gbce *gbce)
{
	u32 max = GBCE_Y_VAL_MASK;
	int i;

	if (!gbce->en)
		return 0;

	if (gbce->type == VPFE_IPIPE_GBCE_GAIN_TBL)
		max = GBCE_GAIN_VAL_MASK;

	for (i = 0; i < VPFE_IPIPE_MAX_SIZE_GBCE_LUT; i++)
		if (gbce->table[i] > max)
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
          int _len_gbce0 = 1;
          struct vpfe_ipipe_gbce * gbce = (struct vpfe_ipipe_gbce *) malloc(_len_gbce0*sizeof(struct vpfe_ipipe_gbce));
          for(int _i0 = 0; _i0 < _len_gbce0; _i0++) {
            gbce[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_gbce__i0__table0 = 1;
          gbce[_i0].table = (long *) malloc(_len_gbce__i0__table0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_gbce__i0__table0; _j0++) {
            gbce[_i0].table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        gbce[_i0].en = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ipipe_validate_gbce_params(gbce);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_gbce0; _aux++) {
          free(gbce[_aux].table);
          }
          free(gbce);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
