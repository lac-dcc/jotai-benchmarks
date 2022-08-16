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
struct usb_function {struct usb_descriptor_header** fs_descriptors; struct usb_descriptor_header** hs_descriptors; struct usb_descriptor_header** ss_descriptors; struct usb_descriptor_header** ssp_descriptors; } ;
struct usb_descriptor_header {int dummy; } ;
typedef  enum usb_device_speed { ____Placeholder_usb_device_speed } usb_device_speed ;

/* Variables and functions */
#define  USB_SPEED_HIGH 130 
#define  USB_SPEED_SUPER 129 
#define  USB_SPEED_SUPER_PLUS 128 

__attribute__((used)) static struct usb_descriptor_header **
function_descriptors(struct usb_function *f,
		     enum usb_device_speed speed)
{
	struct usb_descriptor_header **descriptors;

	/*
	 * NOTE: we try to help gadget drivers which might not be setting
	 * max_speed appropriately.
	 */

	switch (speed) {
	case USB_SPEED_SUPER_PLUS:
		descriptors = f->ssp_descriptors;
		if (descriptors)
			break;
		/* FALLTHROUGH */
	case USB_SPEED_SUPER:
		descriptors = f->ss_descriptors;
		if (descriptors)
			break;
		/* FALLTHROUGH */
	case USB_SPEED_HIGH:
		descriptors = f->hs_descriptors;
		if (descriptors)
			break;
		/* FALLTHROUGH */
	default:
		descriptors = f->fs_descriptors;
	}

	/*
	 * if we can't find any descriptors at all, then this gadget deserves to
	 * Oops with a NULL pointer dereference
	 */

	return descriptors;
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
          enum usb_device_speed speed = 0;
          int _len_f0 = 1;
          struct usb_function * f = (struct usb_function *) malloc(_len_f0*sizeof(struct usb_function));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
              int _len_f__i0__fs_descriptors0 = 1;
          f[_i0].fs_descriptors = (struct usb_descriptor_header **) malloc(_len_f__i0__fs_descriptors0*sizeof(struct usb_descriptor_header *));
          for(int _j0 = 0; _j0 < _len_f__i0__fs_descriptors0; _j0++) {
            int _len_f__i0__fs_descriptors1 = 1;
            f[_i0].fs_descriptors[_j0] = (struct usb_descriptor_header *) malloc(_len_f__i0__fs_descriptors1*sizeof(struct usb_descriptor_header));
            for(int _j1 = 0; _j1 < _len_f__i0__fs_descriptors1; _j1++) {
              f[_i0].fs_descriptors[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_f__i0__hs_descriptors0 = 1;
          f[_i0].hs_descriptors = (struct usb_descriptor_header **) malloc(_len_f__i0__hs_descriptors0*sizeof(struct usb_descriptor_header *));
          for(int _j0 = 0; _j0 < _len_f__i0__hs_descriptors0; _j0++) {
            int _len_f__i0__hs_descriptors1 = 1;
            f[_i0].hs_descriptors[_j0] = (struct usb_descriptor_header *) malloc(_len_f__i0__hs_descriptors1*sizeof(struct usb_descriptor_header));
            for(int _j1 = 0; _j1 < _len_f__i0__hs_descriptors1; _j1++) {
              f[_i0].hs_descriptors[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_f__i0__ss_descriptors0 = 1;
          f[_i0].ss_descriptors = (struct usb_descriptor_header **) malloc(_len_f__i0__ss_descriptors0*sizeof(struct usb_descriptor_header *));
          for(int _j0 = 0; _j0 < _len_f__i0__ss_descriptors0; _j0++) {
            int _len_f__i0__ss_descriptors1 = 1;
            f[_i0].ss_descriptors[_j0] = (struct usb_descriptor_header *) malloc(_len_f__i0__ss_descriptors1*sizeof(struct usb_descriptor_header));
            for(int _j1 = 0; _j1 < _len_f__i0__ss_descriptors1; _j1++) {
              f[_i0].ss_descriptors[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_f__i0__ssp_descriptors0 = 1;
          f[_i0].ssp_descriptors = (struct usb_descriptor_header **) malloc(_len_f__i0__ssp_descriptors0*sizeof(struct usb_descriptor_header *));
          for(int _j0 = 0; _j0 < _len_f__i0__ssp_descriptors0; _j0++) {
            int _len_f__i0__ssp_descriptors1 = 1;
            f[_i0].ssp_descriptors[_j0] = (struct usb_descriptor_header *) malloc(_len_f__i0__ssp_descriptors1*sizeof(struct usb_descriptor_header));
            for(int _j1 = 0; _j1 < _len_f__i0__ssp_descriptors1; _j1++) {
              f[_i0].ssp_descriptors[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct usb_descriptor_header ** benchRet = function_descriptors(f,speed);
          printf("%d\n", (**benchRet).dummy);
          for(int _aux = 0; _aux < _len_f0; _aux++) {
          free(*(f[_aux].fs_descriptors));
        free(f[_aux].fs_descriptors);
          }
          for(int _aux = 0; _aux < _len_f0; _aux++) {
          free(*(f[_aux].hs_descriptors));
        free(f[_aux].hs_descriptors);
          }
          for(int _aux = 0; _aux < _len_f0; _aux++) {
          free(*(f[_aux].ss_descriptors));
        free(f[_aux].ss_descriptors);
          }
          for(int _aux = 0; _aux < _len_f0; _aux++) {
          free(*(f[_aux].ssp_descriptors));
        free(f[_aux].ssp_descriptors);
          }
          free(f);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
