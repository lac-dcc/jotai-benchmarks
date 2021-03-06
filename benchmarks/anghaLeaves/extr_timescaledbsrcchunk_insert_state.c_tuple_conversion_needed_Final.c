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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  TYPE_1__* TupleDesc ;
struct TYPE_4__ {scalar_t__ natts; scalar_t__ tdhasoid; } ;

/* Variables and functions */

__attribute__((used)) static inline bool
tuple_conversion_needed(TupleDesc indesc, TupleDesc outdesc)
{
	return (indesc->natts != outdesc->natts || indesc->tdhasoid != outdesc->tdhasoid);
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
          int _len_indesc0 = 1;
          struct TYPE_4__ * indesc = (struct TYPE_4__ *) malloc(_len_indesc0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_indesc0; _i0++) {
            indesc[_i0].natts = ((-2 * (next_i()%2)) + 1) * next_i();
        indesc[_i0].tdhasoid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_outdesc0 = 1;
          struct TYPE_4__ * outdesc = (struct TYPE_4__ *) malloc(_len_outdesc0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_outdesc0; _i0++) {
            outdesc[_i0].natts = ((-2 * (next_i()%2)) + 1) * next_i();
        outdesc[_i0].tdhasoid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tuple_conversion_needed(indesc,outdesc);
          printf("%d\n", benchRet); 
          free(indesc);
          free(outdesc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_indesc0 = 65025;
          struct TYPE_4__ * indesc = (struct TYPE_4__ *) malloc(_len_indesc0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_indesc0; _i0++) {
            indesc[_i0].natts = ((-2 * (next_i()%2)) + 1) * next_i();
        indesc[_i0].tdhasoid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_outdesc0 = 65025;
          struct TYPE_4__ * outdesc = (struct TYPE_4__ *) malloc(_len_outdesc0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_outdesc0; _i0++) {
            outdesc[_i0].natts = ((-2 * (next_i()%2)) + 1) * next_i();
        outdesc[_i0].tdhasoid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tuple_conversion_needed(indesc,outdesc);
          printf("%d\n", benchRet); 
          free(indesc);
          free(outdesc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_indesc0 = 100;
          struct TYPE_4__ * indesc = (struct TYPE_4__ *) malloc(_len_indesc0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_indesc0; _i0++) {
            indesc[_i0].natts = ((-2 * (next_i()%2)) + 1) * next_i();
        indesc[_i0].tdhasoid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_outdesc0 = 100;
          struct TYPE_4__ * outdesc = (struct TYPE_4__ *) malloc(_len_outdesc0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_outdesc0; _i0++) {
            outdesc[_i0].natts = ((-2 * (next_i()%2)) + 1) * next_i();
        outdesc[_i0].tdhasoid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tuple_conversion_needed(indesc,outdesc);
          printf("%d\n", benchRet); 
          free(indesc);
          free(outdesc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
