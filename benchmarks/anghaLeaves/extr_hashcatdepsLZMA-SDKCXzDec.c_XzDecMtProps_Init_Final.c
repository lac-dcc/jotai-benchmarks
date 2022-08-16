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
struct TYPE_3__ {int inBufSize_ST; int outStep_ST; int numThreads; int inBufSize_MT; int memUseMax; int /*<<< orphan*/  ignoreErrors; } ;
typedef  TYPE_1__ CXzDecMtProps ;

/* Variables and functions */
 int /*<<< orphan*/  False ; 

void XzDecMtProps_Init(CXzDecMtProps *p)
{
  p->inBufSize_ST = 1 << 18;
  p->outStep_ST = 1 << 20;
  p->ignoreErrors = False;

  #ifndef _7ZIP_ST
  p->numThreads = 1;
  p->inBufSize_MT = 1 << 18;
  p->memUseMax = sizeof(size_t) << 28;
  #endif
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
          int _len_p0 = 1;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].inBufSize_ST = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].outStep_ST = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].numThreads = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].inBufSize_MT = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].memUseMax = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].ignoreErrors = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          XzDecMtProps_Init(p);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
