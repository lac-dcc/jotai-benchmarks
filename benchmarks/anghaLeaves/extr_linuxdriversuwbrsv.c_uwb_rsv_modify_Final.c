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
struct uwb_rsv {int dummy; } ;

/* Variables and functions */
 int ENOSYS ; 

int uwb_rsv_modify(struct uwb_rsv *rsv, int max_mas, int min_mas, int max_interval)
{
	return -ENOSYS;
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
          int max_mas = 100;
          int min_mas = 100;
          int max_interval = 100;
          int _len_rsv0 = 1;
          struct uwb_rsv * rsv = (struct uwb_rsv *) malloc(_len_rsv0*sizeof(struct uwb_rsv));
          for(int _i0 = 0; _i0 < _len_rsv0; _i0++) {
            rsv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uwb_rsv_modify(rsv,max_mas,min_mas,max_interval);
          printf("%d\n", benchRet); 
          free(rsv);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int max_mas = 10;
          int min_mas = 10;
          int max_interval = 10;
          int _len_rsv0 = 100;
          struct uwb_rsv * rsv = (struct uwb_rsv *) malloc(_len_rsv0*sizeof(struct uwb_rsv));
          for(int _i0 = 0; _i0 < _len_rsv0; _i0++) {
            rsv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uwb_rsv_modify(rsv,max_mas,min_mas,max_interval);
          printf("%d\n", benchRet); 
          free(rsv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
