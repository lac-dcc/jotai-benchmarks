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
struct lazy_entry {TYPE_1__* dir; } ;
struct index_state {int cache_nr; } ;
struct TYPE_2__ {int /*<<< orphan*/  nr; } ;

/* Variables and functions */

__attribute__((used)) static inline void lazy_update_dir_ref_counts(
	struct index_state *istate,
	struct lazy_entry *lazy_entries)
{
	int k;

	for (k = 0; k < istate->cache_nr; k++) {
		if (lazy_entries[k].dir)
			lazy_entries[k].dir->nr++;
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
          int _len_istate0 = 1;
          struct index_state * istate = (struct index_state *) malloc(_len_istate0*sizeof(struct index_state));
          for(int _i0 = 0; _i0 < _len_istate0; _i0++) {
            istate[_i0].cache_nr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lazy_entries0 = 1;
          struct lazy_entry * lazy_entries = (struct lazy_entry *) malloc(_len_lazy_entries0*sizeof(struct lazy_entry));
          for(int _i0 = 0; _i0 < _len_lazy_entries0; _i0++) {
              int _len_lazy_entries__i0__dir0 = 1;
          lazy_entries[_i0].dir = (struct TYPE_2__ *) malloc(_len_lazy_entries__i0__dir0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_lazy_entries__i0__dir0; _j0++) {
            lazy_entries[_i0].dir->nr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          lazy_update_dir_ref_counts(istate,lazy_entries);
          free(istate);
          for(int _aux = 0; _aux < _len_lazy_entries0; _aux++) {
          free(lazy_entries[_aux].dir);
          }
          free(lazy_entries);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
