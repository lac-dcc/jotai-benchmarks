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
struct fb_bitfield {scalar_t__ length; scalar_t__ offset; scalar_t__ msb_right; } ;

/* Variables and functions */

__attribute__((used)) static bool cmp_component(struct fb_bitfield *f1, struct fb_bitfield *f2)
{
	return f1->length == f2->length &&
		f1->offset == f2->offset &&
		f1->msb_right == f2->msb_right;
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
          int _len_f10 = 1;
          struct fb_bitfield * f1 = (struct fb_bitfield *) malloc(_len_f10*sizeof(struct fb_bitfield));
          for(int _i0 = 0; _i0 < _len_f10; _i0++) {
            f1[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        f1[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
        f1[_i0].msb_right = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_f20 = 1;
          struct fb_bitfield * f2 = (struct fb_bitfield *) malloc(_len_f20*sizeof(struct fb_bitfield));
          for(int _i0 = 0; _i0 < _len_f20; _i0++) {
            f2[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        f2[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
        f2[_i0].msb_right = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cmp_component(f1,f2);
          printf("%d\n", benchRet); 
          free(f1);
          free(f2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
