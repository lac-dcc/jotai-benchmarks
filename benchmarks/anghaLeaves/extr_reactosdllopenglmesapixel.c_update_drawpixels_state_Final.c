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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {scalar_t__ RowLength; scalar_t__ SkipPixels; scalar_t__ SkipRows; scalar_t__ SwapBytes; scalar_t__ LsbFirst; } ;
struct TYPE_7__ {double RedBias; double RedScale; double GreenBias; double GreenScale; double BlueBias; double BlueScale; double AlphaBias; double AlphaScale; scalar_t__ MapColorFlag; double ZoomX; double ZoomY; } ;
struct TYPE_9__ {scalar_t__ FastDrawPixels; TYPE_3__ Unpack; TYPE_2__ Pixel; TYPE_1__* Visual; } ;
struct TYPE_6__ {scalar_t__ RGBAflag; scalar_t__ EightBitColor; } ;
typedef  TYPE_4__ GLcontext ;

/* Variables and functions */
 scalar_t__ GL_FALSE ; 
 scalar_t__ GL_TRUE ; 

__attribute__((used)) static void update_drawpixels_state( GLcontext *ctx )
{
   if (ctx->Visual->RGBAflag==GL_TRUE &&
       ctx->Visual->EightBitColor &&
       ctx->Pixel.RedBias==0.0   && ctx->Pixel.RedScale==1.0 &&
       ctx->Pixel.GreenBias==0.0 && ctx->Pixel.GreenScale==1.0 &&
       ctx->Pixel.BlueBias==0.0  && ctx->Pixel.BlueScale==1.0 &&
       ctx->Pixel.AlphaBias==0.0 && ctx->Pixel.AlphaScale==1.0 &&
       ctx->Pixel.MapColorFlag==GL_FALSE &&
       ctx->Pixel.ZoomX==1.0 && ctx->Pixel.ZoomY==1.0 &&
/*       ctx->Unpack.Alignment==4 &&*/
       ctx->Unpack.RowLength==0 &&
       ctx->Unpack.SkipPixels==0 &&
       ctx->Unpack.SkipRows==0 &&
       ctx->Unpack.SwapBytes==0 &&
       ctx->Unpack.LsbFirst==0) {
      ctx->FastDrawPixels = GL_TRUE;
   }
   else {
      ctx->FastDrawPixels = GL_FALSE;
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
          int _len_ctx0 = 1;
          struct TYPE_9__ * ctx = (struct TYPE_9__ *) malloc(_len_ctx0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].FastDrawPixels = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Unpack.RowLength = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Unpack.SkipPixels = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Unpack.SkipRows = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Unpack.SwapBytes = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Unpack.LsbFirst = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Pixel.RedBias = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        ctx[_i0].Pixel.RedScale = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        ctx[_i0].Pixel.GreenBias = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        ctx[_i0].Pixel.GreenScale = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        ctx[_i0].Pixel.BlueBias = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        ctx[_i0].Pixel.BlueScale = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        ctx[_i0].Pixel.AlphaBias = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        ctx[_i0].Pixel.AlphaScale = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        ctx[_i0].Pixel.MapColorFlag = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Pixel.ZoomX = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        ctx[_i0].Pixel.ZoomY = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_ctx__i0__Visual0 = 1;
          ctx[_i0].Visual = (struct TYPE_6__ *) malloc(_len_ctx__i0__Visual0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__Visual0; _j0++) {
            ctx[_i0].Visual->RGBAflag = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Visual->EightBitColor = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          update_drawpixels_state(ctx);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].Visual);
          }
          free(ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
