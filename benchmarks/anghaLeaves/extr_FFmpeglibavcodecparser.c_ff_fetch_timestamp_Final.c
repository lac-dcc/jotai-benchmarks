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
struct TYPE_3__ {scalar_t__ dts; scalar_t__ pts; int pos; scalar_t__ offset; scalar_t__ cur_offset; scalar_t__* cur_frame_offset; scalar_t__ frame_offset; scalar_t__ next_frame_offset; scalar_t__* cur_frame_end; scalar_t__* cur_frame_dts; scalar_t__* cur_frame_pts; int* cur_frame_pos; } ;
typedef  TYPE_1__ AVCodecParserContext ;

/* Variables and functions */
 scalar_t__ AV_NOPTS_VALUE ; 
 int AV_PARSER_PTS_NB ; 
 scalar_t__ INT64_MAX ; 

void ff_fetch_timestamp(AVCodecParserContext *s, int off, int remove, int fuzzy)
{
    int i;

    if (!fuzzy) {
        s->dts    =
        s->pts    = AV_NOPTS_VALUE;
        s->pos    = -1;
        s->offset = 0;
    }
    for (i = 0; i < AV_PARSER_PTS_NB; i++) {
        if (s->cur_offset + off >= s->cur_frame_offset[i] &&
            (s->frame_offset < s->cur_frame_offset[i] ||
             (!s->frame_offset && !s->next_frame_offset)) && // first field/frame
            // check disabled since MPEG-TS does not send complete PES packets
            /*s->next_frame_offset + off <*/  s->cur_frame_end[i]){

            if (!fuzzy || s->cur_frame_dts[i] != AV_NOPTS_VALUE) {
                s->dts    = s->cur_frame_dts[i];
                s->pts    = s->cur_frame_pts[i];
                s->pos    = s->cur_frame_pos[i];
                s->offset = s->next_frame_offset - s->cur_frame_offset[i];
            }
            if (remove)
                s->cur_frame_offset[i] = INT64_MAX;
            if (s->cur_offset + off < s->cur_frame_end[i])
                break;
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
          int off = 100;
          int remove = 100;
          int fuzzy = 100;
          int _len_s0 = 1;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].dts = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].pts = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].cur_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__cur_frame_offset0 = 1;
          s[_i0].cur_frame_offset = (long *) malloc(_len_s__i0__cur_frame_offset0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_s__i0__cur_frame_offset0; _j0++) {
            s[_i0].cur_frame_offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].frame_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].next_frame_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__cur_frame_end0 = 1;
          s[_i0].cur_frame_end = (long *) malloc(_len_s__i0__cur_frame_end0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_s__i0__cur_frame_end0; _j0++) {
            s[_i0].cur_frame_end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__cur_frame_dts0 = 1;
          s[_i0].cur_frame_dts = (long *) malloc(_len_s__i0__cur_frame_dts0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_s__i0__cur_frame_dts0; _j0++) {
            s[_i0].cur_frame_dts[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__cur_frame_pts0 = 1;
          s[_i0].cur_frame_pts = (long *) malloc(_len_s__i0__cur_frame_pts0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_s__i0__cur_frame_pts0; _j0++) {
            s[_i0].cur_frame_pts[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__cur_frame_pos0 = 1;
          s[_i0].cur_frame_pos = (int *) malloc(_len_s__i0__cur_frame_pos0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__cur_frame_pos0; _j0++) {
            s[_i0].cur_frame_pos[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ff_fetch_timestamp(s,off,remove,fuzzy);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].cur_frame_offset);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].cur_frame_end);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].cur_frame_dts);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].cur_frame_pts);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].cur_frame_pos);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
