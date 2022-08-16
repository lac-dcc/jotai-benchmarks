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
struct nfs4_ff_io_stat {int /*<<< orphan*/  bytes_requested; int /*<<< orphan*/  ops_requested; } ;
struct nfs4_ff_layoutstat {struct nfs4_ff_io_stat io_stat; } ;
typedef  scalar_t__ __u64 ;

/* Variables and functions */

__attribute__((used)) static void
nfs4_ff_layout_stat_io_update_requested(struct nfs4_ff_layoutstat *layoutstat,
		__u64 requested)
{
	struct nfs4_ff_io_stat *iostat = &layoutstat->io_stat;

	iostat->ops_requested++;
	iostat->bytes_requested += requested;
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
          long requested = 100;
          int _len_layoutstat0 = 1;
          struct nfs4_ff_layoutstat * layoutstat = (struct nfs4_ff_layoutstat *) malloc(_len_layoutstat0*sizeof(struct nfs4_ff_layoutstat));
          for(int _i0 = 0; _i0 < _len_layoutstat0; _i0++) {
            layoutstat[_i0].io_stat.bytes_requested = ((-2 * (next_i()%2)) + 1) * next_i();
        layoutstat[_i0].io_stat.ops_requested = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nfs4_ff_layout_stat_io_update_requested(layoutstat,requested);
          free(layoutstat);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
