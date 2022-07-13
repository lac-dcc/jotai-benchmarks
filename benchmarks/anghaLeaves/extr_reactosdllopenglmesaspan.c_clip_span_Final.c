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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {TYPE_1__* Buffer; } ;
struct TYPE_4__ {scalar_t__ Height; scalar_t__ Width; } ;
typedef  int GLuint ;
typedef  scalar_t__ GLubyte ;
typedef  scalar_t__ GLint ;
typedef  TYPE_2__ GLcontext ;

/* Variables and functions */

__attribute__((used)) static GLuint clip_span( GLcontext *ctx,
                         GLint n, GLint x, GLint y, GLubyte mask[] )
{
   GLint i;

   /* Clip to top and bottom */
   if (y<0 || y>=ctx->Buffer->Height) {
      return 0;
   }

   /* Clip to left and right */
   if (x>=0 && x+n<=ctx->Buffer->Width) {
      /* no clipping needed */
      return 1;
   }
   else if (x+n<=0) {
      /* completely off left side */
      return 0;
   }
   else if (x>=ctx->Buffer->Width) {
      /* completely off right side */
      return 0;
   }
   else {
      /* clip-test each pixel, this could be done better */
      for (i=0;i<n;i++) {
         if (x+i<0 || x+i>=ctx->Buffer->Width) {
            mask[i] = 0;
         }
      }
      return 1;
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
          long n = 100;
          long x = 100;
          long y = 100;
          int _len_ctx0 = 1;
          struct TYPE_5__ * ctx = (struct TYPE_5__ *) malloc(_len_ctx0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__Buffer0 = 1;
          ctx[_i0].Buffer = (struct TYPE_4__ *) malloc(_len_ctx__i0__Buffer0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__Buffer0; _j0++) {
            ctx[_i0].Buffer->Height = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Buffer->Width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_mask0 = 1;
          long * mask = (long *) malloc(_len_mask0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_mask0; _i0++) {
            mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = clip_span(ctx,n,x,y,mask);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].Buffer);
          }
          free(ctx);
          free(mask);
        
        break;
    }
    // big-arr
    case 1:
    {
          long n = 255;
          long x = 255;
          long y = 255;
          int _len_ctx0 = 65025;
          struct TYPE_5__ * ctx = (struct TYPE_5__ *) malloc(_len_ctx0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__Buffer0 = 1;
          ctx[_i0].Buffer = (struct TYPE_4__ *) malloc(_len_ctx__i0__Buffer0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__Buffer0; _j0++) {
            ctx[_i0].Buffer->Height = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Buffer->Width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_mask0 = 1;
          long * mask = (long *) malloc(_len_mask0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_mask0; _i0++) {
            mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = clip_span(ctx,n,x,y,mask);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].Buffer);
          }
          free(ctx);
          free(mask);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long n = 10;
          long x = 10;
          long y = 10;
          int _len_ctx0 = 100;
          struct TYPE_5__ * ctx = (struct TYPE_5__ *) malloc(_len_ctx0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__Buffer0 = 1;
          ctx[_i0].Buffer = (struct TYPE_4__ *) malloc(_len_ctx__i0__Buffer0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__Buffer0; _j0++) {
            ctx[_i0].Buffer->Height = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].Buffer->Width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_mask0 = 1;
          long * mask = (long *) malloc(_len_mask0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_mask0; _i0++) {
            mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = clip_span(ctx,n,x,y,mask);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].Buffer);
          }
          free(ctx);
          free(mask);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
