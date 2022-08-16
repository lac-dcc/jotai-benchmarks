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
struct rmi_device {int dummy; } ;
struct TYPE_2__ {int /*<<< orphan*/  bustype; int /*<<< orphan*/  vendor; } ;
struct input_dev {TYPE_1__ id; int /*<<< orphan*/  name; } ;

/* Variables and functions */
 int /*<<< orphan*/  BUS_RMI ; 
 int /*<<< orphan*/  SYNAPTICS_INPUT_DEVICE_NAME ; 
 int /*<<< orphan*/  SYNAPTICS_VENDOR_ID ; 

__attribute__((used)) static int rmi_driver_set_input_params(struct rmi_device *rmi_dev,
				struct input_dev *input)
{
	input->name = SYNAPTICS_INPUT_DEVICE_NAME;
	input->id.vendor  = SYNAPTICS_VENDOR_ID;
	input->id.bustype = BUS_RMI;
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
          int _len_rmi_dev0 = 1;
          struct rmi_device * rmi_dev = (struct rmi_device *) malloc(_len_rmi_dev0*sizeof(struct rmi_device));
          for(int _i0 = 0; _i0 < _len_rmi_dev0; _i0++) {
            rmi_dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_input0 = 1;
          struct input_dev * input = (struct input_dev *) malloc(_len_input0*sizeof(struct input_dev));
          for(int _i0 = 0; _i0 < _len_input0; _i0++) {
            input[_i0].id.bustype = ((-2 * (next_i()%2)) + 1) * next_i();
        input[_i0].id.vendor = ((-2 * (next_i()%2)) + 1) * next_i();
        input[_i0].name = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rmi_driver_set_input_params(rmi_dev,input);
          printf("%d\n", benchRet); 
          free(rmi_dev);
          free(input);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
