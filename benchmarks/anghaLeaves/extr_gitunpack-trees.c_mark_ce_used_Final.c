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
struct unpack_trees_options {size_t cache_bottom; TYPE_1__* src_index; } ;
struct cache_entry {int ce_flags; } ;
struct TYPE_2__ {size_t cache_nr; struct cache_entry** cache; } ;

/* Variables and functions */
 int CE_UNPACKED ; 

__attribute__((used)) static void mark_ce_used(struct cache_entry *ce, struct unpack_trees_options *o)
{
	ce->ce_flags |= CE_UNPACKED;

	if (o->cache_bottom < o->src_index->cache_nr &&
	    o->src_index->cache[o->cache_bottom] == ce) {
		int bottom = o->cache_bottom;
		while (bottom < o->src_index->cache_nr &&
		       o->src_index->cache[bottom]->ce_flags & CE_UNPACKED)
			bottom++;
		o->cache_bottom = bottom;
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
          int _len_ce0 = 1;
          struct cache_entry * ce = (struct cache_entry *) malloc(_len_ce0*sizeof(struct cache_entry));
          for(int _i0 = 0; _i0 < _len_ce0; _i0++) {
            ce[_i0].ce_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_o0 = 1;
          struct unpack_trees_options * o = (struct unpack_trees_options *) malloc(_len_o0*sizeof(struct unpack_trees_options));
          for(int _i0 = 0; _i0 < _len_o0; _i0++) {
            o[_i0].cache_bottom = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_o__i0__src_index0 = 1;
          o[_i0].src_index = (struct TYPE_2__ *) malloc(_len_o__i0__src_index0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_o__i0__src_index0; _j0++) {
            o[_i0].src_index->cache_nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_o__i0__src_index_cache0 = 1;
          o[_i0].src_index->cache = (struct cache_entry **) malloc(_len_o__i0__src_index_cache0*sizeof(struct cache_entry *));
          for(int _j0 = 0; _j0 < _len_o__i0__src_index_cache0; _j0++) {
            int _len_o__i0__src_index_cache1 = 1;
            o[_i0].src_index->cache[_j0] = (struct cache_entry *) malloc(_len_o__i0__src_index_cache1*sizeof(struct cache_entry));
            for(int _j1 = 0; _j1 < _len_o__i0__src_index_cache1; _j1++) {
              o[_i0].src_index->cache[_j0]->ce_flags = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          mark_ce_used(ce,o);
          free(ce);
          for(int _aux = 0; _aux < _len_o0; _aux++) {
          free(o[_aux].src_index);
          }
          free(o);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
