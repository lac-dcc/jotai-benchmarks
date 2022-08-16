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
struct vpfe_ipipe_3d_lut {TYPE_1__* table; int /*<<< orphan*/  en; } ;
struct TYPE_2__ {scalar_t__ r; scalar_t__ g; scalar_t__ b; } ;

/* Variables and functions */
 scalar_t__ D3_LUT_ENTRY_MASK ; 
 int EINVAL ; 
 int VPFE_IPIPE_MAX_SIZE_3D_LUT ; 

__attribute__((used)) static int ipipe_validate_3d_lut_params(struct vpfe_ipipe_3d_lut *lut)
{
	int i;

	if (!lut->en)
		return 0;

	for (i = 0; i < VPFE_IPIPE_MAX_SIZE_3D_LUT; i++)
		if (lut->table[i].r > D3_LUT_ENTRY_MASK ||
		    lut->table[i].g > D3_LUT_ENTRY_MASK ||
		    lut->table[i].b > D3_LUT_ENTRY_MASK)
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
          int _len_lut0 = 1;
          struct vpfe_ipipe_3d_lut * lut = (struct vpfe_ipipe_3d_lut *) malloc(_len_lut0*sizeof(struct vpfe_ipipe_3d_lut));
          for(int _i0 = 0; _i0 < _len_lut0; _i0++) {
              int _len_lut__i0__table0 = 1;
          lut[_i0].table = (struct TYPE_2__ *) malloc(_len_lut__i0__table0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_lut__i0__table0; _j0++) {
            lut[_i0].table->r = ((-2 * (next_i()%2)) + 1) * next_i();
        lut[_i0].table->g = ((-2 * (next_i()%2)) + 1) * next_i();
        lut[_i0].table->b = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        lut[_i0].en = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ipipe_validate_3d_lut_params(lut);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_lut0; _aux++) {
          free(lut[_aux].table);
          }
          free(lut);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
