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
struct nfs_inode {scalar_t__ fileid; } ;
struct nfs_fattr {int valid; scalar_t__ fileid; scalar_t__ mounted_on_fileid; } ;

/* Variables and functions */
 int NFS_ATTR_FATTR_FILEID ; 
 int NFS_ATTR_FATTR_MOUNTED_ON_FILEID ; 

__attribute__((used)) static inline bool nfs_fileid_valid(struct nfs_inode *nfsi,
				    struct nfs_fattr *fattr)
{
	bool ret1 = true, ret2 = true;

	if (fattr->valid & NFS_ATTR_FATTR_FILEID)
		ret1 = (nfsi->fileid == fattr->fileid);
	if (fattr->valid & NFS_ATTR_FATTR_MOUNTED_ON_FILEID)
		ret2 = (nfsi->fileid == fattr->mounted_on_fileid);
	return ret1 || ret2;
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
          int _len_nfsi0 = 1;
          struct nfs_inode * nfsi = (struct nfs_inode *) malloc(_len_nfsi0*sizeof(struct nfs_inode));
          for(int _i0 = 0; _i0 < _len_nfsi0; _i0++) {
            nfsi[_i0].fileid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fattr0 = 1;
          struct nfs_fattr * fattr = (struct nfs_fattr *) malloc(_len_fattr0*sizeof(struct nfs_fattr));
          for(int _i0 = 0; _i0 < _len_fattr0; _i0++) {
            fattr[_i0].valid = ((-2 * (next_i()%2)) + 1) * next_i();
        fattr[_i0].fileid = ((-2 * (next_i()%2)) + 1) * next_i();
        fattr[_i0].mounted_on_fileid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nfs_fileid_valid(nfsi,fattr);
          printf("%d\n", benchRet); 
          free(nfsi);
          free(fattr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
