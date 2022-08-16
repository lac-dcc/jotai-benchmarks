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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {unsigned int i_flags; } ;
struct ocfs2_inode_info {int ip_attr; TYPE_1__ vfs_inode; } ;

/* Variables and functions */
 int OCFS2_APPEND_FL ; 
 int OCFS2_DIRSYNC_FL ; 
 int OCFS2_IMMUTABLE_FL ; 
 int OCFS2_NOATIME_FL ; 
 int OCFS2_SYNC_FL ; 
 unsigned int S_APPEND ; 
 unsigned int S_DIRSYNC ; 
 unsigned int S_IMMUTABLE ; 
 unsigned int S_NOATIME ; 
 unsigned int S_SYNC ; 

void ocfs2_get_inode_flags(struct ocfs2_inode_info *oi)
{
	unsigned int flags = oi->vfs_inode.i_flags;

	oi->ip_attr &= ~(OCFS2_SYNC_FL|OCFS2_APPEND_FL|
			OCFS2_IMMUTABLE_FL|OCFS2_NOATIME_FL|OCFS2_DIRSYNC_FL);
	if (flags & S_SYNC)
		oi->ip_attr |= OCFS2_SYNC_FL;
	if (flags & S_APPEND)
		oi->ip_attr |= OCFS2_APPEND_FL;
	if (flags & S_IMMUTABLE)
		oi->ip_attr |= OCFS2_IMMUTABLE_FL;
	if (flags & S_NOATIME)
		oi->ip_attr |= OCFS2_NOATIME_FL;
	if (flags & S_DIRSYNC)
		oi->ip_attr |= OCFS2_DIRSYNC_FL;
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
          int _len_oi0 = 1;
          struct ocfs2_inode_info * oi = (struct ocfs2_inode_info *) malloc(_len_oi0*sizeof(struct ocfs2_inode_info));
          for(int _i0 = 0; _i0 < _len_oi0; _i0++) {
            oi[_i0].ip_attr = ((-2 * (next_i()%2)) + 1) * next_i();
        oi[_i0].vfs_inode.i_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ocfs2_get_inode_flags(oi);
          free(oi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
