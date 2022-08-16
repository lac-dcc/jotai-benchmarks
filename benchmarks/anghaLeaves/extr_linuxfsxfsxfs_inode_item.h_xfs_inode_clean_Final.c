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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {TYPE_1__* i_itemp; } ;
typedef  TYPE_2__ xfs_inode_t ;
struct TYPE_4__ {int ili_fields; } ;

/* Variables and functions */
 int XFS_ILOG_ALL ; 

__attribute__((used)) static inline int xfs_inode_clean(xfs_inode_t *ip)
{
	return !ip->i_itemp || !(ip->i_itemp->ili_fields & XFS_ILOG_ALL);
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
          int _len_ip0 = 1;
          struct TYPE_5__ * ip = (struct TYPE_5__ *) malloc(_len_ip0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ip0; _i0++) {
              int _len_ip__i0__i_itemp0 = 1;
          ip[_i0].i_itemp = (struct TYPE_4__ *) malloc(_len_ip__i0__i_itemp0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ip__i0__i_itemp0; _j0++) {
            ip[_i0].i_itemp->ili_fields = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = xfs_inode_clean(ip);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ip0; _aux++) {
          free(ip[_aux].i_itemp);
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
