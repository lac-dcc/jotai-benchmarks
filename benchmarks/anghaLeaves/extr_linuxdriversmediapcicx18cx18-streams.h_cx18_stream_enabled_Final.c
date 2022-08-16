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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ v4l2_dev; } ;
struct cx18_stream {size_t type; TYPE_3__* cx; TYPE_2__* dvb; TYPE_1__ video_dev; } ;
struct TYPE_6__ {scalar_t__* stream_buffers; } ;
struct TYPE_5__ {scalar_t__ enabled; } ;

/* Variables and functions */
 size_t CX18_ENC_STREAM_TYPE_IDX ; 

__attribute__((used)) static inline bool cx18_stream_enabled(struct cx18_stream *s)
{
	return s->video_dev.v4l2_dev ||
	       (s->dvb && s->dvb->enabled) ||
	       (s->type == CX18_ENC_STREAM_TYPE_IDX &&
		s->cx->stream_buffers[CX18_ENC_STREAM_TYPE_IDX] != 0);
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
          struct cx18_stream * s = (struct cx18_stream *) malloc(_len_s0*sizeof(struct cx18_stream));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__cx0 = 1;
          s[_i0].cx = (struct TYPE_6__ *) malloc(_len_s__i0__cx0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_s__i0__cx0; _j0++) {
              int _len_s__i0__cx_stream_buffers0 = 1;
          s[_i0].cx->stream_buffers = (long *) malloc(_len_s__i0__cx_stream_buffers0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_s__i0__cx_stream_buffers0; _j0++) {
            s[_i0].cx->stream_buffers[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_s__i0__dvb0 = 1;
          s[_i0].dvb = (struct TYPE_5__ *) malloc(_len_s__i0__dvb0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_s__i0__dvb0; _j0++) {
            s[_i0].dvb->enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].video_dev.v4l2_dev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cx18_stream_enabled(s);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].cx);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].dvb);
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
