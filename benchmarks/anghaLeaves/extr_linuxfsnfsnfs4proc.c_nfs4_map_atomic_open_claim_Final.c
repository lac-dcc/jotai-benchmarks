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
struct nfs_server {int caps; } ;
typedef  enum open_claim_type4 { ____Placeholder_open_claim_type4 } open_claim_type4 ;

/* Variables and functions */
 int NFS4_OPEN_CLAIM_DELEGATE_CUR ; 
 int NFS4_OPEN_CLAIM_DELEGATE_PREV ; 
#define  NFS4_OPEN_CLAIM_DELEG_CUR_FH 130 
#define  NFS4_OPEN_CLAIM_DELEG_PREV_FH 129 
#define  NFS4_OPEN_CLAIM_FH 128 
 int NFS4_OPEN_CLAIM_NULL ; 
 int NFS_CAP_ATOMIC_OPEN_V1 ; 

__attribute__((used)) static enum open_claim_type4
nfs4_map_atomic_open_claim(struct nfs_server *server,
		enum open_claim_type4 claim)
{
	if (server->caps & NFS_CAP_ATOMIC_OPEN_V1)
		return claim;
	switch (claim) {
	default:
		return claim;
	case NFS4_OPEN_CLAIM_FH:
		return NFS4_OPEN_CLAIM_NULL;
	case NFS4_OPEN_CLAIM_DELEG_CUR_FH:
		return NFS4_OPEN_CLAIM_DELEGATE_CUR;
	case NFS4_OPEN_CLAIM_DELEG_PREV_FH:
		return NFS4_OPEN_CLAIM_DELEGATE_PREV;
	}
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
          enum open_claim_type4 claim = 0;
          int _len_server0 = 1;
          struct nfs_server * server = (struct nfs_server *) malloc(_len_server0*sizeof(struct nfs_server));
          for(int _i0 = 0; _i0 < _len_server0; _i0++) {
            server[_i0].caps = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum open_claim_type4 benchRet = nfs4_map_atomic_open_claim(server,claim);
          free(server);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          enum open_claim_type4 claim = 0;
          int _len_server0 = 100;
          struct nfs_server * server = (struct nfs_server *) malloc(_len_server0*sizeof(struct nfs_server));
          for(int _i0 = 0; _i0 < _len_server0; _i0++) {
            server[_i0].caps = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum open_claim_type4 benchRet = nfs4_map_atomic_open_claim(server,claim);
          free(server);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
