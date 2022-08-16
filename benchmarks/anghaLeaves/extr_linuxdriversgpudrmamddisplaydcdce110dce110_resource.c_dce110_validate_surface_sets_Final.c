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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct dc_state {int stream_count; TYPE_4__** streams; TYPE_1__* stream_status; } ;
struct TYPE_6__ {int width; int height; } ;
struct dc_plane_state {scalar_t__ format; TYPE_2__ src_rect; } ;
struct TYPE_7__ {scalar_t__ pixel_encoding; } ;
struct TYPE_8__ {TYPE_3__ timing; } ;
struct TYPE_5__ {int plane_count; struct dc_plane_state** plane_states; } ;

/* Variables and functions */
 scalar_t__ PIXEL_ENCODING_RGB ; 
 scalar_t__ SURFACE_PIXEL_FORMAT_VIDEO_BEGIN ; 

__attribute__((used)) static bool dce110_validate_surface_sets(
		struct dc_state *context)
{
	int i, j;

	for (i = 0; i < context->stream_count; i++) {
		if (context->stream_status[i].plane_count == 0)
			continue;

		if (context->stream_status[i].plane_count > 2)
			return false;

		for (j = 0; j < context->stream_status[i].plane_count; j++) {
			struct dc_plane_state *plane =
				context->stream_status[i].plane_states[j];

			/* underlay validation */
			if (plane->format >= SURFACE_PIXEL_FORMAT_VIDEO_BEGIN) {

				if ((plane->src_rect.width > 1920 ||
					plane->src_rect.height > 1080))
					return false;

				/* we don't have the logic to support underlay
				 * only yet so block the use case where we get
				 * NV12 plane as top layer
				 */
				if (j == 0)
					return false;

				/* irrespective of plane format,
				 * stream should be RGB encoded
				 */
				if (context->streams[i]->timing.pixel_encoding
						!= PIXEL_ENCODING_RGB)
					return false;

			}

		}
	}

	return true;
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
          int _len_context0 = 1;
          struct dc_state * context = (struct dc_state *) malloc(_len_context0*sizeof(struct dc_state));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
            context[_i0].stream_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_context__i0__streams0 = 1;
          context[_i0].streams = (struct TYPE_8__ **) malloc(_len_context__i0__streams0*sizeof(struct TYPE_8__ *));
          for(int _j0 = 0; _j0 < _len_context__i0__streams0; _j0++) {
            int _len_context__i0__streams1 = 1;
            context[_i0].streams[_j0] = (struct TYPE_8__ *) malloc(_len_context__i0__streams1*sizeof(struct TYPE_8__));
            for(int _j1 = 0; _j1 < _len_context__i0__streams1; _j1++) {
              context[_i0].streams[_j0]->timing.pixel_encoding = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_context__i0__stream_status0 = 1;
          context[_i0].stream_status = (struct TYPE_5__ *) malloc(_len_context__i0__stream_status0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_context__i0__stream_status0; _j0++) {
            context[_i0].stream_status->plane_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_context__i0__stream_status_plane_states0 = 1;
          context[_i0].stream_status->plane_states = (struct dc_plane_state **) malloc(_len_context__i0__stream_status_plane_states0*sizeof(struct dc_plane_state *));
          for(int _j0 = 0; _j0 < _len_context__i0__stream_status_plane_states0; _j0++) {
            int _len_context__i0__stream_status_plane_states1 = 1;
            context[_i0].stream_status->plane_states[_j0] = (struct dc_plane_state *) malloc(_len_context__i0__stream_status_plane_states1*sizeof(struct dc_plane_state));
            for(int _j1 = 0; _j1 < _len_context__i0__stream_status_plane_states1; _j1++) {
              context[_i0].stream_status->plane_states[_j0]->format = ((-2 * (next_i()%2)) + 1) * next_i();
        context[_i0].stream_status->plane_states[_j0]->src_rect.width = ((-2 * (next_i()%2)) + 1) * next_i();
        context[_i0].stream_status->plane_states[_j0]->src_rect.height = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          int benchRet = dce110_validate_surface_sets(context);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_context0; _aux++) {
          free(*(context[_aux].streams));
        free(context[_aux].streams);
          }
          for(int _aux = 0; _aux < _len_context0; _aux++) {
          free(context[_aux].stream_status);
          }
          free(context);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
