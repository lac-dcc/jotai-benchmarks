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
struct TYPE_5__ {int /*<<< orphan*/  timestamp; TYPE_1__* planes; } ;
struct vb2_v4l2_buffer {int flags; TYPE_2__ vb2_buf; } ;
struct TYPE_6__ {int /*<<< orphan*/  dts; int /*<<< orphan*/  pts; int /*<<< orphan*/  mmal_flags; int /*<<< orphan*/  length; } ;
struct m2m_mmal_buffer {TYPE_3__ mmal; } ;
struct TYPE_4__ {int /*<<< orphan*/  bytesused; } ;

/* Variables and functions */
 int /*<<< orphan*/  MMAL_BUFFER_HEADER_FLAG_EOS ; 
 int /*<<< orphan*/  MMAL_BUFFER_HEADER_FLAG_FRAME_END ; 
 int /*<<< orphan*/  MMAL_BUFFER_HEADER_FLAG_KEYFRAME ; 
 int /*<<< orphan*/  MMAL_TIME_UNKNOWN ; 
 int V4L2_BUF_FLAG_KEYFRAME ; 
 int V4L2_BUF_FLAG_LAST ; 

__attribute__((used)) static void vb2_to_mmal_buffer(struct m2m_mmal_buffer *buf,
			       struct vb2_v4l2_buffer *vb2)
{
	buf->mmal.mmal_flags = 0;
	if (vb2->flags & V4L2_BUF_FLAG_KEYFRAME)
		buf->mmal.mmal_flags |= MMAL_BUFFER_HEADER_FLAG_KEYFRAME;

	/*
	 * Adding this means that the data must be framed correctly as one frame
	 * per buffer. The underlying decoder has no such requirement, but it
	 * will reduce latency as the bistream parser will be kicked immediately
	 * to parse the frame, rather than relying on its own heuristics for
	 * when to wake up.
	 */
	buf->mmal.mmal_flags |= MMAL_BUFFER_HEADER_FLAG_FRAME_END;

	buf->mmal.length = vb2->vb2_buf.planes[0].bytesused;
	/*
	 * Minor ambiguity in the V4L2 spec as to whether passing in a 0 length
	 * buffer, or one with V4L2_BUF_FLAG_LAST set denotes end of stream.
	 * Handle either.
	 */
	if (!buf->mmal.length || vb2->flags & V4L2_BUF_FLAG_LAST)
		buf->mmal.mmal_flags |= MMAL_BUFFER_HEADER_FLAG_EOS;

	buf->mmal.pts = vb2->vb2_buf.timestamp;
	buf->mmal.dts = MMAL_TIME_UNKNOWN;
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
          int _len_buf0 = 1;
          struct m2m_mmal_buffer * buf = (struct m2m_mmal_buffer *) malloc(_len_buf0*sizeof(struct m2m_mmal_buffer));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].mmal.dts = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].mmal.pts = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].mmal.mmal_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].mmal.length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vb20 = 1;
          struct vb2_v4l2_buffer * vb2 = (struct vb2_v4l2_buffer *) malloc(_len_vb20*sizeof(struct vb2_v4l2_buffer));
          for(int _i0 = 0; _i0 < _len_vb20; _i0++) {
            vb2[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        vb2[_i0].vb2_buf.timestamp = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vb2__i0__vb2_buf_planes0 = 1;
          vb2[_i0].vb2_buf.planes = (struct TYPE_4__ *) malloc(_len_vb2__i0__vb2_buf_planes0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_vb2__i0__vb2_buf_planes0; _j0++) {
            vb2[_i0].vb2_buf.planes->bytesused = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          vb2_to_mmal_buffer(buf,vb2);
          free(buf);
          free(vb2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
