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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
       1            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct txbd8 {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline struct txbd8 *skip_txbd(struct txbd8 *bdp, int stride,
				      struct txbd8 *base, int ring_size)
{
	struct txbd8 *new_bd = bdp + stride;

	return (new_bd >= (base + ring_size)) ? (new_bd - ring_size) : new_bd;
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

    // big-arr
    case 0:
    {
          int stride = 255;
          int ring_size = 255;
          int _len_bdp0 = 65025;
          struct txbd8 * bdp = (struct txbd8 *) malloc(_len_bdp0*sizeof(struct txbd8));
          for(int _i0 = 0; _i0 < _len_bdp0; _i0++) {
            bdp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_base0 = 65025;
          struct txbd8 * base = (struct txbd8 *) malloc(_len_base0*sizeof(struct txbd8));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            base[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct txbd8 * benchRet = skip_txbd(bdp,stride,base,ring_size);
          printf("%d\n", (*benchRet).dummy);
          free(bdp);
          free(base);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int stride = 10;
          int ring_size = 10;
          int _len_bdp0 = 100;
          struct txbd8 * bdp = (struct txbd8 *) malloc(_len_bdp0*sizeof(struct txbd8));
          for(int _i0 = 0; _i0 < _len_bdp0; _i0++) {
            bdp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_base0 = 100;
          struct txbd8 * base = (struct txbd8 *) malloc(_len_base0*sizeof(struct txbd8));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
            base[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct txbd8 * benchRet = skip_txbd(bdp,stride,base,ring_size);
          printf("%d\n", (*benchRet).dummy);
          free(bdp);
          free(base);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
