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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/ * uv_realloc_func ;
typedef  int /*<<< orphan*/ * uv_malloc_func ;
typedef  int /*<<< orphan*/ * uv_free_func ;
typedef  int /*<<< orphan*/ * uv_calloc_func ;
struct TYPE_2__ {int /*<<< orphan*/ * local_free; int /*<<< orphan*/ * local_calloc; int /*<<< orphan*/ * local_realloc; int /*<<< orphan*/ * local_malloc; } ;

/* Variables and functions */
 int UV_EINVAL ; 
 TYPE_1__ uv__allocator ; 

int uv_replace_allocator(uv_malloc_func malloc_func,
                         uv_realloc_func realloc_func,
                         uv_calloc_func calloc_func,
                         uv_free_func free_func) {
  if (malloc_func == NULL || realloc_func == NULL ||
      calloc_func == NULL || free_func == NULL) {
    return UV_EINVAL;
  }

  uv__allocator.local_malloc = malloc_func;
  uv__allocator.local_realloc = realloc_func;
  uv__allocator.local_calloc = calloc_func;
  uv__allocator.local_free = free_func;

  return 0;
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
          int _len_malloc_func0 = 1;
          int * malloc_func = (int *) malloc(_len_malloc_func0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_malloc_func0; _i0++) {
            malloc_func[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_realloc_func0 = 1;
          int * realloc_func = (int *) malloc(_len_realloc_func0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_realloc_func0; _i0++) {
            realloc_func[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_calloc_func0 = 1;
          int * calloc_func = (int *) malloc(_len_calloc_func0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_calloc_func0; _i0++) {
            calloc_func[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_free_func0 = 1;
          int * free_func = (int *) malloc(_len_free_func0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_free_func0; _i0++) {
            free_func[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uv_replace_allocator(malloc_func,realloc_func,calloc_func,free_func);
          printf("%d\n", benchRet); 
          free(malloc_func);
          free(realloc_func);
          free(calloc_func);
          free(free_func);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
