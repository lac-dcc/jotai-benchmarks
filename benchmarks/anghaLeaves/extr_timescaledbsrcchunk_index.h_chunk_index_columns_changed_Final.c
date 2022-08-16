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
typedef  TYPE_1__* TupleDesc ;
struct TYPE_3__ {int natts; int tdhasoid; } ;

/* Variables and functions */

__attribute__((used)) static inline bool
chunk_index_columns_changed(int hypertable_natts, bool hypertable_has_oid, TupleDesc chunkdesc)
{
	/*
	 * We should be able to safely assume that the only reason the number of
	 * attributes differ is because we have removed columns in the base table,
	 * leaving junk attributes that aren't inherited by the chunk.
	 */
	return !(hypertable_natts == chunkdesc->natts && hypertable_has_oid == chunkdesc->tdhasoid);
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
          int hypertable_natts = 100;
          int hypertable_has_oid = 100;
          int _len_chunkdesc0 = 1;
          struct TYPE_3__ * chunkdesc = (struct TYPE_3__ *) malloc(_len_chunkdesc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_chunkdesc0; _i0++) {
            chunkdesc[_i0].natts = ((-2 * (next_i()%2)) + 1) * next_i();
        chunkdesc[_i0].tdhasoid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = chunk_index_columns_changed(hypertable_natts,hypertable_has_oid,chunkdesc);
          printf("%d\n", benchRet); 
          free(chunkdesc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
