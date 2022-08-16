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
typedef  scalar_t__ u_long ;

/* Variables and functions */

__attribute__((used)) static int set_min_max(int maxflag, u_long mib, u_long limit, u_long *oper)
{
	u_long	old ;
	old = *oper ;
	if ((limit > mib) ^ maxflag)
		*oper = limit ;
	else
		*oper = mib ;
	return old != *oper;
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
          int maxflag = 100;
          long mib = 100;
          long limit = 100;
          int _len_oper0 = 1;
          long * oper = (long *) malloc(_len_oper0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_oper0; _i0++) {
            oper[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = set_min_max(maxflag,mib,limit,oper);
          printf("%d\n", benchRet); 
          free(oper);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int maxflag = 10;
          long mib = 10;
          long limit = 10;
          int _len_oper0 = 100;
          long * oper = (long *) malloc(_len_oper0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_oper0; _i0++) {
            oper[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = set_min_max(maxflag,mib,limit,oper);
          printf("%d\n", benchRet); 
          free(oper);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
