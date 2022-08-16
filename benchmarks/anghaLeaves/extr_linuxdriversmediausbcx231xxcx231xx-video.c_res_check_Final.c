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
struct cx231xx_fh {int stream_on; } ;

/* Variables and functions */

__attribute__((used)) static int res_check(struct cx231xx_fh *fh)
{
	return fh->stream_on;
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
          int _len_fh0 = 1;
          struct cx231xx_fh * fh = (struct cx231xx_fh *) malloc(_len_fh0*sizeof(struct cx231xx_fh));
          for(int _i0 = 0; _i0 < _len_fh0; _i0++) {
            fh[_i0].stream_on = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = res_check(fh);
          printf("%d\n", benchRet); 
          free(fh);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_fh0 = 100;
          struct cx231xx_fh * fh = (struct cx231xx_fh *) malloc(_len_fh0*sizeof(struct cx231xx_fh));
          for(int _i0 = 0; _i0 < _len_fh0; _i0++) {
            fh[_i0].stream_on = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = res_check(fh);
          printf("%d\n", benchRet); 
          free(fh);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
