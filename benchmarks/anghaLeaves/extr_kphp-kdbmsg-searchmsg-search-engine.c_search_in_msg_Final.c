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
typedef  scalar_t__ hash_t ;

/* Variables and functions */
 scalar_t__* Q ; 
 int Qw ; 

int search_in_msg (hash_t *H, int hc) {
  int i, a, b, c;
  // fprintf (stderr, "have %d hashes in this msg: %llu, %llu, ...\n", hc, H[0], H[1]);
  for (i = 0; i < Qw; i++) {
    hash_t h = Q[i];
    a = -1;  b = hc;
    while (b - a > 1) {
      c = (a + b) >> 1;
      if (H[c] > h) { b = c; } else { a = c; }
    }
    if (a < 0 || H[a] != h) { return 0; }
  }
  return 1;
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
          int hc = 100;
          int _len_H0 = 1;
          long * H = (long *) malloc(_len_H0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_H0; _i0++) {
            H[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = search_in_msg(H,hc);
          printf("%d\n", benchRet); 
          free(H);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int hc = 10;
          int _len_H0 = 100;
          long * H = (long *) malloc(_len_H0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_H0; _i0++) {
            H[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = search_in_msg(H,hc);
          printf("%d\n", benchRet); 
          free(H);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
