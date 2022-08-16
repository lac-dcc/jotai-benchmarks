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
       1            big-arr-10x\n\
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
typedef  int /*<<< orphan*/  HBITMAP ;
typedef  int /*<<< orphan*/  BRUSH ;

/* Variables and functions */

void ui_triblt(uint8 opcode, int x, int y, int cx, int cy,
               HBITMAP src, int srcx, int srcy,
               BRUSH* brush, int bgcolour, int fgcolour)
{
  // non used
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
          int x = 100;
          int y = 100;
          int cx = 100;
          int cy = 100;
          int src = 100;
          int srcx = 100;
          int srcy = 100;
          int bgcolour = 100;
          int fgcolour = 100;
          int _len_brush0 = 1;
          int * brush = (int *) malloc(_len_brush0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_brush0; _i0++) {
            brush[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ui_triblt(opcode,x,y,cx,cy,src,srcx,srcy,brush,bgcolour,fgcolour);
          free(brush);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int opcode = 10;
          int x = 10;
          int y = 10;
          int cx = 10;
          int cy = 10;
          int src = 10;
          int srcx = 10;
          int srcy = 10;
          int bgcolour = 10;
          int fgcolour = 10;
          int _len_brush0 = 100;
          int * brush = (int *) malloc(_len_brush0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_brush0; _i0++) {
            brush[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ui_triblt(opcode,x,y,cx,cy,src,srcx,srcy,brush,bgcolour,fgcolour);
          free(brush);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
