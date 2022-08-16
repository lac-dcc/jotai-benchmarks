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
struct inode {int /*<<< orphan*/  i_ctime; int /*<<< orphan*/  i_mtime; int /*<<< orphan*/  i_atime; int /*<<< orphan*/  i_gid; int /*<<< orphan*/  i_uid; int /*<<< orphan*/  i_mode; } ;
struct iattr {int /*<<< orphan*/  ia_ctime; int /*<<< orphan*/  ia_mtime; int /*<<< orphan*/  ia_atime; int /*<<< orphan*/  ia_gid; int /*<<< orphan*/  ia_uid; int /*<<< orphan*/  ia_mode; } ;

/* Variables and functions */

__attribute__((used)) static inline void set_inode_attr(struct inode * inode, struct iattr * iattr)
{
	inode->i_mode = iattr->ia_mode;
	inode->i_uid = iattr->ia_uid;
	inode->i_gid = iattr->ia_gid;
	inode->i_atime = iattr->ia_atime;
	inode->i_mtime = iattr->ia_mtime;
	inode->i_ctime = iattr->ia_ctime;
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
          int _len_inode0 = 1;
          struct inode * inode = (struct inode *) malloc(_len_inode0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_inode0; _i0++) {
            inode[_i0].i_ctime = ((-2 * (next_i()%2)) + 1) * next_i();
        inode[_i0].i_mtime = ((-2 * (next_i()%2)) + 1) * next_i();
        inode[_i0].i_atime = ((-2 * (next_i()%2)) + 1) * next_i();
        inode[_i0].i_gid = ((-2 * (next_i()%2)) + 1) * next_i();
        inode[_i0].i_uid = ((-2 * (next_i()%2)) + 1) * next_i();
        inode[_i0].i_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_iattr0 = 1;
          struct iattr * iattr = (struct iattr *) malloc(_len_iattr0*sizeof(struct iattr));
          for(int _i0 = 0; _i0 < _len_iattr0; _i0++) {
            iattr[_i0].ia_ctime = ((-2 * (next_i()%2)) + 1) * next_i();
        iattr[_i0].ia_mtime = ((-2 * (next_i()%2)) + 1) * next_i();
        iattr[_i0].ia_atime = ((-2 * (next_i()%2)) + 1) * next_i();
        iattr[_i0].ia_gid = ((-2 * (next_i()%2)) + 1) * next_i();
        iattr[_i0].ia_uid = ((-2 * (next_i()%2)) + 1) * next_i();
        iattr[_i0].ia_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_inode_attr(inode,iattr);
          free(inode);
          free(iattr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
