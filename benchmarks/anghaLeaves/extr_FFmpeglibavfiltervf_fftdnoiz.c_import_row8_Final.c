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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  uint8_t ;
struct TYPE_3__ {scalar_t__ im; int /*<<< orphan*/  re; } ;
typedef  TYPE_1__ FFTComplex ;

/* Variables and functions */

__attribute__((used)) static void import_row8(FFTComplex *dst, uint8_t *src, int rw)
{
    int j;

    for (j = 0; j < rw; j++) {
        dst[j].re = src[j];
        dst[j].im = 0;
    }
}

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
          int rw = 255;
        
          int _len_dst0 = 65025;
          struct TYPE_3__ * dst = (struct TYPE_3__ *) malloc(_len_dst0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
              dst[_i0].im = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].re = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_src0 = 65025;
          int * src = (int *) malloc(_len_src0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          import_row8(dst,src,rw);
          free(dst);
          free(src);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int rw = 10;
        
          int _len_dst0 = 100;
          struct TYPE_3__ * dst = (struct TYPE_3__ *) malloc(_len_dst0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
              dst[_i0].im = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].re = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_src0 = 100;
          int * src = (int *) malloc(_len_src0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          import_row8(dst,src,rw);
          free(dst);
          free(src);
        
        break;
    }
    // empty
    case 2:
    {
          int rw = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_dst0 = 1;
          struct TYPE_3__ * dst = (struct TYPE_3__ *) malloc(_len_dst0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
              dst[_i0].im = ((-2 * (next_i()%2)) + 1) * next_i();
          dst[_i0].re = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_src0 = 1;
          int * src = (int *) malloc(_len_src0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          import_row8(dst,src,rw);
          free(dst);
          free(src);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
