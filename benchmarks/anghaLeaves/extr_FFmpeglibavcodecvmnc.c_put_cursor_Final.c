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
typedef  int uint16_t ;
struct TYPE_3__ {int cur_w; scalar_t__ width; scalar_t__ cur_x; int cur_h; scalar_t__ height; scalar_t__ cur_y; int bpp2; int* curbits; int* curmask; } ;
typedef  TYPE_1__ VmncContext ;

/* Variables and functions */

__attribute__((used)) static void put_cursor(uint8_t *dst, int stride, VmncContext *c, int dx, int dy)
{
    int i, j;
    int w, h, x, y;
    w = c->cur_w;
    if (c->width < c->cur_x + c->cur_w)
        w = c->width - c->cur_x;
    h = c->cur_h;
    if (c->height < c->cur_y + c->cur_h)
        h = c->height - c->cur_y;
    x = c->cur_x;
    y = c->cur_y;
    if (x < 0) {
        w += x;
        x  = 0;
    }
    if (y < 0) {
        h += y;
        y  = 0;
    }

    if ((w < 1) || (h < 1))
        return;
    dst += x * c->bpp2 + y * stride;

    if (c->bpp2 == 1) {
        uint8_t *cd = c->curbits, *msk = c->curmask;
        for (j = 0; j < h; j++) {
            for (i = 0; i < w; i++)
                dst[i] = (dst[i] & cd[i]) ^ msk[i];
            msk += c->cur_w;
            cd  += c->cur_w;
            dst += stride;
        }
    } else if (c->bpp2 == 2) {
        uint16_t *cd = (uint16_t*)c->curbits, *msk = (uint16_t*)c->curmask;
        uint16_t *dst2;
        for (j = 0; j < h; j++) {
            dst2 = (uint16_t*)dst;
            for (i = 0; i < w; i++)
                dst2[i] = (dst2[i] & cd[i]) ^ msk[i];
            msk += c->cur_w;
            cd  += c->cur_w;
            dst += stride;
        }
    } else if (c->bpp2 == 4) {
        uint32_t *cd = (uint32_t*)c->curbits, *msk = (uint32_t*)c->curmask;
        uint32_t *dst2;
        for (j = 0; j < h; j++) {
            dst2 = (uint32_t*)dst;
            for (i = 0; i < w; i++)
                dst2[i] = (dst2[i] & cd[i]) ^ msk[i];
            msk += c->cur_w;
            cd  += c->cur_w;
            dst += stride;
        }
    }
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
          int stride = 100;
          int dx = 100;
          int dy = 100;
          int _len_dst0 = 1;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c0 = 1;
          struct TYPE_3__ * c = (struct TYPE_3__ *) malloc(_len_c0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].cur_w = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].cur_x = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].cur_h = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].cur_y = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].bpp2 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__curbits0 = 1;
          c[_i0].curbits = (int *) malloc(_len_c__i0__curbits0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_c__i0__curbits0; _j0++) {
            c[_i0].curbits[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c__i0__curmask0 = 1;
          c[_i0].curmask = (int *) malloc(_len_c__i0__curmask0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_c__i0__curmask0; _j0++) {
            c[_i0].curmask[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          put_cursor(dst,stride,c,dx,dy);
          free(dst);
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].curbits);
          }
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].curmask);
          }
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
