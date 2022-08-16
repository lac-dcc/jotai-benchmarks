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
typedef  scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__ vbt; } ;
struct drm_psb_private {int child_dev_num; TYPE_1__ opregion; struct child_device_config* child_dev; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;
struct child_device_config {scalar_t__ device_type; scalar_t__ addin_offset; scalar_t__ i2c_pin; } ;

/* Variables and functions */
 scalar_t__ DEVICE_TYPE_INT_LFP ; 
 scalar_t__ DEVICE_TYPE_LFP ; 

__attribute__((used)) static bool lvds_is_present_in_vbt(struct drm_device *dev,
				   u8 *i2c_pin)
{
	struct drm_psb_private *dev_priv = dev->dev_private;
	int i;

	if (!dev_priv->child_dev_num)
		return true;

	for (i = 0; i < dev_priv->child_dev_num; i++) {
		struct child_device_config *child = dev_priv->child_dev + i;

		/* If the device type is not LFP, continue.
		 * We have to check both the new identifiers as well as the
		 * old for compatibility with some BIOSes.
		 */
		if (child->device_type != DEVICE_TYPE_INT_LFP &&
		    child->device_type != DEVICE_TYPE_LFP)
			continue;

		if (child->i2c_pin)
		    *i2c_pin = child->i2c_pin;

		/* However, we cannot trust the BIOS writers to populate
		 * the VBT correctly.  Since LVDS requires additional
		 * information from AIM blocks, a non-zero addin offset is
		 * a good indicator that the LVDS is actually present.
		 */
		if (child->addin_offset)
			return true;

		/* But even then some BIOS writers perform some black magic
		 * and instantiate the device without reference to any
		 * additional data.  Trust that if the VBT was written into
		 * the OpRegion then they have validated the LVDS's existence.
		 */
		if (dev_priv->opregion.vbt)
			return true;
	}

	return false;
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
          int _len_dev0 = 1;
          struct drm_device * dev = (struct drm_device *) malloc(_len_dev0*sizeof(struct drm_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__dev_private0 = 1;
          dev[_i0].dev_private = (struct drm_psb_private *) malloc(_len_dev__i0__dev_private0*sizeof(struct drm_psb_private));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev_private0; _j0++) {
            dev[_i0].dev_private->child_dev_num = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].dev_private->opregion.vbt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__dev_private_child_dev0 = 1;
          dev[_i0].dev_private->child_dev = (struct child_device_config *) malloc(_len_dev__i0__dev_private_child_dev0*sizeof(struct child_device_config));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev_private_child_dev0; _j0++) {
            dev[_i0].dev_private->child_dev->device_type = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].dev_private->child_dev->addin_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].dev_private->child_dev->i2c_pin = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_i2c_pin0 = 1;
          long * i2c_pin = (long *) malloc(_len_i2c_pin0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_i2c_pin0; _i0++) {
            i2c_pin[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = lvds_is_present_in_vbt(dev,i2c_pin);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].dev_private);
          }
          free(dev);
          free(i2c_pin);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
