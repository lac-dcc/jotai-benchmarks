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

/* Type definitions */

/* Variables and functions */
 int False ; 
 int True ; 
 int clip_endx ; 
 int clip_endy ; 
 int clip_startx ; 
 int clip_starty ; 

int warp_coords(int* x, int* y, int* cx, int* cy, int* srcx, int* srcy)
{
  int dx;
  int dy;
//  int lx = *x, ly = *y, lcx = *cx, lcy = *cy;

  if (clip_startx > *x)
    dx = clip_startx - *x;
  else
    dx = 0;
  if (clip_starty > *y)
    dy = clip_starty - *y;
  else
    dy = 0;
  if (*x + *cx > clip_endx)
    *cx = (*cx - ((*x + *cx) - clip_endx)) /*+ 1*/;
  if (*y + *cy > clip_endy)
    *cy = (*cy - ((*y + *cy) - clip_endy)) /*+ 1*/;
  *cx = *cx - dx;
  *cy = *cy - dy;
  if (*cx <= 0)
    return False;
  if (*cy <= 0)
    return False;
  *x = *x + dx;
  *y = *y + dy;
  if (srcx != NULL)
    *srcx = *srcx + dx;
  if (srcy != NULL)
    *srcy = *srcy + dy;

//  if (*x != lx || *y != ly || *cx != lcx || *cy != lcy)
//    printf("%d %d %d %d to %d %d %d %d\n", lx, ly, lcx, lcy, *x, *y, *cx, *cy);

  return True;
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
          int _len_x0 = 1;
          int * x = (int *) malloc(_len_x0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_y0 = 1;
          int * y = (int *) malloc(_len_y0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cx0 = 1;
          int * cx = (int *) malloc(_len_cx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cx0; _i0++) {
            cx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cy0 = 1;
          int * cy = (int *) malloc(_len_cy0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cy0; _i0++) {
            cy[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_srcx0 = 1;
          int * srcx = (int *) malloc(_len_srcx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_srcx0; _i0++) {
            srcx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_srcy0 = 1;
          int * srcy = (int *) malloc(_len_srcy0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_srcy0; _i0++) {
            srcy[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = warp_coords(x,y,cx,cy,srcx,srcy);
          printf("%d\n", benchRet); 
          free(x);
          free(y);
          free(cx);
          free(cy);
          free(srcx);
          free(srcy);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_x0 = 65025;
          int * x = (int *) malloc(_len_x0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_y0 = 65025;
          int * y = (int *) malloc(_len_y0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cx0 = 65025;
          int * cx = (int *) malloc(_len_cx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cx0; _i0++) {
            cx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cy0 = 65025;
          int * cy = (int *) malloc(_len_cy0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cy0; _i0++) {
            cy[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_srcx0 = 65025;
          int * srcx = (int *) malloc(_len_srcx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_srcx0; _i0++) {
            srcx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_srcy0 = 65025;
          int * srcy = (int *) malloc(_len_srcy0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_srcy0; _i0++) {
            srcy[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = warp_coords(x,y,cx,cy,srcx,srcy);
          printf("%d\n", benchRet); 
          free(x);
          free(y);
          free(cx);
          free(cy);
          free(srcx);
          free(srcy);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_x0 = 100;
          int * x = (int *) malloc(_len_x0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_y0 = 100;
          int * y = (int *) malloc(_len_y0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cx0 = 100;
          int * cx = (int *) malloc(_len_cx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cx0; _i0++) {
            cx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cy0 = 100;
          int * cy = (int *) malloc(_len_cy0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cy0; _i0++) {
            cy[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_srcx0 = 100;
          int * srcx = (int *) malloc(_len_srcx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_srcx0; _i0++) {
            srcx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_srcy0 = 100;
          int * srcy = (int *) malloc(_len_srcy0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_srcy0; _i0++) {
            srcy[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = warp_coords(x,y,cx,cy,srcx,srcy);
          printf("%d\n", benchRet); 
          free(x);
          free(y);
          free(cx);
          free(cy);
          free(srcx);
          free(srcy);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
