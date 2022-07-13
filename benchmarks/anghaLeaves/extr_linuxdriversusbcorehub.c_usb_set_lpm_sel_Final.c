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
       0            linked\n\
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
struct usb_device {struct usb_device* parent; } ;
struct usb3_lpm_parameters {unsigned int pel; unsigned int sel; } ;

/* Variables and functions */

__attribute__((used)) static void usb_set_lpm_sel(struct usb_device *udev,
		struct usb3_lpm_parameters *udev_lpm_params)
{
	struct usb_device *parent;
	unsigned int num_hubs;
	unsigned int total_sel;

	/* t1 = device PEL */
	total_sel = udev_lpm_params->pel;
	/* How many external hubs are in between the device & the root port. */
	for (parent = udev->parent, num_hubs = 0; parent->parent;
			parent = parent->parent)
		num_hubs++;
	/* t2 = 2.1us + 250ns * (num_hubs - 1) */
	if (num_hubs > 0)
		total_sel += 2100 + 250 * (num_hubs - 1);

	/* t4 = 250ns * num_hubs */
	total_sel += 250 * num_hubs;

	udev_lpm_params->sel = total_sel;
}


// ------------------------------------------------------------------------- //

struct usb_device *_allocate_udev(int length, struct usb_device *aux_udev[]) {
  struct usb_device *walker = (struct usb_device *)malloc(sizeof(struct usb_device));

  aux_udev[0] = walker;
  walker->parent = NULL;

  struct usb_device *head = walker;
  for(int i = 1; i < length; i++) {
    walker->parent = (struct usb_device *)malloc(sizeof(struct usb_device));
    walker = walker->parent;
    aux_udev[i] = walker;
    walker->parent = NULL;
  }

  return head;
}

void _delete_udev(struct usb_device *aux_udev[], int aux_udev_size) {
  for(int i = 0; i < aux_udev_size; i++) 
    if(aux_udev[i])
      free(aux_udev[i]);
}




// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // linked
    case 0:
    {
          struct usb_device * aux_udev[10000];
          struct usb_device * udev = _allocate_udev(10000, aux_udev);
          int _len_udev_lpm_params0 = 1;
          struct usb3_lpm_parameters * udev_lpm_params = (struct usb3_lpm_parameters *) malloc(_len_udev_lpm_params0*sizeof(struct usb3_lpm_parameters));
          for(int _i0 = 0; _i0 < _len_udev_lpm_params0; _i0++) {
            udev_lpm_params[_i0].pel = ((-2 * (next_i()%2)) + 1) * next_i();
        udev_lpm_params[_i0].sel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          usb_set_lpm_sel(udev,udev_lpm_params);
          _delete_udev(aux_udev, 10000);
          free(udev_lpm_params);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
