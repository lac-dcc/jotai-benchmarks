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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct TYPE_2__ {int /*<<< orphan*/  delay; int /*<<< orphan*/  event; scalar_t__ enabled; } ;
struct dc_stream_state {TYPE_1__ triggered_crtc_reset; } ;

/* Variables and functions */
 int /*<<< orphan*/  CRTC_EVENT_VSYNC_RISING ; 
 int /*<<< orphan*/  TRIGGER_DELAY_NEXT_LINE ; 

__attribute__((used)) static void set_multisync_trigger_params(
		struct dc_stream_state *stream)
{
	if (stream->triggered_crtc_reset.enabled) {
		stream->triggered_crtc_reset.event = CRTC_EVENT_VSYNC_RISING;
		stream->triggered_crtc_reset.delay = TRIGGER_DELAY_NEXT_LINE;
	}
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_stream0 = 65025;
          struct dc_stream_state * stream = (struct dc_stream_state *) malloc(_len_stream0*sizeof(struct dc_stream_state));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
              stream[_i0].triggered_crtc_reset.delay = ((-2 * (next_i()%2)) + 1) * next_i();
          stream[_i0].triggered_crtc_reset.event = ((-2 * (next_i()%2)) + 1) * next_i();
          stream[_i0].triggered_crtc_reset.enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          set_multisync_trigger_params(stream);
          free(stream);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_stream0 = 100;
          struct dc_stream_state * stream = (struct dc_stream_state *) malloc(_len_stream0*sizeof(struct dc_stream_state));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
              stream[_i0].triggered_crtc_reset.delay = ((-2 * (next_i()%2)) + 1) * next_i();
          stream[_i0].triggered_crtc_reset.event = ((-2 * (next_i()%2)) + 1) * next_i();
          stream[_i0].triggered_crtc_reset.enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          set_multisync_trigger_params(stream);
          free(stream);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_stream0 = 1;
          struct dc_stream_state * stream = (struct dc_stream_state *) malloc(_len_stream0*sizeof(struct dc_stream_state));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
              stream[_i0].triggered_crtc_reset.delay = ((-2 * (next_i()%2)) + 1) * next_i();
          stream[_i0].triggered_crtc_reset.event = ((-2 * (next_i()%2)) + 1) * next_i();
          stream[_i0].triggered_crtc_reset.enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          set_multisync_trigger_params(stream);
          free(stream);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
