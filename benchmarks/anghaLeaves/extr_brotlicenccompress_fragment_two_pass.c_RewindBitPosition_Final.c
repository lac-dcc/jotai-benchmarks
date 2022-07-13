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
       0            big-arr\n\
       1            big-arr-10x\n\
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
typedef  int /*<<< orphan*/  uint8_t ;

/* Variables and functions */

__attribute__((used)) static void RewindBitPosition(const size_t new_storage_ix,
                              size_t* storage_ix, uint8_t* storage) {
  const size_t bitpos = new_storage_ix & 7;
  const size_t mask = (1u << bitpos) - 1;
  storage[new_storage_ix >> 3] &= (uint8_t)mask;
  *storage_ix = new_storage_ix;
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

    // big-arr
    case 0:
    {
          const unsigned long new_storage_ix = 255;
          int _len_storage_ix0 = 65025;
          unsigned long * storage_ix = (unsigned long *) malloc(_len_storage_ix0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_storage_ix0; _i0++) {
            storage_ix[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_storage0 = 65025;
          int * storage = (int *) malloc(_len_storage0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_storage0; _i0++) {
            storage[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          RewindBitPosition(new_storage_ix,storage_ix,storage);
          free(storage_ix);
          free(storage);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          const unsigned long new_storage_ix = 10;
          int _len_storage_ix0 = 100;
          unsigned long * storage_ix = (unsigned long *) malloc(_len_storage_ix0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_storage_ix0; _i0++) {
            storage_ix[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_storage0 = 100;
          int * storage = (int *) malloc(_len_storage0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_storage0; _i0++) {
            storage[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          RewindBitPosition(new_storage_ix,storage_ix,storage);
          free(storage_ix);
          free(storage);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
