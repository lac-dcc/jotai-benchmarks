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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct TYPE_5__ {TYPE_1__* entries; } ;
typedef  TYPE_2__ TransactedSnapshotImpl ;
struct TYPE_4__ {scalar_t__ newTransactedParentEntry; scalar_t__ transactedParentEntry; } ;
typedef  size_t DirRef ;
typedef  int BOOL ;

/* Variables and functions */
 size_t DIRENTRY_NULL ; 

__attribute__((used)) static inline BOOL TransactedSnapshotImpl_MadeCopy(
  TransactedSnapshotImpl* This, DirRef entry)
{
  return entry != DIRENTRY_NULL &&
    This->entries[entry].newTransactedParentEntry != This->entries[entry].transactedParentEntry;
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

    // big-arr-10x
    case 0:
    {
          unsigned long entry = 10;
          int _len_This0 = 100;
          struct TYPE_5__ * This = (struct TYPE_5__ *) malloc(_len_This0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_This0; _i0++) {
              int _len_This__i0__entries0 = 1;
          This[_i0].entries = (struct TYPE_4__ *) malloc(_len_This__i0__entries0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_This__i0__entries0; _j0++) {
            This[_i0].entries->newTransactedParentEntry = ((-2 * (next_i()%2)) + 1) * next_i();
        This[_i0].entries->transactedParentEntry = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = TransactedSnapshotImpl_MadeCopy(This,entry);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_This0; _aux++) {
          free(This[_aux].entries);
          }
          free(This);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
