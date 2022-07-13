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
typedef  scalar_t__ u32 ;
struct hid_parser {struct hid_device* device; } ;
struct hid_device {int /*<<< orphan*/  group; } ;

/* Variables and functions */
 scalar_t__ HID_DG_CONTACTID ; 
 int /*<<< orphan*/  HID_GROUP_MULTITOUCH ; 

__attribute__((used)) static void hid_scan_input_usage(struct hid_parser *parser, u32 usage)
{
	struct hid_device *hid = parser->device;

	if (usage == HID_DG_CONTACTID)
		hid->group = HID_GROUP_MULTITOUCH;
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
          long usage = 100;
          int _len_parser0 = 1;
          struct hid_parser * parser = (struct hid_parser *) malloc(_len_parser0*sizeof(struct hid_parser));
          for(int _i0 = 0; _i0 < _len_parser0; _i0++) {
              int _len_parser__i0__device0 = 1;
          parser[_i0].device = (struct hid_device *) malloc(_len_parser__i0__device0*sizeof(struct hid_device));
          for(int _j0 = 0; _j0 < _len_parser__i0__device0; _j0++) {
            parser[_i0].device->group = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          hid_scan_input_usage(parser,usage);
          for(int _aux = 0; _aux < _len_parser0; _aux++) {
          free(parser[_aux].device);
          }
          free(parser);
        
        break;
    }
    // big-arr
    case 1:
    {
          long usage = 255;
          int _len_parser0 = 65025;
          struct hid_parser * parser = (struct hid_parser *) malloc(_len_parser0*sizeof(struct hid_parser));
          for(int _i0 = 0; _i0 < _len_parser0; _i0++) {
              int _len_parser__i0__device0 = 1;
          parser[_i0].device = (struct hid_device *) malloc(_len_parser__i0__device0*sizeof(struct hid_device));
          for(int _j0 = 0; _j0 < _len_parser__i0__device0; _j0++) {
            parser[_i0].device->group = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          hid_scan_input_usage(parser,usage);
          for(int _aux = 0; _aux < _len_parser0; _aux++) {
          free(parser[_aux].device);
          }
          free(parser);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long usage = 10;
          int _len_parser0 = 100;
          struct hid_parser * parser = (struct hid_parser *) malloc(_len_parser0*sizeof(struct hid_parser));
          for(int _i0 = 0; _i0 < _len_parser0; _i0++) {
              int _len_parser__i0__device0 = 1;
          parser[_i0].device = (struct hid_device *) malloc(_len_parser__i0__device0*sizeof(struct hid_device));
          for(int _j0 = 0; _j0 < _len_parser__i0__device0; _j0++) {
            parser[_i0].device->group = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          hid_scan_input_usage(parser,usage);
          for(int _aux = 0; _aux < _len_parser0; _aux++) {
          free(parser[_aux].device);
          }
          free(parser);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
