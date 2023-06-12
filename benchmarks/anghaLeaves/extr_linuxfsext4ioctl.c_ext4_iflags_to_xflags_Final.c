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
typedef  int /*<<< orphan*/  __u32 ;

/* Variables and functions */
 unsigned long EXT4_APPEND_FL ; 
 unsigned long EXT4_IMMUTABLE_FL ; 
 unsigned long EXT4_NOATIME_FL ; 
 unsigned long EXT4_NODUMP_FL ; 
 unsigned long EXT4_PROJINHERIT_FL ; 
 unsigned long EXT4_SYNC_FL ; 
 int /*<<< orphan*/  FS_XFLAG_APPEND ; 
 int /*<<< orphan*/  FS_XFLAG_IMMUTABLE ; 
 int /*<<< orphan*/  FS_XFLAG_NOATIME ; 
 int /*<<< orphan*/  FS_XFLAG_NODUMP ; 
 int /*<<< orphan*/  FS_XFLAG_PROJINHERIT ; 
 int /*<<< orphan*/  FS_XFLAG_SYNC ; 

__attribute__((used)) static inline __u32 ext4_iflags_to_xflags(unsigned long iflags)
{
	__u32 xflags = 0;

	if (iflags & EXT4_SYNC_FL)
		xflags |= FS_XFLAG_SYNC;
	if (iflags & EXT4_IMMUTABLE_FL)
		xflags |= FS_XFLAG_IMMUTABLE;
	if (iflags & EXT4_APPEND_FL)
		xflags |= FS_XFLAG_APPEND;
	if (iflags & EXT4_NODUMP_FL)
		xflags |= FS_XFLAG_NODUMP;
	if (iflags & EXT4_NOATIME_FL)
		xflags |= FS_XFLAG_NOATIME;
	if (iflags & EXT4_PROJINHERIT_FL)
		xflags |= FS_XFLAG_PROJINHERIT;
	return xflags;
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
          // static_instructions_O0 : 31
          // dynamic_instructions_O0 : 31
          // ------------------------------- 
          // static_instructions_O1 : 27
          // dynamic_instructions_O1 : 27
          // ------------------------------- 
          // static_instructions_O2 : 27
          // dynamic_instructions_O2 : 27
          // ------------------------------- 
          // static_instructions_O3 : 27
          // dynamic_instructions_O3 : 27
          // ------------------------------- 
          // static_instructions_Ofast : 27
          // dynamic_instructions_Ofast : 27
          // ------------------------------- 
          // static_instructions_Os : 27
          // dynamic_instructions_Os : 27
          // ------------------------------- 
          // static_instructions_Oz : 27
          // dynamic_instructions_Oz : 27
          // ------------------------------- 

          unsigned long iflags = 100;
        
          int benchRet = ext4_iflags_to_xflags(iflags);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 31
          // dynamic_instructions_O0 : 31
          // ------------------------------- 
          // static_instructions_O1 : 27
          // dynamic_instructions_O1 : 27
          // ------------------------------- 
          // static_instructions_O2 : 27
          // dynamic_instructions_O2 : 27
          // ------------------------------- 
          // static_instructions_O3 : 27
          // dynamic_instructions_O3 : 27
          // ------------------------------- 
          // static_instructions_Ofast : 27
          // dynamic_instructions_Ofast : 27
          // ------------------------------- 
          // static_instructions_Os : 27
          // dynamic_instructions_Os : 27
          // ------------------------------- 
          // static_instructions_Oz : 27
          // dynamic_instructions_Oz : 27
          // ------------------------------- 

          unsigned long iflags = 255;
        
          int benchRet = ext4_iflags_to_xflags(iflags);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 31
          // dynamic_instructions_O0 : 31
          // ------------------------------- 
          // static_instructions_O1 : 27
          // dynamic_instructions_O1 : 27
          // ------------------------------- 
          // static_instructions_O2 : 27
          // dynamic_instructions_O2 : 27
          // ------------------------------- 
          // static_instructions_O3 : 27
          // dynamic_instructions_O3 : 27
          // ------------------------------- 
          // static_instructions_Ofast : 27
          // dynamic_instructions_Ofast : 27
          // ------------------------------- 
          // static_instructions_Os : 27
          // dynamic_instructions_Os : 27
          // ------------------------------- 
          // static_instructions_Oz : 27
          // dynamic_instructions_Oz : 27
          // ------------------------------- 

          unsigned long iflags = 10;
        
          int benchRet = ext4_iflags_to_xflags(iflags);
          printf("%d\n", benchRet); 
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 31
          // dynamic_instructions_O0 : 31
          // ------------------------------- 
          // static_instructions_O1 : 27
          // dynamic_instructions_O1 : 27
          // ------------------------------- 
          // static_instructions_O2 : 27
          // dynamic_instructions_O2 : 27
          // ------------------------------- 
          // static_instructions_O3 : 27
          // dynamic_instructions_O3 : 27
          // ------------------------------- 
          // static_instructions_Ofast : 27
          // dynamic_instructions_Ofast : 27
          // ------------------------------- 
          // static_instructions_Os : 27
          // dynamic_instructions_Os : 27
          // ------------------------------- 
          // static_instructions_Oz : 27
          // dynamic_instructions_Oz : 27
          // ------------------------------- 

          unsigned long iflags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = ext4_iflags_to_xflags(iflags);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
