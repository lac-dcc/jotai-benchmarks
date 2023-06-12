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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
struct TYPE_3__ {int /*<<< orphan*/ * r; int /*<<< orphan*/ * g; int /*<<< orphan*/ * b; } ;
typedef  TYPE_1__ cvid_codebook ;
typedef  int /*<<< orphan*/  BOOL ;

/* Variables and functions */

__attribute__((used)) static void cvid_v1_24(unsigned char *vptr, unsigned char *limit, int stride, BOOL inverted,
    cvid_codebook *cb)
{
int row_inc;
int x, y;

    if (!inverted)
        row_inc = -stride;
    else
        row_inc = stride;

    /* fill 4x4 block of pixels with colour values from codebook */
    for (y = 0; y < 4; y++)
    {
        if (&vptr[y*row_inc] < limit) return;
        for (x = 0; x < 4; x++)
        {
            vptr[y*row_inc + x*3 + 0] = cb->b[x/2+(y/2)*2];
            vptr[y*row_inc + x*3 + 1] = cb->g[x/2+(y/2)*2];
            vptr[y*row_inc + x*3 + 2] = cb->r[x/2+(y/2)*2];
        }
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

    // int-bounds
    case 0:
    {
          int stride = 100;
        
          int inverted = 100;
        
          int _len_vptr0 = 1;
          unsigned char * vptr = (unsigned char *) malloc(_len_vptr0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_vptr0; _i0++) {
            vptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_limit0 = 1;
          unsigned char * limit = (unsigned char *) malloc(_len_limit0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_limit0; _i0++) {
            limit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_cb0 = 1;
          struct TYPE_3__ * cb = (struct TYPE_3__ *) malloc(_len_cb0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_cb0; _i0++) {
              int _len_cb__i0__r0 = 1;
          cb[_i0].r = (int *) malloc(_len_cb__i0__r0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb__i0__r0; _j0++) {
            cb[_i0].r[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb__i0__g0 = 1;
          cb[_i0].g = (int *) malloc(_len_cb__i0__g0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb__i0__g0; _j0++) {
            cb[_i0].g[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb__i0__b0 = 1;
          cb[_i0].b = (int *) malloc(_len_cb__i0__b0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb__i0__b0; _j0++) {
            cb[_i0].b[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          cvid_v1_24(vptr,limit,stride,inverted,cb);
          free(vptr);
          free(limit);
          for(int _aux = 0; _aux < _len_cb0; _aux++) {
          free(cb[_aux].r);
          }
          for(int _aux = 0; _aux < _len_cb0; _aux++) {
          free(cb[_aux].g);
          }
          for(int _aux = 0; _aux < _len_cb0; _aux++) {
          free(cb[_aux].b);
          }
          free(cb);
        
        break;
    }
    // big-arr
    case 1:
    {
          int stride = 255;
        
          int inverted = 255;
        
          int _len_vptr0 = 65025;
          unsigned char * vptr = (unsigned char *) malloc(_len_vptr0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_vptr0; _i0++) {
            vptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_limit0 = 65025;
          unsigned char * limit = (unsigned char *) malloc(_len_limit0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_limit0; _i0++) {
            limit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_cb0 = 65025;
          struct TYPE_3__ * cb = (struct TYPE_3__ *) malloc(_len_cb0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_cb0; _i0++) {
              int _len_cb__i0__r0 = 1;
          cb[_i0].r = (int *) malloc(_len_cb__i0__r0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb__i0__r0; _j0++) {
            cb[_i0].r[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb__i0__g0 = 1;
          cb[_i0].g = (int *) malloc(_len_cb__i0__g0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb__i0__g0; _j0++) {
            cb[_i0].g[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb__i0__b0 = 1;
          cb[_i0].b = (int *) malloc(_len_cb__i0__b0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb__i0__b0; _j0++) {
            cb[_i0].b[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          cvid_v1_24(vptr,limit,stride,inverted,cb);
          free(vptr);
          free(limit);
          for(int _aux = 0; _aux < _len_cb0; _aux++) {
          free(cb[_aux].r);
          }
          for(int _aux = 0; _aux < _len_cb0; _aux++) {
          free(cb[_aux].g);
          }
          for(int _aux = 0; _aux < _len_cb0; _aux++) {
          free(cb[_aux].b);
          }
          free(cb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int stride = 10;
        
          int inverted = 10;
        
          int _len_vptr0 = 100;
          unsigned char * vptr = (unsigned char *) malloc(_len_vptr0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_vptr0; _i0++) {
            vptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_limit0 = 100;
          unsigned char * limit = (unsigned char *) malloc(_len_limit0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_limit0; _i0++) {
            limit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_cb0 = 100;
          struct TYPE_3__ * cb = (struct TYPE_3__ *) malloc(_len_cb0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_cb0; _i0++) {
              int _len_cb__i0__r0 = 1;
          cb[_i0].r = (int *) malloc(_len_cb__i0__r0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb__i0__r0; _j0++) {
            cb[_i0].r[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb__i0__g0 = 1;
          cb[_i0].g = (int *) malloc(_len_cb__i0__g0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb__i0__g0; _j0++) {
            cb[_i0].g[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb__i0__b0 = 1;
          cb[_i0].b = (int *) malloc(_len_cb__i0__b0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb__i0__b0; _j0++) {
            cb[_i0].b[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          cvid_v1_24(vptr,limit,stride,inverted,cb);
          free(vptr);
          free(limit);
          for(int _aux = 0; _aux < _len_cb0; _aux++) {
          free(cb[_aux].r);
          }
          for(int _aux = 0; _aux < _len_cb0; _aux++) {
          free(cb[_aux].g);
          }
          for(int _aux = 0; _aux < _len_cb0; _aux++) {
          free(cb[_aux].b);
          }
          free(cb);
        
        break;
    }
    // empty
    case 3:
    {
          int stride = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int inverted = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_vptr0 = 1;
          unsigned char * vptr = (unsigned char *) malloc(_len_vptr0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_vptr0; _i0++) {
            vptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_limit0 = 1;
          unsigned char * limit = (unsigned char *) malloc(_len_limit0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_limit0; _i0++) {
            limit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_cb0 = 1;
          struct TYPE_3__ * cb = (struct TYPE_3__ *) malloc(_len_cb0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_cb0; _i0++) {
              int _len_cb__i0__r0 = 1;
          cb[_i0].r = (int *) malloc(_len_cb__i0__r0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb__i0__r0; _j0++) {
            cb[_i0].r[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb__i0__g0 = 1;
          cb[_i0].g = (int *) malloc(_len_cb__i0__g0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb__i0__g0; _j0++) {
            cb[_i0].g[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb__i0__b0 = 1;
          cb[_i0].b = (int *) malloc(_len_cb__i0__b0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb__i0__b0; _j0++) {
            cb[_i0].b[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          cvid_v1_24(vptr,limit,stride,inverted,cb);
          free(vptr);
          free(limit);
          for(int _aux = 0; _aux < _len_cb0; _aux++) {
          free(cb[_aux].r);
          }
          for(int _aux = 0; _aux < _len_cb0; _aux++) {
          free(cb[_aux].g);
          }
          for(int _aux = 0; _aux < _len_cb0; _aux++) {
          free(cb[_aux].b);
          }
          free(cb);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
