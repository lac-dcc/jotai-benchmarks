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

/* Type definitions */
typedef  int /*<<< orphan*/  XLATEOBJ ;
typedef  int /*<<< orphan*/  SURFOBJ ;
typedef  int /*<<< orphan*/  ROP4 ;
typedef  int /*<<< orphan*/  RECTL ;
typedef  int /*<<< orphan*/  POINTL ;
typedef  int /*<<< orphan*/  BRUSHOBJ ;
typedef  int /*<<< orphan*/  BOOLEAN ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 

BOOLEAN Dummy_StretchBlt(SURFOBJ *DestSurf, SURFOBJ *SourceSurf,
                         SURFOBJ *PatternSurface, SURFOBJ *MaskSurf,
                         RECTL*  DestRect,  RECTL  *SourceRect,
                         POINTL* MaskOrigin, BRUSHOBJ* Brush,
                         POINTL* BrushOrign,
                         XLATEOBJ *ColorTranslation,
                         ROP4 Rop)
{
  return FALSE;
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
          int Rop = 100;
          int _len_DestSurf0 = 1;
          int * DestSurf = (int *) malloc(_len_DestSurf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_DestSurf0; _i0++) {
            DestSurf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_SourceSurf0 = 1;
          int * SourceSurf = (int *) malloc(_len_SourceSurf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_SourceSurf0; _i0++) {
            SourceSurf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_PatternSurface0 = 1;
          int * PatternSurface = (int *) malloc(_len_PatternSurface0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_PatternSurface0; _i0++) {
            PatternSurface[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_MaskSurf0 = 1;
          int * MaskSurf = (int *) malloc(_len_MaskSurf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_MaskSurf0; _i0++) {
            MaskSurf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_DestRect0 = 1;
          int * DestRect = (int *) malloc(_len_DestRect0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_DestRect0; _i0++) {
            DestRect[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_SourceRect0 = 1;
          int * SourceRect = (int *) malloc(_len_SourceRect0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_SourceRect0; _i0++) {
            SourceRect[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_MaskOrigin0 = 1;
          int * MaskOrigin = (int *) malloc(_len_MaskOrigin0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_MaskOrigin0; _i0++) {
            MaskOrigin[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_Brush0 = 1;
          int * Brush = (int *) malloc(_len_Brush0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_Brush0; _i0++) {
            Brush[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_BrushOrign0 = 1;
          int * BrushOrign = (int *) malloc(_len_BrushOrign0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_BrushOrign0; _i0++) {
            BrushOrign[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ColorTranslation0 = 1;
          int * ColorTranslation = (int *) malloc(_len_ColorTranslation0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ColorTranslation0; _i0++) {
            ColorTranslation[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = Dummy_StretchBlt(DestSurf,SourceSurf,PatternSurface,MaskSurf,DestRect,SourceRect,MaskOrigin,Brush,BrushOrign,ColorTranslation,Rop);
          printf("%d\n", benchRet); 
          free(DestSurf);
          free(SourceSurf);
          free(PatternSurface);
          free(MaskSurf);
          free(DestRect);
          free(SourceRect);
          free(MaskOrigin);
          free(Brush);
          free(BrushOrign);
          free(ColorTranslation);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
