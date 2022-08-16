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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int /*<<< orphan*/  puint_mb_R; } ;
struct spu_state {TYPE_3__ priv2; TYPE_2__* lscsa; } ;
struct spu {int dummy; } ;
struct TYPE_4__ {int /*<<< orphan*/ * slot; } ;
struct TYPE_5__ {TYPE_1__ ppuint_mb; } ;

/* Variables and functions */

__attribute__((used)) static inline void setup_ppuint_mb(struct spu_state *csa, struct spu *spu)
{
	/* Restore, Step 36:
	 *     Copy the CSA.PUINT_MB data into the LSCSA.
	 */
	csa->lscsa->ppuint_mb.slot[0] = csa->priv2.puint_mb_R;
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
          int _len_csa0 = 1;
          struct spu_state * csa = (struct spu_state *) malloc(_len_csa0*sizeof(struct spu_state));
          for(int _i0 = 0; _i0 < _len_csa0; _i0++) {
            csa[_i0].priv2.puint_mb_R = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_csa__i0__lscsa0 = 1;
          csa[_i0].lscsa = (struct TYPE_5__ *) malloc(_len_csa__i0__lscsa0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_csa__i0__lscsa0; _j0++) {
              int _len_csa__i0__lscsa_ppuint_mb_slot0 = 1;
          csa[_i0].lscsa->ppuint_mb.slot = (int *) malloc(_len_csa__i0__lscsa_ppuint_mb_slot0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_csa__i0__lscsa_ppuint_mb_slot0; _j0++) {
            csa[_i0].lscsa->ppuint_mb.slot[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_spu0 = 1;
          struct spu * spu = (struct spu *) malloc(_len_spu0*sizeof(struct spu));
          for(int _i0 = 0; _i0 < _len_spu0; _i0++) {
            spu[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          setup_ppuint_mb(csa,spu);
          for(int _aux = 0; _aux < _len_csa0; _aux++) {
          free(csa[_aux].lscsa);
          }
          free(csa);
          free(spu);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
