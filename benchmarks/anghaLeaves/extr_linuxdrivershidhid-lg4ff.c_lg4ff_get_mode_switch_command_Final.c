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
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  int u16 ;
struct lg4ff_compat_mode_switch {int dummy; } ;

/* Variables and functions */
#define  USB_DEVICE_ID_LOGITECH_DFGT_WHEEL 133 
#define  USB_DEVICE_ID_LOGITECH_DFP_WHEEL 132 
#define  USB_DEVICE_ID_LOGITECH_G25_WHEEL 131 
#define  USB_DEVICE_ID_LOGITECH_G27_WHEEL 130 
#define  USB_DEVICE_ID_LOGITECH_G29_WHEEL 129 
#define  USB_DEVICE_ID_LOGITECH_WHEEL 128 
 struct lg4ff_compat_mode_switch const lg4ff_mode_switch_ext01_dfp ; 
 struct lg4ff_compat_mode_switch const lg4ff_mode_switch_ext09_dfex ; 
 struct lg4ff_compat_mode_switch const lg4ff_mode_switch_ext09_dfgt ; 
 struct lg4ff_compat_mode_switch const lg4ff_mode_switch_ext09_dfp ; 
 struct lg4ff_compat_mode_switch const lg4ff_mode_switch_ext09_g25 ; 
 struct lg4ff_compat_mode_switch const lg4ff_mode_switch_ext09_g27 ; 
 struct lg4ff_compat_mode_switch const lg4ff_mode_switch_ext09_g29 ; 
 struct lg4ff_compat_mode_switch const lg4ff_mode_switch_ext16_g25 ; 

__attribute__((used)) static const struct lg4ff_compat_mode_switch *lg4ff_get_mode_switch_command(const u16 real_product_id, const u16 target_product_id)
{
	switch (real_product_id) {
	case USB_DEVICE_ID_LOGITECH_DFP_WHEEL:
		switch (target_product_id) {
		case USB_DEVICE_ID_LOGITECH_DFP_WHEEL:
			return &lg4ff_mode_switch_ext01_dfp;
		/* DFP can only be switched to its native mode */
		default:
			return NULL;
		}
		break;
	case USB_DEVICE_ID_LOGITECH_G25_WHEEL:
		switch (target_product_id) {
		case USB_DEVICE_ID_LOGITECH_DFP_WHEEL:
			return &lg4ff_mode_switch_ext01_dfp;
		case USB_DEVICE_ID_LOGITECH_G25_WHEEL:
			return &lg4ff_mode_switch_ext16_g25;
		/* G25 can only be switched to DFP mode or its native mode */
		default:
			return NULL;
		}
		break;
	case USB_DEVICE_ID_LOGITECH_G27_WHEEL:
		switch (target_product_id) {
		case USB_DEVICE_ID_LOGITECH_WHEEL:
			return &lg4ff_mode_switch_ext09_dfex;
		case USB_DEVICE_ID_LOGITECH_DFP_WHEEL:
			return &lg4ff_mode_switch_ext09_dfp;
		case USB_DEVICE_ID_LOGITECH_G25_WHEEL:
			return &lg4ff_mode_switch_ext09_g25;
		case USB_DEVICE_ID_LOGITECH_G27_WHEEL:
			return &lg4ff_mode_switch_ext09_g27;
		/* G27 can only be switched to DF-EX, DFP, G25 or its native mode */
		default:
			return NULL;
		}
		break;
	case USB_DEVICE_ID_LOGITECH_G29_WHEEL:
		switch (target_product_id) {
		case USB_DEVICE_ID_LOGITECH_DFP_WHEEL:
			return &lg4ff_mode_switch_ext09_dfp;
		case USB_DEVICE_ID_LOGITECH_DFGT_WHEEL:
			return &lg4ff_mode_switch_ext09_dfgt;
		case USB_DEVICE_ID_LOGITECH_G25_WHEEL:
			return &lg4ff_mode_switch_ext09_g25;
		case USB_DEVICE_ID_LOGITECH_G27_WHEEL:
			return &lg4ff_mode_switch_ext09_g27;
		case USB_DEVICE_ID_LOGITECH_G29_WHEEL:
			return &lg4ff_mode_switch_ext09_g29;
		/* G29 can only be switched to DF-EX, DFP, DFGT, G25, G27 or its native mode */
		default:
			return NULL;
		}
		break;
	case USB_DEVICE_ID_LOGITECH_DFGT_WHEEL:
		switch (target_product_id) {
		case USB_DEVICE_ID_LOGITECH_WHEEL:
			return &lg4ff_mode_switch_ext09_dfex;
		case USB_DEVICE_ID_LOGITECH_DFP_WHEEL:
			return &lg4ff_mode_switch_ext09_dfp;
		case USB_DEVICE_ID_LOGITECH_DFGT_WHEEL:
			return &lg4ff_mode_switch_ext09_dfgt;
		/* DFGT can only be switched to DF-EX, DFP or its native mode */
		default:
			return NULL;
		}
		break;
	/* No other wheels have multiple modes */
	default:
		return NULL;
	}
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
          const int real_product_id = 100;
          const int target_product_id = 100;
          const struct lg4ff_compat_mode_switch * benchRet = lg4ff_get_mode_switch_command(real_product_id,target_product_id);
        
        break;
    }
    // big-arr
    case 1:
    {
          const int real_product_id = 255;
          const int target_product_id = 255;
          const struct lg4ff_compat_mode_switch * benchRet = lg4ff_get_mode_switch_command(real_product_id,target_product_id);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const int real_product_id = 10;
          const int target_product_id = 10;
          const struct lg4ff_compat_mode_switch * benchRet = lg4ff_get_mode_switch_command(real_product_id,target_product_id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
