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
struct d3dx9_base_effect {int /*<<< orphan*/  version_counter; TYPE_1__* pool; } ;
typedef  int /*<<< orphan*/  ULONG64 ;
struct TYPE_2__ {int /*<<< orphan*/  version_counter; } ;

/* Variables and functions */

__attribute__((used)) static ULONG64 *get_version_counter_ptr(struct d3dx9_base_effect *base)
{
    return base->pool ? &base->pool->version_counter : &base->version_counter;
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
          int _len_base0 = 1;
          struct d3dx9_base_effect * base = (struct d3dx9_base_effect *) malloc(_len_base0*sizeof(struct d3dx9_base_effect));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            base[_i0].version_counter = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_base__i0__pool0 = 1;
          base[_i0].pool = (struct TYPE_2__ *) malloc(_len_base__i0__pool0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_base__i0__pool0; _j0++) {
            base[_i0].pool->version_counter = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = get_version_counter_ptr(base);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_base0; _aux++) {
          free(base[_aux].pool);
          }
          free(base);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
