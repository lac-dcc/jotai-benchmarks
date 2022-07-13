// ========================================================================= //

// includes
#include <math.h>
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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
struct hid_usage {int dummy; } ;
struct hid_field {int dummy; } ;
struct hid_device {int dummy; } ;
typedef  scalar_t__ __s32 ;

/* Variables and functions */

__attribute__((used)) static int speedlink_event(struct hid_device *hdev, struct hid_field *field,
		struct hid_usage *usage, __s32 value)
{
	/* No other conditions due to usage_table. */

	/* This fixes the "jumpy" cursor occuring due to invalid events sent
	 * by the device. Some devices only send them with value==+256, others
	 * don't. However, catching abs(value)>=256 is restrictive enough not
	 * to interfere with devices that were bug-free (has been tested).
	 */
	if (abs(value) >= 256)
		return 1;
	/* Drop useless distance 0 events (on button clicks etc.) as well */
	if (value == 0)
		return 1;

	return 0;
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
          long value = 100;
          int _len_hdev0 = 1;
          struct hid_device * hdev = (struct hid_device *) malloc(_len_hdev0*sizeof(struct hid_device));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
            hdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_field0 = 1;
          struct hid_field * field = (struct hid_field *) malloc(_len_field0*sizeof(struct hid_field));
          for(int _i0 = 0; _i0 < _len_field0; _i0++) {
            field[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_usage0 = 1;
          struct hid_usage * usage = (struct hid_usage *) malloc(_len_usage0*sizeof(struct hid_usage));
          for(int _i0 = 0; _i0 < _len_usage0; _i0++) {
            usage[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = speedlink_event(hdev,field,usage,value);
          printf("%d\n", benchRet); 
          free(hdev);
          free(field);
          free(usage);
        
        break;
    }
    // big-arr
    case 1:
    {
          long value = 255;
          int _len_hdev0 = 65025;
          struct hid_device * hdev = (struct hid_device *) malloc(_len_hdev0*sizeof(struct hid_device));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
            hdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_field0 = 65025;
          struct hid_field * field = (struct hid_field *) malloc(_len_field0*sizeof(struct hid_field));
          for(int _i0 = 0; _i0 < _len_field0; _i0++) {
            field[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_usage0 = 65025;
          struct hid_usage * usage = (struct hid_usage *) malloc(_len_usage0*sizeof(struct hid_usage));
          for(int _i0 = 0; _i0 < _len_usage0; _i0++) {
            usage[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = speedlink_event(hdev,field,usage,value);
          printf("%d\n", benchRet); 
          free(hdev);
          free(field);
          free(usage);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long value = 10;
          int _len_hdev0 = 100;
          struct hid_device * hdev = (struct hid_device *) malloc(_len_hdev0*sizeof(struct hid_device));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
            hdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_field0 = 100;
          struct hid_field * field = (struct hid_field *) malloc(_len_field0*sizeof(struct hid_field));
          for(int _i0 = 0; _i0 < _len_field0; _i0++) {
            field[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_usage0 = 100;
          struct hid_usage * usage = (struct hid_usage *) malloc(_len_usage0*sizeof(struct hid_usage));
          for(int _i0 = 0; _i0 < _len_usage0; _i0++) {
            usage[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = speedlink_event(hdev,field,usage,value);
          printf("%d\n", benchRet); 
          free(hdev);
          free(field);
          free(usage);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
