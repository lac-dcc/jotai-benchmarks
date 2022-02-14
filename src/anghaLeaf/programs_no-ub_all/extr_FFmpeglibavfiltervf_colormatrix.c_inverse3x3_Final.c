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

/* Variables and functions */
 double ima ; 
 double imb ; 
 double imc ; 
 double imd ; 
 double ime ; 
 double imf ; 
 double img ; 
 double imh ; 
 double imi ; 
 double ma ; 
 double mb ; 
 double mc ; 
 double md ; 
 double me ; 
 double mf ; 
 double mg ; 
 double mh ; 
 double mi ; 

__attribute__((used)) static void inverse3x3(double im[3][3], double m[3][3])
{
    double det = ma * (me * mi - mf * mh) - mb * (md * mi - mf * mg) + mc * (md * mh - me * mg);
    det = 1.0 / det;
    ima = det * (me * mi - mf * mh);
    imb = det * (mc * mh - mb * mi);
    imc = det * (mb * mf - mc * me);
    imd = det * (mf * mg - md * mi);
    ime = det * (ma * mi - mc * mg);
    imf = det * (mc * md - ma * mf);
    img = det * (md * mh - me * mg);
    imh = det * (mb * mg - ma * mh);
    imi = det * (ma * me - mb * md);
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
          int _len_im0 = 3;
          double ** im = (double **) malloc(_len_im0*sizeof(double *));
          for(int _i0 = 0; _i0 < _len_im0; _i0++) {
            int _len_im1 = 3;
            im[_i0] = (double *) malloc(_len_im1*sizeof(double));
            for(int _i1 = 0; _i1 < _len_im1; _i1++) {
              im[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_m0 = 3;
          double ** m = (double **) malloc(_len_m0*sizeof(double *));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            int _len_m1 = 3;
            m[_i0] = (double *) malloc(_len_m1*sizeof(double));
            for(int _i1 = 0; _i1 < _len_m1; _i1++) {
              m[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          inverse3x3(im,m);
          for(int i1 = 0; i1 < _len_im0; i1++) {
            int _len_im1 = 3;
              free(im[i1]);
          }
          free(im);
          for(int i1 = 0; i1 < _len_m0; i1++) {
            int _len_m1 = 3;
              free(m[i1]);
          }
          free(m);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
