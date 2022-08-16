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
struct nfs_file_lock {int nfl_flags; scalar_t__ nfl_owner; scalar_t__ nfl_type; scalar_t__ nfl_start; scalar_t__ nfl_end; } ;

/* Variables and functions */
 scalar_t__ F_WRLCK ; 
 int NFS_FILE_LOCK_DEAD ; 
 int NFS_FILE_LOCK_STYLE_MASK ; 

int
nfs_file_lock_conflict(struct nfs_file_lock *nflp1, struct nfs_file_lock *nflp2, int *willsplit)
{
	/* no conflict if lock is dead */
	if ((nflp1->nfl_flags & NFS_FILE_LOCK_DEAD) || (nflp2->nfl_flags & NFS_FILE_LOCK_DEAD))
		return (0);
	/* no conflict if it's ours - unless the lock style doesn't match */
	if ((nflp1->nfl_owner == nflp2->nfl_owner) &&
	    ((nflp1->nfl_flags & NFS_FILE_LOCK_STYLE_MASK) == (nflp2->nfl_flags & NFS_FILE_LOCK_STYLE_MASK))) {
		if (willsplit && (nflp1->nfl_type != nflp2->nfl_type) &&
		    (nflp1->nfl_start > nflp2->nfl_start) &&
		    (nflp1->nfl_end < nflp2->nfl_end))
			*willsplit = 1;
		return (0);
	}
	/* no conflict if ranges don't overlap */
	if ((nflp1->nfl_start > nflp2->nfl_end) || (nflp1->nfl_end < nflp2->nfl_start))
		return (0);
	/* no conflict if neither lock is exclusive */
	if ((nflp1->nfl_type != F_WRLCK) && (nflp2->nfl_type != F_WRLCK))
		return (0);
	/* conflict */
	return (1);
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
          int _len_nflp10 = 1;
          struct nfs_file_lock * nflp1 = (struct nfs_file_lock *) malloc(_len_nflp10*sizeof(struct nfs_file_lock));
          for(int _i0 = 0; _i0 < _len_nflp10; _i0++) {
            nflp1[_i0].nfl_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        nflp1[_i0].nfl_owner = ((-2 * (next_i()%2)) + 1) * next_i();
        nflp1[_i0].nfl_type = ((-2 * (next_i()%2)) + 1) * next_i();
        nflp1[_i0].nfl_start = ((-2 * (next_i()%2)) + 1) * next_i();
        nflp1[_i0].nfl_end = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nflp20 = 1;
          struct nfs_file_lock * nflp2 = (struct nfs_file_lock *) malloc(_len_nflp20*sizeof(struct nfs_file_lock));
          for(int _i0 = 0; _i0 < _len_nflp20; _i0++) {
            nflp2[_i0].nfl_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        nflp2[_i0].nfl_owner = ((-2 * (next_i()%2)) + 1) * next_i();
        nflp2[_i0].nfl_type = ((-2 * (next_i()%2)) + 1) * next_i();
        nflp2[_i0].nfl_start = ((-2 * (next_i()%2)) + 1) * next_i();
        nflp2[_i0].nfl_end = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_willsplit0 = 1;
          int * willsplit = (int *) malloc(_len_willsplit0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_willsplit0; _i0++) {
            willsplit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nfs_file_lock_conflict(nflp1,nflp2,willsplit);
          printf("%d\n", benchRet); 
          free(nflp1);
          free(nflp2);
          free(willsplit);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
