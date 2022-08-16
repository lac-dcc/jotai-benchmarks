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
struct nfs_writeverf {int dummy; } ;
struct nfs_direct_req {struct nfs_writeverf verf; } ;
struct nfs_client {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static struct nfs_writeverf *
nfs_direct_select_verf(struct nfs_direct_req *dreq,
		       struct nfs_client *ds_clp,
		       int commit_idx)
{
	struct nfs_writeverf *verfp = &dreq->verf;

#ifdef CONFIG_NFS_V4_1
	/*
	 * pNFS is in use, use the DS verf except commit_through_mds is set
	 * for layout segment where nbuckets is zero.
	 */
	if (ds_clp && dreq->ds_cinfo.nbuckets > 0) {
		if (commit_idx >= 0 && commit_idx < dreq->ds_cinfo.nbuckets)
			verfp = &dreq->ds_cinfo.buckets[commit_idx].direct_verf;
		else
			WARN_ON_ONCE(1);
	}
#endif
	return verfp;
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
          int commit_idx = 100;
          int _len_dreq0 = 1;
          struct nfs_direct_req * dreq = (struct nfs_direct_req *) malloc(_len_dreq0*sizeof(struct nfs_direct_req));
          for(int _i0 = 0; _i0 < _len_dreq0; _i0++) {
            dreq[_i0].verf.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ds_clp0 = 1;
          struct nfs_client * ds_clp = (struct nfs_client *) malloc(_len_ds_clp0*sizeof(struct nfs_client));
          for(int _i0 = 0; _i0 < _len_ds_clp0; _i0++) {
            ds_clp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct nfs_writeverf * benchRet = nfs_direct_select_verf(dreq,ds_clp,commit_idx);
          printf("%d\n", (*benchRet).dummy);
          free(dreq);
          free(ds_clp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
