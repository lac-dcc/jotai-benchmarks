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
struct TYPE_3__ {int /*<<< orphan*/  avg_frame_rate; } ;
typedef  TYPE_1__ AVStream ;
typedef  int /*<<< orphan*/  AVRational ;
typedef  int /*<<< orphan*/  AVFormatContext ;

/* Variables and functions */

__attribute__((used)) static AVRational find_fps(AVFormatContext *s, AVStream *st)
{
    AVRational rate = st->avg_frame_rate;

#if FF_API_LAVF_AVCTX
    FF_DISABLE_DEPRECATION_WARNINGS
    rate = av_inv_q(st->codec->time_base);
    if (av_timecode_check_frame_rate(rate) < 0) {
        av_log(s, AV_LOG_DEBUG, "timecode: tbc=%d/%d invalid, fallback on %d/%d\n",
               rate.num, rate.den, st->avg_frame_rate.num, st->avg_frame_rate.den);
        rate = st->avg_frame_rate;
    }
    FF_ENABLE_DEPRECATION_WARNINGS
#endif

    return rate;
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
          int * s = (int *) malloc(_len_s0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_st0 = 1;
          struct TYPE_3__ * st = (struct TYPE_3__ *) malloc(_len_st0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
            st[_i0].avg_frame_rate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = find_fps(s,st);
          printf("%d\n", benchRet); 
          free(s);
          free(st);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
