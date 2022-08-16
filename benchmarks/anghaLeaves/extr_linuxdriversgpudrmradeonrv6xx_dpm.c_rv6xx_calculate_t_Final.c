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
typedef  int u8 ;
typedef  scalar_t__ u32 ;

/* Variables and functions */

__attribute__((used)) static void rv6xx_calculate_t(u32 l_f, u32 h_f, int h,
			      int d_l, int d_r, u8 *l, u8 *r)
{
	int a_n, a_d, h_r, l_r;

	h_r = d_l;
	l_r = 100 - d_r;

	a_n = (int)h_f * d_l + (int)l_f * (h - d_r);
	a_d = (int)l_f * l_r + (int)h_f * h_r;

	if (a_d != 0) {
		*l = d_l - h_r * a_n / a_d;
		*r = d_r + l_r * a_n / a_d;
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
          long l_f = 100;
          long h_f = 100;
          int h = 100;
          int d_l = 100;
          int d_r = 100;
          int _len_l0 = 1;
          int * l = (int *) malloc(_len_l0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_l0; _i0++) {
            l[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r0 = 1;
          int * r = (int *) malloc(_len_r0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rv6xx_calculate_t(l_f,h_f,h,d_l,d_r,l,r);
          free(l);
          free(r);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
