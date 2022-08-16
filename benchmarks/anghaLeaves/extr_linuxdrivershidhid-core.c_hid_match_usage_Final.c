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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct hid_usage_id {int usage_type; int usage_hid; int usage_code; } ;
struct hid_usage {int hid; int type; int code; } ;
struct hid_device {TYPE_1__* driver; } ;
struct TYPE_2__ {struct hid_usage_id* usage_table; } ;

/* Variables and functions */
 int HID_ANY_ID ; 

__attribute__((used)) static int hid_match_usage(struct hid_device *hid, struct hid_usage *usage)
{
	const struct hid_usage_id *id = hid->driver->usage_table;

	if (!id) /* NULL means all */
		return 1;

	for (; id->usage_type != HID_ANY_ID - 1; id++)
		if ((id->usage_hid == HID_ANY_ID ||
				id->usage_hid == usage->hid) &&
				(id->usage_type == HID_ANY_ID ||
				id->usage_type == usage->type) &&
				(id->usage_code == HID_ANY_ID ||
				 id->usage_code == usage->code))
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
          int _len_hid0 = 1;
          struct hid_device * hid = (struct hid_device *) malloc(_len_hid0*sizeof(struct hid_device));
          for(int _i0 = 0; _i0 < _len_hid0; _i0++) {
              int _len_hid__i0__driver0 = 1;
          hid[_i0].driver = (struct TYPE_2__ *) malloc(_len_hid__i0__driver0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hid__i0__driver0; _j0++) {
              int _len_hid__i0__driver_usage_table0 = 1;
          hid[_i0].driver->usage_table = (struct hid_usage_id *) malloc(_len_hid__i0__driver_usage_table0*sizeof(struct hid_usage_id));
          for(int _j0 = 0; _j0 < _len_hid__i0__driver_usage_table0; _j0++) {
            hid[_i0].driver->usage_table->usage_type = ((-2 * (next_i()%2)) + 1) * next_i();
        hid[_i0].driver->usage_table->usage_hid = ((-2 * (next_i()%2)) + 1) * next_i();
        hid[_i0].driver->usage_table->usage_code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_usage0 = 1;
          struct hid_usage * usage = (struct hid_usage *) malloc(_len_usage0*sizeof(struct hid_usage));
          for(int _i0 = 0; _i0 < _len_usage0; _i0++) {
            usage[_i0].hid = ((-2 * (next_i()%2)) + 1) * next_i();
        usage[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        usage[_i0].code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hid_match_usage(hid,usage);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hid0; _aux++) {
          free(hid[_aux].driver);
          }
          free(hid);
          free(usage);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
