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
struct dlm_lkb {int lkb_grmode; int lkb_highbast; } ;

/* Variables and functions */
 int DLM_LOCK_EX ; 
 int DLM_LOCK_PR ; 
 int /*<<< orphan*/ ** __dlm_compat_matrix ; 

__attribute__((used)) static int lock_requires_bast(struct dlm_lkb *gr, int high, int cw)
{
	if (gr->lkb_grmode == DLM_LOCK_PR && cw) {
		if (gr->lkb_highbast < DLM_LOCK_EX)
			return 1;
		return 0;
	}

	if (gr->lkb_highbast < high &&
	    !__dlm_compat_matrix[gr->lkb_grmode+1][high+1])
		return 1;
	return 0;
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
          int high = 100;
          int cw = 100;
          int _len_gr0 = 1;
          struct dlm_lkb * gr = (struct dlm_lkb *) malloc(_len_gr0*sizeof(struct dlm_lkb));
          for(int _i0 = 0; _i0 < _len_gr0; _i0++) {
            gr[_i0].lkb_grmode = ((-2 * (next_i()%2)) + 1) * next_i();
        gr[_i0].lkb_highbast = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = lock_requires_bast(gr,high,cw);
          printf("%d\n", benchRet); 
          free(gr);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int high = 10;
          int cw = 10;
          int _len_gr0 = 100;
          struct dlm_lkb * gr = (struct dlm_lkb *) malloc(_len_gr0*sizeof(struct dlm_lkb));
          for(int _i0 = 0; _i0 < _len_gr0; _i0++) {
            gr[_i0].lkb_grmode = ((-2 * (next_i()%2)) + 1) * next_i();
        gr[_i0].lkb_highbast = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = lock_requires_bast(gr,high,cw);
          printf("%d\n", benchRet); 
          free(gr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
