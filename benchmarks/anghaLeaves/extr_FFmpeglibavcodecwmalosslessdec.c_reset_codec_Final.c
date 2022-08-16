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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {int mclms_recent; int mclms_order; int num_channels; int* cdlms_ttl; int* transient; scalar_t__* transient_pos; int /*<<< orphan*/  samples_per_frame; TYPE_2__* channel; TYPE_1__** cdlms; } ;
typedef  TYPE_3__ WmallDecodeCtx ;
struct TYPE_6__ {int /*<<< orphan*/  transient_counter; } ;
struct TYPE_5__ {int /*<<< orphan*/  order; int /*<<< orphan*/  recent; } ;

/* Variables and functions */

__attribute__((used)) static void reset_codec(WmallDecodeCtx *s)
{
    int ich, ilms;
    s->mclms_recent = s->mclms_order * s->num_channels;
    for (ich = 0; ich < s->num_channels; ich++) {
        for (ilms = 0; ilms < s->cdlms_ttl[ich]; ilms++)
            s->cdlms[ich][ilms].recent = s->cdlms[ich][ilms].order;
        /* first sample of a seekable subframe is considered as the starting of
            a transient area which is samples_per_frame samples long */
        s->channel[ich].transient_counter = s->samples_per_frame;
        s->transient[ich]     = 1;
        s->transient_pos[ich] = 0;
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
          int _len_s0 = 1;
          struct TYPE_7__ * s = (struct TYPE_7__ *) malloc(_len_s0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].mclms_recent = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].mclms_order = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].num_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__cdlms_ttl0 = 1;
          s[_i0].cdlms_ttl = (int *) malloc(_len_s__i0__cdlms_ttl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__cdlms_ttl0; _j0++) {
            s[_i0].cdlms_ttl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__transient0 = 1;
          s[_i0].transient = (int *) malloc(_len_s__i0__transient0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__transient0; _j0++) {
            s[_i0].transient[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__transient_pos0 = 1;
          s[_i0].transient_pos = (long *) malloc(_len_s__i0__transient_pos0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_s__i0__transient_pos0; _j0++) {
            s[_i0].transient_pos[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].samples_per_frame = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__channel0 = 1;
          s[_i0].channel = (struct TYPE_6__ *) malloc(_len_s__i0__channel0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_s__i0__channel0; _j0++) {
            s[_i0].channel->transient_counter = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__cdlms0 = 1;
          s[_i0].cdlms = (struct TYPE_5__ **) malloc(_len_s__i0__cdlms0*sizeof(struct TYPE_5__ *));
          for(int _j0 = 0; _j0 < _len_s__i0__cdlms0; _j0++) {
            int _len_s__i0__cdlms1 = 1;
            s[_i0].cdlms[_j0] = (struct TYPE_5__ *) malloc(_len_s__i0__cdlms1*sizeof(struct TYPE_5__));
            for(int _j1 = 0; _j1 < _len_s__i0__cdlms1; _j1++) {
              s[_i0].cdlms[_j0]->order = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].cdlms[_j0]->recent = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          reset_codec(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].cdlms_ttl);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].transient);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].transient_pos);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].channel);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].cdlms));
        free(s[_aux].cdlms);
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
