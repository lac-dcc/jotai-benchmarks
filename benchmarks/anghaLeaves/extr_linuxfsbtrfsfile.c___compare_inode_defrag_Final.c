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
struct inode_defrag {scalar_t__ root; scalar_t__ ino; } ;

/* Variables and functions */

__attribute__((used)) static int __compare_inode_defrag(struct inode_defrag *defrag1,
				  struct inode_defrag *defrag2)
{
	if (defrag1->root > defrag2->root)
		return 1;
	else if (defrag1->root < defrag2->root)
		return -1;
	else if (defrag1->ino > defrag2->ino)
		return 1;
	else if (defrag1->ino < defrag2->ino)
		return -1;
	else
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
          int _len_defrag10 = 1;
          struct inode_defrag * defrag1 = (struct inode_defrag *) malloc(_len_defrag10*sizeof(struct inode_defrag));
          for(int _i0 = 0; _i0 < _len_defrag10; _i0++) {
            defrag1[_i0].root = ((-2 * (next_i()%2)) + 1) * next_i();
        defrag1[_i0].ino = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_defrag20 = 1;
          struct inode_defrag * defrag2 = (struct inode_defrag *) malloc(_len_defrag20*sizeof(struct inode_defrag));
          for(int _i0 = 0; _i0 < _len_defrag20; _i0++) {
            defrag2[_i0].root = ((-2 * (next_i()%2)) + 1) * next_i();
        defrag2[_i0].ino = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __compare_inode_defrag(defrag1,defrag2);
          printf("%d\n", benchRet); 
          free(defrag1);
          free(defrag2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
