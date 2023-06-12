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

/* Type definitions */
struct mp_vo_opts {int panscan; } ;

/* Variables and functions */

__attribute__((used)) static void aspect_calc_panscan(struct mp_vo_opts *opts,
                                int w, int h, int d_w, int d_h, int unscaled,
                                int window_w, int window_h, double monitor_par,
                                int *out_w, int *out_h)
{
    w *= monitor_par;

    int fwidth = window_w;
    int fheight = (float)window_w / d_w * d_h / monitor_par;
    if (fheight > window_h || fheight < h) {
        int tmpw = (float)window_h / d_h * d_w * monitor_par;
        if (tmpw <= window_w) {
            fheight = window_h;
            fwidth = tmpw;
        }
    }

    int vo_panscan_area = window_h - fheight;
    double f_w = fwidth / (double)fheight;
    double f_h = 1;
    if (vo_panscan_area == 0) {
        vo_panscan_area = window_w - fwidth;
        f_w = 1;
        f_h = fheight / (double)fwidth;
    }

    if (unscaled) {
        vo_panscan_area = 0;
        if (unscaled != 2 || (d_w <= window_w && d_h <= window_h)) {
            fwidth = d_w * monitor_par;
            fheight = d_h;
        }
    }

    *out_w = fwidth + vo_panscan_area * opts->panscan * f_w;
    *out_h = fheight + vo_panscan_area * opts->panscan * f_h;
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
          // static_instructions_O0 : 103
          // dynamic_instructions_O0 : 103
          // ------------------------------- 
          // static_instructions_O1 : 73
          // dynamic_instructions_O1 : 73
          // ------------------------------- 
          // static_instructions_O2 : 70
          // dynamic_instructions_O2 : 70
          // ------------------------------- 
          // static_instructions_O3 : 70
          // dynamic_instructions_O3 : 70
          // ------------------------------- 
          // static_instructions_Ofast : 70
          // dynamic_instructions_Ofast : 70
          // ------------------------------- 
          // static_instructions_Os : 70
          // dynamic_instructions_Os : 70
          // ------------------------------- 
          // static_instructions_Oz : 62
          // dynamic_instructions_Oz : 62
          // ------------------------------- 

          int w = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int h = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int d_w = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int d_h = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int unscaled = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int window_w = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int window_h = ((-2 * (next_i()%2)) + 1) * next_i();
        
          double monitor_par = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          int _len_opts0 = 1;
          struct mp_vo_opts * opts = (struct mp_vo_opts *) malloc(_len_opts0*sizeof(struct mp_vo_opts));
          for(int _i0 = 0; _i0 < _len_opts0; _i0++) {
              opts[_i0].panscan = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_out_w0 = 1;
          int * out_w = (int *) malloc(_len_out_w0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out_w0; _i0++) {
            out_w[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_out_h0 = 1;
          int * out_h = (int *) malloc(_len_out_h0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out_h0; _i0++) {
            out_h[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          aspect_calc_panscan(opts,w,h,d_w,d_h,unscaled,window_w,window_h,monitor_par,out_w,out_h);
          free(opts);
          free(out_w);
          free(out_h);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
