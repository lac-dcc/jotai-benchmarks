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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int _active_count; int /*<<< orphan*/  hdcd_detected; scalar_t__ peak_extend; scalar_t__ max_gain_adjustment; } ;
typedef  TYPE_1__ hdcd_detection_data ;

/* Variables and functions */
 int /*<<< orphan*/  HDCD_EFFECTUAL ; 
 int /*<<< orphan*/  HDCD_NO_EFFECT ; 

__attribute__((used)) static void hdcd_detect_end(hdcd_detection_data *detect, int channels) {
    /* HDCD is detected if a valid packet is active in all
     * channels at the same time. */
    if (detect->_active_count == channels) {
        if (detect->max_gain_adjustment || detect->peak_extend)
            detect->hdcd_detected = HDCD_EFFECTUAL;
        else
            detect->hdcd_detected = HDCD_NO_EFFECT;
    }
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
          int channels = 100;
          int _len_detect0 = 1;
          struct TYPE_3__ * detect = (struct TYPE_3__ *) malloc(_len_detect0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_detect0; _i0++) {
            detect[_i0]._active_count = ((-2 * (next_i()%2)) + 1) * next_i();
        detect[_i0].hdcd_detected = ((-2 * (next_i()%2)) + 1) * next_i();
        detect[_i0].peak_extend = ((-2 * (next_i()%2)) + 1) * next_i();
        detect[_i0].max_gain_adjustment = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hdcd_detect_end(detect,channels);
          free(detect);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
