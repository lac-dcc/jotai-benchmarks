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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int /*<<< orphan*/  partitioned_frame; int /*<<< orphan*/  progressive_frame; int /*<<< orphan*/  frame_pred_frame_dct; int /*<<< orphan*/  gop_picture_number; int /*<<< orphan*/  picture_in_gop_number; int /*<<< orphan*/  lambda2; int /*<<< orphan*/  lambda; int /*<<< orphan*/  qscale; int /*<<< orphan*/  b_code; int /*<<< orphan*/  f_code; int /*<<< orphan*/  current_picture; int /*<<< orphan*/  pict_type; } ;
typedef  TYPE_1__ MpegEncContext ;

/* Variables and functions */

__attribute__((used)) static void update_duplicate_context_after_me(MpegEncContext *dst,
                                              MpegEncContext *src)
{
#define COPY(a) dst->a= src->a
    COPY(pict_type);
    COPY(current_picture);
    COPY(f_code);
    COPY(b_code);
    COPY(qscale);
    COPY(lambda);
    COPY(lambda2);
    COPY(picture_in_gop_number);
    COPY(gop_picture_number);
    COPY(frame_pred_frame_dct); // FIXME don't set in encode_header
    COPY(progressive_frame);    // FIXME don't set in encode_header
    COPY(partitioned_frame);    // FIXME don't set in encode_header
#undef COPY
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
          int _len_dst0 = 1;
          struct TYPE_4__ * dst = (struct TYPE_4__ *) malloc(_len_dst0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0].partitioned_frame = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].progressive_frame = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].frame_pred_frame_dct = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].gop_picture_number = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].picture_in_gop_number = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].lambda2 = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].lambda = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].qscale = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].b_code = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].f_code = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].current_picture = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].pict_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 1;
          struct TYPE_4__ * src = (struct TYPE_4__ *) malloc(_len_src0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0].partitioned_frame = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].progressive_frame = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].frame_pred_frame_dct = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].gop_picture_number = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].picture_in_gop_number = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].lambda2 = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].lambda = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].qscale = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].b_code = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].f_code = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].current_picture = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].pict_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          update_duplicate_context_after_me(dst,src);
          free(dst);
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
