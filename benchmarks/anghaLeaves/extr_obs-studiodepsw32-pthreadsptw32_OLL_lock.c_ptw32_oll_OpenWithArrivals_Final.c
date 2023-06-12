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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {size_t count; int /*<<< orphan*/  state; } ;
struct TYPE_7__ {TYPE_1__ internal; } ;
struct TYPE_8__ {TYPE_2__ counter; } ;
struct TYPE_9__ {TYPE_3__ proxyRoot; } ;
typedef  TYPE_4__ ptw32_oll_csnzi_t ;
typedef  scalar_t__ BOOL ;

/* Variables and functions */
 int /*<<< orphan*/  ptw32_oll_snziRoot_closed ; 
 int /*<<< orphan*/  ptw32_oll_snziRoot_open ; 

void
ptw32_oll_OpenWithArrivals(ptw32_oll_csnzi_t* csnziPtr, size_t count, BOOL close)
{
  csnziPtr->proxyRoot.counter.internal.count = count;
  csnziPtr->proxyRoot.counter.internal.state = (close ? ptw32_oll_snziRoot_closed : ptw32_oll_snziRoot_open);
}

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
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          unsigned long count = 100;
        
          long close = 100;
        
          int _len_csnziPtr0 = 1;
          struct TYPE_9__ * csnziPtr = (struct TYPE_9__ *) malloc(_len_csnziPtr0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_csnziPtr0; _i0++) {
              csnziPtr[_i0].proxyRoot.counter.internal.count = ((-2 * (next_i()%2)) + 1) * next_i();
          csnziPtr[_i0].proxyRoot.counter.internal.state = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
        
          }
        
          ptw32_oll_OpenWithArrivals(csnziPtr,count,close);
          free(csnziPtr);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          unsigned long count = 255;
        
          long close = 255;
        
          int _len_csnziPtr0 = 65025;
          struct TYPE_9__ * csnziPtr = (struct TYPE_9__ *) malloc(_len_csnziPtr0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_csnziPtr0; _i0++) {
              csnziPtr[_i0].proxyRoot.counter.internal.count = ((-2 * (next_i()%2)) + 1) * next_i();
          csnziPtr[_i0].proxyRoot.counter.internal.state = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
        
          }
        
          ptw32_oll_OpenWithArrivals(csnziPtr,count,close);
          free(csnziPtr);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          unsigned long count = 10;
        
          long close = 10;
        
          int _len_csnziPtr0 = 100;
          struct TYPE_9__ * csnziPtr = (struct TYPE_9__ *) malloc(_len_csnziPtr0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_csnziPtr0; _i0++) {
              csnziPtr[_i0].proxyRoot.counter.internal.count = ((-2 * (next_i()%2)) + 1) * next_i();
          csnziPtr[_i0].proxyRoot.counter.internal.state = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
        
          }
        
          ptw32_oll_OpenWithArrivals(csnziPtr,count,close);
          free(csnziPtr);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          unsigned long count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long close = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_csnziPtr0 = 1;
          struct TYPE_9__ * csnziPtr = (struct TYPE_9__ *) malloc(_len_csnziPtr0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_csnziPtr0; _i0++) {
              csnziPtr[_i0].proxyRoot.counter.internal.count = ((-2 * (next_i()%2)) + 1) * next_i();
          csnziPtr[_i0].proxyRoot.counter.internal.state = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
        
          }
        
          ptw32_oll_OpenWithArrivals(csnziPtr,count,close);
          free(csnziPtr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
