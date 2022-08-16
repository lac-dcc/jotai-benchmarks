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
struct efs_sb_info {scalar_t__ fs_start; } ;
struct TYPE_4__ {scalar_t__ ex_bn; scalar_t__ ex_length; scalar_t__ ex_offset; } ;
struct TYPE_5__ {TYPE_1__ cooked; } ;
typedef  TYPE_2__ efs_extent ;
typedef  scalar_t__ efs_block_t ;

/* Variables and functions */

__attribute__((used)) static inline efs_block_t
efs_extent_check(efs_extent *ptr, efs_block_t block, struct efs_sb_info *sb) {
	efs_block_t start;
	efs_block_t length;
	efs_block_t offset;

	/*
	 * given an extent and a logical block within a file,
	 * can this block be found within this extent ?
	 */
	start  = ptr->cooked.ex_bn;
	length = ptr->cooked.ex_length;
	offset = ptr->cooked.ex_offset;

	if ((block >= offset) && (block < offset+length)) {
		return(sb->fs_start + start + block - offset);
	} else {
		return 0;
	}
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
          long block = 100;
          int _len_ptr0 = 1;
          struct TYPE_5__ * ptr = (struct TYPE_5__ *) malloc(_len_ptr0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            ptr[_i0].cooked.ex_bn = ((-2 * (next_i()%2)) + 1) * next_i();
        ptr[_i0].cooked.ex_length = ((-2 * (next_i()%2)) + 1) * next_i();
        ptr[_i0].cooked.ex_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sb0 = 1;
          struct efs_sb_info * sb = (struct efs_sb_info *) malloc(_len_sb0*sizeof(struct efs_sb_info));
          for(int _i0 = 0; _i0 < _len_sb0; _i0++) {
            sb[_i0].fs_start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = efs_extent_check(ptr,block,sb);
          printf("%ld\n", benchRet); 
          free(ptr);
          free(sb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
