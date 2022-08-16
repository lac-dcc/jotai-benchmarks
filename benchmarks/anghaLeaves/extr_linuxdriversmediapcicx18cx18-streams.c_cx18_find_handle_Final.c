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
       1            linked\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ v4l2_dev; } ;
struct cx18_stream {scalar_t__ handle; TYPE_1__ video_dev; } ;
struct cx18 {struct cx18_stream* streams; } ;

/* Variables and functions */
 scalar_t__ CX18_INVALID_TASK_HANDLE ; 
 int CX18_MAX_STREAMS ; 

u32 cx18_find_handle(struct cx18 *cx)
{
	int i;

	/* find first available handle to be used for global settings */
	for (i = 0; i < CX18_MAX_STREAMS; i++) {
		struct cx18_stream *s = &cx->streams[i];

		if (s->video_dev.v4l2_dev && (s->handle != CX18_INVALID_TASK_HANDLE))
			return s->handle;
	}
	return CX18_INVALID_TASK_HANDLE;
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
          int _len_cx0 = 1;
          struct cx18 * cx = (struct cx18 *) malloc(_len_cx0*sizeof(struct cx18));
          for(int _i0 = 0; _i0 < _len_cx0; _i0++) {
              int _len_cx__i0__streams0 = 1;
          cx[_i0].streams = (struct cx18_stream *) malloc(_len_cx__i0__streams0*sizeof(struct cx18_stream));
          for(int _j0 = 0; _j0 < _len_cx__i0__streams0; _j0++) {
            cx[_i0].streams->handle = ((-2 * (next_i()%2)) + 1) * next_i();
        cx[_i0].streams->video_dev.v4l2_dev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = cx18_find_handle(cx);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_cx0; _aux++) {
          free(cx[_aux].streams);
          }
          free(cx);
        
        break;
    }
    // linked
    case 1:
    {
          int _len_cx0 = 1;
          struct cx18 * cx = (struct cx18 *) malloc(_len_cx0*sizeof(struct cx18));
          for(int _i0 = 0; _i0 < _len_cx0; _i0++) {
              int _len_cx__i0__streams0 = 1;
          cx[_i0].streams = (struct cx18_stream *) malloc(_len_cx__i0__streams0*sizeof(struct cx18_stream));
          for(int _j0 = 0; _j0 < _len_cx__i0__streams0; _j0++) {
            cx[_i0].streams->handle = ((-2 * (next_i()%2)) + 1) * next_i();
        cx[_i0].streams->video_dev.v4l2_dev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = cx18_find_handle(cx);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_cx0; _aux++) {
          free(cx[_aux].streams);
          }
          free(cx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
