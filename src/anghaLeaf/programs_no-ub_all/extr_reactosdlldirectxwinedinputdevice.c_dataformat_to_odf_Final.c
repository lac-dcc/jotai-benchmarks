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
       0            big-arr\n\
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int dwNumObjs; int dwObjSize; scalar_t__ rgodf; } ;
typedef  int /*<<< orphan*/ * LPDIOBJECTDATAFORMAT ;
typedef  TYPE_1__* LPCDIDATAFORMAT ;
typedef  scalar_t__ LPBYTE ;

/* Variables and functions */

__attribute__((used)) static inline LPDIOBJECTDATAFORMAT dataformat_to_odf(LPCDIDATAFORMAT df, int idx)
{
    if (idx < 0 || idx >= df->dwNumObjs) return NULL;
    return (LPDIOBJECTDATAFORMAT)((LPBYTE)df->rgodf + idx * df->dwObjSize);
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

    // big-arr
    case 0:
    {
          int idx = 255;
          int _len_df0 = 1;
          struct TYPE_3__ * df = (struct TYPE_3__ *) malloc(_len_df0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_df0; _i0++) {
            df->dwNumObjs = ((-2 * (next_i()%2)) + 1) * next_i();
        df->dwObjSize = ((-2 * (next_i()%2)) + 1) * next_i();
        df->rgodf = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = dataformat_to_odf(df,idx);
          printf("{{other_type}} %p\n", &benchRet); 
          free(df);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
