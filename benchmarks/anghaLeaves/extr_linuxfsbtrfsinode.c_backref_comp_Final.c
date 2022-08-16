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
struct sa_defrag_extent_backref {scalar_t__ root_id; scalar_t__ inum; scalar_t__ file_pos; } ;

/* Variables and functions */

__attribute__((used)) static int backref_comp(struct sa_defrag_extent_backref *b1,
			struct sa_defrag_extent_backref *b2)
{
	if (b1->root_id < b2->root_id)
		return -1;
	else if (b1->root_id > b2->root_id)
		return 1;

	if (b1->inum < b2->inum)
		return -1;
	else if (b1->inum > b2->inum)
		return 1;

	if (b1->file_pos < b2->file_pos)
		return -1;
	else if (b1->file_pos > b2->file_pos)
		return 1;

	/*
	 * [------------------------------] ===> (a range of space)
	 *     |<--->|   |<---->| =============> (fs/file tree A)
	 * |<---------------------------->| ===> (fs/file tree B)
	 *
	 * A range of space can refer to two file extents in one tree while
	 * refer to only one file extent in another tree.
	 *
	 * So we may process a disk offset more than one time(two extents in A)
	 * and locate at the same extent(one extent in B), then insert two same
	 * backrefs(both refer to the extent in B).
	 */
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
          int _len_b10 = 1;
          struct sa_defrag_extent_backref * b1 = (struct sa_defrag_extent_backref *) malloc(_len_b10*sizeof(struct sa_defrag_extent_backref));
          for(int _i0 = 0; _i0 < _len_b10; _i0++) {
            b1[_i0].root_id = ((-2 * (next_i()%2)) + 1) * next_i();
        b1[_i0].inum = ((-2 * (next_i()%2)) + 1) * next_i();
        b1[_i0].file_pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b20 = 1;
          struct sa_defrag_extent_backref * b2 = (struct sa_defrag_extent_backref *) malloc(_len_b20*sizeof(struct sa_defrag_extent_backref));
          for(int _i0 = 0; _i0 < _len_b20; _i0++) {
            b2[_i0].root_id = ((-2 * (next_i()%2)) + 1) * next_i();
        b2[_i0].inum = ((-2 * (next_i()%2)) + 1) * next_i();
        b2[_i0].file_pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = backref_comp(b1,b2);
          printf("%d\n", benchRet); 
          free(b1);
          free(b2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
