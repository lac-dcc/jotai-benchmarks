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
struct lowpan_nhc {int /*<<< orphan*/ * idmask; int /*<<< orphan*/ * id; } ;

/* Variables and functions */
 int /*<<< orphan*/  LOWPAN_NHC_DEST_ID_0 ; 
 int /*<<< orphan*/  LOWPAN_NHC_DEST_MASK_0 ; 

__attribute__((used)) static void dest_nhid_setup(struct lowpan_nhc *nhc)
{
	nhc->id[0] = LOWPAN_NHC_DEST_ID_0;
	nhc->idmask[0] = LOWPAN_NHC_DEST_MASK_0;
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
          int _len_nhc0 = 1;
          struct lowpan_nhc * nhc = (struct lowpan_nhc *) malloc(_len_nhc0*sizeof(struct lowpan_nhc));
          for(int _i0 = 0; _i0 < _len_nhc0; _i0++) {
              int _len_nhc__i0__idmask0 = 1;
          nhc[_i0].idmask = (int *) malloc(_len_nhc__i0__idmask0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_nhc__i0__idmask0; _j0++) {
            nhc[_i0].idmask[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nhc__i0__id0 = 1;
          nhc[_i0].id = (int *) malloc(_len_nhc__i0__id0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_nhc__i0__id0; _j0++) {
            nhc[_i0].id[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          dest_nhid_setup(nhc);
          for(int _aux = 0; _aux < _len_nhc0; _aux++) {
          free(nhc[_aux].idmask);
          }
          for(int _aux = 0; _aux < _len_nhc0; _aux++) {
          free(nhc[_aux].id);
          }
          free(nhc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
