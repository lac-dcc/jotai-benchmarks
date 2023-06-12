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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct usb_interface {TYPE_2__* cur_altsetting; } ;
struct TYPE_3__ {int bInterfaceNumber; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;

/* Variables and functions */

__attribute__((used)) static inline int interface_to_InterfaceNumber(struct usb_interface *interface)
{
	if (!interface)
		return -1;
	if (!interface->cur_altsetting)
		return -1;
	return interface->cur_altsetting->desc.bInterfaceNumber;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_interface0 = 65025;
          struct usb_interface * interface = (struct usb_interface *) malloc(_len_interface0*sizeof(struct usb_interface));
          for(int _i0 = 0; _i0 < _len_interface0; _i0++) {
              int _len_interface__i0__cur_altsetting0 = 1;
          interface[_i0].cur_altsetting = (struct TYPE_4__ *) malloc(_len_interface__i0__cur_altsetting0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_interface__i0__cur_altsetting0; _j0++) {
              interface[_i0].cur_altsetting->desc.bInterfaceNumber = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          int benchRet = interface_to_InterfaceNumber(interface);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_interface0; _aux++) {
          free(interface[_aux].cur_altsetting);
          }
          free(interface);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_interface0 = 100;
          struct usb_interface * interface = (struct usb_interface *) malloc(_len_interface0*sizeof(struct usb_interface));
          for(int _i0 = 0; _i0 < _len_interface0; _i0++) {
              int _len_interface__i0__cur_altsetting0 = 1;
          interface[_i0].cur_altsetting = (struct TYPE_4__ *) malloc(_len_interface__i0__cur_altsetting0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_interface__i0__cur_altsetting0; _j0++) {
              interface[_i0].cur_altsetting->desc.bInterfaceNumber = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          int benchRet = interface_to_InterfaceNumber(interface);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_interface0; _aux++) {
          free(interface[_aux].cur_altsetting);
          }
          free(interface);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_interface0 = 1;
          struct usb_interface * interface = (struct usb_interface *) malloc(_len_interface0*sizeof(struct usb_interface));
          for(int _i0 = 0; _i0 < _len_interface0; _i0++) {
              int _len_interface__i0__cur_altsetting0 = 1;
          interface[_i0].cur_altsetting = (struct TYPE_4__ *) malloc(_len_interface__i0__cur_altsetting0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_interface__i0__cur_altsetting0; _j0++) {
              interface[_i0].cur_altsetting->desc.bInterfaceNumber = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          int benchRet = interface_to_InterfaceNumber(interface);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_interface0; _aux++) {
          free(interface[_aux].cur_altsetting);
          }
          free(interface);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
