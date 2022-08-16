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
struct TYPE_3__ {int progressive_frame; int progressive_sequence; int f_code; int b_code; int slice_context_count; scalar_t__ picture_number; scalar_t__ coded_picture_number; int /*<<< orphan*/  picture_structure; int /*<<< orphan*/  chroma_qscale_table; int /*<<< orphan*/  c_dc_scale_table; int /*<<< orphan*/  y_dc_scale_table; } ;
typedef  TYPE_1__ MpegEncContext ;

/* Variables and functions */
 int /*<<< orphan*/  PICT_FRAME ; 
 int /*<<< orphan*/  ff_default_chroma_qscale_table ; 
 int /*<<< orphan*/  ff_mpeg1_dc_scale_table ; 

void ff_mpv_common_defaults(MpegEncContext *s)
{
    s->y_dc_scale_table      =
    s->c_dc_scale_table      = ff_mpeg1_dc_scale_table;
    s->chroma_qscale_table   = ff_default_chroma_qscale_table;
    s->progressive_frame     = 1;
    s->progressive_sequence  = 1;
    s->picture_structure     = PICT_FRAME;

    s->coded_picture_number  = 0;
    s->picture_number        = 0;

    s->f_code                = 1;
    s->b_code                = 1;

    s->slice_context_count   = 1;
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
          int _len_s0 = 1;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].progressive_frame = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].progressive_sequence = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].f_code = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].b_code = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].slice_context_count = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].picture_number = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].coded_picture_number = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].picture_structure = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].chroma_qscale_table = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].c_dc_scale_table = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].y_dc_scale_table = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_mpv_common_defaults(s);
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
