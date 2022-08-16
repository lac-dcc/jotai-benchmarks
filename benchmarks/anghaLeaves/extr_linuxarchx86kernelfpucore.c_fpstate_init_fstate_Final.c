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
struct fregs_state {int cwd; int swd; int twd; int fos; } ;

/* Variables and functions */

__attribute__((used)) static inline void fpstate_init_fstate(struct fregs_state *fp)
{
	fp->cwd = 0xffff037fu;
	fp->swd = 0xffff0000u;
	fp->twd = 0xffffffffu;
	fp->fos = 0xffff0000u;
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
          int _len_fp0 = 1;
          struct fregs_state * fp = (struct fregs_state *) malloc(_len_fp0*sizeof(struct fregs_state));
          for(int _i0 = 0; _i0 < _len_fp0; _i0++) {
            fp[_i0].cwd = ((-2 * (next_i()%2)) + 1) * next_i();
        fp[_i0].swd = ((-2 * (next_i()%2)) + 1) * next_i();
        fp[_i0].twd = ((-2 * (next_i()%2)) + 1) * next_i();
        fp[_i0].fos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fpstate_init_fstate(fp);
          free(fp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
