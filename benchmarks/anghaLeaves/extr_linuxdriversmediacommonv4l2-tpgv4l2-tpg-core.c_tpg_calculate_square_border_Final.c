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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {unsigned int left; unsigned int width; unsigned int top; unsigned int height; } ;
struct TYPE_3__ {unsigned int width; unsigned int left; unsigned int height; unsigned int top; } ;
struct tpg_data {unsigned int src_width; unsigned int src_height; int vid_aspect; scalar_t__ pix_aspect; TYPE_2__ border; TYPE_1__ square; } ;

/* Variables and functions */
 scalar_t__ TPG_PIXEL_ASPECT_NTSC ; 
 scalar_t__ TPG_PIXEL_ASPECT_PAL ; 
#define  TPG_VIDEO_ASPECT_14X9_CENTRE 130 
 int TPG_VIDEO_ASPECT_16X9_ANAMORPHIC ; 
#define  TPG_VIDEO_ASPECT_16X9_CENTRE 129 
#define  TPG_VIDEO_ASPECT_4X3 128 

__attribute__((used)) static void tpg_calculate_square_border(struct tpg_data *tpg)
{
	unsigned w = tpg->src_width;
	unsigned h = tpg->src_height;
	unsigned sq_w, sq_h;

	sq_w = (w * 2 / 5) & ~1;
	if (((w - sq_w) / 2) & 1)
		sq_w += 2;
	sq_h = sq_w;
	tpg->square.width = sq_w;
	if (tpg->vid_aspect == TPG_VIDEO_ASPECT_16X9_ANAMORPHIC) {
		unsigned ana_sq_w = (sq_w / 4) * 3;

		if (((w - ana_sq_w) / 2) & 1)
			ana_sq_w += 2;
		tpg->square.width = ana_sq_w;
	}
	tpg->square.left = (w - tpg->square.width) / 2;
	if (tpg->pix_aspect == TPG_PIXEL_ASPECT_NTSC)
		sq_h = sq_w * 10 / 11;
	else if (tpg->pix_aspect == TPG_PIXEL_ASPECT_PAL)
		sq_h = sq_w * 59 / 54;
	tpg->square.height = sq_h;
	tpg->square.top = (h - sq_h) / 2;
	tpg->border.left = 0;
	tpg->border.width = w;
	tpg->border.top = 0;
	tpg->border.height = h;
	switch (tpg->vid_aspect) {
	case TPG_VIDEO_ASPECT_4X3:
		if (tpg->pix_aspect)
			return;
		if (3 * w >= 4 * h) {
			tpg->border.width = ((4 * h) / 3) & ~1;
			if (((w - tpg->border.width) / 2) & ~1)
				tpg->border.width -= 2;
			tpg->border.left = (w - tpg->border.width) / 2;
			break;
		}
		tpg->border.height = ((3 * w) / 4) & ~1;
		tpg->border.top = (h - tpg->border.height) / 2;
		break;
	case TPG_VIDEO_ASPECT_14X9_CENTRE:
		if (tpg->pix_aspect) {
			tpg->border.height = tpg->pix_aspect == TPG_PIXEL_ASPECT_NTSC ? 420 : 506;
			tpg->border.top = (h - tpg->border.height) / 2;
			break;
		}
		if (9 * w >= 14 * h) {
			tpg->border.width = ((14 * h) / 9) & ~1;
			if (((w - tpg->border.width) / 2) & ~1)
				tpg->border.width -= 2;
			tpg->border.left = (w - tpg->border.width) / 2;
			break;
		}
		tpg->border.height = ((9 * w) / 14) & ~1;
		tpg->border.top = (h - tpg->border.height) / 2;
		break;
	case TPG_VIDEO_ASPECT_16X9_CENTRE:
		if (tpg->pix_aspect) {
			tpg->border.height = tpg->pix_aspect == TPG_PIXEL_ASPECT_NTSC ? 368 : 442;
			tpg->border.top = (h - tpg->border.height) / 2;
			break;
		}
		if (9 * w >= 16 * h) {
			tpg->border.width = ((16 * h) / 9) & ~1;
			if (((w - tpg->border.width) / 2) & ~1)
				tpg->border.width -= 2;
			tpg->border.left = (w - tpg->border.width) / 2;
			break;
		}
		tpg->border.height = ((9 * w) / 16) & ~1;
		tpg->border.top = (h - tpg->border.height) / 2;
		break;
	default:
		break;
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
          int _len_tpg0 = 1;
          struct tpg_data * tpg = (struct tpg_data *) malloc(_len_tpg0*sizeof(struct tpg_data));
          for(int _i0 = 0; _i0 < _len_tpg0; _i0++) {
            tpg[_i0].src_width = ((-2 * (next_i()%2)) + 1) * next_i();
        tpg[_i0].src_height = ((-2 * (next_i()%2)) + 1) * next_i();
        tpg[_i0].vid_aspect = ((-2 * (next_i()%2)) + 1) * next_i();
        tpg[_i0].pix_aspect = ((-2 * (next_i()%2)) + 1) * next_i();
        tpg[_i0].border.left = ((-2 * (next_i()%2)) + 1) * next_i();
        tpg[_i0].border.width = ((-2 * (next_i()%2)) + 1) * next_i();
        tpg[_i0].border.top = ((-2 * (next_i()%2)) + 1) * next_i();
        tpg[_i0].border.height = ((-2 * (next_i()%2)) + 1) * next_i();
        tpg[_i0].square.width = ((-2 * (next_i()%2)) + 1) * next_i();
        tpg[_i0].square.left = ((-2 * (next_i()%2)) + 1) * next_i();
        tpg[_i0].square.height = ((-2 * (next_i()%2)) + 1) * next_i();
        tpg[_i0].square.top = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tpg_calculate_square_border(tpg);
          free(tpg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
