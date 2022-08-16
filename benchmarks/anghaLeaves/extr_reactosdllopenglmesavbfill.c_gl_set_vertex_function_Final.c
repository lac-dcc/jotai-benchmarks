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
typedef  struct TYPE_15__   TYPE_7__ ;
typedef  struct TYPE_14__   TYPE_6__ ;
typedef  struct TYPE_13__   TYPE_5__ ;
typedef  struct TYPE_12__   TYPE_4__ ;
typedef  struct TYPE_11__   TYPE_3__ ;
typedef  struct TYPE_10__   TYPE_2__ ;
typedef  struct TYPE_9__   TYPE_1__ ;

/* Type definitions */
struct TYPE_14__ {void* Vertex3fv; int /*<<< orphan*/  Vertex4f; void* Vertex3f; void* Vertex2f; } ;
struct TYPE_13__ {void* Vertex3fv; int /*<<< orphan*/  Vertex4f; void* Vertex3f; void* Vertex2f; } ;
struct TYPE_12__ {scalar_t__ Enabled; } ;
struct TYPE_10__ {scalar_t__ Enabled; } ;
struct TYPE_15__ {scalar_t__ RenderMode; TYPE_6__ Exec; TYPE_5__ API; int /*<<< orphan*/  CompileFlag; TYPE_4__ Light; TYPE_3__* VB; TYPE_2__ Texture; scalar_t__ NeedNormals; TYPE_1__* Visual; } ;
struct TYPE_11__ {int TexCoordSize; } ;
struct TYPE_9__ {scalar_t__ RGBAflag; } ;
typedef  TYPE_7__ GLcontext ;

/* Variables and functions */
 scalar_t__ GL_FEEDBACK ; 
 void* vertex2f_color ; 
 void* vertex2f_color_tex2 ; 
 void* vertex2f_color_tex4 ; 
 void* vertex2f_feedback ; 
 void* vertex2f_index ; 
 void* vertex2f_normal ; 
 void* vertex2f_normal_color_tex2 ; 
 void* vertex2f_normal_color_tex4 ; 
 void* vertex3f_color ; 
 void* vertex3f_color_tex2 ; 
 void* vertex3f_color_tex4 ; 
 void* vertex3f_feedback ; 
 void* vertex3f_index ; 
 void* vertex3f_normal ; 
 void* vertex3f_normal_color_tex2 ; 
 void* vertex3f_normal_color_tex4 ; 
 void* vertex3fv_color ; 
 void* vertex3fv_color_tex2 ; 
 void* vertex3fv_color_tex4 ; 
 void* vertex3fv_feedback ; 
 void* vertex3fv_index ; 
 void* vertex3fv_normal ; 
 void* vertex3fv_normal_color_tex2 ; 
 void* vertex3fv_normal_color_tex4 ; 
 int /*<<< orphan*/  vertex4 ; 
 int /*<<< orphan*/  vertex4f_feedback ; 

void gl_set_vertex_function( GLcontext *ctx )
{
   if (ctx->RenderMode==GL_FEEDBACK) {
      ctx->Exec.Vertex4f = vertex4f_feedback;
      ctx->Exec.Vertex3f = vertex3f_feedback;
      ctx->Exec.Vertex2f = vertex2f_feedback;
      ctx->Exec.Vertex3fv = vertex3fv_feedback;
   }
   else {
      ctx->Exec.Vertex4f = vertex4;
      if (ctx->Visual->RGBAflag) {
         if (ctx->NeedNormals) {
            /* lighting enabled, need normal vectors */
            if (ctx->Texture.Enabled) {
               if (ctx->VB->TexCoordSize==2) {
                  ctx->Exec.Vertex2f = vertex2f_normal_color_tex2;
                  ctx->Exec.Vertex3f = vertex3f_normal_color_tex2;
                  ctx->Exec.Vertex3fv = vertex3fv_normal_color_tex2;
               }
               else {
                  ctx->Exec.Vertex2f = vertex2f_normal_color_tex4;
                  ctx->Exec.Vertex3f = vertex3f_normal_color_tex4;
                  ctx->Exec.Vertex3fv = vertex3fv_normal_color_tex4;
               }
            }
            else {
               ctx->Exec.Vertex2f = vertex2f_normal;
               ctx->Exec.Vertex3f = vertex3f_normal;
               ctx->Exec.Vertex3fv = vertex3fv_normal;
            }
         }
         else {
            /* not lighting, need vertex color */
            if (ctx->Texture.Enabled) {
               if (ctx->VB->TexCoordSize==2) {
                  ctx->Exec.Vertex2f = vertex2f_color_tex2;
                  ctx->Exec.Vertex3f = vertex3f_color_tex2;
                  ctx->Exec.Vertex3fv = vertex3fv_color_tex2;
               }
               else {
                  ctx->Exec.Vertex2f = vertex2f_color_tex4;
                  ctx->Exec.Vertex3f = vertex3f_color_tex4;
                  ctx->Exec.Vertex3fv = vertex3fv_color_tex4;
               }
            }
            else {
               ctx->Exec.Vertex2f = vertex2f_color;
               ctx->Exec.Vertex3f = vertex3f_color;
               ctx->Exec.Vertex3fv = vertex3fv_color;
            }
         }
      }
      else {
         /* color index mode */
         if (ctx->Light.Enabled) {
            ctx->Exec.Vertex2f = vertex2f_normal;
            ctx->Exec.Vertex3f = vertex3f_normal;
            ctx->Exec.Vertex3fv = vertex3fv_normal;
         }
         else {
            ctx->Exec.Vertex2f = vertex2f_index;
            ctx->Exec.Vertex3f = vertex3f_index;
            ctx->Exec.Vertex3fv = vertex3fv_index;
         }
      }
   }

   if (!ctx->CompileFlag) {
      ctx->API.Vertex2f = ctx->Exec.Vertex2f;
      ctx->API.Vertex3f = ctx->Exec.Vertex3f;
      ctx->API.Vertex4f = ctx->Exec.Vertex4f;
      ctx->API.Vertex3fv = ctx->Exec.Vertex3fv;
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
          struct TYPE_15__ * ctx = (struct TYPE_15__ *) malloc(_len_ctx0*sizeof(struct TYPE_15__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].RenderMode = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Exec.Vertex4f = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].API.Vertex4f = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].CompileFlag = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Light.Enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__VB0 = 1;
          ctx[_i0].VB = (struct TYPE_11__ *) malloc(_len_ctx__i0__VB0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__VB0; _j0++) {
            ctx[_i0].VB->TexCoordSize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].Texture.Enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].NeedNormals = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__Visual0 = 1;
          ctx[_i0].Visual = (struct TYPE_9__ *) malloc(_len_ctx__i0__Visual0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__Visual0; _j0++) {
            ctx[_i0].Visual->RGBAflag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          gl_set_vertex_function(ctx);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].VB);
          }
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
