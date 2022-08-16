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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int /*<<< orphan*/  disable_literal_context_modeling; scalar_t__ size_hint; scalar_t__ lgblock; int /*<<< orphan*/  lgwin; int /*<<< orphan*/  quality; int /*<<< orphan*/  mode; } ;
typedef  TYPE_1__ BrotliEncoderParams ;

/* Variables and functions */
 int /*<<< orphan*/  BROTLI_DEFAULT_MODE ; 
 int /*<<< orphan*/  BROTLI_DEFAULT_QUALITY ; 
 int /*<<< orphan*/  BROTLI_DEFAULT_WINDOW ; 
 int /*<<< orphan*/  BROTLI_FALSE ; 

__attribute__((used)) static void BrotliEncoderInitParams(BrotliEncoderParams* params) {
  params->mode = BROTLI_DEFAULT_MODE;
  params->quality = BROTLI_DEFAULT_QUALITY;
  params->lgwin = BROTLI_DEFAULT_WINDOW;
  params->lgblock = 0;
  params->size_hint = 0;
  params->disable_literal_context_modeling = BROTLI_FALSE;
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
          int _len_params0 = 1;
          struct TYPE_3__ * params = (struct TYPE_3__ *) malloc(_len_params0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_params0; _i0++) {
            params[_i0].disable_literal_context_modeling = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].size_hint = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].lgblock = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].lgwin = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].quality = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          BrotliEncoderInitParams(params);
          free(params);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
