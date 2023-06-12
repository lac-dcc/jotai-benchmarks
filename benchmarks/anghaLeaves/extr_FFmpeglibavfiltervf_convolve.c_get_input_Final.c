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
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
typedef  float uint8_t ;
typedef  float uint16_t ;
struct TYPE_9__ {float** data; int* linesize; } ;
struct TYPE_8__ {int depth; } ;
struct TYPE_7__ {float re; scalar_t__ im; } ;
typedef  TYPE_1__ FFTComplex ;
typedef  TYPE_2__ ConvolveContext ;
typedef  TYPE_3__ AVFrame ;

/* Variables and functions */

__attribute__((used)) static void get_input(ConvolveContext *s, FFTComplex *fft_hdata,
                      AVFrame *in, int w, int h, int n, int plane, float scale)
{
    const int iw = (n - w) / 2, ih = (n - h) / 2;
    int y, x;

    if (s->depth == 8) {
        for (y = 0; y < h; y++) {
            const uint8_t *src = in->data[plane] + in->linesize[plane] * y;

            for (x = 0; x < w; x++) {
                fft_hdata[(y + ih) * n + iw + x].re = src[x] * scale;
                fft_hdata[(y + ih) * n + iw + x].im = 0;
            }

            for (x = 0; x < iw; x++) {
                fft_hdata[(y + ih) * n + x].re = fft_hdata[(y + ih) * n + iw].re;
                fft_hdata[(y + ih) * n + x].im = 0;
            }

            for (x = n - iw; x < n; x++) {
                fft_hdata[(y + ih) * n + x].re = fft_hdata[(y + ih) * n + n - iw - 1].re;
                fft_hdata[(y + ih) * n + x].im = 0;
            }
        }

        for (y = 0; y < ih; y++) {
            for (x = 0; x < n; x++) {
                fft_hdata[y * n + x].re = fft_hdata[ih * n + x].re;
                fft_hdata[y * n + x].im = 0;
            }
        }

        for (y = n - ih; y < n; y++) {
            for (x = 0; x < n; x++) {
                fft_hdata[y * n + x].re = fft_hdata[(n - ih - 1) * n + x].re;
                fft_hdata[y * n + x].im = 0;
            }
        }
    } else {
        for (y = 0; y < h; y++) {
            const uint16_t *src = (const uint16_t *)(in->data[plane] + in->linesize[plane] * y);

            for (x = 0; x < w; x++) {
                fft_hdata[(y + ih) * n + iw + x].re = src[x] * scale;
                fft_hdata[(y + ih) * n + iw + x].im = 0;
            }

            for (x = 0; x < iw; x++) {
                fft_hdata[(y + ih) * n + x].re = fft_hdata[(y + ih) * n + iw].re;
                fft_hdata[(y + ih) * n + x].im = 0;
            }

            for (x = n - iw; x < n; x++) {
                fft_hdata[(y + ih) * n + x].re = fft_hdata[(y + ih) * n + n - iw - 1].re;
                fft_hdata[(y + ih) * n + x].im = 0;
            }
        }

        for (y = 0; y < ih; y++) {
            for (x = 0; x < n; x++) {
                fft_hdata[y * n + x].re = fft_hdata[ih * n + x].re;
                fft_hdata[y * n + x].im = 0;
            }
        }

        for (y = n - ih; y < n; y++) {
            for (x = 0; x < n; x++) {
                fft_hdata[y * n + x].re = fft_hdata[(n - ih - 1) * n + x].re;
                fft_hdata[y * n + x].im = 0;
            }
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


    // empty
    case 0:
    {
          // static_instructions_O0 : 42
          // dynamic_instructions_O0 : 42
          // ------------------------------- 
          // static_instructions_O1 : 42
          // dynamic_instructions_O1 : 42
          // ------------------------------- 
          // static_instructions_O2 : 42
          // dynamic_instructions_O2 : 42
          // ------------------------------- 
          // static_instructions_O3 : 41
          // dynamic_instructions_O3 : 41
          // ------------------------------- 
          // static_instructions_Ofast : 41
          // dynamic_instructions_Ofast : 41
          // ------------------------------- 
          // static_instructions_Os : 41
          // dynamic_instructions_Os : 41
          // ------------------------------- 
          // static_instructions_Oz : 113
          // dynamic_instructions_Oz : 113
          // ------------------------------- 

          int w = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int h = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int n = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int plane = ((-2 * (next_i()%2)) + 1) * next_i();
        
          float scale = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          int _len_s0 = 1;
          struct TYPE_8__ * s = (struct TYPE_8__ *) malloc(_len_s0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              s[_i0].depth = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_fft_hdata0 = 1;
          struct TYPE_7__ * fft_hdata = (struct TYPE_7__ *) malloc(_len_fft_hdata0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_fft_hdata0; _i0++) {
              fft_hdata[_i0].re = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          fft_hdata[_i0].im = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_in0 = 1;
          struct TYPE_9__ * in = (struct TYPE_9__ *) malloc(_len_in0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
              int _len_in__i0__data0 = 1;
          in[_i0].data = (float **) malloc(_len_in__i0__data0*sizeof(float *));
          for(int _j0 = 0; _j0 < _len_in__i0__data0; _j0++) {
            int _len_in__i0__data1 = 1;
            in[_i0].data[_j0] = (float *) malloc(_len_in__i0__data1*sizeof(float));
            for(int _j1 = 0; _j1 < _len_in__i0__data1; _j1++) {
              in[_i0].data[_j0][_j1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_in__i0__linesize0 = 1;
          in[_i0].linesize = (int *) malloc(_len_in__i0__linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_in__i0__linesize0; _j0++) {
            in[_i0].linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          get_input(s,fft_hdata,in,w,h,n,plane,scale);
          free(s);
          free(fft_hdata);
          for(int _aux = 0; _aux < _len_in0; _aux++) {
          free(*(in[_aux].data));
        free(in[_aux].data);
          }
          for(int _aux = 0; _aux < _len_in0; _aux++) {
          free(in[_aux].linesize);
          }
          free(in);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
