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
struct zoneref {int dummy; } ;
typedef  int /*<<< orphan*/  nodemask_t ;

/* Variables and functions */

__attribute__((used)) static inline int zref_in_nodemask(struct zoneref *zref, nodemask_t *nodes)
{
#ifdef CONFIG_NUMA
	return node_isset(zonelist_node_idx(zref), *nodes);
#else
	return 1;
#endif /* CONFIG_NUMA */
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
          int _len_zref0 = 1;
          struct zoneref * zref = (struct zoneref *) malloc(_len_zref0*sizeof(struct zoneref));
          for(int _i0 = 0; _i0 < _len_zref0; _i0++) {
            zref[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nodes0 = 1;
          int * nodes = (int *) malloc(_len_nodes0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_nodes0; _i0++) {
            nodes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = zref_in_nodemask(zref,nodes);
          printf("%d\n", benchRet); 
          free(zref);
          free(nodes);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
