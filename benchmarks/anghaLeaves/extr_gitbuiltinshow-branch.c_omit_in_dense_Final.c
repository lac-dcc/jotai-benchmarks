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
       0            big-arr-10x\n\
       1            empty\n\
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
          // static_instructions_O0 : 50
          // dynamic_instructions_O0 : 341
          // ------------------------------- 
          // static_instructions_O1 : 29
          // dynamic_instructions_O1 : 119
          // ------------------------------- 
          // static_instructions_O2 : 98
          // dynamic_instructions_O2 : 148
          // ------------------------------- 
          // static_instructions_O3 : 98
          // dynamic_instructions_O3 : 148
          // ------------------------------- 
          // static_instructions_Ofast : 98
          // dynamic_instructions_Ofast : 148
          // ------------------------------- 
          // static_instructions_Os : 69
          // dynamic_instructions_Os : 156
          // ------------------------------- 
          // static_instructions_Oz : 26
          // dynamic_instructions_Oz : 147
          // ------------------------------- 

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
              free(rev[i1]);
          }
          free(rev);
        
        break;
    }


    // empty
    case 1:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int n = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_commit0 = 1;
          struct commit * commit = (struct commit *) malloc(_len_commit0*sizeof(struct commit));
          for(int _i0 = 0; _i0 < _len_commit0; _i0++) {
              commit[_i0].object.flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_rev0 = 1;
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
