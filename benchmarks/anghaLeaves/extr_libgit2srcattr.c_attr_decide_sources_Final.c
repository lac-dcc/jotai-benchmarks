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
       1            big-arr-10x\n\
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
typedef  int uint32_t ;
typedef  int /*<<< orphan*/  git_attr_file_source ;

/* Variables and functions */
#define  GIT_ATTR_CHECK_FILE_THEN_INDEX 130 
#define  GIT_ATTR_CHECK_INDEX_ONLY 129 
#define  GIT_ATTR_CHECK_INDEX_THEN_FILE 128 
 int /*<<< orphan*/  GIT_ATTR_FILE__FROM_FILE ; 
 int /*<<< orphan*/  GIT_ATTR_FILE__FROM_INDEX ; 

__attribute__((used)) static int attr_decide_sources(
	uint32_t flags, bool has_wd, bool has_index, git_attr_file_source *srcs)
{
	int count = 0;

	switch (flags & 0x03) {
	case GIT_ATTR_CHECK_FILE_THEN_INDEX:
		if (has_wd)
			srcs[count++] = GIT_ATTR_FILE__FROM_FILE;
		if (has_index)
			srcs[count++] = GIT_ATTR_FILE__FROM_INDEX;
		break;
	case GIT_ATTR_CHECK_INDEX_THEN_FILE:
		if (has_index)
			srcs[count++] = GIT_ATTR_FILE__FROM_INDEX;
		if (has_wd)
			srcs[count++] = GIT_ATTR_FILE__FROM_FILE;
		break;
	case GIT_ATTR_CHECK_INDEX_ONLY:
		if (has_index)
			srcs[count++] = GIT_ATTR_FILE__FROM_INDEX;
		break;
	}

	return count;
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
          int flags = 100;
          int has_wd = 100;
          int has_index = 100;
          int _len_srcs0 = 1;
          int * srcs = (int *) malloc(_len_srcs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_srcs0; _i0++) {
            srcs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = attr_decide_sources(flags,has_wd,has_index,srcs);
          printf("%d\n", benchRet); 
          free(srcs);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int flags = 10;
          int has_wd = 10;
          int has_index = 10;
          int _len_srcs0 = 100;
          int * srcs = (int *) malloc(_len_srcs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_srcs0; _i0++) {
            srcs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = attr_decide_sources(flags,has_wd,has_index,srcs);
          printf("%d\n", benchRet); 
          free(srcs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
