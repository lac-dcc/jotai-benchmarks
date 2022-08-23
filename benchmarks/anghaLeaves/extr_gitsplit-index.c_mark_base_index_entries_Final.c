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
struct index_state {int cache_nr; TYPE_1__** cache; } ;
struct TYPE_2__ {int index; } ;

/* Variables and functions */

__attribute__((used)) static void mark_base_index_entries(struct index_state *base)
{
	int i;
	/*
	 * To keep track of the shared entries between
	 * istate->base->cache[] and istate->cache[], base entry
	 * position is stored in each base entry. All positions start
	 * from 1 instead of 0, which is reserved to say "this is a new
	 * entry".
	 */
	for (i = 0; i < base->cache_nr; i++)
		base->cache[i]->index = i + 1;
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
          int _len_base0 = 1;
          struct index_state * base = (struct index_state *) malloc(_len_base0*sizeof(struct index_state));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            base[_i0].cache_nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_base__i0__cache0 = 1;
          base[_i0].cache = (struct TYPE_2__ **) malloc(_len_base__i0__cache0*sizeof(struct TYPE_2__ *));
          for(int _j0 = 0; _j0 < _len_base__i0__cache0; _j0++) {
            int _len_base__i0__cache1 = 1;
            base[_i0].cache[_j0] = (struct TYPE_2__ *) malloc(_len_base__i0__cache1*sizeof(struct TYPE_2__));
            for(int _j1 = 0; _j1 < _len_base__i0__cache1; _j1++) {
              base[_i0].cache[_j0]->index = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          mark_base_index_entries(base);
          for(int _aux = 0; _aux < _len_base0; _aux++) {
          free(*(base[_aux].cache));
        free(base[_aux].cache);
          }
          free(base);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}