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
       1            big-arr-10x\n\
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
typedef  int /*<<< orphan*/  uint32_t ;
struct link_encoder {int dummy; } ;
typedef  enum signal_type { ____Placeholder_signal_type } signal_type ;
typedef  enum dc_color_depth { ____Placeholder_dc_color_depth } dc_color_depth ;
typedef  enum clock_source_id { ____Placeholder_clock_source_id } clock_source_id ;

/* Variables and functions */

__attribute__((used)) static void virtual_link_encoder_enable_tmds_output(
	struct link_encoder *enc,
	enum clock_source_id clock_source,
	enum dc_color_depth color_depth,
	enum signal_type signal,
	uint32_t pixel_clock) {}


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
          enum clock_source_id clock_source = 0;
          enum dc_color_depth color_depth = 0;
          enum signal_type signal = 0;
          int pixel_clock = 100;
          int _len_enc0 = 1;
          struct link_encoder * enc = (struct link_encoder *) malloc(_len_enc0*sizeof(struct link_encoder));
          for(int _i0 = 0; _i0 < _len_enc0; _i0++) {
            enc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          virtual_link_encoder_enable_tmds_output(enc,clock_source,color_depth,signal,pixel_clock);
          free(enc);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          enum clock_source_id clock_source = 0;
          enum dc_color_depth color_depth = 0;
          enum signal_type signal = 0;
          int pixel_clock = 10;
          int _len_enc0 = 100;
          struct link_encoder * enc = (struct link_encoder *) malloc(_len_enc0*sizeof(struct link_encoder));
          for(int _i0 = 0; _i0 < _len_enc0; _i0++) {
            enc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          virtual_link_encoder_enable_tmds_output(enc,clock_source,color_depth,signal,pixel_clock);
          free(enc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}