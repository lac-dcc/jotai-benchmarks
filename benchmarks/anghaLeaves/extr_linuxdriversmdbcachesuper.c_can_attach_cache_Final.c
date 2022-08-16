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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ block_size; scalar_t__ bucket_size; scalar_t__ nr_in_set; } ;
struct cache_set {TYPE_2__ sb; } ;
struct TYPE_3__ {scalar_t__ block_size; scalar_t__ bucket_size; scalar_t__ nr_in_set; } ;
struct cache {TYPE_1__ sb; } ;

/* Variables and functions */

__attribute__((used)) static bool can_attach_cache(struct cache *ca, struct cache_set *c)
{
	return ca->sb.block_size	== c->sb.block_size &&
		ca->sb.bucket_size	== c->sb.bucket_size &&
		ca->sb.nr_in_set	== c->sb.nr_in_set;
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
          int _len_ca0 = 1;
          struct cache * ca = (struct cache *) malloc(_len_ca0*sizeof(struct cache));
          for(int _i0 = 0; _i0 < _len_ca0; _i0++) {
            ca[_i0].sb.block_size = ((-2 * (next_i()%2)) + 1) * next_i();
        ca[_i0].sb.bucket_size = ((-2 * (next_i()%2)) + 1) * next_i();
        ca[_i0].sb.nr_in_set = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c0 = 1;
          struct cache_set * c = (struct cache_set *) malloc(_len_c0*sizeof(struct cache_set));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].sb.block_size = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].sb.bucket_size = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].sb.nr_in_set = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = can_attach_cache(ca,c);
          printf("%d\n", benchRet); 
          free(ca);
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
