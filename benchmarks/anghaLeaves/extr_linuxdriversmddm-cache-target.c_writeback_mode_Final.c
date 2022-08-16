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
       1            big-arr-10x\n\
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
struct TYPE_2__ {scalar_t__ io_mode; } ;
struct cache {TYPE_1__ features; } ;

/* Variables and functions */
 scalar_t__ CM_IO_WRITEBACK ; 

__attribute__((used)) static bool writeback_mode(struct cache *cache)
{
	return cache->features.io_mode == CM_IO_WRITEBACK;
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
          int _len_cache0 = 1;
          struct cache * cache = (struct cache *) malloc(_len_cache0*sizeof(struct cache));
          for(int _i0 = 0; _i0 < _len_cache0; _i0++) {
            cache[_i0].features.io_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = writeback_mode(cache);
          printf("%d\n", benchRet); 
          free(cache);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_cache0 = 100;
          struct cache * cache = (struct cache *) malloc(_len_cache0*sizeof(struct cache));
          for(int _i0 = 0; _i0 < _len_cache0; _i0++) {
            cache[_i0].features.io_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = writeback_mode(cache);
          printf("%d\n", benchRet); 
          free(cache);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
