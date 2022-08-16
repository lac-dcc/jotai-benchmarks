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
struct cache_info {scalar_t__ scope; size_t type; } ;
typedef  enum cache_type { ____Placeholder_cache_type } cache_type ;

/* Variables and functions */
 int CACHE_MAX_LEVEL ; 
 scalar_t__ CACHE_SCOPE_PRIVATE ; 
 scalar_t__ CACHE_SCOPE_SHARED ; 
 int CACHE_TYPE_NOCACHE ; 
 int* cache_type_map ; 

__attribute__((used)) static inline enum cache_type get_cache_type(struct cache_info *ci, int level)
{
	if (level >= CACHE_MAX_LEVEL)
		return CACHE_TYPE_NOCACHE;
	ci += level;
	if (ci->scope != CACHE_SCOPE_SHARED && ci->scope != CACHE_SCOPE_PRIVATE)
		return CACHE_TYPE_NOCACHE;
	return cache_type_map[ci->type];
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
          int level = 100;
          int _len_ci0 = 1;
          struct cache_info * ci = (struct cache_info *) malloc(_len_ci0*sizeof(struct cache_info));
          for(int _i0 = 0; _i0 < _len_ci0; _i0++) {
            ci[_i0].scope = ((-2 * (next_i()%2)) + 1) * next_i();
        ci[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum cache_type benchRet = get_cache_type(ci,level);
          free(ci);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
