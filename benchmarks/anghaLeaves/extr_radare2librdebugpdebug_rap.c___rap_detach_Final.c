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
typedef  int /*<<< orphan*/  RDebug ;

/* Variables and functions */

__attribute__((used)) static int __rap_detach(RDebug *dbg, int pid) {
// XXX TODO PID must be a socket here !!1
//	close (pid);
	//XXX Maybe we should continue here?
	return true;
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
          int pid = 100;
          int _len_dbg0 = 1;
          int * dbg = (int *) malloc(_len_dbg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dbg0; _i0++) {
            dbg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __rap_detach(dbg,pid);
          printf("%d\n", benchRet); 
          free(dbg);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int pid = 10;
          int _len_dbg0 = 100;
          int * dbg = (int *) malloc(_len_dbg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dbg0; _i0++) {
            dbg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __rap_detach(dbg,pid);
          printf("%d\n", benchRet); 
          free(dbg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}