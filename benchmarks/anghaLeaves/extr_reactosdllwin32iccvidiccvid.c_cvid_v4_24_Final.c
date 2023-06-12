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
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int /*<<< orphan*/ * r; int /*<<< orphan*/ * g; int /*<<< orphan*/ * b; } ;
typedef  TYPE_1__ cvid_codebook ;
typedef  int /*<<< orphan*/  BOOL ;

/* Variables and functions */

__attribute__((used)) static void cvid_v4_24(unsigned char *vptr, unsigned char *limit, int stride, BOOL inverted,
    cvid_codebook *cb0, cvid_codebook *cb1, cvid_codebook *cb2, cvid_codebook *cb3)
{
int row_inc;
cvid_codebook * cb[] = {cb0,cb1,cb2,cb3};
int x, y;

    if (!inverted)
        row_inc = -stride;
    else
        row_inc = stride;

    /* fill 4x4 block of pixels with colour values from codebooks */
    for (y = 0; y < 4; y++)
    {
        if (&vptr[y*row_inc] < limit) return;
        for (x = 0; x < 4; x++)
        {
            vptr[y*row_inc + x*3 + 0] = cb[x/2+(y/2)*2]->b[x%2+(y%2)*2];
            vptr[y*row_inc + x*3 + 1] = cb[x/2+(y/2)*2]->g[x%2+(y%2)*2];
            vptr[y*row_inc + x*3 + 2] = cb[x/2+(y/2)*2]->r[x%2+(y%2)*2];
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
          // static_instructions_O0 : 37
          // dynamic_instructions_O0 : 37
          // ------------------------------- 
          // static_instructions_O1 : 29
          // dynamic_instructions_O1 : 29
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 20
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 28
          // dynamic_instructions_Os : 28
          // ------------------------------- 
          // static_instructions_Oz : 30
          // dynamic_instructions_Oz : 30
          // ------------------------------- 

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
        
          int _len_cb00 = 1;
          struct TYPE_6__ * cb0 = (struct TYPE_6__ *) malloc(_len_cb00*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_cb00; _i0++) {
              int _len_cb0__i0__r0 = 1;
          cb0[_i0].r = (int *) malloc(_len_cb0__i0__r0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb0__i0__r0; _j0++) {
            cb0[_i0].r[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb0__i0__g0 = 1;
          cb0[_i0].g = (int *) malloc(_len_cb0__i0__g0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb0__i0__g0; _j0++) {
            cb0[_i0].g[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb0__i0__b0 = 1;
          cb0[_i0].b = (int *) malloc(_len_cb0__i0__b0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb0__i0__b0; _j0++) {
            cb0[_i0].b[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int _len_cb10 = 1;
          struct TYPE_6__ * cb1 = (struct TYPE_6__ *) malloc(_len_cb10*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_cb10; _i0++) {
              int _len_cb1__i0__r0 = 1;
          cb1[_i0].r = (int *) malloc(_len_cb1__i0__r0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb1__i0__r0; _j0++) {
            cb1[_i0].r[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb1__i0__g0 = 1;
          cb1[_i0].g = (int *) malloc(_len_cb1__i0__g0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb1__i0__g0; _j0++) {
            cb1[_i0].g[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb1__i0__b0 = 1;
          cb1[_i0].b = (int *) malloc(_len_cb1__i0__b0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb1__i0__b0; _j0++) {
            cb1[_i0].b[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int _len_cb20 = 1;
          struct TYPE_6__ * cb2 = (struct TYPE_6__ *) malloc(_len_cb20*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_cb20; _i0++) {
              int _len_cb2__i0__r0 = 1;
          cb2[_i0].r = (int *) malloc(_len_cb2__i0__r0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb2__i0__r0; _j0++) {
            cb2[_i0].r[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb2__i0__g0 = 1;
          cb2[_i0].g = (int *) malloc(_len_cb2__i0__g0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb2__i0__g0; _j0++) {
            cb2[_i0].g[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb2__i0__b0 = 1;
          cb2[_i0].b = (int *) malloc(_len_cb2__i0__b0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb2__i0__b0; _j0++) {
            cb2[_i0].b[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int _len_cb30 = 1;
          struct TYPE_6__ * cb3 = (struct TYPE_6__ *) malloc(_len_cb30*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_cb30; _i0++) {
              int _len_cb3__i0__r0 = 1;
          cb3[_i0].r = (int *) malloc(_len_cb3__i0__r0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb3__i0__r0; _j0++) {
            cb3[_i0].r[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb3__i0__g0 = 1;
          cb3[_i0].g = (int *) malloc(_len_cb3__i0__g0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb3__i0__g0; _j0++) {
            cb3[_i0].g[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb3__i0__b0 = 1;
          cb3[_i0].b = (int *) malloc(_len_cb3__i0__b0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb3__i0__b0; _j0++) {
            cb3[_i0].b[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          cvid_v4_24(vptr,limit,stride,inverted,cb0,cb1,cb2,cb3);
          free(vptr);
          free(limit);
          for(int _aux = 0; _aux < _len_cb00; _aux++) {
          free(cb0[_aux].r);
          }
          for(int _aux = 0; _aux < _len_cb00; _aux++) {
          free(cb0[_aux].g);
          }
          for(int _aux = 0; _aux < _len_cb00; _aux++) {
          free(cb0[_aux].b);
          }
          free(cb0);
          for(int _aux = 0; _aux < _len_cb10; _aux++) {
          free(cb1[_aux].r);
          }
          for(int _aux = 0; _aux < _len_cb10; _aux++) {
          free(cb1[_aux].g);
          }
          for(int _aux = 0; _aux < _len_cb10; _aux++) {
          free(cb1[_aux].b);
          }
          free(cb1);
          for(int _aux = 0; _aux < _len_cb20; _aux++) {
          free(cb2[_aux].r);
          }
          for(int _aux = 0; _aux < _len_cb20; _aux++) {
          free(cb2[_aux].g);
          }
          for(int _aux = 0; _aux < _len_cb20; _aux++) {
          free(cb2[_aux].b);
          }
          free(cb2);
          for(int _aux = 0; _aux < _len_cb30; _aux++) {
          free(cb3[_aux].r);
          }
          for(int _aux = 0; _aux < _len_cb30; _aux++) {
          free(cb3[_aux].g);
          }
          for(int _aux = 0; _aux < _len_cb30; _aux++) {
          free(cb3[_aux].b);
          }
          free(cb3);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 37
          // dynamic_instructions_O0 : 37
          // ------------------------------- 
          // static_instructions_O1 : 29
          // dynamic_instructions_O1 : 29
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 20
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 28
          // dynamic_instructions_Os : 28
          // ------------------------------- 
          // static_instructions_Oz : 30
          // dynamic_instructions_Oz : 30
          // ------------------------------- 

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
        
          int _len_cb00 = 65025;
          struct TYPE_6__ * cb0 = (struct TYPE_6__ *) malloc(_len_cb00*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_cb00; _i0++) {
              int _len_cb0__i0__r0 = 1;
          cb0[_i0].r = (int *) malloc(_len_cb0__i0__r0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb0__i0__r0; _j0++) {
            cb0[_i0].r[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb0__i0__g0 = 1;
          cb0[_i0].g = (int *) malloc(_len_cb0__i0__g0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb0__i0__g0; _j0++) {
            cb0[_i0].g[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb0__i0__b0 = 1;
          cb0[_i0].b = (int *) malloc(_len_cb0__i0__b0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb0__i0__b0; _j0++) {
            cb0[_i0].b[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int _len_cb10 = 65025;
          struct TYPE_6__ * cb1 = (struct TYPE_6__ *) malloc(_len_cb10*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_cb10; _i0++) {
              int _len_cb1__i0__r0 = 1;
          cb1[_i0].r = (int *) malloc(_len_cb1__i0__r0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb1__i0__r0; _j0++) {
            cb1[_i0].r[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb1__i0__g0 = 1;
          cb1[_i0].g = (int *) malloc(_len_cb1__i0__g0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb1__i0__g0; _j0++) {
            cb1[_i0].g[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb1__i0__b0 = 1;
          cb1[_i0].b = (int *) malloc(_len_cb1__i0__b0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb1__i0__b0; _j0++) {
            cb1[_i0].b[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int _len_cb20 = 65025;
          struct TYPE_6__ * cb2 = (struct TYPE_6__ *) malloc(_len_cb20*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_cb20; _i0++) {
              int _len_cb2__i0__r0 = 1;
          cb2[_i0].r = (int *) malloc(_len_cb2__i0__r0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb2__i0__r0; _j0++) {
            cb2[_i0].r[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb2__i0__g0 = 1;
          cb2[_i0].g = (int *) malloc(_len_cb2__i0__g0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb2__i0__g0; _j0++) {
            cb2[_i0].g[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb2__i0__b0 = 1;
          cb2[_i0].b = (int *) malloc(_len_cb2__i0__b0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb2__i0__b0; _j0++) {
            cb2[_i0].b[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int _len_cb30 = 65025;
          struct TYPE_6__ * cb3 = (struct TYPE_6__ *) malloc(_len_cb30*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_cb30; _i0++) {
              int _len_cb3__i0__r0 = 1;
          cb3[_i0].r = (int *) malloc(_len_cb3__i0__r0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb3__i0__r0; _j0++) {
            cb3[_i0].r[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb3__i0__g0 = 1;
          cb3[_i0].g = (int *) malloc(_len_cb3__i0__g0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb3__i0__g0; _j0++) {
            cb3[_i0].g[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb3__i0__b0 = 1;
          cb3[_i0].b = (int *) malloc(_len_cb3__i0__b0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb3__i0__b0; _j0++) {
            cb3[_i0].b[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          cvid_v4_24(vptr,limit,stride,inverted,cb0,cb1,cb2,cb3);
          free(vptr);
          free(limit);
          for(int _aux = 0; _aux < _len_cb00; _aux++) {
          free(cb0[_aux].r);
          }
          for(int _aux = 0; _aux < _len_cb00; _aux++) {
          free(cb0[_aux].g);
          }
          for(int _aux = 0; _aux < _len_cb00; _aux++) {
          free(cb0[_aux].b);
          }
          free(cb0);
          for(int _aux = 0; _aux < _len_cb10; _aux++) {
          free(cb1[_aux].r);
          }
          for(int _aux = 0; _aux < _len_cb10; _aux++) {
          free(cb1[_aux].g);
          }
          for(int _aux = 0; _aux < _len_cb10; _aux++) {
          free(cb1[_aux].b);
          }
          free(cb1);
          for(int _aux = 0; _aux < _len_cb20; _aux++) {
          free(cb2[_aux].r);
          }
          for(int _aux = 0; _aux < _len_cb20; _aux++) {
          free(cb2[_aux].g);
          }
          for(int _aux = 0; _aux < _len_cb20; _aux++) {
          free(cb2[_aux].b);
          }
          free(cb2);
          for(int _aux = 0; _aux < _len_cb30; _aux++) {
          free(cb3[_aux].r);
          }
          for(int _aux = 0; _aux < _len_cb30; _aux++) {
          free(cb3[_aux].g);
          }
          for(int _aux = 0; _aux < _len_cb30; _aux++) {
          free(cb3[_aux].b);
          }
          free(cb3);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 37
          // dynamic_instructions_O0 : 37
          // ------------------------------- 
          // static_instructions_O1 : 29
          // dynamic_instructions_O1 : 29
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 20
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 28
          // dynamic_instructions_Os : 28
          // ------------------------------- 
          // static_instructions_Oz : 30
          // dynamic_instructions_Oz : 30
          // ------------------------------- 

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
        
          int _len_cb00 = 100;
          struct TYPE_6__ * cb0 = (struct TYPE_6__ *) malloc(_len_cb00*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_cb00; _i0++) {
              int _len_cb0__i0__r0 = 1;
          cb0[_i0].r = (int *) malloc(_len_cb0__i0__r0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb0__i0__r0; _j0++) {
            cb0[_i0].r[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb0__i0__g0 = 1;
          cb0[_i0].g = (int *) malloc(_len_cb0__i0__g0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb0__i0__g0; _j0++) {
            cb0[_i0].g[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb0__i0__b0 = 1;
          cb0[_i0].b = (int *) malloc(_len_cb0__i0__b0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb0__i0__b0; _j0++) {
            cb0[_i0].b[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int _len_cb10 = 100;
          struct TYPE_6__ * cb1 = (struct TYPE_6__ *) malloc(_len_cb10*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_cb10; _i0++) {
              int _len_cb1__i0__r0 = 1;
          cb1[_i0].r = (int *) malloc(_len_cb1__i0__r0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb1__i0__r0; _j0++) {
            cb1[_i0].r[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb1__i0__g0 = 1;
          cb1[_i0].g = (int *) malloc(_len_cb1__i0__g0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb1__i0__g0; _j0++) {
            cb1[_i0].g[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb1__i0__b0 = 1;
          cb1[_i0].b = (int *) malloc(_len_cb1__i0__b0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb1__i0__b0; _j0++) {
            cb1[_i0].b[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int _len_cb20 = 100;
          struct TYPE_6__ * cb2 = (struct TYPE_6__ *) malloc(_len_cb20*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_cb20; _i0++) {
              int _len_cb2__i0__r0 = 1;
          cb2[_i0].r = (int *) malloc(_len_cb2__i0__r0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb2__i0__r0; _j0++) {
            cb2[_i0].r[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb2__i0__g0 = 1;
          cb2[_i0].g = (int *) malloc(_len_cb2__i0__g0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb2__i0__g0; _j0++) {
            cb2[_i0].g[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb2__i0__b0 = 1;
          cb2[_i0].b = (int *) malloc(_len_cb2__i0__b0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb2__i0__b0; _j0++) {
            cb2[_i0].b[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int _len_cb30 = 100;
          struct TYPE_6__ * cb3 = (struct TYPE_6__ *) malloc(_len_cb30*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_cb30; _i0++) {
              int _len_cb3__i0__r0 = 1;
          cb3[_i0].r = (int *) malloc(_len_cb3__i0__r0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb3__i0__r0; _j0++) {
            cb3[_i0].r[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb3__i0__g0 = 1;
          cb3[_i0].g = (int *) malloc(_len_cb3__i0__g0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb3__i0__g0; _j0++) {
            cb3[_i0].g[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb3__i0__b0 = 1;
          cb3[_i0].b = (int *) malloc(_len_cb3__i0__b0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb3__i0__b0; _j0++) {
            cb3[_i0].b[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          cvid_v4_24(vptr,limit,stride,inverted,cb0,cb1,cb2,cb3);
          free(vptr);
          free(limit);
          for(int _aux = 0; _aux < _len_cb00; _aux++) {
          free(cb0[_aux].r);
          }
          for(int _aux = 0; _aux < _len_cb00; _aux++) {
          free(cb0[_aux].g);
          }
          for(int _aux = 0; _aux < _len_cb00; _aux++) {
          free(cb0[_aux].b);
          }
          free(cb0);
          for(int _aux = 0; _aux < _len_cb10; _aux++) {
          free(cb1[_aux].r);
          }
          for(int _aux = 0; _aux < _len_cb10; _aux++) {
          free(cb1[_aux].g);
          }
          for(int _aux = 0; _aux < _len_cb10; _aux++) {
          free(cb1[_aux].b);
          }
          free(cb1);
          for(int _aux = 0; _aux < _len_cb20; _aux++) {
          free(cb2[_aux].r);
          }
          for(int _aux = 0; _aux < _len_cb20; _aux++) {
          free(cb2[_aux].g);
          }
          for(int _aux = 0; _aux < _len_cb20; _aux++) {
          free(cb2[_aux].b);
          }
          free(cb2);
          for(int _aux = 0; _aux < _len_cb30; _aux++) {
          free(cb3[_aux].r);
          }
          for(int _aux = 0; _aux < _len_cb30; _aux++) {
          free(cb3[_aux].g);
          }
          for(int _aux = 0; _aux < _len_cb30; _aux++) {
          free(cb3[_aux].b);
          }
          free(cb3);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 37
          // dynamic_instructions_O0 : 37
          // ------------------------------- 
          // static_instructions_O1 : 29
          // dynamic_instructions_O1 : 29
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 20
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 28
          // dynamic_instructions_Os : 28
          // ------------------------------- 
          // static_instructions_Oz : 30
          // dynamic_instructions_Oz : 30
          // ------------------------------- 

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
        
          int _len_cb00 = 1;
          struct TYPE_6__ * cb0 = (struct TYPE_6__ *) malloc(_len_cb00*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_cb00; _i0++) {
              int _len_cb0__i0__r0 = 1;
          cb0[_i0].r = (int *) malloc(_len_cb0__i0__r0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb0__i0__r0; _j0++) {
            cb0[_i0].r[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb0__i0__g0 = 1;
          cb0[_i0].g = (int *) malloc(_len_cb0__i0__g0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb0__i0__g0; _j0++) {
            cb0[_i0].g[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb0__i0__b0 = 1;
          cb0[_i0].b = (int *) malloc(_len_cb0__i0__b0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb0__i0__b0; _j0++) {
            cb0[_i0].b[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int _len_cb10 = 1;
          struct TYPE_6__ * cb1 = (struct TYPE_6__ *) malloc(_len_cb10*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_cb10; _i0++) {
              int _len_cb1__i0__r0 = 1;
          cb1[_i0].r = (int *) malloc(_len_cb1__i0__r0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb1__i0__r0; _j0++) {
            cb1[_i0].r[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb1__i0__g0 = 1;
          cb1[_i0].g = (int *) malloc(_len_cb1__i0__g0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb1__i0__g0; _j0++) {
            cb1[_i0].g[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb1__i0__b0 = 1;
          cb1[_i0].b = (int *) malloc(_len_cb1__i0__b0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb1__i0__b0; _j0++) {
            cb1[_i0].b[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int _len_cb20 = 1;
          struct TYPE_6__ * cb2 = (struct TYPE_6__ *) malloc(_len_cb20*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_cb20; _i0++) {
              int _len_cb2__i0__r0 = 1;
          cb2[_i0].r = (int *) malloc(_len_cb2__i0__r0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb2__i0__r0; _j0++) {
            cb2[_i0].r[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb2__i0__g0 = 1;
          cb2[_i0].g = (int *) malloc(_len_cb2__i0__g0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb2__i0__g0; _j0++) {
            cb2[_i0].g[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb2__i0__b0 = 1;
          cb2[_i0].b = (int *) malloc(_len_cb2__i0__b0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb2__i0__b0; _j0++) {
            cb2[_i0].b[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int _len_cb30 = 1;
          struct TYPE_6__ * cb3 = (struct TYPE_6__ *) malloc(_len_cb30*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_cb30; _i0++) {
              int _len_cb3__i0__r0 = 1;
          cb3[_i0].r = (int *) malloc(_len_cb3__i0__r0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb3__i0__r0; _j0++) {
            cb3[_i0].r[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb3__i0__g0 = 1;
          cb3[_i0].g = (int *) malloc(_len_cb3__i0__g0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb3__i0__g0; _j0++) {
            cb3[_i0].g[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb3__i0__b0 = 1;
          cb3[_i0].b = (int *) malloc(_len_cb3__i0__b0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cb3__i0__b0; _j0++) {
            cb3[_i0].b[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          cvid_v4_24(vptr,limit,stride,inverted,cb0,cb1,cb2,cb3);
          free(vptr);
          free(limit);
          for(int _aux = 0; _aux < _len_cb00; _aux++) {
          free(cb0[_aux].r);
          }
          for(int _aux = 0; _aux < _len_cb00; _aux++) {
          free(cb0[_aux].g);
          }
          for(int _aux = 0; _aux < _len_cb00; _aux++) {
          free(cb0[_aux].b);
          }
          free(cb0);
          for(int _aux = 0; _aux < _len_cb10; _aux++) {
          free(cb1[_aux].r);
          }
          for(int _aux = 0; _aux < _len_cb10; _aux++) {
          free(cb1[_aux].g);
          }
          for(int _aux = 0; _aux < _len_cb10; _aux++) {
          free(cb1[_aux].b);
          }
          free(cb1);
          for(int _aux = 0; _aux < _len_cb20; _aux++) {
          free(cb2[_aux].r);
          }
          for(int _aux = 0; _aux < _len_cb20; _aux++) {
          free(cb2[_aux].g);
          }
          for(int _aux = 0; _aux < _len_cb20; _aux++) {
          free(cb2[_aux].b);
          }
          free(cb2);
          for(int _aux = 0; _aux < _len_cb30; _aux++) {
          free(cb3[_aux].r);
          }
          for(int _aux = 0; _aux < _len_cb30; _aux++) {
          free(cb3[_aux].g);
          }
          for(int _aux = 0; _aux < _len_cb30; _aux++) {
          free(cb3[_aux].b);
          }
          free(cb3);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
