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
typedef  int /*<<< orphan*/  POINT ;
typedef  int /*<<< orphan*/  PHYSDEV ;
typedef  int /*<<< orphan*/  INT ;
typedef  int /*<<< orphan*/  BOOL ;

/* Variables and functions */
 int /*<<< orphan*/  TRUE ; 

__attribute__((used)) static BOOL  NULL_SetViewportOrgEx(PHYSDEV dev, INT x, INT y, POINT *pt) { return TRUE; }

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
          int dev = 100;
        
          int x = 100;
        
          int y = 100;
        
          int _len_pt0 = 1;
          int * pt = (int *) malloc(_len_pt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pt0; _i0++) {
            pt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = NULL_SetViewportOrgEx(dev,x,y,pt);
          printf("%d\n", benchRet); 
          free(pt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int dev = 255;
        
          int x = 255;
        
          int y = 255;
        
          int _len_pt0 = 65025;
          int * pt = (int *) malloc(_len_pt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pt0; _i0++) {
            pt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = NULL_SetViewportOrgEx(dev,x,y,pt);
          printf("%d\n", benchRet); 
          free(pt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int dev = 10;
        
          int x = 10;
        
          int y = 10;
        
          int _len_pt0 = 100;
          int * pt = (int *) malloc(_len_pt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pt0; _i0++) {
            pt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = NULL_SetViewportOrgEx(dev,x,y,pt);
          printf("%d\n", benchRet); 
          free(pt);
        
        break;
    }
    // empty
    case 3:
    {
          int dev = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int x = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int y = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_pt0 = 1;
          int * pt = (int *) malloc(_len_pt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pt0; _i0++) {
            pt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = NULL_SetViewportOrgEx(dev,x,y,pt);
          printf("%d\n", benchRet); 
          free(pt);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
