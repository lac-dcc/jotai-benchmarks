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
struct xfs_iext_rec {scalar_t__ hi; scalar_t__ lo; } ;

/* Variables and functions */

__attribute__((used)) static inline void xfs_iext_rec_clear(struct xfs_iext_rec *rec)
{
	rec->lo = 0;
	rec->hi = 0;
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
          int _len_rec0 = 1;
          struct xfs_iext_rec * rec = (struct xfs_iext_rec *) malloc(_len_rec0*sizeof(struct xfs_iext_rec));
          for(int _i0 = 0; _i0 < _len_rec0; _i0++) {
            rec[_i0].hi = ((-2 * (next_i()%2)) + 1) * next_i();
        rec[_i0].lo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          xfs_iext_rec_clear(rec);
          free(rec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
