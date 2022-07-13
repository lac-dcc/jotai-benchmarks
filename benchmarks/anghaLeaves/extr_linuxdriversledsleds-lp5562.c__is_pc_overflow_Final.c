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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
struct lp55xx_predef_pattern {scalar_t__ size_r; scalar_t__ size_g; scalar_t__ size_b; } ;

/* Variables and functions */
 scalar_t__ LP5562_PROGRAM_LENGTH ; 

__attribute__((used)) static inline bool _is_pc_overflow(struct lp55xx_predef_pattern *ptn)
{
	return ptn->size_r >= LP5562_PROGRAM_LENGTH ||
	       ptn->size_g >= LP5562_PROGRAM_LENGTH ||
	       ptn->size_b >= LP5562_PROGRAM_LENGTH;
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
          int _len_ptn0 = 1;
          struct lp55xx_predef_pattern * ptn = (struct lp55xx_predef_pattern *) malloc(_len_ptn0*sizeof(struct lp55xx_predef_pattern));
          for(int _i0 = 0; _i0 < _len_ptn0; _i0++) {
            ptn[_i0].size_r = ((-2 * (next_i()%2)) + 1) * next_i();
        ptn[_i0].size_g = ((-2 * (next_i()%2)) + 1) * next_i();
        ptn[_i0].size_b = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _is_pc_overflow(ptn);
          printf("%d\n", benchRet); 
          free(ptn);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ptn0 = 65025;
          struct lp55xx_predef_pattern * ptn = (struct lp55xx_predef_pattern *) malloc(_len_ptn0*sizeof(struct lp55xx_predef_pattern));
          for(int _i0 = 0; _i0 < _len_ptn0; _i0++) {
            ptn[_i0].size_r = ((-2 * (next_i()%2)) + 1) * next_i();
        ptn[_i0].size_g = ((-2 * (next_i()%2)) + 1) * next_i();
        ptn[_i0].size_b = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _is_pc_overflow(ptn);
          printf("%d\n", benchRet); 
          free(ptn);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ptn0 = 100;
          struct lp55xx_predef_pattern * ptn = (struct lp55xx_predef_pattern *) malloc(_len_ptn0*sizeof(struct lp55xx_predef_pattern));
          for(int _i0 = 0; _i0 < _len_ptn0; _i0++) {
            ptn[_i0].size_r = ((-2 * (next_i()%2)) + 1) * next_i();
        ptn[_i0].size_g = ((-2 * (next_i()%2)) + 1) * next_i();
        ptn[_i0].size_b = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _is_pc_overflow(ptn);
          printf("%d\n", benchRet); 
          free(ptn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
