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
       0            big-arr\n\
       1            big-arr-10x\n\
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
typedef  int int16_t ;

/* Variables and functions */

__attribute__((used)) static void vc1_v_s_overlap_c(int16_t *top, int16_t *bottom)
{
    int i;
    int a, b, c, d;
    int d1, d2;
    int rnd1 = 4, rnd2 = 3;
    for (i = 0; i < 8; i++) {
        a  = top[48];
        b  = top[56];
        c  = bottom[0];
        d  = bottom[8];
        d1 = a - d;
        d2 = a - d + b - c;

        top[48]   = ((a << 3) - d1 + rnd1) >> 3;
        top[56]   = ((b << 3) - d2 + rnd2) >> 3;
        bottom[0] = ((c << 3) + d2 + rnd1) >> 3;
        bottom[8] = ((d << 3) + d1 + rnd2) >> 3;

        bottom++;
        top++;
        rnd2 = 7 - rnd2;
        rnd1 = 7 - rnd1;
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

    // big-arr
    case 0:
    {
          int _len_top0 = 65025;
          int * top = (int *) malloc(_len_top0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_top0; _i0++) {
            top[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bottom0 = 65025;
          int * bottom = (int *) malloc(_len_bottom0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bottom0; _i0++) {
            bottom[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vc1_v_s_overlap_c(top,bottom);
          free(top);
          free(bottom);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_top0 = 100;
          int * top = (int *) malloc(_len_top0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_top0; _i0++) {
            top[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bottom0 = 100;
          int * bottom = (int *) malloc(_len_bottom0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bottom0; _i0++) {
            bottom[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vc1_v_s_overlap_c(top,bottom);
          free(top);
          free(bottom);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
