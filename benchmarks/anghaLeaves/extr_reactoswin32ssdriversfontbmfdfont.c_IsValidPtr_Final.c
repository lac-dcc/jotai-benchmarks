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

/* Type definitions */
typedef  scalar_t__ ULONG_PTR ;
typedef  scalar_t__ ULONG ;
typedef  scalar_t__ PVOID ;
typedef  int /*<<< orphan*/  BOOLEAN ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 
 int /*<<< orphan*/  TRUE ; 

__attribute__((used)) static
BOOLEAN
IsValidPtr(
    PVOID p,
    ULONG cjSize,
    PVOID pStart,
    PVOID pEnd,
    ULONG cjAlign)
{
    if ((ULONG_PTR)p < (ULONG_PTR)pStart ||
        (ULONG_PTR)p + cjSize >= (ULONG_PTR)pEnd ||
        (ULONG_PTR)p & (cjAlign -1))
    {
        return FALSE;
    }
    return TRUE;
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
          long p = 100;
        
          long cjSize = 100;
        
          long pStart = 100;
        
          long pEnd = 100;
        
          long cjAlign = 100;
        
          int benchRet = IsValidPtr(p,cjSize,pStart,pEnd,cjAlign);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long p = 255;
        
          long cjSize = 255;
        
          long pStart = 255;
        
          long pEnd = 255;
        
          long cjAlign = 255;
        
          int benchRet = IsValidPtr(p,cjSize,pStart,pEnd,cjAlign);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long p = 10;
        
          long cjSize = 10;
        
          long pStart = 10;
        
          long pEnd = 10;
        
          long cjAlign = 10;
        
          int benchRet = IsValidPtr(p,cjSize,pStart,pEnd,cjAlign);
          printf("%d\n", benchRet); 
        
        break;
    }
    // empty
    case 3:
    {
          long p = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long cjSize = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long pStart = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long pEnd = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long cjAlign = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = IsValidPtr(p,cjSize,pStart,pEnd,cjAlign);
          printf("%d\n", benchRet); 
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
