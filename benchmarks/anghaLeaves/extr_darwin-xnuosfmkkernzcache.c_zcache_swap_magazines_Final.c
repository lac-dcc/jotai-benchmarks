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
struct zcc_magazine {int dummy; } ;

/* Variables and functions */

void zcache_swap_magazines(struct zcc_magazine **a, struct zcc_magazine **b)
{
	struct zcc_magazine *temp = *a;
	*a = *b;
	*b = temp;
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
          int _len_a0 = 1;
          struct zcc_magazine ** a = (struct zcc_magazine **) malloc(_len_a0*sizeof(struct zcc_magazine *));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            int _len_a1 = 1;
            a[_i0] = (struct zcc_magazine *) malloc(_len_a1*sizeof(struct zcc_magazine));
            for(int _i1 = 0; _i1 < _len_a1; _i1++) {
              a[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_b0 = 1;
          struct zcc_magazine ** b = (struct zcc_magazine **) malloc(_len_b0*sizeof(struct zcc_magazine *));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            int _len_b1 = 1;
            b[_i0] = (struct zcc_magazine *) malloc(_len_b1*sizeof(struct zcc_magazine));
            for(int _i1 = 0; _i1 < _len_b1; _i1++) {
              b[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          zcache_swap_magazines(a,b);
          for(int i1 = 0; i1 < _len_a0; i1++) {
            int _len_a1 = 1;
              free(a[i1]);
          }
          free(a);
          for(int i1 = 0; i1 < _len_b0; i1++) {
            int _len_b1 = 1;
              free(b[i1]);
          }
          free(b);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_a0 = 65025;
          struct zcc_magazine ** a = (struct zcc_magazine **) malloc(_len_a0*sizeof(struct zcc_magazine *));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            int _len_a1 = 1;
            a[_i0] = (struct zcc_magazine *) malloc(_len_a1*sizeof(struct zcc_magazine));
            for(int _i1 = 0; _i1 < _len_a1; _i1++) {
              a[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_b0 = 65025;
          struct zcc_magazine ** b = (struct zcc_magazine **) malloc(_len_b0*sizeof(struct zcc_magazine *));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            int _len_b1 = 1;
            b[_i0] = (struct zcc_magazine *) malloc(_len_b1*sizeof(struct zcc_magazine));
            for(int _i1 = 0; _i1 < _len_b1; _i1++) {
              b[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          zcache_swap_magazines(a,b);
          for(int i1 = 0; i1 < _len_a0; i1++) {
            int _len_a1 = 1;
              free(a[i1]);
          }
          free(a);
          for(int i1 = 0; i1 < _len_b0; i1++) {
            int _len_b1 = 1;
              free(b[i1]);
          }
          free(b);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_a0 = 100;
          struct zcc_magazine ** a = (struct zcc_magazine **) malloc(_len_a0*sizeof(struct zcc_magazine *));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            int _len_a1 = 1;
            a[_i0] = (struct zcc_magazine *) malloc(_len_a1*sizeof(struct zcc_magazine));
            for(int _i1 = 0; _i1 < _len_a1; _i1++) {
              a[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_b0 = 100;
          struct zcc_magazine ** b = (struct zcc_magazine **) malloc(_len_b0*sizeof(struct zcc_magazine *));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            int _len_b1 = 1;
            b[_i0] = (struct zcc_magazine *) malloc(_len_b1*sizeof(struct zcc_magazine));
            for(int _i1 = 0; _i1 < _len_b1; _i1++) {
              b[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          zcache_swap_magazines(a,b);
          for(int i1 = 0; i1 < _len_a0; i1++) {
            int _len_a1 = 1;
              free(a[i1]);
          }
          free(a);
          for(int i1 = 0; i1 < _len_b0; i1++) {
            int _len_b1 = 1;
              free(b[i1]);
          }
          free(b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
