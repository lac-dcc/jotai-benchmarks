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
struct ceph_snap_context {scalar_t__ num_snaps; scalar_t__* snaps; scalar_t__ seq; } ;

/* Variables and functions */

__attribute__((used)) static bool has_new_snaps(struct ceph_snap_context *o,
			  struct ceph_snap_context *n)
{
	if (n->num_snaps == 0)
		return false;
	/* snaps are in descending order */
	return n->snaps[0] > o->seq;
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
          int _len_o0 = 1;
          struct ceph_snap_context * o = (struct ceph_snap_context *) malloc(_len_o0*sizeof(struct ceph_snap_context));
          for(int _i0 = 0; _i0 < _len_o0; _i0++) {
            o[_i0].num_snaps = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_o__i0__snaps0 = 1;
          o[_i0].snaps = (long *) malloc(_len_o__i0__snaps0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_o__i0__snaps0; _j0++) {
            o[_i0].snaps[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        o[_i0].seq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_n0 = 1;
          struct ceph_snap_context * n = (struct ceph_snap_context *) malloc(_len_n0*sizeof(struct ceph_snap_context));
          for(int _i0 = 0; _i0 < _len_n0; _i0++) {
            n[_i0].num_snaps = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_n__i0__snaps0 = 1;
          n[_i0].snaps = (long *) malloc(_len_n__i0__snaps0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_n__i0__snaps0; _j0++) {
            n[_i0].snaps[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        n[_i0].seq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = has_new_snaps(o,n);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_o0; _aux++) {
          free(o[_aux].snaps);
          }
          free(o);
          for(int _aux = 0; _aux < _len_n0; _aux++) {
          free(n[_aux].snaps);
          }
          free(n);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
