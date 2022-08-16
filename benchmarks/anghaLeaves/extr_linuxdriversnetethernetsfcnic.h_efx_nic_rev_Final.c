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
struct efx_nic {TYPE_1__* type; } ;
struct TYPE_2__ {int revision; } ;

/* Variables and functions */

__attribute__((used)) static inline int efx_nic_rev(struct efx_nic *efx)
{
	return efx->type->revision;
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
          int _len_efx0 = 1;
          struct efx_nic * efx = (struct efx_nic *) malloc(_len_efx0*sizeof(struct efx_nic));
          for(int _i0 = 0; _i0 < _len_efx0; _i0++) {
              int _len_efx__i0__type0 = 1;
          efx[_i0].type = (struct TYPE_2__ *) malloc(_len_efx__i0__type0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_efx__i0__type0; _j0++) {
            efx[_i0].type->revision = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = efx_nic_rev(efx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_efx0; _aux++) {
          free(efx[_aux].type);
          }
          free(efx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
