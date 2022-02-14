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
       0            big-arr\n\
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
typedef  int u8 ;
struct hidpp_touchpad_raw_xy_finger {int x; int y; int contact_type; int contact_status; int z; int area; int finger_id; } ;

/* Variables and functions */

__attribute__((used)) static void hidpp_touchpad_touch_event(u8 *data,
	struct hidpp_touchpad_raw_xy_finger *finger)
{
	u8 x_m = data[0] << 2;
	u8 y_m = data[2] << 2;

	finger->x = x_m << 6 | data[1];
	finger->y = y_m << 6 | data[3];

	finger->contact_type = data[0] >> 6;
	finger->contact_status = data[2] >> 6;

	finger->z = data[4];
	finger->area = data[5];
	finger->finger_id = data[6] >> 4;
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

    // big-arr
    case 0:
    {
          int _len_data0 = 65025;
          int * data = (int *) malloc(_len_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_finger0 = 1;
          struct hidpp_touchpad_raw_xy_finger * finger = (struct hidpp_touchpad_raw_xy_finger *) malloc(_len_finger0*sizeof(struct hidpp_touchpad_raw_xy_finger));
          for(int _i0 = 0; _i0 < _len_finger0; _i0++) {
            finger->x = ((-2 * (next_i()%2)) + 1) * next_i();
        finger->y = ((-2 * (next_i()%2)) + 1) * next_i();
        finger->contact_type = ((-2 * (next_i()%2)) + 1) * next_i();
        finger->contact_status = ((-2 * (next_i()%2)) + 1) * next_i();
        finger->z = ((-2 * (next_i()%2)) + 1) * next_i();
        finger->area = ((-2 * (next_i()%2)) + 1) * next_i();
        finger->finger_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hidpp_touchpad_touch_event(data,finger);
          free(data);
          free(finger);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
