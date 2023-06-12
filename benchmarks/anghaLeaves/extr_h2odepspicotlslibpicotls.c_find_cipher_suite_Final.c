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
       0            empty\n\
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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ uint16_t ;
struct TYPE_5__ {TYPE_2__** cipher_suites; } ;
typedef  TYPE_1__ ptls_context_t ;
struct TYPE_6__ {scalar_t__ id; } ;
typedef  TYPE_2__ ptls_cipher_suite_t ;

/* Variables and functions */

__attribute__((used)) static ptls_cipher_suite_t *find_cipher_suite(ptls_context_t *ctx, uint16_t id)
{
    ptls_cipher_suite_t **cs;

    for (cs = ctx->cipher_suites; *cs != NULL && (*cs)->id != id; ++cs)
        ;
    return *cs;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // empty
    case 0:
    {
          // static_instructions_O0 : 26
          // dynamic_instructions_O0 : 26
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          long id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_ctx0 = 1;
          struct TYPE_5__ * ctx = (struct TYPE_5__ *) malloc(_len_ctx0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__cipher_suites0 = 1;
          ctx[_i0].cipher_suites = (struct TYPE_6__ **) malloc(_len_ctx__i0__cipher_suites0*sizeof(struct TYPE_6__ *));
          for(int _j0 = 0; _j0 < _len_ctx__i0__cipher_suites0; _j0++) {
            int _len_ctx__i0__cipher_suites1 = 1;
            ctx[_i0].cipher_suites[_j0] = (struct TYPE_6__ *) malloc(_len_ctx__i0__cipher_suites1*sizeof(struct TYPE_6__));
            for(int _j1 = 0; _j1 < _len_ctx__i0__cipher_suites1; _j1++) {
                ctx[_i0].cipher_suites[_j0]->id = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          }
        
          struct TYPE_6__ * benchRet = find_cipher_suite(ctx,id);
          printf("%ld\n", (*benchRet).id);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(*(ctx[_aux].cipher_suites));
        free(ctx[_aux].cipher_suites);
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
