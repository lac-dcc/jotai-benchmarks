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
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_10__ {TYPE_2__* constraints; } ;
struct TYPE_9__ {TYPE_1__* space; } ;
struct TYPE_8__ {scalar_t__ num_dimension_constraints; } ;
struct TYPE_7__ {scalar_t__ num_dimensions; } ;
typedef  TYPE_3__ ChunkScanCtx ;
typedef  TYPE_4__ Chunk ;

/* Variables and functions */

__attribute__((used)) static bool
chunk_is_complete(ChunkScanCtx *scanctx, Chunk *chunk)
{
	if (scanctx->space->num_dimensions != chunk->constraints->num_dimension_constraints)
		return false;

	return true;
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
          int _len_scanctx0 = 1;
          struct TYPE_9__ * scanctx = (struct TYPE_9__ *) malloc(_len_scanctx0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_scanctx0; _i0++) {
              int _len_scanctx__i0__space0 = 1;
          scanctx[_i0].space = (struct TYPE_7__ *) malloc(_len_scanctx__i0__space0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_scanctx__i0__space0; _j0++) {
            scanctx[_i0].space->num_dimensions = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_chunk0 = 1;
          struct TYPE_10__ * chunk = (struct TYPE_10__ *) malloc(_len_chunk0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_chunk0; _i0++) {
              int _len_chunk__i0__constraints0 = 1;
          chunk[_i0].constraints = (struct TYPE_8__ *) malloc(_len_chunk__i0__constraints0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_chunk__i0__constraints0; _j0++) {
            chunk[_i0].constraints->num_dimension_constraints = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = chunk_is_complete(scanctx,chunk);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_scanctx0; _aux++) {
          free(scanctx[_aux].space);
          }
          free(scanctx);
          for(int _aux = 0; _aux < _len_chunk0; _aux++) {
          free(chunk[_aux].constraints);
          }
          free(chunk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
