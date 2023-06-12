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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  scalar_t__ uint64_t ;
struct xfs_rmap_irec {scalar_t__ rm_owner; unsigned int rm_flags; } ;

/* Variables and functions */
 unsigned int XFS_RMAP_ATTR_FORK ; 
 unsigned int XFS_RMAP_BMBT_BLOCK ; 
 scalar_t__ XFS_RMAP_OWN_NULL ; 
 unsigned int XFS_RMAP_UNWRITTEN ; 

__attribute__((used)) static bool
xfs_rmap_is_mergeable(
	struct xfs_rmap_irec	*irec,
	uint64_t		owner,
	unsigned int		flags)
{
	if (irec->rm_owner == XFS_RMAP_OWN_NULL)
		return false;
	if (irec->rm_owner != owner)
		return false;
	if ((flags & XFS_RMAP_UNWRITTEN) ^
	    (irec->rm_flags & XFS_RMAP_UNWRITTEN))
		return false;
	if ((flags & XFS_RMAP_ATTR_FORK) ^
	    (irec->rm_flags & XFS_RMAP_ATTR_FORK))
		return false;
	if ((flags & XFS_RMAP_BMBT_BLOCK) ^
	    (irec->rm_flags & XFS_RMAP_BMBT_BLOCK))
		return false;
	return true;
}

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
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          long owner = 100;
        
          unsigned int flags = 100;
        
          int _len_irec0 = 1;
          struct xfs_rmap_irec * irec = (struct xfs_rmap_irec *) malloc(_len_irec0*sizeof(struct xfs_rmap_irec));
          for(int _i0 = 0; _i0 < _len_irec0; _i0++) {
              irec[_i0].rm_owner = ((-2 * (next_i()%2)) + 1) * next_i();
          irec[_i0].rm_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = xfs_rmap_is_mergeable(irec,owner,flags);
          printf("%d\n", benchRet); 
          free(irec);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          long owner = 255;
        
          unsigned int flags = 255;
        
          int _len_irec0 = 65025;
          struct xfs_rmap_irec * irec = (struct xfs_rmap_irec *) malloc(_len_irec0*sizeof(struct xfs_rmap_irec));
          for(int _i0 = 0; _i0 < _len_irec0; _i0++) {
              irec[_i0].rm_owner = ((-2 * (next_i()%2)) + 1) * next_i();
          irec[_i0].rm_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = xfs_rmap_is_mergeable(irec,owner,flags);
          printf("%d\n", benchRet); 
          free(irec);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          long owner = 10;
        
          unsigned int flags = 10;
        
          int _len_irec0 = 100;
          struct xfs_rmap_irec * irec = (struct xfs_rmap_irec *) malloc(_len_irec0*sizeof(struct xfs_rmap_irec));
          for(int _i0 = 0; _i0 < _len_irec0; _i0++) {
              irec[_i0].rm_owner = ((-2 * (next_i()%2)) + 1) * next_i();
          irec[_i0].rm_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = xfs_rmap_is_mergeable(irec,owner,flags);
          printf("%d\n", benchRet); 
          free(irec);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 41
          // dynamic_instructions_O0 : 41
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 18
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 18
          // ------------------------------- 

          long owner = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned int flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_irec0 = 1;
          struct xfs_rmap_irec * irec = (struct xfs_rmap_irec *) malloc(_len_irec0*sizeof(struct xfs_rmap_irec));
          for(int _i0 = 0; _i0 < _len_irec0; _i0++) {
              irec[_i0].rm_owner = ((-2 * (next_i()%2)) + 1) * next_i();
          irec[_i0].rm_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = xfs_rmap_is_mergeable(irec,owner,flags);
          printf("%d\n", benchRet); 
          free(irec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
