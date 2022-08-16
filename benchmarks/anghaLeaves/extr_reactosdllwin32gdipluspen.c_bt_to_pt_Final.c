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
typedef  int /*<<< orphan*/  GpPenType ;
typedef  int GpBrushType ;

/* Variables and functions */
#define  BrushTypeHatchFill 132 
#define  BrushTypeLinearGradient 131 
#define  BrushTypePathGradient 130 
#define  BrushTypeSolidColor 129 
#define  BrushTypeTextureFill 128 
 int /*<<< orphan*/  PenTypeHatchFill ; 
 int /*<<< orphan*/  PenTypeLinearGradient ; 
 int /*<<< orphan*/  PenTypePathGradient ; 
 int /*<<< orphan*/  PenTypeSolidColor ; 
 int /*<<< orphan*/  PenTypeTextureFill ; 
 int /*<<< orphan*/  PenTypeUnknown ; 

__attribute__((used)) static GpPenType bt_to_pt(GpBrushType bt)
{
    switch(bt){
        case BrushTypeSolidColor:
            return PenTypeSolidColor;
        case BrushTypeHatchFill:
            return PenTypeHatchFill;
        case BrushTypeTextureFill:
            return PenTypeTextureFill;
        case BrushTypePathGradient:
            return PenTypePathGradient;
        case BrushTypeLinearGradient:
            return PenTypeLinearGradient;
        default:
            return PenTypeUnknown;
    }
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
          int bt = 100;
          int benchRet = bt_to_pt(bt);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int bt = 255;
          int benchRet = bt_to_pt(bt);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int bt = 10;
          int benchRet = bt_to_pt(bt);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
