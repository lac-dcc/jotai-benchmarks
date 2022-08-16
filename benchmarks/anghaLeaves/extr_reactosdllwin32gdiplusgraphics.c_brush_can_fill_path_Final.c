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
       1            big-arr-10x\n\
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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {int bt; } ;
struct TYPE_6__ {int forecol; int backcol; } ;
struct TYPE_5__ {int color; } ;
typedef  TYPE_1__ GpSolidFill ;
typedef  TYPE_2__ GpHatch ;
typedef  TYPE_3__ GpBrush ;
typedef  int BOOL ;

/* Variables and functions */
#define  BrushTypeHatchFill 131 
#define  BrushTypeLinearGradient 130 
#define  BrushTypeSolidColor 129 
#define  BrushTypeTextureFill 128 
 int FALSE ; 
 int TRUE ; 

__attribute__((used)) static BOOL brush_can_fill_path(GpBrush *brush, BOOL is_fill)
{
    switch (brush->bt)
    {
    case BrushTypeSolidColor:
    {
        if (is_fill)
            return TRUE;
        else
        {
            /* cannot draw semi-transparent colors */
            return (((GpSolidFill*)brush)->color & 0xff000000) == 0xff000000;
        }
    }
    case BrushTypeHatchFill:
    {
        GpHatch *hatch = (GpHatch*)brush;
        return ((hatch->forecol & 0xff000000) == 0xff000000) &&
               ((hatch->backcol & 0xff000000) == 0xff000000);
    }
    case BrushTypeLinearGradient:
    case BrushTypeTextureFill:
    /* Gdi32 isn't much help with these, so we should use brush_fill_pixels instead. */
    default:
        return FALSE;
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
          int is_fill = 100;
          int _len_brush0 = 1;
          struct TYPE_7__ * brush = (struct TYPE_7__ *) malloc(_len_brush0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_brush0; _i0++) {
            brush[_i0].bt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = brush_can_fill_path(brush,is_fill);
          printf("%d\n", benchRet); 
          free(brush);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int is_fill = 10;
          int _len_brush0 = 100;
          struct TYPE_7__ * brush = (struct TYPE_7__ *) malloc(_len_brush0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_brush0; _i0++) {
            brush[_i0].bt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = brush_can_fill_path(brush,is_fill);
          printf("%d\n", benchRet); 
          free(brush);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
