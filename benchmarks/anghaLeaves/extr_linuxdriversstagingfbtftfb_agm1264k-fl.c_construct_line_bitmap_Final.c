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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int u8 ;
struct fbtft_par {TYPE_1__* info; } ;
struct TYPE_4__ {int xres; } ;
struct TYPE_3__ {TYPE_2__ var; } ;

/* Variables and functions */

__attribute__((used)) static void
construct_line_bitmap(struct fbtft_par *par, u8 *dest, signed short *src,
		      int xs, int xe, int y)
{
	int x, i;

	for (x = xs; x < xe; ++x) {
		u8 res = 0;

		for (i = 0; i < 8; i++)
			if (src[(y * 8 + i) * par->info->var.xres + x])
				res |= 1 << i;
#ifdef NEGATIVE
		*dest++ = res;
#else
		*dest++ = ~res;
#endif
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
          int xs = 100;
          int xe = 100;
          int y = 100;
          int _len_par0 = 1;
          struct fbtft_par * par = (struct fbtft_par *) malloc(_len_par0*sizeof(struct fbtft_par));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
              int _len_par__i0__info0 = 1;
          par[_i0].info = (struct TYPE_3__ *) malloc(_len_par__i0__info0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_par__i0__info0; _j0++) {
            par[_i0].info->var.xres = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_dest0 = 1;
          int * dest = (int *) malloc(_len_dest0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 1;
          short * src = (short *) malloc(_len_src0*sizeof(short));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          construct_line_bitmap(par,dest,src,xs,xe,y);
          for(int _aux = 0; _aux < _len_par0; _aux++) {
          free(par[_aux].info);
          }
          free(par);
          free(dest);
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
