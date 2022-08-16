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
struct memtype {int dummy; } ;
typedef  enum page_cache_mode { ____Placeholder_page_cache_mode } page_cache_mode ;

/* Variables and functions */

__attribute__((used)) static inline int rbt_memtype_check_insert(struct memtype *new,
					enum page_cache_mode *new_type)
{ return 0; }


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
          int _len_new0 = 1;
          struct memtype * new = (struct memtype *) malloc(_len_new0*sizeof(struct memtype));
          for(int _i0 = 0; _i0 < _len_new0; _i0++) {
            new[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_new_type0 = 1;
          enum page_cache_mode * new_type = (enum page_cache_mode *) malloc(_len_new_type0*sizeof(enum page_cache_mode));
          for(int _i0 = 0; _i0 < _len_new_type0; _i0++) {
            new_type[_i0] = 0;
          }
          int benchRet = rbt_memtype_check_insert(new,new_type);
          printf("%d\n", benchRet); 
          free(new);
          free(new_type);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
