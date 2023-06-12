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
typedef  int /*<<< orphan*/  brotli_free_func ;
typedef  scalar_t__ brotli_alloc_func ;
struct TYPE_3__ {scalar_t__ new_freed; scalar_t__ new_allocated; scalar_t__ perm_allocated; int /*<<< orphan*/  is_oom; void* opaque; int /*<<< orphan*/  free_func; scalar_t__ alloc_func; } ;
typedef  TYPE_1__ MemoryManager ;

/* Variables and functions */
 int /*<<< orphan*/  BROTLI_FALSE ; 
 scalar_t__ BrotliDefaultAllocFunc ; 
 int /*<<< orphan*/  BrotliDefaultFreeFunc ; 

void BrotliInitMemoryManager(
    MemoryManager* m, brotli_alloc_func alloc_func, brotli_free_func free_func,
    void* opaque) {
  if (!alloc_func) {
    m->alloc_func = BrotliDefaultAllocFunc;
    m->free_func = BrotliDefaultFreeFunc;
    m->opaque = 0;
  } else {
    m->alloc_func = alloc_func;
    m->free_func = free_func;
    m->opaque = opaque;
  }
#if !defined(BROTLI_ENCODER_EXIT_ON_OOM)
  m->is_oom = BROTLI_FALSE;
  m->perm_allocated = 0;
  m->new_allocated = 0;
  m->new_freed = 0;
#endif  /* BROTLI_ENCODER_EXIT_ON_OOM */
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
          long alloc_func = 100;
        
          int free_func = 100;
        
          int _len_m0 = 1;
          struct TYPE_3__ * m = (struct TYPE_3__ *) malloc(_len_m0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
              m[_i0].new_freed = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].new_allocated = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].perm_allocated = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].is_oom = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].free_func = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].alloc_func = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * opaque;
        
          BrotliInitMemoryManager(m,alloc_func,free_func,opaque);
          free(m);
        
        break;
    }
    // big-arr
    case 1:
    {
          long alloc_func = 255;
        
          int free_func = 255;
        
          int _len_m0 = 65025;
          struct TYPE_3__ * m = (struct TYPE_3__ *) malloc(_len_m0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
              m[_i0].new_freed = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].new_allocated = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].perm_allocated = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].is_oom = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].free_func = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].alloc_func = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * opaque;
        
          BrotliInitMemoryManager(m,alloc_func,free_func,opaque);
          free(m);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long alloc_func = 10;
        
          int free_func = 10;
        
          int _len_m0 = 100;
          struct TYPE_3__ * m = (struct TYPE_3__ *) malloc(_len_m0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
              m[_i0].new_freed = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].new_allocated = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].perm_allocated = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].is_oom = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].free_func = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].alloc_func = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * opaque;
        
          BrotliInitMemoryManager(m,alloc_func,free_func,opaque);
          free(m);
        
        break;
    }
    // empty
    case 3:
    {
          long alloc_func = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int free_func = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_m0 = 1;
          struct TYPE_3__ * m = (struct TYPE_3__ *) malloc(_len_m0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
              m[_i0].new_freed = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].new_allocated = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].perm_allocated = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].is_oom = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].free_func = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].alloc_func = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * opaque;
        
          BrotliInitMemoryManager(m,alloc_func,free_func,opaque);
          free(m);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
