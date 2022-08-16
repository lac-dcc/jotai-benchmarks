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
struct dentry {int /*<<< orphan*/ * d_fsdata; int /*<<< orphan*/ * d_op; } ;

/* Variables and functions */
 int /*<<< orphan*/  mntns_operations ; 
 int /*<<< orphan*/  ns_dentry_operations ; 

__attribute__((used)) static bool is_mnt_ns_file(struct dentry *dentry)
{
	/* Is this a proxy for a mount namespace? */
	return dentry->d_op == &ns_dentry_operations &&
	       dentry->d_fsdata == &mntns_operations;
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
          int _len_dentry0 = 1;
          struct dentry * dentry = (struct dentry *) malloc(_len_dentry0*sizeof(struct dentry));
          for(int _i0 = 0; _i0 < _len_dentry0; _i0++) {
              int _len_dentry__i0__d_fsdata0 = 1;
          dentry[_i0].d_fsdata = (int *) malloc(_len_dentry__i0__d_fsdata0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dentry__i0__d_fsdata0; _j0++) {
            dentry[_i0].d_fsdata[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dentry__i0__d_op0 = 1;
          dentry[_i0].d_op = (int *) malloc(_len_dentry__i0__d_op0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dentry__i0__d_op0; _j0++) {
            dentry[_i0].d_op[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = is_mnt_ns_file(dentry);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dentry0; _aux++) {
          free(dentry[_aux].d_fsdata);
          }
          for(int _aux = 0; _aux < _len_dentry0; _aux++) {
          free(dentry[_aux].d_op);
          }
          free(dentry);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
