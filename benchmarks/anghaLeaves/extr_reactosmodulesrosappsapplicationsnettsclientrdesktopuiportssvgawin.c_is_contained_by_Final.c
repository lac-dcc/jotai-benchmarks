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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ x; scalar_t__ y; scalar_t__ cx; scalar_t__ cy; } ;
typedef  TYPE_1__ myrect ;

/* Variables and functions */

int is_contained_by(myrect* r1, myrect* r2)
{
  if (r1->x >= r2->x &&
      r1->y >= r2->y &&
      r1->x + r1->cx <= r2->x + r2->cx &&
      r1->y + r1->cy <= r2->y + r2->cy)
    return 1;
  else
    return 0;
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
          int _len_r10 = 1;
          struct TYPE_4__ * r1 = (struct TYPE_4__ *) malloc(_len_r10*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_r10; _i0++) {
            r1[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
        r1[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        r1[_i0].cx = ((-2 * (next_i()%2)) + 1) * next_i();
        r1[_i0].cy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r20 = 1;
          struct TYPE_4__ * r2 = (struct TYPE_4__ *) malloc(_len_r20*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_r20; _i0++) {
            r2[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
        r2[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        r2[_i0].cx = ((-2 * (next_i()%2)) + 1) * next_i();
        r2[_i0].cy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_contained_by(r1,r2);
          printf("%d\n", benchRet); 
          free(r1);
          free(r2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_r10 = 65025;
          struct TYPE_4__ * r1 = (struct TYPE_4__ *) malloc(_len_r10*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_r10; _i0++) {
            r1[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
        r1[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        r1[_i0].cx = ((-2 * (next_i()%2)) + 1) * next_i();
        r1[_i0].cy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r20 = 65025;
          struct TYPE_4__ * r2 = (struct TYPE_4__ *) malloc(_len_r20*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_r20; _i0++) {
            r2[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
        r2[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        r2[_i0].cx = ((-2 * (next_i()%2)) + 1) * next_i();
        r2[_i0].cy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_contained_by(r1,r2);
          printf("%d\n", benchRet); 
          free(r1);
          free(r2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_r10 = 100;
          struct TYPE_4__ * r1 = (struct TYPE_4__ *) malloc(_len_r10*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_r10; _i0++) {
            r1[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
        r1[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        r1[_i0].cx = ((-2 * (next_i()%2)) + 1) * next_i();
        r1[_i0].cy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r20 = 100;
          struct TYPE_4__ * r2 = (struct TYPE_4__ *) malloc(_len_r20*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_r20; _i0++) {
            r2[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
        r2[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        r2[_i0].cx = ((-2 * (next_i()%2)) + 1) * next_i();
        r2[_i0].cy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_contained_by(r1,r2);
          printf("%d\n", benchRet); 
          free(r1);
          free(r2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
