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
struct cacheinfo {int level; } ;

/* Variables and functions */

__attribute__((used)) static inline bool cache_leaves_are_shared(struct cacheinfo *this_leaf,
					   struct cacheinfo *sib_leaf)
{
	/*
	 * For non-DT/ACPI systems, assume unique level 1 caches, system-wide
	 * shared caches for all other levels. This will be used only if
	 * arch specific code has not populated shared_cpu_map
	 */
	return !(this_leaf->level == 1);
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
          int _len_this_leaf0 = 1;
          struct cacheinfo * this_leaf = (struct cacheinfo *) malloc(_len_this_leaf0*sizeof(struct cacheinfo));
          for(int _i0 = 0; _i0 < _len_this_leaf0; _i0++) {
            this_leaf[_i0].level = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sib_leaf0 = 1;
          struct cacheinfo * sib_leaf = (struct cacheinfo *) malloc(_len_sib_leaf0*sizeof(struct cacheinfo));
          for(int _i0 = 0; _i0 < _len_sib_leaf0; _i0++) {
            sib_leaf[_i0].level = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cache_leaves_are_shared(this_leaf,sib_leaf);
          printf("%d\n", benchRet); 
          free(this_leaf);
          free(sib_leaf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
