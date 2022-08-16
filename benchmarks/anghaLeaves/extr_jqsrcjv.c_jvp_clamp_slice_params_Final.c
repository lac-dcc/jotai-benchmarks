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

/* Variables and functions */

__attribute__((used)) static void jvp_clamp_slice_params(int len, int *pstart, int *pend)
{
  if (*pstart < 0) *pstart = len + *pstart;
  if (*pend < 0) *pend = len + *pend;

  if (*pstart < 0) *pstart = 0;
  if (*pstart > len) *pstart = len;
  if (*pend > len) *pend = len;
  if (*pend < *pstart) *pend = *pstart;
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
          int len = 100;
          int _len_pstart0 = 1;
          int * pstart = (int *) malloc(_len_pstart0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pstart0; _i0++) {
            pstart[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pend0 = 1;
          int * pend = (int *) malloc(_len_pend0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pend0; _i0++) {
            pend[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          jvp_clamp_slice_params(len,pstart,pend);
          free(pstart);
          free(pend);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
