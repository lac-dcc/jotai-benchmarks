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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u8 ;
struct lg_drv_data {struct lg4ff_device_entry* device_props; } ;
struct TYPE_2__ {int product_id; scalar_t__ combine; } ;
struct lg4ff_device_entry {TYPE_1__ wdata; } ;
struct hid_report {int dummy; } ;
struct hid_device {int dummy; } ;

/* Variables and functions */
#define  USB_DEVICE_ID_LOGITECH_DFGT_WHEEL 137 
#define  USB_DEVICE_ID_LOGITECH_DFP_WHEEL 136 
#define  USB_DEVICE_ID_LOGITECH_G25_WHEEL 135 
#define  USB_DEVICE_ID_LOGITECH_G27_WHEEL 134 
#define  USB_DEVICE_ID_LOGITECH_G29_WHEEL 133 
#define  USB_DEVICE_ID_LOGITECH_MOMO_WHEEL 132 
#define  USB_DEVICE_ID_LOGITECH_MOMO_WHEEL2 131 
#define  USB_DEVICE_ID_LOGITECH_WHEEL 130 
#define  USB_DEVICE_ID_LOGITECH_WII_WHEEL 129 
#define  USB_DEVICE_ID_LOGITECH_WINGMAN_FFG 128 

int lg4ff_raw_event(struct hid_device *hdev, struct hid_report *report,
		u8 *rd, int size, struct lg_drv_data *drv_data)
{
	int offset;
	struct lg4ff_device_entry *entry = drv_data->device_props;

	if (!entry)
		return 0;

	/* adjust HID report present combined pedals data */
	if (entry->wdata.combine) {
		switch (entry->wdata.product_id) {
		case USB_DEVICE_ID_LOGITECH_WHEEL:
			rd[5] = rd[3];
			rd[6] = 0x7F;
			return 1;
		case USB_DEVICE_ID_LOGITECH_WINGMAN_FFG:
		case USB_DEVICE_ID_LOGITECH_MOMO_WHEEL:
		case USB_DEVICE_ID_LOGITECH_MOMO_WHEEL2:
			rd[4] = rd[3];
			rd[5] = 0x7F;
			return 1;
		case USB_DEVICE_ID_LOGITECH_DFP_WHEEL:
			rd[5] = rd[4];
			rd[6] = 0x7F;
			return 1;
		case USB_DEVICE_ID_LOGITECH_G25_WHEEL:
		case USB_DEVICE_ID_LOGITECH_G27_WHEEL:
			offset = 5;
			break;
		case USB_DEVICE_ID_LOGITECH_DFGT_WHEEL:
		case USB_DEVICE_ID_LOGITECH_G29_WHEEL:
			offset = 6;
			break;
		case USB_DEVICE_ID_LOGITECH_WII_WHEEL:
			offset = 3;
			break;
		default:
			return 0;
		}

		/* Compute a combined axis when wheel does not supply it */
		rd[offset] = (0xFF + rd[offset] - rd[offset+1]) >> 1;
		rd[offset+1] = 0x7F;
		return 1;
	}

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
          int size = 100;
          int _len_hdev0 = 1;
          struct hid_device * hdev = (struct hid_device *) malloc(_len_hdev0*sizeof(struct hid_device));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
            hdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_report0 = 1;
          struct hid_report * report = (struct hid_report *) malloc(_len_report0*sizeof(struct hid_report));
          for(int _i0 = 0; _i0 < _len_report0; _i0++) {
            report[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rd0 = 1;
          int * rd = (int *) malloc(_len_rd0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rd0; _i0++) {
            rd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_drv_data0 = 1;
          struct lg_drv_data * drv_data = (struct lg_drv_data *) malloc(_len_drv_data0*sizeof(struct lg_drv_data));
          for(int _i0 = 0; _i0 < _len_drv_data0; _i0++) {
              int _len_drv_data__i0__device_props0 = 1;
          drv_data[_i0].device_props = (struct lg4ff_device_entry *) malloc(_len_drv_data__i0__device_props0*sizeof(struct lg4ff_device_entry));
          for(int _j0 = 0; _j0 < _len_drv_data__i0__device_props0; _j0++) {
            drv_data[_i0].device_props->wdata.product_id = ((-2 * (next_i()%2)) + 1) * next_i();
        drv_data[_i0].device_props->wdata.combine = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = lg4ff_raw_event(hdev,report,rd,size,drv_data);
          printf("%d\n", benchRet); 
          free(hdev);
          free(report);
          free(rd);
          for(int _aux = 0; _aux < _len_drv_data0; _aux++) {
          free(drv_data[_aux].device_props);
          }
          free(drv_data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int size = 255;
          int _len_hdev0 = 65025;
          struct hid_device * hdev = (struct hid_device *) malloc(_len_hdev0*sizeof(struct hid_device));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
            hdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_report0 = 65025;
          struct hid_report * report = (struct hid_report *) malloc(_len_report0*sizeof(struct hid_report));
          for(int _i0 = 0; _i0 < _len_report0; _i0++) {
            report[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rd0 = 65025;
          int * rd = (int *) malloc(_len_rd0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rd0; _i0++) {
            rd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_drv_data0 = 65025;
          struct lg_drv_data * drv_data = (struct lg_drv_data *) malloc(_len_drv_data0*sizeof(struct lg_drv_data));
          for(int _i0 = 0; _i0 < _len_drv_data0; _i0++) {
              int _len_drv_data__i0__device_props0 = 1;
          drv_data[_i0].device_props = (struct lg4ff_device_entry *) malloc(_len_drv_data__i0__device_props0*sizeof(struct lg4ff_device_entry));
          for(int _j0 = 0; _j0 < _len_drv_data__i0__device_props0; _j0++) {
            drv_data[_i0].device_props->wdata.product_id = ((-2 * (next_i()%2)) + 1) * next_i();
        drv_data[_i0].device_props->wdata.combine = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = lg4ff_raw_event(hdev,report,rd,size,drv_data);
          printf("%d\n", benchRet); 
          free(hdev);
          free(report);
          free(rd);
          for(int _aux = 0; _aux < _len_drv_data0; _aux++) {
          free(drv_data[_aux].device_props);
          }
          free(drv_data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int size = 10;
          int _len_hdev0 = 100;
          struct hid_device * hdev = (struct hid_device *) malloc(_len_hdev0*sizeof(struct hid_device));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
            hdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_report0 = 100;
          struct hid_report * report = (struct hid_report *) malloc(_len_report0*sizeof(struct hid_report));
          for(int _i0 = 0; _i0 < _len_report0; _i0++) {
            report[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rd0 = 100;
          int * rd = (int *) malloc(_len_rd0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rd0; _i0++) {
            rd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_drv_data0 = 100;
          struct lg_drv_data * drv_data = (struct lg_drv_data *) malloc(_len_drv_data0*sizeof(struct lg_drv_data));
          for(int _i0 = 0; _i0 < _len_drv_data0; _i0++) {
              int _len_drv_data__i0__device_props0 = 1;
          drv_data[_i0].device_props = (struct lg4ff_device_entry *) malloc(_len_drv_data__i0__device_props0*sizeof(struct lg4ff_device_entry));
          for(int _j0 = 0; _j0 < _len_drv_data__i0__device_props0; _j0++) {
            drv_data[_i0].device_props->wdata.product_id = ((-2 * (next_i()%2)) + 1) * next_i();
        drv_data[_i0].device_props->wdata.combine = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = lg4ff_raw_event(hdev,report,rd,size,drv_data);
          printf("%d\n", benchRet); 
          free(hdev);
          free(report);
          free(rd);
          for(int _aux = 0; _aux < _len_drv_data0; _aux++) {
          free(drv_data[_aux].device_props);
          }
          free(drv_data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
