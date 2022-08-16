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
struct psmouse {unsigned char* packet; struct elantech_data* private; } ;
struct TYPE_2__ {scalar_t__ reports_pressure; } ;
struct elantech_data {TYPE_1__ info; } ;

/* Variables and functions */

__attribute__((used)) static int elantech_packet_check_v2(struct psmouse *psmouse)
{
	struct elantech_data *etd = psmouse->private;
	unsigned char *packet = psmouse->packet;

	/*
	 * V2 hardware has two flavors. Older ones that do not report pressure,
	 * and newer ones that reports pressure and width. With newer ones, all
	 * packets (1, 2, 3 finger touch) have the same constant bits. With
	 * older ones, 1/3 finger touch packets and 2 finger touch packets
	 * have different constant bits.
	 * With all three cases, if the constant bits are not exactly what I
	 * expected, I consider them invalid.
	 */
	if (etd->info.reports_pressure)
		return (packet[0] & 0x0c) == 0x04 &&
		       (packet[3] & 0x0f) == 0x02;

	if ((packet[0] & 0xc0) == 0x80)
		return (packet[0] & 0x0c) == 0x0c &&
		       (packet[3] & 0x0e) == 0x08;

	return (packet[0] & 0x3c) == 0x3c &&
	       (packet[1] & 0xf0) == 0x00 &&
	       (packet[3] & 0x3e) == 0x38 &&
	       (packet[4] & 0xf0) == 0x00;
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
          int _len_psmouse0 = 1;
          struct psmouse * psmouse = (struct psmouse *) malloc(_len_psmouse0*sizeof(struct psmouse));
          for(int _i0 = 0; _i0 < _len_psmouse0; _i0++) {
              int _len_psmouse__i0__packet0 = 1;
          psmouse[_i0].packet = (unsigned char *) malloc(_len_psmouse__i0__packet0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_psmouse__i0__packet0; _j0++) {
            psmouse[_i0].packet[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_psmouse__i0__private0 = 1;
          psmouse[_i0].private = (struct elantech_data *) malloc(_len_psmouse__i0__private0*sizeof(struct elantech_data));
          for(int _j0 = 0; _j0 < _len_psmouse__i0__private0; _j0++) {
            psmouse[_i0].private->info.reports_pressure = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = elantech_packet_check_v2(psmouse);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_psmouse0; _aux++) {
          free(psmouse[_aux].packet);
          }
          for(int _aux = 0; _aux < _len_psmouse0; _aux++) {
          free(psmouse[_aux].private);
          }
          free(psmouse);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
