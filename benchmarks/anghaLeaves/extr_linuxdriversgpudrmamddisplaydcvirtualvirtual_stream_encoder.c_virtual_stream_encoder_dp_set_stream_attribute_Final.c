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

/* Type definitions */
struct stream_encoder {int dummy; } ;
struct dc_crtc_timing {int dummy; } ;
typedef  enum dc_color_space { ____Placeholder_dc_color_space } dc_color_space ;

/* Variables and functions */

__attribute__((used)) static void virtual_stream_encoder_dp_set_stream_attribute(
	struct stream_encoder *enc,
	struct dc_crtc_timing *crtc_timing,
	enum dc_color_space output_color_space) {}


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
          enum dc_color_space output_color_space = 0;
          int _len_enc0 = 1;
          struct stream_encoder * enc = (struct stream_encoder *) malloc(_len_enc0*sizeof(struct stream_encoder));
          for(int _i0 = 0; _i0 < _len_enc0; _i0++) {
            enc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_crtc_timing0 = 1;
          struct dc_crtc_timing * crtc_timing = (struct dc_crtc_timing *) malloc(_len_crtc_timing0*sizeof(struct dc_crtc_timing));
          for(int _i0 = 0; _i0 < _len_crtc_timing0; _i0++) {
            crtc_timing[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          virtual_stream_encoder_dp_set_stream_attribute(enc,crtc_timing,output_color_space);
          free(enc);
          free(crtc_timing);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
