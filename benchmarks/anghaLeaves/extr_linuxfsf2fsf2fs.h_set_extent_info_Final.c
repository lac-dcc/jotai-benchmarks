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
typedef  int /*<<< orphan*/  u32 ;
struct extent_info {unsigned int fofs; unsigned int len; int /*<<< orphan*/  blk; } ;

/* Variables and functions */

__attribute__((used)) static inline void set_extent_info(struct extent_info *ei, unsigned int fofs,
						u32 blk, unsigned int len)
{
	ei->fofs = fofs;
	ei->blk = blk;
	ei->len = len;
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
          unsigned int fofs = 100;
          int blk = 100;
          unsigned int len = 100;
          int _len_ei0 = 1;
          struct extent_info * ei = (struct extent_info *) malloc(_len_ei0*sizeof(struct extent_info));
          for(int _i0 = 0; _i0 < _len_ei0; _i0++) {
            ei[_i0].fofs = ((-2 * (next_i()%2)) + 1) * next_i();
        ei[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        ei[_i0].blk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_extent_info(ei,fofs,blk,len);
          free(ei);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
