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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int sb_agcount; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;

/* Variables and functions */
 int XFS_ALLOC_AGFL_RESERVE ; 

unsigned int
xfs_alloc_set_aside(
	struct xfs_mount	*mp)
{
	return mp->m_sb.sb_agcount * (XFS_ALLOC_AGFL_RESERVE + 4);
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
          int _len_mp0 = 1;
          struct xfs_mount * mp = (struct xfs_mount *) malloc(_len_mp0*sizeof(struct xfs_mount));
          for(int _i0 = 0; _i0 < _len_mp0; _i0++) {
            mp[_i0].m_sb.sb_agcount = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = xfs_alloc_set_aside(mp);
          printf("%u\n", benchRet); 
          free(mp);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_mp0 = 100;
          struct xfs_mount * mp = (struct xfs_mount *) malloc(_len_mp0*sizeof(struct xfs_mount));
          for(int _i0 = 0; _i0 < _len_mp0; _i0++) {
            mp[_i0].m_sb.sb_agcount = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = xfs_alloc_set_aside(mp);
          printf("%u\n", benchRet); 
          free(mp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
