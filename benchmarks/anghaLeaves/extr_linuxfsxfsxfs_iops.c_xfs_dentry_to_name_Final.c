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
struct xfs_name {int /*<<< orphan*/  type; int /*<<< orphan*/  len; int /*<<< orphan*/  name; } ;
struct TYPE_2__ {int /*<<< orphan*/  len; int /*<<< orphan*/  name; } ;
struct dentry {TYPE_1__ d_name; } ;

/* Variables and functions */
 int /*<<< orphan*/  XFS_DIR3_FT_UNKNOWN ; 

__attribute__((used)) static void
xfs_dentry_to_name(
	struct xfs_name	*namep,
	struct dentry	*dentry)
{
	namep->name = dentry->d_name.name;
	namep->len = dentry->d_name.len;
	namep->type = XFS_DIR3_FT_UNKNOWN;
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
          int _len_namep0 = 1;
          struct xfs_name * namep = (struct xfs_name *) malloc(_len_namep0*sizeof(struct xfs_name));
          for(int _i0 = 0; _i0 < _len_namep0; _i0++) {
            namep[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        namep[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        namep[_i0].name = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dentry0 = 1;
          struct dentry * dentry = (struct dentry *) malloc(_len_dentry0*sizeof(struct dentry));
          for(int _i0 = 0; _i0 < _len_dentry0; _i0++) {
            dentry[_i0].d_name.len = ((-2 * (next_i()%2)) + 1) * next_i();
        dentry[_i0].d_name.name = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          xfs_dentry_to_name(namep,dentry);
          free(namep);
          free(dentry);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
