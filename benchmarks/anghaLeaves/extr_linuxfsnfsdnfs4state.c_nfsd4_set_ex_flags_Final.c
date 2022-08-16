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
struct nfsd4_exchange_id {int /*<<< orphan*/  flags; } ;
struct nfs4_client {int /*<<< orphan*/  cl_exchange_flags; } ;

/* Variables and functions */
 int /*<<< orphan*/  EXCHGID4_FLAG_SUPP_MOVED_REFER ; 
 int /*<<< orphan*/  EXCHGID4_FLAG_USE_NON_PNFS ; 

__attribute__((used)) static void
nfsd4_set_ex_flags(struct nfs4_client *new, struct nfsd4_exchange_id *clid)
{
#ifdef CONFIG_NFSD_PNFS
	new->cl_exchange_flags |= EXCHGID4_FLAG_USE_PNFS_MDS;
#else
	new->cl_exchange_flags |= EXCHGID4_FLAG_USE_NON_PNFS;
#endif

	/* Referrals are supported, Migration is not. */
	new->cl_exchange_flags |= EXCHGID4_FLAG_SUPP_MOVED_REFER;

	/* set the wire flags to return to client. */
	clid->flags = new->cl_exchange_flags;
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
          int _len_new0 = 1;
          struct nfs4_client * new = (struct nfs4_client *) malloc(_len_new0*sizeof(struct nfs4_client));
          for(int _i0 = 0; _i0 < _len_new0; _i0++) {
            new[_i0].cl_exchange_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_clid0 = 1;
          struct nfsd4_exchange_id * clid = (struct nfsd4_exchange_id *) malloc(_len_clid0*sizeof(struct nfsd4_exchange_id));
          for(int _i0 = 0; _i0 < _len_clid0; _i0++) {
            clid[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nfsd4_set_ex_flags(new,clid);
          free(new);
          free(clid);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
