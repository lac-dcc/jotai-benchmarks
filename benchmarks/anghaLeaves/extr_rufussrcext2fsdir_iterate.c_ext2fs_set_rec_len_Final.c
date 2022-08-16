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
struct ext2_dir_entry {unsigned int rec_len; } ;
typedef  TYPE_1__* ext2_filsys ;
typedef  int /*<<< orphan*/  errcode_t ;
struct TYPE_3__ {unsigned int blocksize; } ;

/* Variables and functions */
 int /*<<< orphan*/  EINVAL ; 
 unsigned int EXT4_MAX_REC_LEN ; 

errcode_t ext2fs_set_rec_len(ext2_filsys fs,
			     unsigned int len,
			     struct ext2_dir_entry *dirent)
{
	if ((len > fs->blocksize) || (fs->blocksize > (1 << 18)) || (len & 3))
		return EINVAL;
	if (len < 65536) {
		dirent->rec_len = len;
		return 0;
	}
	if (len == fs->blocksize) {
		if (fs->blocksize == 65536)
			dirent->rec_len = EXT4_MAX_REC_LEN;
		else 
			dirent->rec_len = 0;
	} else
		dirent->rec_len = (len & 65532) | ((len >> 16) & 3);
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
          unsigned int len = 100;
          int _len_fs0 = 1;
          struct TYPE_3__ * fs = (struct TYPE_3__ *) malloc(_len_fs0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_fs0; _i0++) {
            fs[_i0].blocksize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dirent0 = 1;
          struct ext2_dir_entry * dirent = (struct ext2_dir_entry *) malloc(_len_dirent0*sizeof(struct ext2_dir_entry));
          for(int _i0 = 0; _i0 < _len_dirent0; _i0++) {
            dirent[_i0].rec_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ext2fs_set_rec_len(fs,len,dirent);
          printf("%d\n", benchRet); 
          free(fs);
          free(dirent);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
