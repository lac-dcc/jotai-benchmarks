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
struct midi_buffer {int command_prev; scalar_t__ full; scalar_t__ pos_write; scalar_t__ pos_read; } ;

/* Variables and functions */

void line6_midibuf_reset(struct midi_buffer *this)
{
	this->pos_read = this->pos_write = this->full = 0;
	this->command_prev = -1;
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
          int _len_this0 = 1;
          struct midi_buffer * this = (struct midi_buffer *) malloc(_len_this0*sizeof(struct midi_buffer));
          for(int _i0 = 0; _i0 < _len_this0; _i0++) {
            this[_i0].command_prev = ((-2 * (next_i()%2)) + 1) * next_i();
        this[_i0].full = ((-2 * (next_i()%2)) + 1) * next_i();
        this[_i0].pos_write = ((-2 * (next_i()%2)) + 1) * next_i();
        this[_i0].pos_read = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          line6_midibuf_reset(this);
          free(this);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
