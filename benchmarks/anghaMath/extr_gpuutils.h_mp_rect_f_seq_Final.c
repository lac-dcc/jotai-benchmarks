// ========================================================================= //

// includes
#include <math.h>
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
struct mp_rect_f {scalar_t__ y1; scalar_t__ y0; scalar_t__ x1; scalar_t__ x0; } ;

/* Variables and functions */

__attribute__((used)) static inline bool mp_rect_f_seq(struct mp_rect_f a, struct mp_rect_f b)
{
    return fabs(a.x0 - b.x0) < 1e-6 && fabs(a.x1 - b.x1) < 1e-6 &&
           fabs(a.y0 - b.y0) < 1e-6 && fabs(a.y1 - b.y1) < 1e-6;
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
          struct mp_rect_f a;
        a.y1 = ((-2 * (next_i()%2)) + 1) * next_i();
        a.y0 = ((-2 * (next_i()%2)) + 1) * next_i();
        a.x1 = ((-2 * (next_i()%2)) + 1) * next_i();
        a.x0 = ((-2 * (next_i()%2)) + 1) * next_i();
          struct mp_rect_f b;
        b.y1 = ((-2 * (next_i()%2)) + 1) * next_i();
        b.y0 = ((-2 * (next_i()%2)) + 1) * next_i();
        b.x1 = ((-2 * (next_i()%2)) + 1) * next_i();
        b.x0 = ((-2 * (next_i()%2)) + 1) * next_i();
          int benchRet = mp_rect_f_seq(a,b);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          struct mp_rect_f a;
        a.y1 = ((-2 * (next_i()%2)) + 1) * next_i();
        a.y0 = ((-2 * (next_i()%2)) + 1) * next_i();
        a.x1 = ((-2 * (next_i()%2)) + 1) * next_i();
        a.x0 = ((-2 * (next_i()%2)) + 1) * next_i();
          struct mp_rect_f b;
        b.y1 = ((-2 * (next_i()%2)) + 1) * next_i();
        b.y0 = ((-2 * (next_i()%2)) + 1) * next_i();
        b.x1 = ((-2 * (next_i()%2)) + 1) * next_i();
        b.x0 = ((-2 * (next_i()%2)) + 1) * next_i();
          int benchRet = mp_rect_f_seq(a,b);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          struct mp_rect_f a;
        a.y1 = ((-2 * (next_i()%2)) + 1) * next_i();
        a.y0 = ((-2 * (next_i()%2)) + 1) * next_i();
        a.x1 = ((-2 * (next_i()%2)) + 1) * next_i();
        a.x0 = ((-2 * (next_i()%2)) + 1) * next_i();
          struct mp_rect_f b;
        b.y1 = ((-2 * (next_i()%2)) + 1) * next_i();
        b.y0 = ((-2 * (next_i()%2)) + 1) * next_i();
        b.x1 = ((-2 * (next_i()%2)) + 1) * next_i();
        b.x0 = ((-2 * (next_i()%2)) + 1) * next_i();
          int benchRet = mp_rect_f_seq(a,b);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
