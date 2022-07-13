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
typedef  int /*<<< orphan*/  uint32_t ;
struct device_id {int device_type; int /*<<< orphan*/  enum_id; } ;
typedef  enum dal_device_type { ____Placeholder_dal_device_type } dal_device_type ;

/* Variables and functions */
 int /*<<< orphan*/  ATOM_DISPLAY_DFP1_SUPPORT ; 
 int /*<<< orphan*/  ATOM_DISPLAY_DFP2_SUPPORT ; 
 int /*<<< orphan*/  ATOM_DISPLAY_DFP3_SUPPORT ; 
 int /*<<< orphan*/  ATOM_DISPLAY_DFP4_SUPPORT ; 
 int /*<<< orphan*/  ATOM_DISPLAY_DFP5_SUPPORT ; 
 int /*<<< orphan*/  ATOM_DISPLAY_DFP6_SUPPORT ; 
 int /*<<< orphan*/  ATOM_DISPLAY_LCD1_SUPPORT ; 
#define  DEVICE_TYPE_DFP 129 
#define  DEVICE_TYPE_LCD 128 

__attribute__((used)) static uint32_t get_support_mask_for_device_id(struct device_id device_id)
{
	enum dal_device_type device_type = device_id.device_type;
	uint32_t enum_id = device_id.enum_id;

	switch (device_type) {
	case DEVICE_TYPE_LCD:
		switch (enum_id) {
		case 1:
			return ATOM_DISPLAY_LCD1_SUPPORT;
		default:
			break;
		}
		break;
	case DEVICE_TYPE_DFP:
		switch (enum_id) {
		case 1:
			return ATOM_DISPLAY_DFP1_SUPPORT;
		case 2:
			return ATOM_DISPLAY_DFP2_SUPPORT;
		case 3:
			return ATOM_DISPLAY_DFP3_SUPPORT;
		case 4:
			return ATOM_DISPLAY_DFP4_SUPPORT;
		case 5:
			return ATOM_DISPLAY_DFP5_SUPPORT;
		case 6:
			return ATOM_DISPLAY_DFP6_SUPPORT;
		default:
			break;
		}
		break;
	default:
		break;
	};

	/* Unidentified device ID, return empty support mask. */
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
          struct device_id device_id;
        device_id.device_type = ((-2 * (next_i()%2)) + 1) * next_i();
        device_id.enum_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int benchRet = get_support_mask_for_device_id(device_id);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          struct device_id device_id;
        device_id.device_type = ((-2 * (next_i()%2)) + 1) * next_i();
        device_id.enum_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int benchRet = get_support_mask_for_device_id(device_id);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          struct device_id device_id;
        device_id.device_type = ((-2 * (next_i()%2)) + 1) * next_i();
        device_id.enum_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int benchRet = get_support_mask_for_device_id(device_id);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
