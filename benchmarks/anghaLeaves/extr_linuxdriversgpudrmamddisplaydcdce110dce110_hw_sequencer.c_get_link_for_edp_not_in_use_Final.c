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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct dc_state {int stream_count; TYPE_1__** streams; } ;
struct dc_link {TYPE_2__* local_sink; } ;
struct dc {int link_count; struct dc_link** links; } ;
struct TYPE_4__ {scalar_t__ sink_signal; } ;
struct TYPE_3__ {scalar_t__ signal; } ;

/* Variables and functions */
 scalar_t__ SIGNAL_TYPE_EDP ; 

__attribute__((used)) static struct dc_link *get_link_for_edp_not_in_use(
		struct dc *dc,
		struct dc_state *context)
{
	int i;
	struct dc_link *link = NULL;

	/* check if eDP panel is suppose to be set mode, if yes, no need to disable */
	for (i = 0; i < context->stream_count; i++) {
		if (context->streams[i]->signal == SIGNAL_TYPE_EDP)
			return NULL;
	}

	/* check if there is an eDP panel not in use */
	for (i = 0; i < dc->link_count; i++) {
		if (dc->links[i]->local_sink &&
			dc->links[i]->local_sink->sink_signal == SIGNAL_TYPE_EDP) {
			link = dc->links[i];
			break;
		}
	}

	return link;
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
          int _len_dc0 = 1;
          struct dc * dc = (struct dc *) malloc(_len_dc0*sizeof(struct dc));
          for(int _i0 = 0; _i0 < _len_dc0; _i0++) {
            dc[_i0].link_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dc__i0__links0 = 1;
          dc[_i0].links = (struct dc_link **) malloc(_len_dc__i0__links0*sizeof(struct dc_link *));
          for(int _j0 = 0; _j0 < _len_dc__i0__links0; _j0++) {
            int _len_dc__i0__links1 = 1;
            dc[_i0].links[_j0] = (struct dc_link *) malloc(_len_dc__i0__links1*sizeof(struct dc_link));
            for(int _j1 = 0; _j1 < _len_dc__i0__links1; _j1++) {
                int _len_dc__i0__links__j0__local_sink0 = 1;
          dc[_i0].links[_j0]->local_sink = (struct TYPE_4__ *) malloc(_len_dc__i0__links__j0__local_sink0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dc__i0__links__j0__local_sink0; _j0++) {
            dc[_i0].links[_j0]->local_sink->sink_signal = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int _len_context0 = 1;
          struct dc_state * context = (struct dc_state *) malloc(_len_context0*sizeof(struct dc_state));
          for(int _i0 = 0; _i0 < _len_context0; _i0++) {
            context[_i0].stream_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_context__i0__streams0 = 1;
          context[_i0].streams = (struct TYPE_3__ **) malloc(_len_context__i0__streams0*sizeof(struct TYPE_3__ *));
          for(int _j0 = 0; _j0 < _len_context__i0__streams0; _j0++) {
            int _len_context__i0__streams1 = 1;
            context[_i0].streams[_j0] = (struct TYPE_3__ *) malloc(_len_context__i0__streams1*sizeof(struct TYPE_3__));
            for(int _j1 = 0; _j1 < _len_context__i0__streams1; _j1++) {
              context[_i0].streams[_j0]->signal = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct dc_link * benchRet = get_link_for_edp_not_in_use(dc,context);
          for(int _aux = 0; _aux < _len_dc0; _aux++) {
          free(*(dc[_aux].links));
        free(dc[_aux].links);
          }
          free(dc);
          for(int _aux = 0; _aux < _len_context0; _aux++) {
          free(*(context[_aux].streams));
        free(context[_aux].streams);
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
