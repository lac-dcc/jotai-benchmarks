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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct tl_ctx {int num_sources; int /*<<< orphan*/ * sources; } ;

/* Variables and functions */

__attribute__((used)) static bool missing(struct tl_ctx *ctx)
{
    for (int i = 0; i < ctx->num_sources; i++) {
        if (!ctx->sources[i])
            return true;
    }
    return false;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          int _len_ctx0 = 65025;
          struct tl_ctx * ctx = (struct tl_ctx *) malloc(_len_ctx0*sizeof(struct tl_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              ctx[_i0].num_sources = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__sources0 = 1;
          ctx[_i0].sources = (int *) malloc(_len_ctx__i0__sources0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__sources0; _j0++) {
            ctx[_i0].sources[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = missing(ctx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].sources);
          }
          free(ctx);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          int _len_ctx0 = 100;
          struct tl_ctx * ctx = (struct tl_ctx *) malloc(_len_ctx0*sizeof(struct tl_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              ctx[_i0].num_sources = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__sources0 = 1;
          ctx[_i0].sources = (int *) malloc(_len_ctx__i0__sources0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__sources0; _j0++) {
            ctx[_i0].sources[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = missing(ctx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].sources);
          }
          free(ctx);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          int _len_ctx0 = 1;
          struct tl_ctx * ctx = (struct tl_ctx *) malloc(_len_ctx0*sizeof(struct tl_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              ctx[_i0].num_sources = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__sources0 = 1;
          ctx[_i0].sources = (int *) malloc(_len_ctx__i0__sources0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__sources0; _j0++) {
            ctx[_i0].sources[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = missing(ctx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].sources);
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
