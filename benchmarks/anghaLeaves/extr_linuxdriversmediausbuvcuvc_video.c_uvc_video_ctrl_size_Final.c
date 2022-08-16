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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct uvc_streaming {TYPE_1__* dev; } ;
struct TYPE_2__ {int uvc_version; } ;

/* Variables and functions */

__attribute__((used)) static size_t uvc_video_ctrl_size(struct uvc_streaming *stream)
{
	/*
	 * Return the size of the video probe and commit controls, which depends
	 * on the protocol version.
	 */
	if (stream->dev->uvc_version < 0x0110)
		return 26;
	else if (stream->dev->uvc_version < 0x0150)
		return 34;
	else
		return 48;
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
          int _len_stream0 = 1;
          struct uvc_streaming * stream = (struct uvc_streaming *) malloc(_len_stream0*sizeof(struct uvc_streaming));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
              int _len_stream__i0__dev0 = 1;
          stream[_i0].dev = (struct TYPE_2__ *) malloc(_len_stream__i0__dev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_stream__i0__dev0; _j0++) {
            stream[_i0].dev->uvc_version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = uvc_video_ctrl_size(stream);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_stream0; _aux++) {
          free(stream[_aux].dev);
          }
          free(stream);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
