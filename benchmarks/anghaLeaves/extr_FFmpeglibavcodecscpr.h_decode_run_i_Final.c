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

__attribute__((used)) static int decode_run_i(AVCodecContext *avctx, uint32_t ptype, int run,
                        int *px, int *py, uint32_t clr, uint32_t *dst,
                        int linesize, uint32_t *plx, uint32_t *ply,
                        uint32_t backstep, int off, int *cx, int *cx1)
{
    uint32_t r, g, b;
    int z;
    int x = *px,
        y = *py;
    uint32_t lx = *plx,
             ly = *ply;

    if (y >= avctx->height)
        return AVERROR_INVALIDDATA;

    switch (ptype) {
    case 0:
        while (run-- > 0) {
            dst[y * linesize + x] = clr;
            lx = x;
            ly = y;
            (x)++;
            if (x >= avctx->width) {
                x = 0;
                (y)++;
                if (y >= avctx->height && run)
                    return AVERROR_INVALIDDATA;
            }
        }
        break;
    case 1:
        while (run-- > 0) {
            dst[y * linesize + x] = dst[ly * linesize + lx];
            lx = x;
            ly = y;
            (x)++;
            if (x >= avctx->width) {
                x = 0;
                (y)++;
                if (y >= avctx->height && run)
                    return AVERROR_INVALIDDATA;
            }
        }
        clr = dst[ly * linesize + lx];
        break;
    case 2:
        if (y < 1)
            return AVERROR_INVALIDDATA;

        while (run-- > 0) {
            clr = dst[y * linesize + x + off + 1];
            dst[y * linesize + x] = clr;
            lx = x;
            ly = y;
            (x)++;
            if (x >= avctx->width) {
                x = 0;
                (y)++;
                if (y >= avctx->height && run)
                    return AVERROR_INVALIDDATA;
            }
        }
        break;
    case 4:
        if (y < 1 || (y == 1 && x == 0))
            return AVERROR_INVALIDDATA;

        while (run-- > 0) {
            uint8_t *odst = (uint8_t *)dst;
            int off1 = (ly * linesize + lx) * 4;
            int off2 = ((y * linesize + x) + off) * 4;

            if (x == 0) {
                z = backstep * 4;
            } else {
                z = 0;
            }

            r = odst[off1] +
                odst[off2 + 4] -
                odst[off2 - z ];
            g = odst[off1 + 1] +
                odst[off2 + 5] -
                odst[off2 - z  + 1];
            b = odst[off1 + 2] +
                odst[off2 + 6] -
                odst[off2 - z  + 2];
            clr = ((b & 0xFF) << 16) + ((g & 0xFF) << 8) + (r & 0xFF);
            dst[y * linesize + x] = clr;
            lx = x;
            ly = y;
            (x)++;
            if (x >= avctx->width) {
                x = 0;
                (y)++;
                if (y >= avctx->height && run)
                    return AVERROR_INVALIDDATA;
            }
        }
        break;
    case 5:
        if (y < 1 || (y == 1 && x == 0))
            return AVERROR_INVALIDDATA;

        while (run-- > 0) {
            if (x == 0) {
                z = backstep;
            } else {
                z = 0;
            }

            clr = dst[y * linesize + x + off - z];
            dst[y * linesize + x] = clr;
            lx = x;
            ly = y;
            (x)++;
            if (x >= avctx->width) {
                x = 0;
                (y)++;
                if (y >= avctx->height && run)
                    return AVERROR_INVALIDDATA;
            }
        }
        break;
    }

    *px = x;
    *py = y;
    *plx= lx;
    *ply= ly;

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
          int clr = 100;
          int linesize = 100;
          int backstep = 100;
          int off = 100;
          int _len_avctx0 = 1;
          struct TYPE_3__ * avctx = (struct TYPE_3__ *) malloc(_len_avctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_avctx0; _i0++) {
            avctx[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].bits_per_coded_sample = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_px0 = 1;
          int * px = (int *) malloc(_len_px0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_px0; _i0++) {
            px[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_py0 = 1;
          int * py = (int *) malloc(_len_py0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_py0; _i0++) {
            py[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 1;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_plx0 = 1;
          int * plx = (int *) malloc(_len_plx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_plx0; _i0++) {
            plx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ply0 = 1;
          int * ply = (int *) malloc(_len_ply0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ply0; _i0++) {
            ply[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
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
          int benchRet = decode_run_i(avctx,ptype,run,px,py,clr,dst,linesize,plx,ply,backstep,off,cx,cx1);
          printf("%d\n", benchRet); 
          free(avctx);
          free(px);
          free(py);
          free(dst);
          free(plx);
          free(ply);
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
