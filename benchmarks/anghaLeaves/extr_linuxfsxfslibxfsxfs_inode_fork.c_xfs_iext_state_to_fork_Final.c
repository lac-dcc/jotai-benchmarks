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
struct xfs_ifork {int dummy; } ;
struct xfs_inode {struct xfs_ifork i_df; struct xfs_ifork* i_afp; struct xfs_ifork* i_cowfp; } ;

/* Variables and functions */
 int BMAP_ATTRFORK ; 
 int BMAP_COWFORK ; 

struct xfs_ifork *
xfs_iext_state_to_fork(
	struct xfs_inode	*ip,
	int			state)
{
	if (state & BMAP_COWFORK)
		return ip->i_cowfp;
	else if (state & BMAP_ATTRFORK)
		return ip->i_afp;
	return &ip->i_df;
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
          int state = 100;
          int _len_ip0 = 1;
          struct xfs_inode * ip = (struct xfs_inode *) malloc(_len_ip0*sizeof(struct xfs_inode));
          for(int _i0 = 0; _i0 < _len_ip0; _i0++) {
            ip[_i0].i_df.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ip__i0__i_afp0 = 1;
          ip[_i0].i_afp = (struct xfs_ifork *) malloc(_len_ip__i0__i_afp0*sizeof(struct xfs_ifork));
          for(int _j0 = 0; _j0 < _len_ip__i0__i_afp0; _j0++) {
            ip[_i0].i_afp->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ip__i0__i_cowfp0 = 1;
          ip[_i0].i_cowfp = (struct xfs_ifork *) malloc(_len_ip__i0__i_cowfp0*sizeof(struct xfs_ifork));
          for(int _j0 = 0; _j0 < _len_ip__i0__i_cowfp0; _j0++) {
            ip[_i0].i_cowfp->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct xfs_ifork * benchRet = xfs_iext_state_to_fork(ip,state);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ip0; _aux++) {
          free(ip[_aux].i_afp);
          }
          for(int _aux = 0; _aux < _len_ip0; _aux++) {
          free(ip[_aux].i_cowfp);
          }
          free(ip);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
