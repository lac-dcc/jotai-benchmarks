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
struct zoran {int JPEG_min_missed; scalar_t__ JPEG_max_missed; scalar_t__ JPEG_missed; scalar_t__ END_event_missed; scalar_t__ JPEG_1; scalar_t__ JPEG_0; scalar_t__ JPEG_out; scalar_t__ JPEG_in; scalar_t__ IRQ1_out; scalar_t__ IRQ1_in; scalar_t__ field_counter; scalar_t__ intr_counter_JPEGRepIRQ; scalar_t__ intr_counter_CodRepIRQ; scalar_t__ intr_counter_GIRQ0; scalar_t__ intr_counter_GIRQ1; } ;

/* Variables and functions */

void
clear_interrupt_counters (struct zoran *zr)
{
	zr->intr_counter_GIRQ1 = 0;
	zr->intr_counter_GIRQ0 = 0;
	zr->intr_counter_CodRepIRQ = 0;
	zr->intr_counter_JPEGRepIRQ = 0;
	zr->field_counter = 0;
	zr->IRQ1_in = 0;
	zr->IRQ1_out = 0;
	zr->JPEG_in = 0;
	zr->JPEG_out = 0;
	zr->JPEG_0 = 0;
	zr->JPEG_1 = 0;
	zr->END_event_missed = 0;
	zr->JPEG_missed = 0;
	zr->JPEG_max_missed = 0;
	zr->JPEG_min_missed = 0x7fffffff;
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
          int _len_zr0 = 1;
          struct zoran * zr = (struct zoran *) malloc(_len_zr0*sizeof(struct zoran));
          for(int _i0 = 0; _i0 < _len_zr0; _i0++) {
            zr[_i0].JPEG_min_missed = ((-2 * (next_i()%2)) + 1) * next_i();
        zr[_i0].JPEG_max_missed = ((-2 * (next_i()%2)) + 1) * next_i();
        zr[_i0].JPEG_missed = ((-2 * (next_i()%2)) + 1) * next_i();
        zr[_i0].END_event_missed = ((-2 * (next_i()%2)) + 1) * next_i();
        zr[_i0].JPEG_1 = ((-2 * (next_i()%2)) + 1) * next_i();
        zr[_i0].JPEG_0 = ((-2 * (next_i()%2)) + 1) * next_i();
        zr[_i0].JPEG_out = ((-2 * (next_i()%2)) + 1) * next_i();
        zr[_i0].JPEG_in = ((-2 * (next_i()%2)) + 1) * next_i();
        zr[_i0].IRQ1_out = ((-2 * (next_i()%2)) + 1) * next_i();
        zr[_i0].IRQ1_in = ((-2 * (next_i()%2)) + 1) * next_i();
        zr[_i0].field_counter = ((-2 * (next_i()%2)) + 1) * next_i();
        zr[_i0].intr_counter_JPEGRepIRQ = ((-2 * (next_i()%2)) + 1) * next_i();
        zr[_i0].intr_counter_CodRepIRQ = ((-2 * (next_i()%2)) + 1) * next_i();
        zr[_i0].intr_counter_GIRQ0 = ((-2 * (next_i()%2)) + 1) * next_i();
        zr[_i0].intr_counter_GIRQ1 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          clear_interrupt_counters(zr);
          free(zr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
