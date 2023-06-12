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
       0            empty\n\
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
struct usb_iso_packet_descriptor {int length; scalar_t__ offset; } ;
struct urb {int number_of_packets; int transfer_buffer_length; struct usb_iso_packet_descriptor* iso_frame_desc; } ;

/* Variables and functions */

__attribute__((used)) static void prepare_inurb(int number_of_packets, struct urb *iu)
{
	struct usb_iso_packet_descriptor *id;
	int p;

	iu->number_of_packets = number_of_packets;
	id = iu->iso_frame_desc;
	id->offset = 0;
	for (p = 0; p < iu->number_of_packets - 1; ++p)
		id[p + 1].offset = id[p].offset + id[p].length;

	iu->transfer_buffer_length =
		id[0].length * iu->number_of_packets;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // empty
    case 0:
    {
          // static_instructions_O0 : 27
          // dynamic_instructions_O0 : 27
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
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int number_of_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_iu0 = 1;
          struct urb * iu = (struct urb *) malloc(_len_iu0*sizeof(struct urb));
          for(int _i0 = 0; _i0 < _len_iu0; _i0++) {
              iu[_i0].number_of_packets = ((-2 * (next_i()%2)) + 1) * next_i();
          iu[_i0].transfer_buffer_length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iu__i0__iso_frame_desc0 = 1;
          iu[_i0].iso_frame_desc = (struct usb_iso_packet_descriptor *) malloc(_len_iu__i0__iso_frame_desc0*sizeof(struct usb_iso_packet_descriptor));
          for(int _j0 = 0; _j0 < _len_iu__i0__iso_frame_desc0; _j0++) {
              iu[_i0].iso_frame_desc->length = ((-2 * (next_i()%2)) + 1) * next_i();
          iu[_i0].iso_frame_desc->offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          prepare_inurb(number_of_packets,iu);
          for(int _aux = 0; _aux < _len_iu0; _aux++) {
          free(iu[_aux].iso_frame_desc);
          }
          free(iu);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
