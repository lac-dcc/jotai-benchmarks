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

/* Type definitions */
struct sub_bitmaps {int num_parts; struct sub_bitmap* parts; } ;
struct sub_bitmap {int x; int y; int dw; double w; int dh; double h; } ;
struct mp_osd_res {int w; int ml; int mr; int h; int mt; int mb; double display_par; } ;

/* Variables and functions */

void osd_rescale_bitmaps(struct sub_bitmaps *imgs, int frame_w, int frame_h,
                         struct mp_osd_res res, double compensate_par)
{
    int vidw = res.w - res.ml - res.mr;
    int vidh = res.h - res.mt - res.mb;
    double xscale = (double)vidw / frame_w;
    double yscale = (double)vidh / frame_h;
    if (compensate_par < 0)
        compensate_par = xscale / yscale / res.display_par;
    if (compensate_par > 0)
        xscale /= compensate_par;
    int cx = vidw / 2 - (int)(frame_w * xscale) / 2;
    int cy = vidh / 2 - (int)(frame_h * yscale) / 2;
    for (int i = 0; i < imgs->num_parts; i++) {
        struct sub_bitmap *bi = &imgs->parts[i];
        bi->x = (int)(bi->x * xscale) + cx + res.ml;
        bi->y = (int)(bi->y * yscale) + cy + res.mt;
        bi->dw = (int)(bi->w * xscale + 0.5);
        bi->dh = (int)(bi->h * yscale + 0.5);
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
          int frame_w = 100;
          int frame_h = 100;
          double compensate_par = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_imgs0 = 1;
          struct sub_bitmaps * imgs = (struct sub_bitmaps *) malloc(_len_imgs0*sizeof(struct sub_bitmaps));
          for(int _i0 = 0; _i0 < _len_imgs0; _i0++) {
            imgs[_i0].num_parts = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_imgs__i0__parts0 = 1;
          imgs[_i0].parts = (struct sub_bitmap *) malloc(_len_imgs__i0__parts0*sizeof(struct sub_bitmap));
          for(int _j0 = 0; _j0 < _len_imgs__i0__parts0; _j0++) {
            imgs[_i0].parts->x = ((-2 * (next_i()%2)) + 1) * next_i();
        imgs[_i0].parts->y = ((-2 * (next_i()%2)) + 1) * next_i();
        imgs[_i0].parts->dw = ((-2 * (next_i()%2)) + 1) * next_i();
        imgs[_i0].parts->w = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        imgs[_i0].parts->dh = ((-2 * (next_i()%2)) + 1) * next_i();
        imgs[_i0].parts->h = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          struct mp_osd_res res;
        res.w = ((-2 * (next_i()%2)) + 1) * next_i();
        res.ml = ((-2 * (next_i()%2)) + 1) * next_i();
        res.mr = ((-2 * (next_i()%2)) + 1) * next_i();
        res.h = ((-2 * (next_i()%2)) + 1) * next_i();
        res.mt = ((-2 * (next_i()%2)) + 1) * next_i();
        res.mb = ((-2 * (next_i()%2)) + 1) * next_i();
        res.display_par = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          osd_rescale_bitmaps(imgs,frame_w,frame_h,res,compensate_par);
          for(int _aux = 0; _aux < _len_imgs0; _aux++) {
          free(imgs[_aux].parts);
          }
          free(imgs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
