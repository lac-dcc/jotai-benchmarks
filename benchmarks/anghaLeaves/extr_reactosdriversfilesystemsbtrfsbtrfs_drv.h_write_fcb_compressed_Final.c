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
typedef  struct TYPE_13__   TYPE_6__ ;
typedef  struct TYPE_12__   TYPE_5__ ;
typedef  struct TYPE_11__   TYPE_4__ ;
typedef  struct TYPE_10__   TYPE_3__ ;
typedef  struct TYPE_9__   TYPE_2__ ;
typedef  struct TYPE_8__   TYPE_1__ ;

/* Type definitions */
struct TYPE_11__ {int flags; } ;
struct TYPE_9__ {int Flags2; } ;
struct TYPE_13__ {TYPE_3__* Vcb; TYPE_4__ inode_item; TYPE_2__ Header; TYPE_1__* subvol; } ;
typedef  TYPE_6__ fcb ;
struct TYPE_12__ {scalar_t__ compress; scalar_t__ compress_force; } ;
struct TYPE_10__ {TYPE_5__ options; } ;
struct TYPE_8__ {scalar_t__ id; } ;
typedef  int /*<<< orphan*/  BOOL ;

/* Variables and functions */
 int BTRFS_INODE_COMPRESS ; 
 int BTRFS_INODE_NOCOMPRESS ; 
 scalar_t__ BTRFS_ROOT_ROOT ; 
 int /*<<< orphan*/  FALSE ; 
 int FSRTL_FLAG2_IS_PAGING_FILE ; 
 int /*<<< orphan*/  TRUE ; 

__attribute__((used)) static __inline BOOL write_fcb_compressed(fcb* fcb) {
    // make sure we don't accidentally write the cache inodes or pagefile compressed
    if (fcb->subvol->id == BTRFS_ROOT_ROOT || fcb->Header.Flags2 & FSRTL_FLAG2_IS_PAGING_FILE)
        return FALSE;

    if (fcb->Vcb->options.compress_force)
        return TRUE;

    if (fcb->inode_item.flags & BTRFS_INODE_NOCOMPRESS)
        return FALSE;

    if (fcb->inode_item.flags & BTRFS_INODE_COMPRESS || fcb->Vcb->options.compress)
        return TRUE;

    return FALSE;
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
          int _len_fcb0 = 1;
          struct TYPE_13__ * fcb = (struct TYPE_13__ *) malloc(_len_fcb0*sizeof(struct TYPE_13__));
          for(int _i0 = 0; _i0 < _len_fcb0; _i0++) {
              int _len_fcb__i0__Vcb0 = 1;
          fcb[_i0].Vcb = (struct TYPE_10__ *) malloc(_len_fcb__i0__Vcb0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_fcb__i0__Vcb0; _j0++) {
            fcb[_i0].Vcb->options.compress = ((-2 * (next_i()%2)) + 1) * next_i();
        fcb[_i0].Vcb->options.compress_force = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        fcb[_i0].inode_item.flags = ((-2 * (next_i()%2)) + 1) * next_i();
        fcb[_i0].Header.Flags2 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fcb__i0__subvol0 = 1;
          fcb[_i0].subvol = (struct TYPE_8__ *) malloc(_len_fcb__i0__subvol0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_fcb__i0__subvol0; _j0++) {
            fcb[_i0].subvol->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = write_fcb_compressed(fcb);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fcb0; _aux++) {
          free(fcb[_aux].Vcb);
          }
          for(int _aux = 0; _aux < _len_fcb0; _aux++) {
          free(fcb[_aux].subvol);
          }
          free(fcb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
