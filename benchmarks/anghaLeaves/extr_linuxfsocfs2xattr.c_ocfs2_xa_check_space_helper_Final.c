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
struct ocfs2_xattr_header {int dummy; } ;
struct ocfs2_xattr_entry {int dummy; } ;

/* Variables and functions */
 int EIO ; 
 int ENOSPC ; 
 int OCFS2_XATTR_HEADER_GAP ; 

__attribute__((used)) static int ocfs2_xa_check_space_helper(int needed_space, int free_start,
				       int num_entries)
{
	int free_space;

	if (!needed_space)
		return 0;

	free_space = free_start -
		sizeof(struct ocfs2_xattr_header) -
		(num_entries * sizeof(struct ocfs2_xattr_entry)) -
		OCFS2_XATTR_HEADER_GAP;
	if (free_space < 0)
		return -EIO;
	if (free_space < needed_space)
		return -ENOSPC;

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
          int needed_space = 100;
          int free_start = 100;
          int num_entries = 100;
          int benchRet = ocfs2_xa_check_space_helper(needed_space,free_start,num_entries);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int needed_space = 255;
          int free_start = 255;
          int num_entries = 255;
          int benchRet = ocfs2_xa_check_space_helper(needed_space,free_start,num_entries);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int needed_space = 10;
          int free_start = 10;
          int num_entries = 10;
          int benchRet = ocfs2_xa_check_space_helper(needed_space,free_start,num_entries);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
