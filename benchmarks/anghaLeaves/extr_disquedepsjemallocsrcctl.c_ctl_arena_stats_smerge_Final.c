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
typedef  struct TYPE_12__   TYPE_5__ ;
typedef  struct TYPE_11__   TYPE_4__ ;
typedef  struct TYPE_10__   TYPE_3__ ;
typedef  struct TYPE_9__   TYPE_2__ ;
typedef  struct TYPE_8__   TYPE_1__ ;

/* Type definitions */
struct TYPE_9__ {scalar_t__ ndalloc_huge; scalar_t__ nmalloc_huge; scalar_t__ allocated_huge; scalar_t__ nrequests_large; scalar_t__ ndalloc_large; scalar_t__ nmalloc_large; scalar_t__ allocated_large; scalar_t__ metadata_allocated; scalar_t__ metadata_mapped; scalar_t__ purged; scalar_t__ nmadvise; scalar_t__ npurge; scalar_t__ mapped; } ;
struct TYPE_12__ {TYPE_1__* hstats; TYPE_4__* lstats; TYPE_3__* bstats; TYPE_2__ astats; scalar_t__ nrequests_small; scalar_t__ ndalloc_small; scalar_t__ nmalloc_small; scalar_t__ allocated_small; scalar_t__ pdirty; scalar_t__ pactive; } ;
typedef  TYPE_5__ ctl_arena_stats_t ;
struct TYPE_11__ {scalar_t__ curruns; scalar_t__ nrequests; scalar_t__ ndalloc; scalar_t__ nmalloc; } ;
struct TYPE_10__ {scalar_t__ curruns; scalar_t__ reruns; scalar_t__ nruns; scalar_t__ nflushes; scalar_t__ nfills; scalar_t__ curregs; scalar_t__ nrequests; scalar_t__ ndalloc; scalar_t__ nmalloc; } ;
struct TYPE_8__ {scalar_t__ curhchunks; scalar_t__ ndalloc; scalar_t__ nmalloc; } ;

/* Variables and functions */
 unsigned int NBINS ; 
 scalar_t__ config_tcache ; 
 unsigned int nhclasses ; 
 unsigned int nlclasses ; 

__attribute__((used)) static void
ctl_arena_stats_smerge(ctl_arena_stats_t *sstats, ctl_arena_stats_t *astats)
{
	unsigned i;

	sstats->pactive += astats->pactive;
	sstats->pdirty += astats->pdirty;

	sstats->astats.mapped += astats->astats.mapped;
	sstats->astats.npurge += astats->astats.npurge;
	sstats->astats.nmadvise += astats->astats.nmadvise;
	sstats->astats.purged += astats->astats.purged;

	sstats->astats.metadata_mapped += astats->astats.metadata_mapped;
	sstats->astats.metadata_allocated += astats->astats.metadata_allocated;

	sstats->allocated_small += astats->allocated_small;
	sstats->nmalloc_small += astats->nmalloc_small;
	sstats->ndalloc_small += astats->ndalloc_small;
	sstats->nrequests_small += astats->nrequests_small;

	sstats->astats.allocated_large += astats->astats.allocated_large;
	sstats->astats.nmalloc_large += astats->astats.nmalloc_large;
	sstats->astats.ndalloc_large += astats->astats.ndalloc_large;
	sstats->astats.nrequests_large += astats->astats.nrequests_large;

	sstats->astats.allocated_huge += astats->astats.allocated_huge;
	sstats->astats.nmalloc_huge += astats->astats.nmalloc_huge;
	sstats->astats.ndalloc_huge += astats->astats.ndalloc_huge;

	for (i = 0; i < NBINS; i++) {
		sstats->bstats[i].nmalloc += astats->bstats[i].nmalloc;
		sstats->bstats[i].ndalloc += astats->bstats[i].ndalloc;
		sstats->bstats[i].nrequests += astats->bstats[i].nrequests;
		sstats->bstats[i].curregs += astats->bstats[i].curregs;
		if (config_tcache) {
			sstats->bstats[i].nfills += astats->bstats[i].nfills;
			sstats->bstats[i].nflushes +=
			    astats->bstats[i].nflushes;
		}
		sstats->bstats[i].nruns += astats->bstats[i].nruns;
		sstats->bstats[i].reruns += astats->bstats[i].reruns;
		sstats->bstats[i].curruns += astats->bstats[i].curruns;
	}

	for (i = 0; i < nlclasses; i++) {
		sstats->lstats[i].nmalloc += astats->lstats[i].nmalloc;
		sstats->lstats[i].ndalloc += astats->lstats[i].ndalloc;
		sstats->lstats[i].nrequests += astats->lstats[i].nrequests;
		sstats->lstats[i].curruns += astats->lstats[i].curruns;
	}

	for (i = 0; i < nhclasses; i++) {
		sstats->hstats[i].nmalloc += astats->hstats[i].nmalloc;
		sstats->hstats[i].ndalloc += astats->hstats[i].ndalloc;
		sstats->hstats[i].curhchunks += astats->hstats[i].curhchunks;
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
          int _len_sstats0 = 1;
          struct TYPE_12__ * sstats = (struct TYPE_12__ *) malloc(_len_sstats0*sizeof(struct TYPE_12__));
          for(int _i0 = 0; _i0 < _len_sstats0; _i0++) {
              int _len_sstats__i0__hstats0 = 1;
          sstats[_i0].hstats = (struct TYPE_8__ *) malloc(_len_sstats__i0__hstats0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_sstats__i0__hstats0; _j0++) {
            sstats[_i0].hstats->curhchunks = ((-2 * (next_i()%2)) + 1) * next_i();
        sstats[_i0].hstats->ndalloc = ((-2 * (next_i()%2)) + 1) * next_i();
        sstats[_i0].hstats->nmalloc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sstats__i0__lstats0 = 1;
          sstats[_i0].lstats = (struct TYPE_11__ *) malloc(_len_sstats__i0__lstats0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_sstats__i0__lstats0; _j0++) {
            sstats[_i0].lstats->curruns = ((-2 * (next_i()%2)) + 1) * next_i();
        sstats[_i0].lstats->nrequests = ((-2 * (next_i()%2)) + 1) * next_i();
        sstats[_i0].lstats->ndalloc = ((-2 * (next_i()%2)) + 1) * next_i();
        sstats[_i0].lstats->nmalloc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sstats__i0__bstats0 = 1;
          sstats[_i0].bstats = (struct TYPE_10__ *) malloc(_len_sstats__i0__bstats0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_sstats__i0__bstats0; _j0++) {
            sstats[_i0].bstats->curruns = ((-2 * (next_i()%2)) + 1) * next_i();
        sstats[_i0].bstats->reruns = ((-2 * (next_i()%2)) + 1) * next_i();
        sstats[_i0].bstats->nruns = ((-2 * (next_i()%2)) + 1) * next_i();
        sstats[_i0].bstats->nflushes = ((-2 * (next_i()%2)) + 1) * next_i();
        sstats[_i0].bstats->nfills = ((-2 * (next_i()%2)) + 1) * next_i();
        sstats[_i0].bstats->curregs = ((-2 * (next_i()%2)) + 1) * next_i();
        sstats[_i0].bstats->nrequests = ((-2 * (next_i()%2)) + 1) * next_i();
        sstats[_i0].bstats->ndalloc = ((-2 * (next_i()%2)) + 1) * next_i();
        sstats[_i0].bstats->nmalloc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        sstats[_i0].astats.ndalloc_huge = ((-2 * (next_i()%2)) + 1) * next_i();
        sstats[_i0].astats.nmalloc_huge = ((-2 * (next_i()%2)) + 1) * next_i();
        sstats[_i0].astats.allocated_huge = ((-2 * (next_i()%2)) + 1) * next_i();
        sstats[_i0].astats.nrequests_large = ((-2 * (next_i()%2)) + 1) * next_i();
        sstats[_i0].astats.ndalloc_large = ((-2 * (next_i()%2)) + 1) * next_i();
        sstats[_i0].astats.nmalloc_large = ((-2 * (next_i()%2)) + 1) * next_i();
        sstats[_i0].astats.allocated_large = ((-2 * (next_i()%2)) + 1) * next_i();
        sstats[_i0].astats.metadata_allocated = ((-2 * (next_i()%2)) + 1) * next_i();
        sstats[_i0].astats.metadata_mapped = ((-2 * (next_i()%2)) + 1) * next_i();
        sstats[_i0].astats.purged = ((-2 * (next_i()%2)) + 1) * next_i();
        sstats[_i0].astats.nmadvise = ((-2 * (next_i()%2)) + 1) * next_i();
        sstats[_i0].astats.npurge = ((-2 * (next_i()%2)) + 1) * next_i();
        sstats[_i0].astats.mapped = ((-2 * (next_i()%2)) + 1) * next_i();
        sstats[_i0].nrequests_small = ((-2 * (next_i()%2)) + 1) * next_i();
        sstats[_i0].ndalloc_small = ((-2 * (next_i()%2)) + 1) * next_i();
        sstats[_i0].nmalloc_small = ((-2 * (next_i()%2)) + 1) * next_i();
        sstats[_i0].allocated_small = ((-2 * (next_i()%2)) + 1) * next_i();
        sstats[_i0].pdirty = ((-2 * (next_i()%2)) + 1) * next_i();
        sstats[_i0].pactive = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_astats0 = 1;
          struct TYPE_12__ * astats = (struct TYPE_12__ *) malloc(_len_astats0*sizeof(struct TYPE_12__));
          for(int _i0 = 0; _i0 < _len_astats0; _i0++) {
              int _len_astats__i0__hstats0 = 1;
          astats[_i0].hstats = (struct TYPE_8__ *) malloc(_len_astats__i0__hstats0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_astats__i0__hstats0; _j0++) {
            astats[_i0].hstats->curhchunks = ((-2 * (next_i()%2)) + 1) * next_i();
        astats[_i0].hstats->ndalloc = ((-2 * (next_i()%2)) + 1) * next_i();
        astats[_i0].hstats->nmalloc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_astats__i0__lstats0 = 1;
          astats[_i0].lstats = (struct TYPE_11__ *) malloc(_len_astats__i0__lstats0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_astats__i0__lstats0; _j0++) {
            astats[_i0].lstats->curruns = ((-2 * (next_i()%2)) + 1) * next_i();
        astats[_i0].lstats->nrequests = ((-2 * (next_i()%2)) + 1) * next_i();
        astats[_i0].lstats->ndalloc = ((-2 * (next_i()%2)) + 1) * next_i();
        astats[_i0].lstats->nmalloc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_astats__i0__bstats0 = 1;
          astats[_i0].bstats = (struct TYPE_10__ *) malloc(_len_astats__i0__bstats0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_astats__i0__bstats0; _j0++) {
            astats[_i0].bstats->curruns = ((-2 * (next_i()%2)) + 1) * next_i();
        astats[_i0].bstats->reruns = ((-2 * (next_i()%2)) + 1) * next_i();
        astats[_i0].bstats->nruns = ((-2 * (next_i()%2)) + 1) * next_i();
        astats[_i0].bstats->nflushes = ((-2 * (next_i()%2)) + 1) * next_i();
        astats[_i0].bstats->nfills = ((-2 * (next_i()%2)) + 1) * next_i();
        astats[_i0].bstats->curregs = ((-2 * (next_i()%2)) + 1) * next_i();
        astats[_i0].bstats->nrequests = ((-2 * (next_i()%2)) + 1) * next_i();
        astats[_i0].bstats->ndalloc = ((-2 * (next_i()%2)) + 1) * next_i();
        astats[_i0].bstats->nmalloc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        astats[_i0].astats.ndalloc_huge = ((-2 * (next_i()%2)) + 1) * next_i();
        astats[_i0].astats.nmalloc_huge = ((-2 * (next_i()%2)) + 1) * next_i();
        astats[_i0].astats.allocated_huge = ((-2 * (next_i()%2)) + 1) * next_i();
        astats[_i0].astats.nrequests_large = ((-2 * (next_i()%2)) + 1) * next_i();
        astats[_i0].astats.ndalloc_large = ((-2 * (next_i()%2)) + 1) * next_i();
        astats[_i0].astats.nmalloc_large = ((-2 * (next_i()%2)) + 1) * next_i();
        astats[_i0].astats.allocated_large = ((-2 * (next_i()%2)) + 1) * next_i();
        astats[_i0].astats.metadata_allocated = ((-2 * (next_i()%2)) + 1) * next_i();
        astats[_i0].astats.metadata_mapped = ((-2 * (next_i()%2)) + 1) * next_i();
        astats[_i0].astats.purged = ((-2 * (next_i()%2)) + 1) * next_i();
        astats[_i0].astats.nmadvise = ((-2 * (next_i()%2)) + 1) * next_i();
        astats[_i0].astats.npurge = ((-2 * (next_i()%2)) + 1) * next_i();
        astats[_i0].astats.mapped = ((-2 * (next_i()%2)) + 1) * next_i();
        astats[_i0].nrequests_small = ((-2 * (next_i()%2)) + 1) * next_i();
        astats[_i0].ndalloc_small = ((-2 * (next_i()%2)) + 1) * next_i();
        astats[_i0].nmalloc_small = ((-2 * (next_i()%2)) + 1) * next_i();
        astats[_i0].allocated_small = ((-2 * (next_i()%2)) + 1) * next_i();
        astats[_i0].pdirty = ((-2 * (next_i()%2)) + 1) * next_i();
        astats[_i0].pactive = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ctl_arena_stats_smerge(sstats,astats);
          for(int _aux = 0; _aux < _len_sstats0; _aux++) {
          free(sstats[_aux].hstats);
          }
          for(int _aux = 0; _aux < _len_sstats0; _aux++) {
          free(sstats[_aux].lstats);
          }
          for(int _aux = 0; _aux < _len_sstats0; _aux++) {
          free(sstats[_aux].bstats);
          }
          free(sstats);
          for(int _aux = 0; _aux < _len_astats0; _aux++) {
          free(astats[_aux].hstats);
          }
          for(int _aux = 0; _aux < _len_astats0; _aux++) {
          free(astats[_aux].lstats);
          }
          for(int _aux = 0; _aux < _len_astats0; _aux++) {
          free(astats[_aux].bstats);
          }
          free(astats);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
