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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ Layer_nb; scalar_t__ Msg_length; scalar_t__ Msg_offset; scalar_t__ CSn_Id; scalar_t__ Class_Id; scalar_t__ last_byte; scalar_t__ Id; } ;
typedef  TYPE_1__ opj_jpt_msg_header_t ;

/* Variables and functions */

void jpt_init_msg_header(opj_jpt_msg_header_t * header) {
	header->Id = 0;		/* In-class Identifier    */
	header->last_byte = 0;	/* Last byte information  */
	header->Class_Id = 0;		/* Class Identifier       */
	header->CSn_Id = 0;		/* CSn : index identifier */
	header->Msg_offset = 0;	/* Message offset         */
	header->Msg_length = 0;	/* Message length         */
	header->Layer_nb = 0;		/* Auxiliary for JPP case */
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
          int _len_header0 = 1;
          struct TYPE_3__ * header = (struct TYPE_3__ *) malloc(_len_header0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_header0; _i0++) {
            header[_i0].Layer_nb = ((-2 * (next_i()%2)) + 1) * next_i();
        header[_i0].Msg_length = ((-2 * (next_i()%2)) + 1) * next_i();
        header[_i0].Msg_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        header[_i0].CSn_Id = ((-2 * (next_i()%2)) + 1) * next_i();
        header[_i0].Class_Id = ((-2 * (next_i()%2)) + 1) * next_i();
        header[_i0].last_byte = ((-2 * (next_i()%2)) + 1) * next_i();
        header[_i0].Id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          jpt_init_msg_header(header);
          free(header);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
