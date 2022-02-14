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
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int version; int /*<<< orphan*/  slice_height; int /*<<< orphan*/  slice_width; int /*<<< orphan*/  slice_y; int /*<<< orphan*/  slice_x; int /*<<< orphan*/  slice_count; int /*<<< orphan*/  packed_at_lsb; int /*<<< orphan*/  bits_per_raw_sample; int /*<<< orphan*/  key_frame_ok; int /*<<< orphan*/  slice_damaged; int /*<<< orphan*/  intra; int /*<<< orphan*/  ec; int /*<<< orphan*/  colorspace; int /*<<< orphan*/  ac; int /*<<< orphan*/  plane_count; int /*<<< orphan*/  transparency; int /*<<< orphan*/  chroma_v_shift; int /*<<< orphan*/  chroma_h_shift; int /*<<< orphan*/  chroma_planes; int /*<<< orphan*/  micro_version; } ;
typedef  TYPE_1__ FFV1Context ;

/* Variables and functions */

__attribute__((used)) static void copy_fields(FFV1Context *fsdst, FFV1Context *fssrc, FFV1Context *fsrc)
{
    fsdst->version             = fsrc->version;
    fsdst->micro_version       = fsrc->micro_version;
    fsdst->chroma_planes       = fsrc->chroma_planes;
    fsdst->chroma_h_shift      = fsrc->chroma_h_shift;
    fsdst->chroma_v_shift      = fsrc->chroma_v_shift;
    fsdst->transparency        = fsrc->transparency;
    fsdst->plane_count         = fsrc->plane_count;
    fsdst->ac                  = fsrc->ac;
    fsdst->colorspace          = fsrc->colorspace;

    fsdst->ec                  = fsrc->ec;
    fsdst->intra               = fsrc->intra;
    fsdst->slice_damaged       = fssrc->slice_damaged;
    fsdst->key_frame_ok        = fsrc->key_frame_ok;

    fsdst->bits_per_raw_sample = fsrc->bits_per_raw_sample;
    fsdst->packed_at_lsb       = fsrc->packed_at_lsb;
    fsdst->slice_count         = fsrc->slice_count;
    if (fsrc->version<3){
        fsdst->slice_x             = fssrc->slice_x;
        fsdst->slice_y             = fssrc->slice_y;
        fsdst->slice_width         = fssrc->slice_width;
        fsdst->slice_height        = fssrc->slice_height;
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

    // big-arr
    case 0:
    {
          int _len_fsdst0 = 1;
          struct TYPE_5__ * fsdst = (struct TYPE_5__ *) malloc(_len_fsdst0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_fsdst0; _i0++) {
            fsdst->version = ((-2 * (next_i()%2)) + 1) * next_i();
        fsdst->slice_height = ((-2 * (next_i()%2)) + 1) * next_i();
        fsdst->slice_width = ((-2 * (next_i()%2)) + 1) * next_i();
        fsdst->slice_y = ((-2 * (next_i()%2)) + 1) * next_i();
        fsdst->slice_x = ((-2 * (next_i()%2)) + 1) * next_i();
        fsdst->slice_count = ((-2 * (next_i()%2)) + 1) * next_i();
        fsdst->packed_at_lsb = ((-2 * (next_i()%2)) + 1) * next_i();
        fsdst->bits_per_raw_sample = ((-2 * (next_i()%2)) + 1) * next_i();
        fsdst->key_frame_ok = ((-2 * (next_i()%2)) + 1) * next_i();
        fsdst->slice_damaged = ((-2 * (next_i()%2)) + 1) * next_i();
        fsdst->intra = ((-2 * (next_i()%2)) + 1) * next_i();
        fsdst->ec = ((-2 * (next_i()%2)) + 1) * next_i();
        fsdst->colorspace = ((-2 * (next_i()%2)) + 1) * next_i();
        fsdst->ac = ((-2 * (next_i()%2)) + 1) * next_i();
        fsdst->plane_count = ((-2 * (next_i()%2)) + 1) * next_i();
        fsdst->transparency = ((-2 * (next_i()%2)) + 1) * next_i();
        fsdst->chroma_v_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        fsdst->chroma_h_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        fsdst->chroma_planes = ((-2 * (next_i()%2)) + 1) * next_i();
        fsdst->micro_version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fssrc0 = 1;
          struct TYPE_5__ * fssrc = (struct TYPE_5__ *) malloc(_len_fssrc0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_fssrc0; _i0++) {
            fssrc->version = ((-2 * (next_i()%2)) + 1) * next_i();
        fssrc->slice_height = ((-2 * (next_i()%2)) + 1) * next_i();
        fssrc->slice_width = ((-2 * (next_i()%2)) + 1) * next_i();
        fssrc->slice_y = ((-2 * (next_i()%2)) + 1) * next_i();
        fssrc->slice_x = ((-2 * (next_i()%2)) + 1) * next_i();
        fssrc->slice_count = ((-2 * (next_i()%2)) + 1) * next_i();
        fssrc->packed_at_lsb = ((-2 * (next_i()%2)) + 1) * next_i();
        fssrc->bits_per_raw_sample = ((-2 * (next_i()%2)) + 1) * next_i();
        fssrc->key_frame_ok = ((-2 * (next_i()%2)) + 1) * next_i();
        fssrc->slice_damaged = ((-2 * (next_i()%2)) + 1) * next_i();
        fssrc->intra = ((-2 * (next_i()%2)) + 1) * next_i();
        fssrc->ec = ((-2 * (next_i()%2)) + 1) * next_i();
        fssrc->colorspace = ((-2 * (next_i()%2)) + 1) * next_i();
        fssrc->ac = ((-2 * (next_i()%2)) + 1) * next_i();
        fssrc->plane_count = ((-2 * (next_i()%2)) + 1) * next_i();
        fssrc->transparency = ((-2 * (next_i()%2)) + 1) * next_i();
        fssrc->chroma_v_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        fssrc->chroma_h_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        fssrc->chroma_planes = ((-2 * (next_i()%2)) + 1) * next_i();
        fssrc->micro_version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fsrc0 = 1;
          struct TYPE_5__ * fsrc = (struct TYPE_5__ *) malloc(_len_fsrc0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_fsrc0; _i0++) {
            fsrc->version = ((-2 * (next_i()%2)) + 1) * next_i();
        fsrc->slice_height = ((-2 * (next_i()%2)) + 1) * next_i();
        fsrc->slice_width = ((-2 * (next_i()%2)) + 1) * next_i();
        fsrc->slice_y = ((-2 * (next_i()%2)) + 1) * next_i();
        fsrc->slice_x = ((-2 * (next_i()%2)) + 1) * next_i();
        fsrc->slice_count = ((-2 * (next_i()%2)) + 1) * next_i();
        fsrc->packed_at_lsb = ((-2 * (next_i()%2)) + 1) * next_i();
        fsrc->bits_per_raw_sample = ((-2 * (next_i()%2)) + 1) * next_i();
        fsrc->key_frame_ok = ((-2 * (next_i()%2)) + 1) * next_i();
        fsrc->slice_damaged = ((-2 * (next_i()%2)) + 1) * next_i();
        fsrc->intra = ((-2 * (next_i()%2)) + 1) * next_i();
        fsrc->ec = ((-2 * (next_i()%2)) + 1) * next_i();
        fsrc->colorspace = ((-2 * (next_i()%2)) + 1) * next_i();
        fsrc->ac = ((-2 * (next_i()%2)) + 1) * next_i();
        fsrc->plane_count = ((-2 * (next_i()%2)) + 1) * next_i();
        fsrc->transparency = ((-2 * (next_i()%2)) + 1) * next_i();
        fsrc->chroma_v_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        fsrc->chroma_h_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        fsrc->chroma_planes = ((-2 * (next_i()%2)) + 1) * next_i();
        fsrc->micro_version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          copy_fields(fsdst,fssrc,fsrc);
          free(fsdst);
          free(fssrc);
          free(fsrc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
