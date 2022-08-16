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
struct nfs_open_owner {int /*<<< orphan*/  noo_seqid; } ;
struct nfs_lock_owner {int /*<<< orphan*/  nlo_seqid; } ;

/* Variables and functions */
#define  NFSERR_BADXDR 135 
#define  NFSERR_BAD_SEQID 134 
#define  NFSERR_BAD_STATEID 133 
#define  NFSERR_NOFILEHANDLE 132 
#define  NFSERR_OLD_STATEID 131 
#define  NFSERR_RESOURCE 130 
#define  NFSERR_STALE_CLIENTID 129 
#define  NFSERR_STALE_STATEID 128 

void
nfs_owner_seqid_increment(struct nfs_open_owner *noop, struct nfs_lock_owner *nlop, int error)
{
	switch (error) {
	case NFSERR_STALE_CLIENTID:
	case NFSERR_STALE_STATEID:
	case NFSERR_OLD_STATEID:
	case NFSERR_BAD_STATEID:
	case NFSERR_BAD_SEQID:
	case NFSERR_BADXDR:
	case NFSERR_RESOURCE:
	case NFSERR_NOFILEHANDLE:
		/* do not increment the open seqid on these errors */
		return;
	}
	if (noop)
		noop->noo_seqid++;
	if (nlop)
		nlop->nlo_seqid++;
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
          int error = 100;
          int _len_noop0 = 1;
          struct nfs_open_owner * noop = (struct nfs_open_owner *) malloc(_len_noop0*sizeof(struct nfs_open_owner));
          for(int _i0 = 0; _i0 < _len_noop0; _i0++) {
            noop[_i0].noo_seqid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nlop0 = 1;
          struct nfs_lock_owner * nlop = (struct nfs_lock_owner *) malloc(_len_nlop0*sizeof(struct nfs_lock_owner));
          for(int _i0 = 0; _i0 < _len_nlop0; _i0++) {
            nlop[_i0].nlo_seqid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nfs_owner_seqid_increment(noop,nlop,error);
          free(noop);
          free(nlop);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
