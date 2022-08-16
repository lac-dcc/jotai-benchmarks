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
typedef  int /*<<< orphan*/  u32 ;
struct hci_dev {int dummy; } ;
struct btrtl_device_info {int dummy; } ;

/* Variables and functions */
 int ENOENT ; 

__attribute__((used)) static inline int btrtl_get_uart_settings(struct hci_dev *hdev,
					  struct btrtl_device_info *btrtl_dev,
					  unsigned int *controller_baudrate,
					  u32 *device_baudrate,
					  bool *flow_control)
{
	return -ENOENT;
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
          struct hci_dev * hdev = (struct hci_dev *) malloc(_len_hdev0*sizeof(struct hci_dev));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
            hdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_btrtl_dev0 = 1;
          struct btrtl_device_info * btrtl_dev = (struct btrtl_device_info *) malloc(_len_btrtl_dev0*sizeof(struct btrtl_device_info));
          for(int _i0 = 0; _i0 < _len_btrtl_dev0; _i0++) {
            btrtl_dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_controller_baudrate0 = 1;
          unsigned int * controller_baudrate = (unsigned int *) malloc(_len_controller_baudrate0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_controller_baudrate0; _i0++) {
            controller_baudrate[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_device_baudrate0 = 1;
          int * device_baudrate = (int *) malloc(_len_device_baudrate0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_device_baudrate0; _i0++) {
            device_baudrate[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_flow_control0 = 1;
          int * flow_control = (int *) malloc(_len_flow_control0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_flow_control0; _i0++) {
            flow_control[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = btrtl_get_uart_settings(hdev,btrtl_dev,controller_baudrate,device_baudrate,flow_control);
          printf("%d\n", benchRet); 
          free(hdev);
          free(btrtl_dev);
          free(controller_baudrate);
          free(device_baudrate);
          free(flow_control);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
