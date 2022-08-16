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
       1            big-arr-10x\n\
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
typedef  scalar_t__ u64 ;
struct btrfs_qgroup {scalar_t__ old_refcnt; } ;

/* Variables and functions */

__attribute__((used)) static void btrfs_qgroup_update_old_refcnt(struct btrfs_qgroup *qg, u64 seq,
					   int mod)
{
	if (qg->old_refcnt < seq)
		qg->old_refcnt = seq;
	qg->old_refcnt += mod;
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
          long seq = 100;
          int mod = 100;
          int _len_qg0 = 1;
          struct btrfs_qgroup * qg = (struct btrfs_qgroup *) malloc(_len_qg0*sizeof(struct btrfs_qgroup));
          for(int _i0 = 0; _i0 < _len_qg0; _i0++) {
            qg[_i0].old_refcnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          btrfs_qgroup_update_old_refcnt(qg,seq,mod);
          free(qg);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long seq = 10;
          int mod = 10;
          int _len_qg0 = 100;
          struct btrfs_qgroup * qg = (struct btrfs_qgroup *) malloc(_len_qg0*sizeof(struct btrfs_qgroup));
          for(int _i0 = 0; _i0 < _len_qg0; _i0++) {
            qg[_i0].old_refcnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          btrfs_qgroup_update_old_refcnt(qg,seq,mod);
          free(qg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
