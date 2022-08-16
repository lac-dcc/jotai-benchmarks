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
struct usb_device {scalar_t__ ttport; TYPE_1__* tt; } ;
struct TYPE_2__ {scalar_t__ multi; } ;

/* Variables and functions */

__attribute__((used)) static int same_tt(struct usb_device *dev1, struct usb_device *dev2)
{
	if (!dev1->tt || !dev2->tt)
		return 0;
	if (dev1->tt != dev2->tt)
		return 0;
	if (dev1->tt->multi)
		return dev1->ttport == dev2->ttport;
	else
		return 1;
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
          int _len_dev10 = 1;
          struct usb_device * dev1 = (struct usb_device *) malloc(_len_dev10*sizeof(struct usb_device));
          for(int _i0 = 0; _i0 < _len_dev10; _i0++) {
            dev1[_i0].ttport = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev1__i0__tt0 = 1;
          dev1[_i0].tt = (struct TYPE_2__ *) malloc(_len_dev1__i0__tt0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev1__i0__tt0; _j0++) {
            dev1[_i0].tt->multi = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_dev20 = 1;
          struct usb_device * dev2 = (struct usb_device *) malloc(_len_dev20*sizeof(struct usb_device));
          for(int _i0 = 0; _i0 < _len_dev20; _i0++) {
            dev2[_i0].ttport = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev2__i0__tt0 = 1;
          dev2[_i0].tt = (struct TYPE_2__ *) malloc(_len_dev2__i0__tt0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev2__i0__tt0; _j0++) {
            dev2[_i0].tt->multi = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = same_tt(dev1,dev2);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev10; _aux++) {
          free(dev1[_aux].tt);
          }
          free(dev1);
          for(int _aux = 0; _aux < _len_dev20; _aux++) {
          free(dev2[_aux].tt);
          }
          free(dev2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
