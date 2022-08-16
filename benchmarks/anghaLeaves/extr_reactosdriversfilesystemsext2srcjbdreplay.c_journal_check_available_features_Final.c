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
struct TYPE_3__ {int j_format_version; int /*<<< orphan*/ * j_superblock; } ;
typedef  TYPE_1__ journal_t ;
typedef  int /*<<< orphan*/  journal_superblock_t ;

/* Variables and functions */
 unsigned long JFS_KNOWN_COMPAT_FEATURES ; 
 unsigned long JFS_KNOWN_INCOMPAT_FEATURES ; 
 unsigned long JFS_KNOWN_ROCOMPAT_FEATURES ; 

int journal_check_available_features (journal_t *journal, unsigned long compat,
                                      unsigned long ro, unsigned long incompat)
{
    journal_superblock_t *sb;

    if (!compat && !ro && !incompat)
        return 1;

    sb = journal->j_superblock;

    /* We can support any known requested features iff the
     * superblock is in version 2.  Otherwise we fail to support any
     * extended sb features. */

    if (journal->j_format_version != 2)
        return 0;

    if ((compat   & JFS_KNOWN_COMPAT_FEATURES) == compat &&
            (ro       & JFS_KNOWN_ROCOMPAT_FEATURES) == ro &&
            (incompat & JFS_KNOWN_INCOMPAT_FEATURES) == incompat)
        return 1;

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
          unsigned long compat = 100;
          unsigned long ro = 100;
          unsigned long incompat = 100;
          int _len_journal0 = 1;
          struct TYPE_3__ * journal = (struct TYPE_3__ *) malloc(_len_journal0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_journal0; _i0++) {
            journal[_i0].j_format_version = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_journal__i0__j_superblock0 = 1;
          journal[_i0].j_superblock = (int *) malloc(_len_journal__i0__j_superblock0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_journal__i0__j_superblock0; _j0++) {
            journal[_i0].j_superblock[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = journal_check_available_features(journal,compat,ro,incompat);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_journal0; _aux++) {
          free(journal[_aux].j_superblock);
          }
          free(journal);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
