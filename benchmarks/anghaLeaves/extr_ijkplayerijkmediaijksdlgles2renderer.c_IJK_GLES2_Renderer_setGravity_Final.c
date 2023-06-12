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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int gravity; int vertices_changed; scalar_t__ layer_width; scalar_t__ layer_height; } ;
typedef  TYPE_1__ IJK_GLES2_Renderer ;
typedef  scalar_t__ GLsizei ;
typedef  int /*<<< orphan*/  GLboolean ;

/* Variables and functions */
 int /*<<< orphan*/  GL_TRUE ; 
 int IJK_GLES2_GRAVITY_MAX ; 
 int IJK_GLES2_GRAVITY_MIN ; 

GLboolean IJK_GLES2_Renderer_setGravity(IJK_GLES2_Renderer *renderer, int gravity, GLsizei layer_width, GLsizei layer_height)
{
    if (renderer->gravity != gravity && gravity >= IJK_GLES2_GRAVITY_MIN && gravity <= IJK_GLES2_GRAVITY_MAX)
        renderer->vertices_changed = 1;
    else if (renderer->layer_width != layer_width)
        renderer->vertices_changed = 1;
    else if (renderer->layer_height != layer_height)
        renderer->vertices_changed = 1;
    else
        return GL_TRUE;

    renderer->gravity      = gravity;
    renderer->layer_width  = layer_width;
    renderer->layer_height = layer_height;
    return GL_TRUE;
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
          // static_instructions_O0 : 38
          // dynamic_instructions_O0 : 38
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int gravity = 100;
        
          long layer_width = 100;
        
          long layer_height = 100;
        
          int _len_renderer0 = 1;
          struct TYPE_3__ * renderer = (struct TYPE_3__ *) malloc(_len_renderer0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_renderer0; _i0++) {
              renderer[_i0].gravity = ((-2 * (next_i()%2)) + 1) * next_i();
          renderer[_i0].vertices_changed = ((-2 * (next_i()%2)) + 1) * next_i();
          renderer[_i0].layer_width = ((-2 * (next_i()%2)) + 1) * next_i();
          renderer[_i0].layer_height = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = IJK_GLES2_Renderer_setGravity(renderer,gravity,layer_width,layer_height);
          printf("%d\n", benchRet); 
          free(renderer);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 38
          // dynamic_instructions_O0 : 38
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int gravity = 255;
        
          long layer_width = 255;
        
          long layer_height = 255;
        
          int _len_renderer0 = 65025;
          struct TYPE_3__ * renderer = (struct TYPE_3__ *) malloc(_len_renderer0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_renderer0; _i0++) {
              renderer[_i0].gravity = ((-2 * (next_i()%2)) + 1) * next_i();
          renderer[_i0].vertices_changed = ((-2 * (next_i()%2)) + 1) * next_i();
          renderer[_i0].layer_width = ((-2 * (next_i()%2)) + 1) * next_i();
          renderer[_i0].layer_height = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = IJK_GLES2_Renderer_setGravity(renderer,gravity,layer_width,layer_height);
          printf("%d\n", benchRet); 
          free(renderer);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 38
          // dynamic_instructions_O0 : 38
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int gravity = 10;
        
          long layer_width = 10;
        
          long layer_height = 10;
        
          int _len_renderer0 = 100;
          struct TYPE_3__ * renderer = (struct TYPE_3__ *) malloc(_len_renderer0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_renderer0; _i0++) {
              renderer[_i0].gravity = ((-2 * (next_i()%2)) + 1) * next_i();
          renderer[_i0].vertices_changed = ((-2 * (next_i()%2)) + 1) * next_i();
          renderer[_i0].layer_width = ((-2 * (next_i()%2)) + 1) * next_i();
          renderer[_i0].layer_height = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = IJK_GLES2_Renderer_setGravity(renderer,gravity,layer_width,layer_height);
          printf("%d\n", benchRet); 
          free(renderer);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int gravity = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long layer_width = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long layer_height = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_renderer0 = 1;
          struct TYPE_3__ * renderer = (struct TYPE_3__ *) malloc(_len_renderer0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_renderer0; _i0++) {
              renderer[_i0].gravity = ((-2 * (next_i()%2)) + 1) * next_i();
          renderer[_i0].vertices_changed = ((-2 * (next_i()%2)) + 1) * next_i();
          renderer[_i0].layer_width = ((-2 * (next_i()%2)) + 1) * next_i();
          renderer[_i0].layer_height = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = IJK_GLES2_Renderer_setGravity(renderer,gravity,layer_width,layer_height);
          printf("%d\n", benchRet); 
          free(renderer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
