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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ ULONG ;
struct TYPE_5__ {scalar_t__ numBlocks; scalar_t__ indexCacheLen; TYPE_1__* indexCache; } ;
struct TYPE_4__ {scalar_t__ firstOffset; scalar_t__ lastOffset; scalar_t__ firstSector; } ;
typedef  TYPE_2__ BlockChainStream ;

/* Variables and functions */
 scalar_t__ BLOCK_END_OF_CHAIN ; 

__attribute__((used)) static ULONG BlockChainStream_GetSectorOfOffset(BlockChainStream *This, ULONG offset)
{
  ULONG min_offset = 0, max_offset = This->numBlocks-1;
  ULONG min_run = 0, max_run = This->indexCacheLen-1;

  if (offset >= This->numBlocks)
    return BLOCK_END_OF_CHAIN;

  while (min_run < max_run)
  {
    ULONG run_to_check = min_run + (offset - min_offset) * (max_run - min_run) / (max_offset - min_offset);
    if (offset < This->indexCache[run_to_check].firstOffset)
    {
      max_offset = This->indexCache[run_to_check].firstOffset-1;
      max_run = run_to_check-1;
    }
    else if (offset > This->indexCache[run_to_check].lastOffset)
    {
      min_offset = This->indexCache[run_to_check].lastOffset+1;
      min_run = run_to_check+1;
    }
    else
      /* Block is in this run. */
      min_run = max_run = run_to_check;
  }

  return This->indexCache[min_run].firstSector + offset - This->indexCache[min_run].firstOffset;
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
          long offset = 100;
          int _len_This0 = 1;
          struct TYPE_5__ * This = (struct TYPE_5__ *) malloc(_len_This0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_This0; _i0++) {
            This[_i0].numBlocks = ((-2 * (next_i()%2)) + 1) * next_i();
        This[_i0].indexCacheLen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_This__i0__indexCache0 = 1;
          This[_i0].indexCache = (struct TYPE_4__ *) malloc(_len_This__i0__indexCache0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_This__i0__indexCache0; _j0++) {
            This[_i0].indexCache->firstOffset = ((-2 * (next_i()%2)) + 1) * next_i();
        This[_i0].indexCache->lastOffset = ((-2 * (next_i()%2)) + 1) * next_i();
        This[_i0].indexCache->firstSector = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = BlockChainStream_GetSectorOfOffset(This,offset);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_This0; _aux++) {
          free(This[_aux].indexCache);
          }
          free(This);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
