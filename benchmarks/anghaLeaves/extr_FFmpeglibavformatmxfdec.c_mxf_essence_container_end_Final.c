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
struct TYPE_4__ {int body_sid; scalar_t__ essence_length; scalar_t__ essence_offset; } ;
typedef  TYPE_1__ MXFPartition ;
typedef  TYPE_2__ MXFContext ;

/* Variables and functions */

__attribute__((used)) static int64_t mxf_essence_container_end(MXFContext *mxf, int body_sid)
{
    for (int x = mxf->partitions_count - 1; x >= 0; x--) {
        MXFPartition *p = &mxf->partitions[x];

        if (p->body_sid != body_sid)
            continue;

        if (!p->essence_length)
            return 0;

        return p->essence_offset + p->essence_length;
    }

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
          int body_sid = 100;
          int _len_mxf0 = 1;
          struct TYPE_5__ * mxf = (struct TYPE_5__ *) malloc(_len_mxf0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_mxf0; _i0++) {
            mxf[_i0].partitions_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mxf__i0__partitions0 = 1;
          mxf[_i0].partitions = (struct TYPE_4__ *) malloc(_len_mxf__i0__partitions0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_mxf__i0__partitions0; _j0++) {
            mxf[_i0].partitions->body_sid = ((-2 * (next_i()%2)) + 1) * next_i();
        mxf[_i0].partitions->essence_length = ((-2 * (next_i()%2)) + 1) * next_i();
        mxf[_i0].partitions->essence_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = mxf_essence_container_end(mxf,body_sid);
          printf("%ld\n", benchRet); 
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
