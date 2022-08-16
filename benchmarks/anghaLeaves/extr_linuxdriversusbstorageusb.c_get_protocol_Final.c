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
struct us_data {int subclass; char* protocol_name; void* proto_handler; int /*<<< orphan*/  max_lun; } ;

/* Variables and functions */
#define  USB_SC_8020 133 
#define  USB_SC_8070 132 
#define  USB_SC_QIC 131 
#define  USB_SC_RBC 130 
#define  USB_SC_SCSI 129 
#define  USB_SC_UFI 128 
 void* usb_stor_pad12_command ; 
 void* usb_stor_transparent_scsi_command ; 
 void* usb_stor_ufi_command ; 

__attribute__((used)) static void get_protocol(struct us_data *us)
{
	switch (us->subclass) {
	case USB_SC_RBC:
		us->protocol_name = "Reduced Block Commands (RBC)";
		us->proto_handler = usb_stor_transparent_scsi_command;
		break;

	case USB_SC_8020:
		us->protocol_name = "8020i";
		us->proto_handler = usb_stor_pad12_command;
		us->max_lun = 0;
		break;

	case USB_SC_QIC:
		us->protocol_name = "QIC-157";
		us->proto_handler = usb_stor_pad12_command;
		us->max_lun = 0;
		break;

	case USB_SC_8070:
		us->protocol_name = "8070i";
		us->proto_handler = usb_stor_pad12_command;
		us->max_lun = 0;
		break;

	case USB_SC_SCSI:
		us->protocol_name = "Transparent SCSI";
		us->proto_handler = usb_stor_transparent_scsi_command;
		break;

	case USB_SC_UFI:
		us->protocol_name = "Uniform Floppy Interface (UFI)";
		us->proto_handler = usb_stor_ufi_command;
		break;
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
          int _len_us0 = 1;
          struct us_data * us = (struct us_data *) malloc(_len_us0*sizeof(struct us_data));
          for(int _i0 = 0; _i0 < _len_us0; _i0++) {
            us[_i0].subclass = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_us__i0__protocol_name0 = 1;
          us[_i0].protocol_name = (char *) malloc(_len_us__i0__protocol_name0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_us__i0__protocol_name0; _j0++) {
            us[_i0].protocol_name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        us[_i0].max_lun = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_protocol(us);
          for(int _aux = 0; _aux < _len_us0; _aux++) {
          free(us[_aux].protocol_name);
          }
          free(us);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
