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
       0            big-arr\n\
       1            big-arr-10x\n\
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
typedef  scalar_t__ nfsnode_t ;

/* Variables and functions */

__attribute__((used)) static void
nfs_node_sort4(nfsnode_t np1, nfsnode_t np2, nfsnode_t np3, nfsnode_t np4, nfsnode_t *list, int *lcntp)
{
	nfsnode_t na[2], nb[2];
	int a, b, i, lcnt;

	/* sort pairs then merge */
	na[0] = (np1 > np2) ? np1 : np2;
	na[1] = (np1 > np2) ? np2 : np1;
	nb[0] = (np3 > np4) ? np3 : np4;
	nb[1] = (np3 > np4) ? np4 : np3;
	for (a = b = i = lcnt = 0; i < 4; i++) {
		if (a >= 2)
			list[lcnt] = nb[b++];
		else if ((b >= 2) || (na[a] >= nb[b]))
			list[lcnt] = na[a++];
		else
			list[lcnt] = nb[b++];
		if ((lcnt <= 0) || (list[lcnt] != list[lcnt-1]))
			lcnt++; /* omit dups */
	}
	if (list[lcnt-1] == NULL)
		lcnt--;
	*lcntp = lcnt;
}

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
          long np1 = 255;
        
          long np2 = 255;
        
          long np3 = 255;
        
          long np4 = 255;
        
          int _len_list0 = 65025;
          long * list = (long *) malloc(_len_list0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_list0; _i0++) {
            list[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_lcntp0 = 65025;
          int * lcntp = (int *) malloc(_len_lcntp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lcntp0; _i0++) {
            lcntp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          nfs_node_sort4(np1,np2,np3,np4,list,lcntp);
          free(list);
          free(lcntp);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long np1 = 10;
        
          long np2 = 10;
        
          long np3 = 10;
        
          long np4 = 10;
        
          int _len_list0 = 100;
          long * list = (long *) malloc(_len_list0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_list0; _i0++) {
            list[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_lcntp0 = 100;
          int * lcntp = (int *) malloc(_len_lcntp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lcntp0; _i0++) {
            lcntp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          nfs_node_sort4(np1,np2,np3,np4,list,lcntp);
          free(list);
          free(lcntp);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
