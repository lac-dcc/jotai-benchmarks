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
struct nfsd4_open {scalar_t__ op_deleg_want; int /*<<< orphan*/  op_why_no_deleg; void* op_delegate_type; } ;
struct nfs4_delegation {scalar_t__ dl_type; } ;

/* Variables and functions */
 void* NFS4_OPEN_DELEGATE_NONE_EXT ; 
 scalar_t__ NFS4_OPEN_DELEGATE_WRITE ; 
 scalar_t__ NFS4_SHARE_WANT_READ_DELEG ; 
 scalar_t__ NFS4_SHARE_WANT_WRITE_DELEG ; 
 int /*<<< orphan*/  WND4_NOT_SUPP_DOWNGRADE ; 
 int /*<<< orphan*/  WND4_NOT_SUPP_UPGRADE ; 

__attribute__((used)) static void nfsd4_deleg_xgrade_none_ext(struct nfsd4_open *open,
					struct nfs4_delegation *dp)
{
	if (open->op_deleg_want == NFS4_SHARE_WANT_READ_DELEG &&
	    dp->dl_type == NFS4_OPEN_DELEGATE_WRITE) {
		open->op_delegate_type = NFS4_OPEN_DELEGATE_NONE_EXT;
		open->op_why_no_deleg = WND4_NOT_SUPP_DOWNGRADE;
	} else if (open->op_deleg_want == NFS4_SHARE_WANT_WRITE_DELEG &&
		   dp->dl_type == NFS4_OPEN_DELEGATE_WRITE) {
		open->op_delegate_type = NFS4_OPEN_DELEGATE_NONE_EXT;
		open->op_why_no_deleg = WND4_NOT_SUPP_UPGRADE;
	}
	/* Otherwise the client must be confused wanting a delegation
	 * it already has, therefore we don't return
	 * NFS4_OPEN_DELEGATE_NONE_EXT and reason.
	 */
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
          int _len_open0 = 1;
          struct nfsd4_open * open = (struct nfsd4_open *) malloc(_len_open0*sizeof(struct nfsd4_open));
          for(int _i0 = 0; _i0 < _len_open0; _i0++) {
            open[_i0].op_deleg_want = ((-2 * (next_i()%2)) + 1) * next_i();
        open[_i0].op_why_no_deleg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dp0 = 1;
          struct nfs4_delegation * dp = (struct nfs4_delegation *) malloc(_len_dp0*sizeof(struct nfs4_delegation));
          for(int _i0 = 0; _i0 < _len_dp0; _i0++) {
            dp[_i0].dl_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nfsd4_deleg_xgrade_none_ext(open,dp);
          free(open);
          free(dp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
