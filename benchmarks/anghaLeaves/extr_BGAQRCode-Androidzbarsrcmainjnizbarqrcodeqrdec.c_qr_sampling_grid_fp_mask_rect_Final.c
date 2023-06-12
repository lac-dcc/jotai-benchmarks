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
       0            empty\n\
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int* fpmask; } ;
typedef  TYPE_1__ qr_sampling_grid ;

/* Variables and functions */
 int QR_INT_BITS ; 
 int QR_INT_LOGBITS ; 

__attribute__((used)) static void qr_sampling_grid_fp_mask_rect(qr_sampling_grid *_grid,int _dim,
 int _u,int _v,int _w,int _h){
  int i;
  int j;
  int stride;
  stride=_dim+QR_INT_BITS-1>>QR_INT_LOGBITS;
  /*Note that we store bits column-wise, since that's how they're read out of
     the grid.*/
  for(j=_u;j<_u+_w;j++)for(i=_v;i<_v+_h;i++){
    _grid->fpmask[j*stride+(i>>QR_INT_LOGBITS)]|=1<<(i&QR_INT_BITS-1);
  }
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // empty
    case 0:
    {
          int _dim = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _u = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _v = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _w = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _h = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len__grid0 = 1;
          struct TYPE_3__ * _grid = (struct TYPE_3__ *) malloc(_len__grid0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len__grid0; _i0++) {
              int _len__grid__i0__fpmask0 = 1;
          _grid[_i0].fpmask = (int *) malloc(_len__grid__i0__fpmask0*sizeof(int));
          for(int _j0 = 0; _j0 < _len__grid__i0__fpmask0; _j0++) {
            _grid[_i0].fpmask[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          qr_sampling_grid_fp_mask_rect(_grid,_dim,_u,_v,_w,_h);
          for(int _aux = 0; _aux < _len__grid0; _aux++) {
          free(_grid[_aux].fpmask);
          }
          free(_grid);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
