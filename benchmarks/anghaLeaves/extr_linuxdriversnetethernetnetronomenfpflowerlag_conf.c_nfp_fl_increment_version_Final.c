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
struct nfp_fl_lag {int batch_ver; } ;

/* Variables and functions */
 int NFP_FL_LAG_VERSION_MASK ; 

__attribute__((used)) static void nfp_fl_increment_version(struct nfp_fl_lag *lag)
{
	/* LSB is not considered by firmware so add 2 for each increment. */
	lag->batch_ver += 2;
	lag->batch_ver &= NFP_FL_LAG_VERSION_MASK;

	/* Zero is reserved by firmware. */
	if (!lag->batch_ver)
		lag->batch_ver += 2;
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
          int _len_lag0 = 1;
          struct nfp_fl_lag * lag = (struct nfp_fl_lag *) malloc(_len_lag0*sizeof(struct nfp_fl_lag));
          for(int _i0 = 0; _i0 < _len_lag0; _i0++) {
            lag[_i0].batch_ver = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nfp_fl_increment_version(lag);
          free(lag);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_lag0 = 100;
          struct nfp_fl_lag * lag = (struct nfp_fl_lag *) malloc(_len_lag0*sizeof(struct nfp_fl_lag));
          for(int _i0 = 0; _i0 < _len_lag0; _i0++) {
            lag[_i0].batch_ver = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nfp_fl_increment_version(lag);
          free(lag);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
