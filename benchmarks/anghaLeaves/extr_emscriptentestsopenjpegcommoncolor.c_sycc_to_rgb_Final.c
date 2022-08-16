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

__attribute__((used)) static void sycc_to_rgb(int offset, int upb, int y, int cb, int cr,
	int *out_r, int *out_g, int *out_b)
{
	int r, g, b;

	cb -= offset; cr -= offset;
	r = y + (int)(1.402 * (float)cr);
	if(r < 0) r = 0; else if(r > upb) r = upb; *out_r = r;

	g = y - (int)(0.344 * (float)cb + 0.714 * (float)cr);
	if(g < 0) g = 0; else if(g > upb) g = upb; *out_g = g;

	b = y + (int)(1.772 * (float)cb);
	if(b < 0) b = 0; else if(b > upb) b = upb; *out_b = b;
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
          int offset = 100;
          int upb = 100;
          int y = 100;
          int cb = 100;
          int cr = 100;
          int _len_out_r0 = 1;
          int * out_r = (int *) malloc(_len_out_r0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out_r0; _i0++) {
            out_r[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out_g0 = 1;
          int * out_g = (int *) malloc(_len_out_g0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out_g0; _i0++) {
            out_g[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out_b0 = 1;
          int * out_b = (int *) malloc(_len_out_b0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out_b0; _i0++) {
            out_b[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sycc_to_rgb(offset,upb,y,cb,cr,out_r,out_g,out_b);
          free(out_r);
          free(out_g);
          free(out_b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
