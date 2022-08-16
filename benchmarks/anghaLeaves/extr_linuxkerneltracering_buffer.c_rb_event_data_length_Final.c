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
struct ring_buffer_event {int type_len; unsigned int* array; } ;

/* Variables and functions */
 unsigned int RB_ALIGNMENT ; 
 int RB_EVNT_HDR_SIZE ; 

__attribute__((used)) static unsigned
rb_event_data_length(struct ring_buffer_event *event)
{
	unsigned length;

	if (event->type_len)
		length = event->type_len * RB_ALIGNMENT;
	else
		length = event->array[0];
	return length + RB_EVNT_HDR_SIZE;
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
          int _len_event0 = 1;
          struct ring_buffer_event * event = (struct ring_buffer_event *) malloc(_len_event0*sizeof(struct ring_buffer_event));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
            event[_i0].type_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_event__i0__array0 = 1;
          event[_i0].array = (unsigned int *) malloc(_len_event__i0__array0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_event__i0__array0; _j0++) {
            event[_i0].array[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = rb_event_data_length(event);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_event0; _aux++) {
          free(event[_aux].array);
          }
          free(event);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
