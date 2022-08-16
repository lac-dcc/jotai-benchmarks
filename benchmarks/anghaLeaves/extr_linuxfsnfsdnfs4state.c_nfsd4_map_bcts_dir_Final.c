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
typedef  int u32 ;
typedef  int /*<<< orphan*/  __be32 ;

/* Variables and functions */
#define  NFS4_CDFC4_BACK 131 
#define  NFS4_CDFC4_BACK_OR_BOTH 130 
 int NFS4_CDFC4_BOTH ; 
#define  NFS4_CDFC4_FORE 129 
#define  NFS4_CDFC4_FORE_OR_BOTH 128 
 int /*<<< orphan*/  nfs_ok ; 
 int /*<<< orphan*/  nfserr_inval ; 

__attribute__((used)) static __be32 nfsd4_map_bcts_dir(u32 *dir)
{
	switch (*dir) {
	case NFS4_CDFC4_FORE:
	case NFS4_CDFC4_BACK:
		return nfs_ok;
	case NFS4_CDFC4_FORE_OR_BOTH:
	case NFS4_CDFC4_BACK_OR_BOTH:
		*dir = NFS4_CDFC4_BOTH;
		return nfs_ok;
	};
	return nfserr_inval;
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
          int _len_dir0 = 1;
          int * dir = (int *) malloc(_len_dir0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dir0; _i0++) {
            dir[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nfsd4_map_bcts_dir(dir);
          printf("%d\n", benchRet); 
          free(dir);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_dir0 = 100;
          int * dir = (int *) malloc(_len_dir0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dir0; _i0++) {
            dir[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nfsd4_map_bcts_dir(dir);
          printf("%d\n", benchRet); 
          free(dir);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
