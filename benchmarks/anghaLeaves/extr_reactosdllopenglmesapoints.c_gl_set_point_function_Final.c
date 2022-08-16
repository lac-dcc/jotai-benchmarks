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
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_10__ {scalar_t__ PointsFunc; } ;
struct TYPE_9__ {double Size; scalar_t__ SmoothFlag; } ;
struct TYPE_8__ {scalar_t__ Enabled; } ;
struct TYPE_11__ {scalar_t__ RenderMode; TYPE_4__ Driver; TYPE_3__ Point; TYPE_2__ Texture; scalar_t__ NoRaster; TYPE_1__* Visual; } ;
struct TYPE_7__ {scalar_t__ RGBAflag; } ;
typedef  TYPE_5__ GLcontext ;
typedef  scalar_t__ GLboolean ;

/* Variables and functions */
 scalar_t__ GL_FEEDBACK ; 
 scalar_t__ GL_RENDER ; 
 scalar_t__ antialiased_rgba_points ; 
 scalar_t__ feedback_points ; 
 scalar_t__ general_ci_points ; 
 scalar_t__ general_rgba_points ; 
 scalar_t__ null_points ; 
 scalar_t__ select_points ; 
 scalar_t__ size1_ci_points ; 
 scalar_t__ size1_rgba_points ; 
 scalar_t__ textured_rgba_points ; 

void gl_set_point_function( GLcontext *ctx )
{
   GLboolean rgbmode = ctx->Visual->RGBAflag;

   if (ctx->RenderMode==GL_RENDER) {
      if (ctx->NoRaster) {
         ctx->Driver.PointsFunc = null_points;
         return;
      }
      if (ctx->Driver.PointsFunc) {
         /* Device driver will draw points. */
         ctx->Driver.PointsFunc = ctx->Driver.PointsFunc;
      }
      else {
         if (ctx->Point.SmoothFlag && rgbmode) {
            ctx->Driver.PointsFunc = antialiased_rgba_points;
         }
         else if (ctx->Texture.Enabled) {
	    ctx->Driver.PointsFunc = textured_rgba_points;
         }
         else if (ctx->Point.Size==1.0) {
            /* size=1, any raster ops */
            if (rgbmode)
               ctx->Driver.PointsFunc = size1_rgba_points;
            else
               ctx->Driver.PointsFunc = size1_ci_points;
         }
         else {
	    /* every other kind of point rendering */
            if (rgbmode)
               ctx->Driver.PointsFunc = general_rgba_points;
            else
               ctx->Driver.PointsFunc = general_ci_points;
         }
      }
   }
   else if (ctx->RenderMode==GL_FEEDBACK) {
      ctx->Driver.PointsFunc = feedback_points;
   }
   else {
      /* GL_SELECT mode */
      ctx->Driver.PointsFunc = select_points;
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
          struct TYPE_11__ * ctx = (struct TYPE_11__ *) malloc(_len_ctx0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].RenderMode = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Driver.PointsFunc = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Point.Size = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        ctx[_i0].Point.SmoothFlag = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Texture.Enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].NoRaster = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__Visual0 = 1;
          ctx[_i0].Visual = (struct TYPE_7__ *) malloc(_len_ctx__i0__Visual0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__Visual0; _j0++) {
            ctx[_i0].Visual->RGBAflag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          gl_set_point_function(ctx);
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
