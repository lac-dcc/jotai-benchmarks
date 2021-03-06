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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct event_reader {scalar_t__ next_serial_number; } ;
struct event_buffer {scalar_t__ next_serial_number; } ;

/* Variables and functions */

__attribute__((used)) static inline int event_available(struct event_buffer *b, struct event_reader *r)
{
	return (r->next_serial_number < b->next_serial_number);
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
          int _len_b0 = 1;
          struct event_buffer * b = (struct event_buffer *) malloc(_len_b0*sizeof(struct event_buffer));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0].next_serial_number = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r0 = 1;
          struct event_reader * r = (struct event_reader *) malloc(_len_r0*sizeof(struct event_reader));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0].next_serial_number = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = event_available(b,r);
          printf("%d\n", benchRet); 
          free(b);
          free(r);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_b0 = 65025;
          struct event_buffer * b = (struct event_buffer *) malloc(_len_b0*sizeof(struct event_buffer));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0].next_serial_number = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r0 = 65025;
          struct event_reader * r = (struct event_reader *) malloc(_len_r0*sizeof(struct event_reader));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0].next_serial_number = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = event_available(b,r);
          printf("%d\n", benchRet); 
          free(b);
          free(r);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_b0 = 100;
          struct event_buffer * b = (struct event_buffer *) malloc(_len_b0*sizeof(struct event_buffer));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0].next_serial_number = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r0 = 100;
          struct event_reader * r = (struct event_reader *) malloc(_len_r0*sizeof(struct event_reader));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0].next_serial_number = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = event_available(b,r);
          printf("%d\n", benchRet); 
          free(b);
          free(r);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
