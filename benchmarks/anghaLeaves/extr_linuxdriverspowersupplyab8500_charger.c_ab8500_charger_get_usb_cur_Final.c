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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int /*<<< orphan*/  usb_type_max; int /*<<< orphan*/  set_max; } ;
struct TYPE_3__ {int usb_current; } ;
struct ab8500_charger {TYPE_2__ max_usb_in_curr; TYPE_1__ usb_state; } ;

/* Variables and functions */
 int EPERM ; 
 int /*<<< orphan*/  USB_CH_IP_CUR_LVL_0P05 ; 
 int /*<<< orphan*/  USB_CH_IP_CUR_LVL_0P09 ; 
 int /*<<< orphan*/  USB_CH_IP_CUR_LVL_0P19 ; 
 int /*<<< orphan*/  USB_CH_IP_CUR_LVL_0P29 ; 
 int /*<<< orphan*/  USB_CH_IP_CUR_LVL_0P38 ; 
 int /*<<< orphan*/  USB_CH_IP_CUR_LVL_0P5 ; 

__attribute__((used)) static int ab8500_charger_get_usb_cur(struct ab8500_charger *di)
{
	int ret = 0;
	switch (di->usb_state.usb_current) {
	case 100:
		di->max_usb_in_curr.usb_type_max = USB_CH_IP_CUR_LVL_0P09;
		break;
	case 200:
		di->max_usb_in_curr.usb_type_max = USB_CH_IP_CUR_LVL_0P19;
		break;
	case 300:
		di->max_usb_in_curr.usb_type_max = USB_CH_IP_CUR_LVL_0P29;
		break;
	case 400:
		di->max_usb_in_curr.usb_type_max = USB_CH_IP_CUR_LVL_0P38;
		break;
	case 500:
		di->max_usb_in_curr.usb_type_max = USB_CH_IP_CUR_LVL_0P5;
		break;
	default:
		di->max_usb_in_curr.usb_type_max = USB_CH_IP_CUR_LVL_0P05;
		ret = -EPERM;
		break;
	};
	di->max_usb_in_curr.set_max = di->max_usb_in_curr.usb_type_max;
	return ret;
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
          int _len_di0 = 1;
          struct ab8500_charger * di = (struct ab8500_charger *) malloc(_len_di0*sizeof(struct ab8500_charger));
          for(int _i0 = 0; _i0 < _len_di0; _i0++) {
            di[_i0].max_usb_in_curr.usb_type_max = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].max_usb_in_curr.set_max = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].usb_state.usb_current = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ab8500_charger_get_usb_cur(di);
          printf("%d\n", benchRet); 
          free(di);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
