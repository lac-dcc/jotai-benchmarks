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
typedef  struct TYPE_19__   TYPE_9__ ;
typedef  struct TYPE_18__   TYPE_8__ ;
typedef  struct TYPE_17__   TYPE_7__ ;
typedef  struct TYPE_16__   TYPE_6__ ;
typedef  struct TYPE_15__   TYPE_5__ ;
typedef  struct TYPE_14__   TYPE_4__ ;
typedef  struct TYPE_13__   TYPE_3__ ;
typedef  struct TYPE_12__   TYPE_2__ ;
typedef  struct TYPE_11__   TYPE_1__ ;

/* Type definitions */
struct TYPE_18__ {scalar_t__ LineFunc; } ;
struct TYPE_17__ {scalar_t__ Fog; } ;
struct TYPE_16__ {scalar_t__ Enabled; } ;
struct TYPE_15__ {scalar_t__ Test; } ;
struct TYPE_14__ {scalar_t__ ShadeModel; } ;
struct TYPE_13__ {scalar_t__ Enabled; } ;
struct TYPE_12__ {double Width; scalar_t__ SmoothFlag; scalar_t__ StippleFlag; } ;
struct TYPE_19__ {scalar_t__ RenderMode; TYPE_8__ Driver; TYPE_7__ Hint; TYPE_6__ Fog; TYPE_5__ Depth; TYPE_4__ Light; TYPE_3__ Texture; TYPE_2__ Line; scalar_t__ NoRaster; TYPE_1__* Visual; } ;
struct TYPE_11__ {scalar_t__ RGBAflag; } ;
typedef  TYPE_9__ GLcontext ;
typedef  scalar_t__ GLboolean ;

/* Variables and functions */
 scalar_t__ GL_FEEDBACK ; 
 scalar_t__ GL_NICEST ; 
 scalar_t__ GL_RENDER ; 
 scalar_t__ GL_SMOOTH ; 
 scalar_t__ feedback_line ; 
 scalar_t__ flat_ci_line ; 
 scalar_t__ flat_ci_z_line ; 
 scalar_t__ flat_rgba_line ; 
 scalar_t__ flat_rgba_z_line ; 
 scalar_t__ flat_textured_line ; 
 scalar_t__ general_flat_ci_line ; 
 scalar_t__ general_flat_rgba_line ; 
 scalar_t__ general_smooth_ci_line ; 
 scalar_t__ general_smooth_rgba_line ; 
 scalar_t__ null_line ; 
 scalar_t__ select_line ; 
 scalar_t__ smooth_ci_line ; 
 scalar_t__ smooth_ci_z_line ; 
 scalar_t__ smooth_rgba_line ; 
 scalar_t__ smooth_rgba_z_line ; 
 scalar_t__ smooth_textured_line ; 

void gl_set_line_function( GLcontext *ctx )
{
   GLboolean rgbmode = ctx->Visual->RGBAflag;
   /* TODO: antialiased lines */

   if (ctx->RenderMode==GL_RENDER) {
      if (ctx->NoRaster) {
         ctx->Driver.LineFunc = null_line;
         return;
      }
      if (ctx->Driver.LineFunc) {
         /* Device driver will draw lines. */
         ctx->Driver.LineFunc = ctx->Driver.LineFunc;
      }
      else if (ctx->Texture.Enabled) {
         if (ctx->Light.ShadeModel==GL_SMOOTH) {
            ctx->Driver.LineFunc = smooth_textured_line;
         }
         else {
            ctx->Driver.LineFunc = flat_textured_line;
         }
      }
      else if (ctx->Line.Width!=1.0 || ctx->Line.StippleFlag
               || ctx->Line.SmoothFlag || ctx->Texture.Enabled) {
         if (ctx->Light.ShadeModel==GL_SMOOTH) {
            if (rgbmode)
               ctx->Driver.LineFunc = general_smooth_rgba_line;
            else
               ctx->Driver.LineFunc = general_smooth_ci_line;
         }
         else {
            if (rgbmode)
               ctx->Driver.LineFunc = general_flat_rgba_line;
            else
               ctx->Driver.LineFunc = general_flat_ci_line;
         }
      }
      else {
	 if (ctx->Light.ShadeModel==GL_SMOOTH) {
	    /* Width==1, non-stippled, smooth-shaded */
            if (ctx->Depth.Test
	        || (ctx->Fog.Enabled && ctx->Hint.Fog==GL_NICEST)) {
               if (rgbmode)
                  ctx->Driver.LineFunc = smooth_rgba_z_line;
               else
                  ctx->Driver.LineFunc = smooth_ci_z_line;
            }
            else {
               if (rgbmode)
                  ctx->Driver.LineFunc = smooth_rgba_line;
               else
                  ctx->Driver.LineFunc = smooth_ci_line;
            }
	 }
         else {
	    /* Width==1, non-stippled, flat-shaded */
            if (ctx->Depth.Test
                || (ctx->Fog.Enabled && ctx->Hint.Fog==GL_NICEST)) {
               if (rgbmode)
                  ctx->Driver.LineFunc = flat_rgba_z_line;
               else
                  ctx->Driver.LineFunc = flat_ci_z_line;
            }
            else {
               if (rgbmode)
                  ctx->Driver.LineFunc = flat_rgba_line;
               else
                  ctx->Driver.LineFunc = flat_ci_line;
            }
         }
      }
   }
   else if (ctx->RenderMode==GL_FEEDBACK) {
      ctx->Driver.LineFunc = feedback_line;
   }
   else {
      /* GL_SELECT mode */
      ctx->Driver.LineFunc = select_line;
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
          struct TYPE_19__ * ctx = (struct TYPE_19__ *) malloc(_len_ctx0*sizeof(struct TYPE_19__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].RenderMode = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Driver.LineFunc = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Hint.Fog = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Fog.Enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Depth.Test = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Light.ShadeModel = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Texture.Enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Line.Width = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        ctx[_i0].Line.SmoothFlag = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Line.StippleFlag = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].NoRaster = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__Visual0 = 1;
          ctx[_i0].Visual = (struct TYPE_11__ *) malloc(_len_ctx__i0__Visual0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__Visual0; _j0++) {
            ctx[_i0].Visual->RGBAflag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          gl_set_line_function(ctx);
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
