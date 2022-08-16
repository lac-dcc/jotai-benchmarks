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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int /*<<< orphan*/  zParams; int /*<<< orphan*/  splitPoint; int /*<<< orphan*/  nbThreads; int /*<<< orphan*/  steps; int /*<<< orphan*/  d; int /*<<< orphan*/  k; } ;
typedef  TYPE_1__ ZDICT_fastCover_params_t ;
struct TYPE_6__ {int /*<<< orphan*/  zParams; int /*<<< orphan*/  splitPoint; int /*<<< orphan*/  nbThreads; int /*<<< orphan*/  steps; int /*<<< orphan*/  d; int /*<<< orphan*/  k; } ;
typedef  TYPE_2__ ZDICT_cover_params_t ;

/* Variables and functions */

__attribute__((used)) static void
FASTCOVER_convertToCoverParams(ZDICT_fastCover_params_t fastCoverParams,
                               ZDICT_cover_params_t* coverParams)
{
    coverParams->k = fastCoverParams.k;
    coverParams->d = fastCoverParams.d;
    coverParams->steps = fastCoverParams.steps;
    coverParams->nbThreads = fastCoverParams.nbThreads;
    coverParams->splitPoint = fastCoverParams.splitPoint;
    coverParams->zParams = fastCoverParams.zParams;
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
          struct TYPE_5__ fastCoverParams;
        fastCoverParams.zParams = ((-2 * (next_i()%2)) + 1) * next_i();
        fastCoverParams.splitPoint = ((-2 * (next_i()%2)) + 1) * next_i();
        fastCoverParams.nbThreads = ((-2 * (next_i()%2)) + 1) * next_i();
        fastCoverParams.steps = ((-2 * (next_i()%2)) + 1) * next_i();
        fastCoverParams.d = ((-2 * (next_i()%2)) + 1) * next_i();
        fastCoverParams.k = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_coverParams0 = 1;
          struct TYPE_6__ * coverParams = (struct TYPE_6__ *) malloc(_len_coverParams0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_coverParams0; _i0++) {
            coverParams[_i0].zParams = ((-2 * (next_i()%2)) + 1) * next_i();
        coverParams[_i0].splitPoint = ((-2 * (next_i()%2)) + 1) * next_i();
        coverParams[_i0].nbThreads = ((-2 * (next_i()%2)) + 1) * next_i();
        coverParams[_i0].steps = ((-2 * (next_i()%2)) + 1) * next_i();
        coverParams[_i0].d = ((-2 * (next_i()%2)) + 1) * next_i();
        coverParams[_i0].k = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          FASTCOVER_convertToCoverParams(fastCoverParams,coverParams);
          free(coverParams);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
