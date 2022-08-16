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

/* Type definitions */
typedef  int /*<<< orphan*/  json_malloc_t ;
typedef  int /*<<< orphan*/  json_free_t ;

/* Variables and functions */
 int /*<<< orphan*/  do_free ; 
 int /*<<< orphan*/  do_malloc ; 

void json_get_alloc_funcs(json_malloc_t *malloc_fn, json_free_t *free_fn)
{
    if (malloc_fn)
        *malloc_fn = do_malloc;
    if (free_fn)
        *free_fn = do_free;
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
          int _len_malloc_fn0 = 1;
          int * malloc_fn = (int *) malloc(_len_malloc_fn0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_malloc_fn0; _i0++) {
            malloc_fn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_free_fn0 = 1;
          int * free_fn = (int *) malloc(_len_free_fn0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_free_fn0; _i0++) {
            free_fn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          json_get_alloc_funcs(malloc_fn,free_fn);
          free(malloc_fn);
          free(free_fn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
