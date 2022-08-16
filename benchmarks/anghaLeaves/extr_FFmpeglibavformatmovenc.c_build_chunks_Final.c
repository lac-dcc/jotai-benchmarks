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
typedef  int uint64_t ;
struct TYPE_5__ {int size; int chunkNum; scalar_t__ pos; scalar_t__ entries; int /*<<< orphan*/  samples_in_chunk; } ;
struct TYPE_4__ {int chunkCount; int entry; TYPE_2__* cluster; } ;
typedef  TYPE_1__ MOVTrack ;
typedef  TYPE_2__ MOVIentry ;

/* Variables and functions */

__attribute__((used)) static void build_chunks(MOVTrack *trk)
{
    int i;
    MOVIentry *chunk = &trk->cluster[0];
    uint64_t chunkSize = chunk->size;
    chunk->chunkNum = 1;
    if (trk->chunkCount)
        return;
    trk->chunkCount = 1;
    for (i = 1; i<trk->entry; i++){
        if (chunk->pos + chunkSize == trk->cluster[i].pos &&
            chunkSize + trk->cluster[i].size < (1<<20)){
            chunkSize             += trk->cluster[i].size;
            chunk->samples_in_chunk += trk->cluster[i].entries;
        } else {
            trk->cluster[i].chunkNum = chunk->chunkNum+1;
            chunk=&trk->cluster[i];
            chunkSize = chunk->size;
            trk->chunkCount++;
        }
    }
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
          int _len_trk0 = 1;
          struct TYPE_4__ * trk = (struct TYPE_4__ *) malloc(_len_trk0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_trk0; _i0++) {
            trk[_i0].chunkCount = ((-2 * (next_i()%2)) + 1) * next_i();
        trk[_i0].entry = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_trk__i0__cluster0 = 1;
          trk[_i0].cluster = (struct TYPE_5__ *) malloc(_len_trk__i0__cluster0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_trk__i0__cluster0; _j0++) {
            trk[_i0].cluster->size = ((-2 * (next_i()%2)) + 1) * next_i();
        trk[_i0].cluster->chunkNum = ((-2 * (next_i()%2)) + 1) * next_i();
        trk[_i0].cluster->pos = ((-2 * (next_i()%2)) + 1) * next_i();
        trk[_i0].cluster->entries = ((-2 * (next_i()%2)) + 1) * next_i();
        trk[_i0].cluster->samples_in_chunk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          build_chunks(trk);
          for(int _aux = 0; _aux < _len_trk0; _aux++) {
          free(trk[_aux].cluster);
          }
          free(trk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
