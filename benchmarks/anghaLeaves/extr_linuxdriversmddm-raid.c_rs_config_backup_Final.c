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
struct rs_layout {int /*<<< orphan*/  new_chunk_sectors; int /*<<< orphan*/  new_layout; int /*<<< orphan*/  new_level; } ;
struct mddev {int /*<<< orphan*/  new_chunk_sectors; int /*<<< orphan*/  new_layout; int /*<<< orphan*/  new_level; } ;
struct raid_set {struct mddev md; } ;

/* Variables and functions */

__attribute__((used)) static void rs_config_backup(struct raid_set *rs, struct rs_layout *l)
{
	struct mddev *mddev = &rs->md;

	l->new_level = mddev->new_level;
	l->new_layout = mddev->new_layout;
	l->new_chunk_sectors = mddev->new_chunk_sectors;
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
          int _len_rs0 = 1;
          struct raid_set * rs = (struct raid_set *) malloc(_len_rs0*sizeof(struct raid_set));
          for(int _i0 = 0; _i0 < _len_rs0; _i0++) {
            rs[_i0].md.new_chunk_sectors = ((-2 * (next_i()%2)) + 1) * next_i();
        rs[_i0].md.new_layout = ((-2 * (next_i()%2)) + 1) * next_i();
        rs[_i0].md.new_level = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_l0 = 1;
          struct rs_layout * l = (struct rs_layout *) malloc(_len_l0*sizeof(struct rs_layout));
          for(int _i0 = 0; _i0 < _len_l0; _i0++) {
            l[_i0].new_chunk_sectors = ((-2 * (next_i()%2)) + 1) * next_i();
        l[_i0].new_layout = ((-2 * (next_i()%2)) + 1) * next_i();
        l[_i0].new_level = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rs_config_backup(rs,l);
          free(rs);
          free(l);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
