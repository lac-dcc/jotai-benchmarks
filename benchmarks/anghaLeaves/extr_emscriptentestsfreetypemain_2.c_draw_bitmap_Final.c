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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {size_t width; size_t rows; int /*<<< orphan*/ * buffer; } ;
typedef  size_t FT_Int ;
typedef  TYPE_1__ FT_Bitmap ;

/* Variables and functions */
 size_t HEIGHT ; 
 size_t WIDTH ; 
 int /*<<< orphan*/ * image ; 

void
draw_bitmap( FT_Bitmap*  bitmap,
             FT_Int      x,
             FT_Int      y)
{
  FT_Int  i, j, p, q;
  FT_Int  x_max = x + bitmap->width;
  FT_Int  y_max = y + bitmap->rows;

  for ( i = x, p = 0; i < x_max; i++, p++ )
  {
    for ( j = y, q = 0; j < y_max; j++, q++ )
    {
      if ( i < 0      || j < 0       ||
           i >= WIDTH || j >= HEIGHT )
        continue;

      image[j*WIDTH + i] |= bitmap->buffer[q * bitmap->width + p];
    }
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
          unsigned long x = 100;
          unsigned long y = 100;
          int _len_bitmap0 = 1;
          struct TYPE_3__ * bitmap = (struct TYPE_3__ *) malloc(_len_bitmap0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_bitmap0; _i0++) {
            bitmap[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        bitmap[_i0].rows = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bitmap__i0__buffer0 = 1;
          bitmap[_i0].buffer = (int *) malloc(_len_bitmap__i0__buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bitmap__i0__buffer0; _j0++) {
            bitmap[_i0].buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          draw_bitmap(bitmap,x,y);
          for(int _aux = 0; _aux < _len_bitmap0; _aux++) {
          free(bitmap[_aux].buffer);
          }
          free(bitmap);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long x = 255;
          unsigned long y = 255;
          int _len_bitmap0 = 65025;
          struct TYPE_3__ * bitmap = (struct TYPE_3__ *) malloc(_len_bitmap0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_bitmap0; _i0++) {
            bitmap[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        bitmap[_i0].rows = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bitmap__i0__buffer0 = 1;
          bitmap[_i0].buffer = (int *) malloc(_len_bitmap__i0__buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bitmap__i0__buffer0; _j0++) {
            bitmap[_i0].buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          draw_bitmap(bitmap,x,y);
          for(int _aux = 0; _aux < _len_bitmap0; _aux++) {
          free(bitmap[_aux].buffer);
          }
          free(bitmap);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long x = 10;
          unsigned long y = 10;
          int _len_bitmap0 = 100;
          struct TYPE_3__ * bitmap = (struct TYPE_3__ *) malloc(_len_bitmap0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_bitmap0; _i0++) {
            bitmap[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        bitmap[_i0].rows = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bitmap__i0__buffer0 = 1;
          bitmap[_i0].buffer = (int *) malloc(_len_bitmap__i0__buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bitmap__i0__buffer0; _j0++) {
            bitmap[_i0].buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          draw_bitmap(bitmap,x,y);
          for(int _aux = 0; _aux < _len_bitmap0; _aux++) {
          free(bitmap[_aux].buffer);
          }
          free(bitmap);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
