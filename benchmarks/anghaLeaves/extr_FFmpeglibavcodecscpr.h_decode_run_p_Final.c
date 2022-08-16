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
typedef  int uint8_t ;
typedef  int uint32_t ;
struct TYPE_3__ {int height; int width; int bits_per_coded_sample; } ;
typedef  TYPE_1__ AVCodecContext ;

/* Variables and functions */
 int AVERROR_INVALIDDATA ; 

__attribute__((used)) static int decode_run_p(AVCodecContext *avctx, uint32_t ptype, int run,
                        int x, int y, uint32_t clr,
                        uint32_t *dst, uint32_t *prev,
                        int linesize, int plinesize,
                        uint32_t *bx, uint32_t *by,
                        uint32_t backstep, int sx1, int sx2,
                        int *cx, int *cx1)
{
    uint32_t r, g, b;
    int z;

    switch (ptype) {
    case 0:
        while (run-- > 0) {
            if (*by >= avctx->height)
                return AVERROR_INVALIDDATA;

            dst[*by * linesize + *bx] = clr;
            (*bx)++;
            if (*bx >= x * 16 + sx2 || *bx >= avctx->width) {
                *bx = x * 16 + sx1;
                (*by)++;
            }
        }
        break;
    case 1:
        while (run-- > 0) {
            if (*bx == 0) {
                if (*by < 1)
                    return AVERROR_INVALIDDATA;
                z = backstep;
            } else {
                z = 0;
            }

            if (*by >= avctx->height)
                return AVERROR_INVALIDDATA;

            clr = dst[*by * linesize + *bx - 1 - z];
            dst[*by * linesize + *bx] = clr;
            (*bx)++;
            if (*bx >= x * 16 + sx2 || *bx >= avctx->width) {
                *bx = x * 16 + sx1;
                (*by)++;
            }
        }
        break;
    case 2:
        while (run-- > 0) {
            if (*by < 1 || *by >= avctx->height)
                return AVERROR_INVALIDDATA;

            clr = dst[(*by - 1) * linesize + *bx];
            dst[*by * linesize + *bx] = clr;
            (*bx)++;
            if (*bx >= x * 16 + sx2 || *bx >= avctx->width) {
                *bx = x * 16 + sx1;
                (*by)++;
            }
        }
        break;
    case 3:
        while (run-- > 0) {
            if (*by >= avctx->height)
                return AVERROR_INVALIDDATA;

            clr = prev[*by * plinesize + *bx];
            dst[*by * linesize + *bx] = clr;
            (*bx)++;
            if (*bx >= x * 16 + sx2 || *bx >= avctx->width) {
                *bx = x * 16 + sx1;
                (*by)++;
            }
        }
        break;
    case 4:
        while (run-- > 0) {
            uint8_t *odst = (uint8_t *)dst;

            if (*by < 1 || *by >= avctx->height)
                return AVERROR_INVALIDDATA;

            if (*bx == 0) {
                if (*by < 2)
                    return AVERROR_INVALIDDATA;
                z = backstep;
            } else {
                z = 0;
            }

            r = odst[((*by - 1) * linesize + *bx) * 4] +
                odst[(*by * linesize + *bx - 1 - z) * 4] -
                odst[((*by - 1) * linesize + *bx - 1 - z) * 4];
            g = odst[((*by - 1) * linesize + *bx) * 4 + 1] +
                odst[(*by * linesize + *bx - 1 - z) * 4 + 1] -
                odst[((*by - 1) * linesize + *bx - 1 - z) * 4 + 1];
            b = odst[((*by - 1) * linesize + *bx) * 4 + 2] +
                odst[(*by * linesize + *bx - 1 - z) * 4 + 2] -
                odst[((*by - 1) * linesize + *bx - 1 - z) * 4 + 2];
            clr = ((b & 0xFF) << 16) + ((g & 0xFF) << 8) + (r & 0xFF);
            dst[*by * linesize + *bx] = clr;
            (*bx)++;
            if (*bx >= x * 16 + sx2 || *bx >= avctx->width) {
                *bx = x * 16 + sx1;
                (*by)++;
            }
        }
        break;
    case 5:
        while (run-- > 0) {
            if (*by < 1 || *by >= avctx->height)
                return AVERROR_INVALIDDATA;

            if (*bx == 0) {
                if (*by < 2)
                    return AVERROR_INVALIDDATA;
                z = backstep;
            } else {
                z = 0;
            }

            clr = dst[(*by - 1) * linesize + *bx - 1 - z];
            dst[*by * linesize + *bx] = clr;
            (*bx)++;
            if (*bx >= x * 16 + sx2 || *bx >= avctx->width) {
                *bx = x * 16 + sx1;
                (*by)++;
            }
        }
        break;
    }

    if (avctx->bits_per_coded_sample == 16) {
        *cx1 = (clr & 0x3F00) >> 2;
        *cx = (clr & 0x3FFFFF) >> 16;
    } else {
        *cx1 = (clr & 0xFC00) >> 4;
        *cx = (clr & 0xFFFFFF) >> 18;
    }

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

    // int-bounds
    case 0:
    {
          int ptype = 100;
          int run = 100;
          int x = 100;
          int y = 100;
          int clr = 100;
          int linesize = 100;
          int plinesize = 100;
          int backstep = 100;
          int sx1 = 100;
          int sx2 = 100;
          int _len_avctx0 = 1;
          struct TYPE_3__ * avctx = (struct TYPE_3__ *) malloc(_len_avctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_avctx0; _i0++) {
            avctx[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].bits_per_coded_sample = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 1;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prev0 = 1;
          int * prev = (int *) malloc(_len_prev0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_prev0; _i0++) {
            prev[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bx0 = 1;
          int * bx = (int *) malloc(_len_bx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bx0; _i0++) {
            bx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_by0 = 1;
          int * by = (int *) malloc(_len_by0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_by0; _i0++) {
            by[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cx0 = 1;
          int * cx = (int *) malloc(_len_cx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cx0; _i0++) {
            cx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cx10 = 1;
          int * cx1 = (int *) malloc(_len_cx10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cx10; _i0++) {
            cx1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = decode_run_p(avctx,ptype,run,x,y,clr,dst,prev,linesize,plinesize,bx,by,backstep,sx1,sx2,cx,cx1);
          printf("%d\n", benchRet); 
          free(avctx);
          free(dst);
          free(prev);
          free(bx);
          free(by);
          free(cx);
          free(cx1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
