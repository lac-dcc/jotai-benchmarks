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
struct TYPE_2__ {scalar_t__ fofs; scalar_t__ len; } ;
struct extent_tree {int largest_updated; TYPE_1__ largest; } ;
typedef  scalar_t__ pgoff_t ;

/* Variables and functions */

__attribute__((used)) static void __drop_largest_extent(struct extent_tree *et,
					pgoff_t fofs, unsigned int len)
{
	if (fofs < et->largest.fofs + et->largest.len &&
			fofs + len > et->largest.fofs) {
		et->largest.len = 0;
		et->largest_updated = true;
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
          long fofs = 100;
          unsigned int len = 100;
          int _len_et0 = 1;
          struct extent_tree * et = (struct extent_tree *) malloc(_len_et0*sizeof(struct extent_tree));
          for(int _i0 = 0; _i0 < _len_et0; _i0++) {
            et[_i0].largest_updated = ((-2 * (next_i()%2)) + 1) * next_i();
        et[_i0].largest.fofs = ((-2 * (next_i()%2)) + 1) * next_i();
        et[_i0].largest.len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __drop_largest_extent(et,fofs,len);
          free(et);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
