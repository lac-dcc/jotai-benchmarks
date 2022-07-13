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
       0            big-arr-10x\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int flags; } ;
struct commit {TYPE_1__ object; } ;

/* Variables and functions */
 int REV_SHIFT ; 

__attribute__((used)) static int omit_in_dense(struct commit *commit, struct commit **rev, int n)
{
	/* If the commit is tip of the named branches, do not
	 * omit it.
	 * Otherwise, if it is a merge that is reachable from only one
	 * tip, it is not that interesting.
	 */
	int i, flag, count;
	for (i = 0; i < n; i++)
		if (rev[i] == commit)
			return 0;
	flag = commit->object.flags;
	for (i = count = 0; i < n; i++) {
		if (flag & (1u << (i + REV_SHIFT)))
			count++;
	}
	if (count == 1)
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

    // big-arr-10x
    case 0:
    {
          int n = 10;
          int _len_commit0 = 100;
          struct commit * commit = (struct commit *) malloc(_len_commit0*sizeof(struct commit));
          for(int _i0 = 0; _i0 < _len_commit0; _i0++) {
            commit[_i0].object.flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rev0 = 100;
          struct commit ** rev = (struct commit **) malloc(_len_rev0*sizeof(struct commit *));
          for(int _i0 = 0; _i0 < _len_rev0; _i0++) {
            int _len_rev1 = 1;
            rev[_i0] = (struct commit *) malloc(_len_rev1*sizeof(struct commit));
            for(int _i1 = 0; _i1 < _len_rev1; _i1++) {
              rev[_i0][_i1].object.flags = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = omit_in_dense(commit,rev,n);
          printf("%d\n", benchRet); 
          free(commit);
          for(int i1 = 0; i1 < _len_rev0; i1++) {
            int _len_rev1 = 1;
              free(rev[i1]);
          }
          free(rev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
