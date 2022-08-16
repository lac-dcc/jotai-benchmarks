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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ io_channel ;
typedef  TYPE_1__* ext2_filsys ;
typedef  int /*<<< orphan*/  errcode_t ;
struct TYPE_3__ {int flags; scalar_t__ image_io; scalar_t__ io; } ;

/* Variables and functions */
 int /*<<< orphan*/  EXT2_ET_NOT_IMAGE_FILE ; 
 int EXT2_FLAG_IMAGE_FILE ; 

errcode_t ext2fs_get_data_io(ext2_filsys fs, io_channel *old_io)
{
	if ((fs->flags & EXT2_FLAG_IMAGE_FILE) == 0)
		return EXT2_ET_NOT_IMAGE_FILE;
	if (old_io) {
		*old_io = (fs->image_io == fs->io) ? 0 : fs->io;
	}
	return 0;
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
          int _len_fs0 = 1;
          struct TYPE_3__ * fs = (struct TYPE_3__ *) malloc(_len_fs0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_fs0; _i0++) {
            fs[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        fs[_i0].image_io = ((-2 * (next_i()%2)) + 1) * next_i();
        fs[_i0].io = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_old_io0 = 1;
          long * old_io = (long *) malloc(_len_old_io0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_old_io0; _i0++) {
            old_io[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ext2fs_get_data_io(fs,old_io);
          printf("%d\n", benchRet); 
          free(fs);
          free(old_io);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
