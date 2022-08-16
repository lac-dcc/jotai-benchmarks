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
typedef  int /*<<< orphan*/  h2o_mimemap_t ;
struct TYPE_3__ {int /*<<< orphan*/ * mimemap; } ;
typedef  TYPE_1__ h2o_file_handler_t ;

/* Variables and functions */

h2o_mimemap_t *h2o_file_get_mimemap(h2o_file_handler_t *handler)
{
    return handler->mimemap;
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
          int _len_handler0 = 1;
          struct TYPE_3__ * handler = (struct TYPE_3__ *) malloc(_len_handler0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_handler0; _i0++) {
              int _len_handler__i0__mimemap0 = 1;
          handler[_i0].mimemap = (int *) malloc(_len_handler__i0__mimemap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_handler__i0__mimemap0; _j0++) {
            handler[_i0].mimemap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = h2o_file_get_mimemap(handler);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_handler0; _aux++) {
          free(handler[_aux].mimemap);
          }
          free(handler);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
