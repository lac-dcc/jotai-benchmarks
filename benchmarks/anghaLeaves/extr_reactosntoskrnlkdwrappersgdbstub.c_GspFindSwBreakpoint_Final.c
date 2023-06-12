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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ ULONG_PTR ;
typedef  size_t ULONG ;
struct TYPE_2__ {scalar_t__ Address; } ;
typedef  size_t* PULONG ;
typedef  int /*<<< orphan*/  BOOLEAN ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 
 size_t GspSwBreakpointCount ; 
 TYPE_1__* GspSwBreakpoints ; 
 int /*<<< orphan*/  TRUE ; 

__attribute__((used)) static BOOLEAN
GspFindSwBreakpoint(ULONG_PTR Address, PULONG PIndex)
{
    ULONG Index;

    for (Index = 0; Index < GspSwBreakpointCount; Index++)
    {
        if (GspSwBreakpoints[Index].Address == Address)
        {
            if (PIndex)
                *PIndex = Index;
            return TRUE;
        }
    }

    return FALSE;
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
          long Address = 100;
        
          int _len_PIndex0 = 1;
          unsigned long * PIndex = (unsigned long *) malloc(_len_PIndex0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_PIndex0; _i0++) {
            PIndex[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = GspFindSwBreakpoint(Address,PIndex);
          printf("%d\n", benchRet); 
          free(PIndex);
        
        break;
    }
    // big-arr
    case 1:
    {
          long Address = 255;
        
          int _len_PIndex0 = 65025;
          unsigned long * PIndex = (unsigned long *) malloc(_len_PIndex0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_PIndex0; _i0++) {
            PIndex[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = GspFindSwBreakpoint(Address,PIndex);
          printf("%d\n", benchRet); 
          free(PIndex);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long Address = 10;
        
          int _len_PIndex0 = 100;
          unsigned long * PIndex = (unsigned long *) malloc(_len_PIndex0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_PIndex0; _i0++) {
            PIndex[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = GspFindSwBreakpoint(Address,PIndex);
          printf("%d\n", benchRet); 
          free(PIndex);
        
        break;
    }
    // empty
    case 3:
    {
          long Address = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_PIndex0 = 1;
          unsigned long * PIndex = (unsigned long *) malloc(_len_PIndex0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_PIndex0; _i0++) {
            PIndex[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = GspFindSwBreakpoint(Address,PIndex);
          printf("%d\n", benchRet); 
          free(PIndex);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
