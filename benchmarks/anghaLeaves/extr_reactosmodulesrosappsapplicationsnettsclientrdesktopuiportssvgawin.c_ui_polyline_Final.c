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
typedef  int /*<<< orphan*/  uint8 ;
typedef  int /*<<< orphan*/  POINT ;
typedef  int /*<<< orphan*/  PEN ;

/* Variables and functions */

void ui_polyline(uint8 opcode, POINT * points, int npoints, PEN * pen)
{
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
          int opcode = 100;
          int npoints = 100;
          int _len_points0 = 1;
          int * points = (int *) malloc(_len_points0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_points0; _i0++) {
            points[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pen0 = 1;
          int * pen = (int *) malloc(_len_pen0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pen0; _i0++) {
            pen[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ui_polyline(opcode,points,npoints,pen);
          free(points);
          free(pen);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
