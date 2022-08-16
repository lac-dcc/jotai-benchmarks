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
struct hid_device {int maxcollection; struct hid_collection* collection; } ;
struct hid_collection {scalar_t__ type; } ;

/* Variables and functions */
 scalar_t__ HID_COLLECTION_APPLICATION ; 
 scalar_t__ HID_COLLECTION_PHYSICAL ; 

__attribute__((used)) static int sensor_hub_get_physical_device_count(struct hid_device *hdev)
{
	int i;
	int count = 0;

	for (i = 0; i < hdev->maxcollection; ++i) {
		struct hid_collection *collection = &hdev->collection[i];
		if (collection->type == HID_COLLECTION_PHYSICAL ||
		    collection->type == HID_COLLECTION_APPLICATION)
			++count;
	}

	return count;
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
          int _len_hdev0 = 1;
          struct hid_device * hdev = (struct hid_device *) malloc(_len_hdev0*sizeof(struct hid_device));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
            hdev[_i0].maxcollection = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hdev__i0__collection0 = 1;
          hdev[_i0].collection = (struct hid_collection *) malloc(_len_hdev__i0__collection0*sizeof(struct hid_collection));
          for(int _j0 = 0; _j0 < _len_hdev__i0__collection0; _j0++) {
            hdev[_i0].collection->type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = sensor_hub_get_physical_device_count(hdev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hdev0; _aux++) {
          free(hdev[_aux].collection);
          }
          free(hdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
