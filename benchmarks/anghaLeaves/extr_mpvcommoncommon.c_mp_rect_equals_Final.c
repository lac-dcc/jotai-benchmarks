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
struct mp_rect {scalar_t__ x0; scalar_t__ y0; scalar_t__ x1; scalar_t__ y1; } ;

/* Variables and functions */

bool mp_rect_equals(struct mp_rect *rc1, struct mp_rect *rc2)
{
    return rc1->x0 == rc2->x0 && rc1->y0 == rc2->y0 &&
           rc1->x1 == rc2->x1 && rc1->y1 == rc2->y1;
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
          int _len_rc10 = 1;
          struct mp_rect * rc1 = (struct mp_rect *) malloc(_len_rc10*sizeof(struct mp_rect));
          for(int _i0 = 0; _i0 < _len_rc10; _i0++) {
            rc1[_i0].x0 = ((-2 * (next_i()%2)) + 1) * next_i();
        rc1[_i0].y0 = ((-2 * (next_i()%2)) + 1) * next_i();
        rc1[_i0].x1 = ((-2 * (next_i()%2)) + 1) * next_i();
        rc1[_i0].y1 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rc20 = 1;
          struct mp_rect * rc2 = (struct mp_rect *) malloc(_len_rc20*sizeof(struct mp_rect));
          for(int _i0 = 0; _i0 < _len_rc20; _i0++) {
            rc2[_i0].x0 = ((-2 * (next_i()%2)) + 1) * next_i();
        rc2[_i0].y0 = ((-2 * (next_i()%2)) + 1) * next_i();
        rc2[_i0].x1 = ((-2 * (next_i()%2)) + 1) * next_i();
        rc2[_i0].y1 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mp_rect_equals(rc1,rc2);
          printf("%d\n", benchRet); 
          free(rc1);
          free(rc2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
