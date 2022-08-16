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
struct TYPE_3__ {double max_gain_adjustment; int cdt_expirations; scalar_t__ _active_count; scalar_t__ uses_transient_filter; int /*<<< orphan*/  peak_extend; scalar_t__ errors; scalar_t__ total_packets; int /*<<< orphan*/  packet_type; int /*<<< orphan*/  hdcd_detected; } ;
typedef  TYPE_1__ hdcd_detection_data ;

/* Variables and functions */
 int /*<<< orphan*/  HDCD_NONE ; 
 int /*<<< orphan*/  HDCD_PE_NEVER ; 
 int /*<<< orphan*/  HDCD_PVER_NONE ; 

__attribute__((used)) static void hdcd_detect_reset(hdcd_detection_data *detect) {
    detect->hdcd_detected = HDCD_NONE;
    detect->packet_type = HDCD_PVER_NONE;
    detect->total_packets = 0;
    detect->errors = 0;
    detect->peak_extend = HDCD_PE_NEVER;
    detect->uses_transient_filter = 0;
    detect->max_gain_adjustment = 0.0;
    detect->cdt_expirations = -1;
    detect->_active_count = 0;
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
          int _len_detect0 = 1;
          struct TYPE_3__ * detect = (struct TYPE_3__ *) malloc(_len_detect0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_detect0; _i0++) {
            detect[_i0].max_gain_adjustment = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        detect[_i0].cdt_expirations = ((-2 * (next_i()%2)) + 1) * next_i();
        detect[_i0]._active_count = ((-2 * (next_i()%2)) + 1) * next_i();
        detect[_i0].uses_transient_filter = ((-2 * (next_i()%2)) + 1) * next_i();
        detect[_i0].peak_extend = ((-2 * (next_i()%2)) + 1) * next_i();
        detect[_i0].errors = ((-2 * (next_i()%2)) + 1) * next_i();
        detect[_i0].total_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        detect[_i0].packet_type = ((-2 * (next_i()%2)) + 1) * next_i();
        detect[_i0].hdcd_detected = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hdcd_detect_reset(detect);
          free(detect);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
