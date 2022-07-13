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
struct gl_transform {scalar_t__** m; scalar_t__* t; } ;

/* Variables and functions */

__attribute__((used)) static inline bool gl_transform_eq(struct gl_transform a, struct gl_transform b)
{
    for (int x = 0; x < 2; x++) {
        for (int y = 0; y < 2; y++) {
            if (a.m[x][y] != b.m[x][y])
                return false;
        }
    }

    return a.t[0] == b.t[0] && a.t[1] == b.t[1];
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
          struct gl_transform a;
          int _len_a_m0 = 1;
          a.m = (long **) malloc(_len_a_m0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_a_m0; _j0++) {
            int _len_a_m1 = 1;
            a.m[_j0] = (long *) malloc(_len_a_m1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_a_m1; _j1++) {
              a.m[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_a_t0 = 1;
          a.t = (long *) malloc(_len_a_t0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_a_t0; _j0++) {
            a.t[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct gl_transform b;
          int _len_b_m0 = 1;
          b.m = (long **) malloc(_len_b_m0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_b_m0; _j0++) {
            int _len_b_m1 = 1;
            b.m[_j0] = (long *) malloc(_len_b_m1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_b_m1; _j1++) {
              b.m[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_b_t0 = 1;
          b.t = (long *) malloc(_len_b_t0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_b_t0; _j0++) {
            b.t[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gl_transform_eq(a,b);
          printf("%d\n", benchRet); 
          free(*(a.m));
        free(a.m);
          free(a.t);
          free(*(b.m));
        free(b.m);
          free(b.t);
        
        break;
    }
    // big-arr
    case 1:
    {
          struct gl_transform a;
          int _len_a_m0 = 1;
          a.m = (long **) malloc(_len_a_m0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_a_m0; _j0++) {
            int _len_a_m1 = 1;
            a.m[_j0] = (long *) malloc(_len_a_m1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_a_m1; _j1++) {
              a.m[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_a_t0 = 1;
          a.t = (long *) malloc(_len_a_t0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_a_t0; _j0++) {
            a.t[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct gl_transform b;
          int _len_b_m0 = 1;
          b.m = (long **) malloc(_len_b_m0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_b_m0; _j0++) {
            int _len_b_m1 = 1;
            b.m[_j0] = (long *) malloc(_len_b_m1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_b_m1; _j1++) {
              b.m[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_b_t0 = 1;
          b.t = (long *) malloc(_len_b_t0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_b_t0; _j0++) {
            b.t[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gl_transform_eq(a,b);
          printf("%d\n", benchRet); 
          free(*(a.m));
        free(a.m);
          free(a.t);
          free(*(b.m));
        free(b.m);
          free(b.t);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          struct gl_transform a;
          int _len_a_m0 = 1;
          a.m = (long **) malloc(_len_a_m0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_a_m0; _j0++) {
            int _len_a_m1 = 1;
            a.m[_j0] = (long *) malloc(_len_a_m1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_a_m1; _j1++) {
              a.m[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_a_t0 = 1;
          a.t = (long *) malloc(_len_a_t0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_a_t0; _j0++) {
            a.t[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct gl_transform b;
          int _len_b_m0 = 1;
          b.m = (long **) malloc(_len_b_m0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_b_m0; _j0++) {
            int _len_b_m1 = 1;
            b.m[_j0] = (long *) malloc(_len_b_m1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_b_m1; _j1++) {
              b.m[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_b_t0 = 1;
          b.t = (long *) malloc(_len_b_t0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_b_t0; _j0++) {
            b.t[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gl_transform_eq(a,b);
          printf("%d\n", benchRet); 
          free(*(a.m));
        free(a.m);
          free(a.t);
          free(*(b.m));
        free(b.m);
          free(b.t);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
