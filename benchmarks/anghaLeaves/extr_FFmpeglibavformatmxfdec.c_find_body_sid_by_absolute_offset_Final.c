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
typedef  scalar_t__ int64_t ;
struct TYPE_5__ {int partitions_count; TYPE_1__* partitions; } ;
struct TYPE_4__ {scalar_t__ pack_ofs; int body_sid; } ;
typedef  TYPE_2__ MXFContext ;

/* Variables and functions */

__attribute__((used)) static int find_body_sid_by_absolute_offset(MXFContext *mxf, int64_t offset)
{
    // we look for partition where the offset is placed
    int a, b, m;
    int64_t pack_ofs;

    a = -1;
    b = mxf->partitions_count;

    while (b - a > 1) {
        m = (a + b) >> 1;
        pack_ofs = mxf->partitions[m].pack_ofs;
        if (pack_ofs <= offset)
            a = m;
        else
            b = m;
    }

    if (a == -1)
        return 0;
    return mxf->partitions[a].body_sid;
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
          long offset = 100;
          int _len_mxf0 = 1;
          struct TYPE_5__ * mxf = (struct TYPE_5__ *) malloc(_len_mxf0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_mxf0; _i0++) {
            mxf[_i0].partitions_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mxf__i0__partitions0 = 1;
          mxf[_i0].partitions = (struct TYPE_4__ *) malloc(_len_mxf__i0__partitions0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_mxf__i0__partitions0; _j0++) {
            mxf[_i0].partitions->pack_ofs = ((-2 * (next_i()%2)) + 1) * next_i();
        mxf[_i0].partitions->body_sid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = find_body_sid_by_absolute_offset(mxf,offset);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mxf0; _aux++) {
          free(mxf[_aux].partitions);
          }
          free(mxf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
