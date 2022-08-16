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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {int bUseThread; scalar_t__ mxSz; TYPE_2__* pTask; } ;
struct TYPE_5__ {int /*<<< orphan*/  iEof; } ;
struct TYPE_6__ {TYPE_1__ file2; } ;
typedef  TYPE_3__ IncrMerger ;

/* Variables and functions */

__attribute__((used)) static void vdbeIncrMergerSetThreads(IncrMerger *pIncr){
  pIncr->bUseThread = 1;
  pIncr->pTask->file2.iEof -= pIncr->mxSz;
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
          int _len_pIncr0 = 1;
          struct TYPE_7__ * pIncr = (struct TYPE_7__ *) malloc(_len_pIncr0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_pIncr0; _i0++) {
            pIncr[_i0].bUseThread = ((-2 * (next_i()%2)) + 1) * next_i();
        pIncr[_i0].mxSz = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pIncr__i0__pTask0 = 1;
          pIncr[_i0].pTask = (struct TYPE_6__ *) malloc(_len_pIncr__i0__pTask0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_pIncr__i0__pTask0; _j0++) {
            pIncr[_i0].pTask->file2.iEof = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          vdbeIncrMergerSetThreads(pIncr);
          for(int _aux = 0; _aux < _len_pIncr0; _aux++) {
          free(pIncr[_aux].pTask);
          }
          free(pIncr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
