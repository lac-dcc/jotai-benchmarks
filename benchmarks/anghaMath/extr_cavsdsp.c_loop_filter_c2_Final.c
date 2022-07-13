// ========================================================================= //

// includes
#include <math.h>
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "limits.h"
#include "float.h"



#define JOTAI_NUM_RANDS_ 25

const unsigned rand_primes[JOTAI_NUM_RANDS_] = {179, 103, 479, 647, 229, 37, 271, 557, 263, 607, 18743, 50359, 21929, 48757, 98179, 12907, 52937, 64579, 49957, 52567, 507163, 149939, 412157, 680861, 757751};

int next_i() {
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  int /*<<< orphan*/  uint8_t ;
typedef  int /*<<< orphan*/  ptrdiff_t ;

/* Variables and functions */
 int P0 ; 
 int P1 ; 
 int P2 ; 
 int Q0 ; 
 int Q1 ; 
 int Q2 ; 

__attribute__((used)) static inline void loop_filter_c2(uint8_t *p0_p, ptrdiff_t stride, int alpha, int beta)
{
    int p0 = P0;
    int q0 = Q0;

    if(abs(p0-q0)<alpha && abs(P1-p0)<beta && abs(Q1-q0)<beta) {
        int s = p0 + q0 + 2;
        alpha = (alpha>>2) + 2;
        if(abs(P2-p0) < beta && abs(p0-q0) < alpha) {
            P0 = (P1 + p0 + s) >> 2;
        } else
            P0 = (2*P1 + s) >> 2;
        if(abs(Q2-q0) < beta && abs(q0-p0) < alpha) {
            Q0 = (Q1 + q0 + s) >> 2;
        } else
            Q0 = (2*Q1 + s) >> 2;
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
          int stride = 100;
          int alpha = 100;
          int beta = 100;
          int _len_p0_p0 = 1;
          int * p0_p = (int *) malloc(_len_p0_p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p0_p0; _i0++) {
            p0_p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          loop_filter_c2(p0_p,stride,alpha,beta);
          free(p0_p);
        
        break;
    }
    // big-arr
    case 1:
    {
          int stride = 255;
          int alpha = 255;
          int beta = 255;
          int _len_p0_p0 = 65025;
          int * p0_p = (int *) malloc(_len_p0_p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p0_p0; _i0++) {
            p0_p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          loop_filter_c2(p0_p,stride,alpha,beta);
          free(p0_p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int stride = 10;
          int alpha = 10;
          int beta = 10;
          int _len_p0_p0 = 100;
          int * p0_p = (int *) malloc(_len_p0_p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p0_p0; _i0++) {
            p0_p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          loop_filter_c2(p0_p,stride,alpha,beta);
          free(p0_p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
