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
typedef  scalar_t__ int8_t ;

/* Variables and functions */
 int PS_MAX_NR_IPDOPD ; 

__attribute__((used)) static void ipdopd_reset(int8_t *ipd_hist, int8_t *opd_hist)
{
    int i;
    for (i = 0; i < PS_MAX_NR_IPDOPD; i++) {
        opd_hist[i] = 0;
        ipd_hist[i] = 0;
    }
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
          int _len_ipd_hist0 = 1;
          long * ipd_hist = (long *) malloc(_len_ipd_hist0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_ipd_hist0; _i0++) {
            ipd_hist[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_opd_hist0 = 1;
          long * opd_hist = (long *) malloc(_len_opd_hist0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_opd_hist0; _i0++) {
            opd_hist[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ipdopd_reset(ipd_hist,opd_hist);
          free(ipd_hist);
          free(opd_hist);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
