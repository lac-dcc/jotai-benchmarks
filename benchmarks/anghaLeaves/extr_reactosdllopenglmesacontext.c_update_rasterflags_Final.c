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
struct TYPE_18__ {scalar_t__ DrawBuffer; scalar_t__ ColorMask; scalar_t__ IndexMask; scalar_t__ SWmasking; scalar_t__ SWLogicOpEnabled; scalar_t__ BlendEnabled; scalar_t__ AlphaEnabled; } ;
struct TYPE_15__ {scalar_t__ X; scalar_t__ Width; scalar_t__ Y; scalar_t__ Height; } ;
struct TYPE_14__ {scalar_t__ Enabled; } ;
struct TYPE_13__ {scalar_t__ Enabled; } ;
struct TYPE_12__ {scalar_t__ Enabled; } ;
struct TYPE_11__ {scalar_t__ Test; } ;
struct TYPE_19__ {int /*<<< orphan*/  RasterMask; TYPE_8__ Color; TYPE_7__* Visual; TYPE_6__* Buffer; TYPE_5__ Viewport; TYPE_4__ Stencil; TYPE_3__ Scissor; TYPE_2__ Fog; TYPE_1__ Depth; } ;
struct TYPE_17__ {scalar_t__ RGBAflag; scalar_t__ BackAlphaEnabled; scalar_t__ FrontAlphaEnabled; } ;
struct TYPE_16__ {scalar_t__ Width; scalar_t__ Height; } ;
typedef  TYPE_9__ GLcontext ;

/* Variables and functions */
 int /*<<< orphan*/  ALPHABUF_BIT ; 
 int /*<<< orphan*/  ALPHATEST_BIT ; 
 int /*<<< orphan*/  BLEND_BIT ; 
 int /*<<< orphan*/  DEPTH_BIT ; 
 int /*<<< orphan*/  FOG_BIT ; 
 int /*<<< orphan*/  FRONT_AND_BACK_BIT ; 
 scalar_t__ GL_FRONT_AND_BACK ; 
 scalar_t__ GL_NONE ; 
 int /*<<< orphan*/  LOGIC_OP_BIT ; 
 int /*<<< orphan*/  MASKING_BIT ; 
 int /*<<< orphan*/  NO_DRAW_BIT ; 
 int /*<<< orphan*/  SCISSOR_BIT ; 
 int /*<<< orphan*/  STENCIL_BIT ; 
 int /*<<< orphan*/  WINCLIP_BIT ; 

__attribute__((used)) static void update_rasterflags( GLcontext *ctx )
{
   ctx->RasterMask = 0;

   if (ctx->Color.AlphaEnabled)		ctx->RasterMask |= ALPHATEST_BIT;
   if (ctx->Color.BlendEnabled)		ctx->RasterMask |= BLEND_BIT;
   if (ctx->Depth.Test)			ctx->RasterMask |= DEPTH_BIT;
   if (ctx->Fog.Enabled)		ctx->RasterMask |= FOG_BIT;
   if (ctx->Color.SWLogicOpEnabled)	ctx->RasterMask |= LOGIC_OP_BIT;
   if (ctx->Scissor.Enabled)		ctx->RasterMask |= SCISSOR_BIT;
   if (ctx->Stencil.Enabled)		ctx->RasterMask |= STENCIL_BIT;
   if (ctx->Color.SWmasking)		ctx->RasterMask |= MASKING_BIT;
   if (ctx->Visual->FrontAlphaEnabled)	ctx->RasterMask |= ALPHABUF_BIT;
   if (ctx->Visual->BackAlphaEnabled)	ctx->RasterMask |= ALPHABUF_BIT;

   if (   ctx->Viewport.X<0
       || ctx->Viewport.X + ctx->Viewport.Width > ctx->Buffer->Width
       || ctx->Viewport.Y<0
       || ctx->Viewport.Y + ctx->Viewport.Height > ctx->Buffer->Height) {
      ctx->RasterMask |= WINCLIP_BIT;
   }

   /* check if drawing to front and back buffers */
   if (ctx->Color.DrawBuffer==GL_FRONT_AND_BACK) {
      ctx->RasterMask |= FRONT_AND_BACK_BIT;
   }

   /* check if writing to color buffer(s) is disabled */
   if (ctx->Color.DrawBuffer==GL_NONE) {
      ctx->RasterMask |= NO_DRAW_BIT;
   }
   else if (ctx->Visual->RGBAflag && ctx->Color.ColorMask==0) {
      ctx->RasterMask |= NO_DRAW_BIT;
   }
   else if (!ctx->Visual->RGBAflag && ctx->Color.IndexMask==0) {
      ctx->RasterMask |= NO_DRAW_BIT;
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
            ctx[_i0].RasterMask = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Color.DrawBuffer = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Color.ColorMask = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Color.IndexMask = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Color.SWmasking = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Color.SWLogicOpEnabled = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Color.BlendEnabled = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Color.AlphaEnabled = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__Visual0 = 1;
          ctx[_i0].Visual = (struct TYPE_17__ *) malloc(_len_ctx__i0__Visual0*sizeof(struct TYPE_17__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__Visual0; _j0++) {
            ctx[_i0].Visual->RGBAflag = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Visual->BackAlphaEnabled = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Visual->FrontAlphaEnabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__Buffer0 = 1;
          ctx[_i0].Buffer = (struct TYPE_16__ *) malloc(_len_ctx__i0__Buffer0*sizeof(struct TYPE_16__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__Buffer0; _j0++) {
            ctx[_i0].Buffer->Width = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Buffer->Height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].Viewport.X = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Viewport.Width = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Viewport.Y = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Viewport.Height = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Stencil.Enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Scissor.Enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Fog.Enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Depth.Test = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          update_rasterflags(ctx);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].Visual);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].Buffer);
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
