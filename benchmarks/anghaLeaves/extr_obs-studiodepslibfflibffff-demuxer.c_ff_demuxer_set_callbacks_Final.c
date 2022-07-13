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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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

/* Type definitions */
struct ff_callbacks {void* frame_free; void* frame_initialize; int /*<<< orphan*/  initialize; int /*<<< orphan*/  format; void* frame; void* opaque; } ;
typedef  int /*<<< orphan*/  ff_callback_initialize ;
typedef  void* ff_callback_frame ;
typedef  int /*<<< orphan*/  ff_callback_format ;

/* Variables and functions */

void ff_demuxer_set_callbacks(struct ff_callbacks *callbacks,
		ff_callback_frame frame,
		ff_callback_format format,
		ff_callback_initialize initialize,
		ff_callback_frame frame_initialize,
		ff_callback_frame frame_free,
		void *opaque)
{
	callbacks->opaque = opaque;
	callbacks->frame = frame;
	callbacks->format = format;
	callbacks->initialize = initialize;
	callbacks->frame_initialize = frame_initialize;
	callbacks->frame_free = frame_free;
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
          int format = 100;
          int initialize = 100;
          int _len_callbacks0 = 1;
          struct ff_callbacks * callbacks = (struct ff_callbacks *) malloc(_len_callbacks0*sizeof(struct ff_callbacks));
          for(int _i0 = 0; _i0 < _len_callbacks0; _i0++) {
            callbacks[_i0].initialize = ((-2 * (next_i()%2)) + 1) * next_i();
        callbacks[_i0].format = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * frame;
          void * frame_initialize;
          void * frame_free;
          void * opaque;
          ff_demuxer_set_callbacks(callbacks,frame,format,initialize,frame_initialize,frame_free,opaque);
          free(callbacks);
        
        break;
    }
    // big-arr
    case 1:
    {
          int format = 255;
          int initialize = 255;
          int _len_callbacks0 = 65025;
          struct ff_callbacks * callbacks = (struct ff_callbacks *) malloc(_len_callbacks0*sizeof(struct ff_callbacks));
          for(int _i0 = 0; _i0 < _len_callbacks0; _i0++) {
            callbacks[_i0].initialize = ((-2 * (next_i()%2)) + 1) * next_i();
        callbacks[_i0].format = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * frame;
          void * frame_initialize;
          void * frame_free;
          void * opaque;
          ff_demuxer_set_callbacks(callbacks,frame,format,initialize,frame_initialize,frame_free,opaque);
          free(callbacks);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int format = 10;
          int initialize = 10;
          int _len_callbacks0 = 100;
          struct ff_callbacks * callbacks = (struct ff_callbacks *) malloc(_len_callbacks0*sizeof(struct ff_callbacks));
          for(int _i0 = 0; _i0 < _len_callbacks0; _i0++) {
            callbacks[_i0].initialize = ((-2 * (next_i()%2)) + 1) * next_i();
        callbacks[_i0].format = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * frame;
          void * frame_initialize;
          void * frame_free;
          void * opaque;
          ff_demuxer_set_callbacks(callbacks,frame,format,initialize,frame_initialize,frame_free,opaque);
          free(callbacks);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
