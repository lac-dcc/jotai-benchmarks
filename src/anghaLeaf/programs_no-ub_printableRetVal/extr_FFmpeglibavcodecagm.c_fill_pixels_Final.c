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
       0            big-arr\n\
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
typedef  scalar_t__ uint8_t ;

/* Variables and functions */

__attribute__((used)) static int fill_pixels(uint8_t **y0, uint8_t **y1,
                       uint8_t **u, uint8_t **v,
                       int ylinesize, int ulinesize, int vlinesize,
                       uint8_t *fill,
                       int *nx, int *ny, int *np, int w, int h)
{
    uint8_t *y0dst = *y0;
    uint8_t *y1dst = *y1;
    uint8_t *udst = *u;
    uint8_t *vdst = *v;
    int x = *nx, y = *ny, pos = *np;

    if (pos == 0) {
        y0dst[2*x+0] += fill[0];
        y0dst[2*x+1] += fill[1];
        y1dst[2*x+0] += fill[2];
        y1dst[2*x+1] += fill[3];
        pos++;
    } else if (pos == 1) {
        udst[x] += fill[0];
        vdst[x] += fill[1];
        x++;
        if (x >= w) {
            x = 0;
            y++;
            if (y >= h)
                return 1;
            y0dst -= 2*ylinesize;
            y1dst -= 2*ylinesize;
            udst  -=   ulinesize;
            vdst  -=   vlinesize;
        }
        y0dst[2*x+0] += fill[2];
        y0dst[2*x+1] += fill[3];
        pos++;
    } else if (pos == 2) {
        y1dst[2*x+0] += fill[0];
        y1dst[2*x+1] += fill[1];
        udst[x]      += fill[2];
        vdst[x]      += fill[3];
        x++;
        if (x >= w) {
            x = 0;
            y++;
            if (y >= h)
                return 1;
            y0dst -= 2*ylinesize;
            y1dst -= 2*ylinesize;
            udst  -=   ulinesize;
            vdst  -=   vlinesize;
        }
        pos = 0;
    }

    *y0 = y0dst;
    *y1 = y1dst;
    *u = udst;
    *v = vdst;
    *np = pos;
    *nx = x;
    *ny = y;

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

    // big-arr
    case 0:
    {
          int ylinesize = 255;
          int ulinesize = 255;
          int vlinesize = 255;
          int w = 255;
          int h = 255;
          int _len_y00 = 65025;
          long ** y0 = (long **) malloc(_len_y00*sizeof(long *));
          for(int _i0 = 0; _i0 < _len_y00; _i0++) {
            int _len_y01 = 1;
            y0[_i0] = (long *) malloc(_len_y01*sizeof(long));
            for(int _i1 = 0; _i1 < _len_y01; _i1++) {
              y0[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_y10 = 65025;
          long ** y1 = (long **) malloc(_len_y10*sizeof(long *));
          for(int _i0 = 0; _i0 < _len_y10; _i0++) {
            int _len_y11 = 1;
            y1[_i0] = (long *) malloc(_len_y11*sizeof(long));
            for(int _i1 = 0; _i1 < _len_y11; _i1++) {
              y1[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_u0 = 65025;
          long ** u = (long **) malloc(_len_u0*sizeof(long *));
          for(int _i0 = 0; _i0 < _len_u0; _i0++) {
            int _len_u1 = 1;
            u[_i0] = (long *) malloc(_len_u1*sizeof(long));
            for(int _i1 = 0; _i1 < _len_u1; _i1++) {
              u[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_v0 = 65025;
          long ** v = (long **) malloc(_len_v0*sizeof(long *));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            int _len_v1 = 1;
            v[_i0] = (long *) malloc(_len_v1*sizeof(long));
            for(int _i1 = 0; _i1 < _len_v1; _i1++) {
              v[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_fill0 = 65025;
          long * fill = (long *) malloc(_len_fill0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_fill0; _i0++) {
            fill[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nx0 = 65025;
          int * nx = (int *) malloc(_len_nx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_nx0; _i0++) {
            nx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ny0 = 65025;
          int * ny = (int *) malloc(_len_ny0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ny0; _i0++) {
            ny[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_np0 = 65025;
          int * np = (int *) malloc(_len_np0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_np0; _i0++) {
            np[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fill_pixels(y0,y1,u,v,ylinesize,ulinesize,vlinesize,fill,nx,ny,np,w,h);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_y00; i1++) {
            int _len_y01 = 1;
              free(y0[i1]);
          }
          free(y0);
          for(int i1 = 0; i1 < _len_y10; i1++) {
            int _len_y11 = 1;
              free(y1[i1]);
          }
          free(y1);
          for(int i1 = 0; i1 < _len_u0; i1++) {
            int _len_u1 = 1;
              free(u[i1]);
          }
          free(u);
          for(int i1 = 0; i1 < _len_v0; i1++) {
            int _len_v1 = 1;
              free(v[i1]);
          }
          free(v);
          free(fill);
          free(nx);
          free(ny);
          free(np);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
