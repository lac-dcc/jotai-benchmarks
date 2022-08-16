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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  ULONGLONG ;
struct TYPE_6__ {int /*<<< orphan*/  ValueLength; } ;
struct TYPE_5__ {int /*<<< orphan*/  DataSize; } ;
struct TYPE_7__ {TYPE_2__ Resident; TYPE_1__ NonResident; scalar_t__ IsNonResident; } ;
typedef  TYPE_3__* PNTFS_ATTR_RECORD ;

/* Variables and functions */

ULONGLONG
AttributeDataLength(PNTFS_ATTR_RECORD AttrRecord)
{
    if (AttrRecord->IsNonResident)
        return AttrRecord->NonResident.DataSize;
    else
        return AttrRecord->Resident.ValueLength;
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
          int _len_AttrRecord0 = 1;
          struct TYPE_7__ * AttrRecord = (struct TYPE_7__ *) malloc(_len_AttrRecord0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_AttrRecord0; _i0++) {
            AttrRecord[_i0].Resident.ValueLength = ((-2 * (next_i()%2)) + 1) * next_i();
        AttrRecord[_i0].NonResident.DataSize = ((-2 * (next_i()%2)) + 1) * next_i();
        AttrRecord[_i0].IsNonResident = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = AttributeDataLength(AttrRecord);
          printf("%d\n", benchRet); 
          free(AttrRecord);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
