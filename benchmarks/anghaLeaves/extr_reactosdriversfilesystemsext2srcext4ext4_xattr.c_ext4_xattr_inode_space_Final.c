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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct ext4_xattr_ref {TYPE_2__* OnDiskInode; TYPE_1__* fs; } ;
typedef  int __s32 ;
struct TYPE_4__ {int i_extra_isize; } ;
struct TYPE_3__ {int InodeSize; } ;

/* Variables and functions */
 int EXT4_GOOD_OLD_INODE_SIZE ; 

__attribute__((used)) static __s32 ext4_xattr_inode_space(struct ext4_xattr_ref *xattr_ref)
{
	int inode_size = xattr_ref->fs->InodeSize;
	int size_rem = inode_size - EXT4_GOOD_OLD_INODE_SIZE -
			    xattr_ref->OnDiskInode->i_extra_isize;
	return size_rem;
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
          int _len_xattr_ref0 = 1;
          struct ext4_xattr_ref * xattr_ref = (struct ext4_xattr_ref *) malloc(_len_xattr_ref0*sizeof(struct ext4_xattr_ref));
          for(int _i0 = 0; _i0 < _len_xattr_ref0; _i0++) {
              int _len_xattr_ref__i0__OnDiskInode0 = 1;
          xattr_ref[_i0].OnDiskInode = (struct TYPE_4__ *) malloc(_len_xattr_ref__i0__OnDiskInode0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_xattr_ref__i0__OnDiskInode0; _j0++) {
            xattr_ref[_i0].OnDiskInode->i_extra_isize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_xattr_ref__i0__fs0 = 1;
          xattr_ref[_i0].fs = (struct TYPE_3__ *) malloc(_len_xattr_ref__i0__fs0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_xattr_ref__i0__fs0; _j0++) {
            xattr_ref[_i0].fs->InodeSize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ext4_xattr_inode_space(xattr_ref);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_xattr_ref0; _aux++) {
          free(xattr_ref[_aux].OnDiskInode);
          }
          for(int _aux = 0; _aux < _len_xattr_ref0; _aux++) {
          free(xattr_ref[_aux].fs);
          }
          free(xattr_ref);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
