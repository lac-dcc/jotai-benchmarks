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
struct sm_ftl {int cache_data_invalid_bitmap; int cache_clean; int cache_zone; int cache_block; } ;

/* Variables and functions */

__attribute__((used)) static void sm_cache_init(struct sm_ftl *ftl)
{
	ftl->cache_data_invalid_bitmap = 0xFFFFFFFF;
	ftl->cache_clean = 1;
	ftl->cache_zone = -1;
	ftl->cache_block = -1;
	/*memset(ftl->cache_data, 0xAA, ftl->block_size);*/
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
          int _len_ftl0 = 1;
          struct sm_ftl * ftl = (struct sm_ftl *) malloc(_len_ftl0*sizeof(struct sm_ftl));
          for(int _i0 = 0; _i0 < _len_ftl0; _i0++) {
            ftl[_i0].cache_data_invalid_bitmap = ((-2 * (next_i()%2)) + 1) * next_i();
        ftl[_i0].cache_clean = ((-2 * (next_i()%2)) + 1) * next_i();
        ftl[_i0].cache_zone = ((-2 * (next_i()%2)) + 1) * next_i();
        ftl[_i0].cache_block = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sm_cache_init(ftl);
          free(ftl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
