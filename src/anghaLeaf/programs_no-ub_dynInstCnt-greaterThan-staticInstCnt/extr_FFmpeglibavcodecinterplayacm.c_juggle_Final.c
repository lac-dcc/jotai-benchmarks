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

/* Variables and functions */

__attribute__((used)) static void juggle(int *wrap_p, int *block_p, unsigned sub_len, unsigned sub_count)
{
    unsigned i, j;
    int *p, r0, r1, r2, r3;

    for (i = 0; i < sub_len; i++) {
        p = block_p;
        r0 = wrap_p[0];
        r1 = wrap_p[1];
        for (j = 0; j < sub_count/2; j++) {
            r2 = *p;
            *p = r1 * 2 + (r0 + r2);
            p += sub_len;
            r3 = *p;
            *p = r2 * 2 - (r1 + r3);
            p += sub_len;
            r0 = r2;
            r1 = r3;
        }

        *wrap_p++ = r0;
        *wrap_p++ = r1;
        block_p++;
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

    // big-arr
    case 0:
    {
          unsigned int sub_len = 255;
          unsigned int sub_count = 255;
          int _len_wrap_p0 = 65025;
          int * wrap_p = (int *) malloc(_len_wrap_p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_wrap_p0; _i0++) {
            wrap_p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_block_p0 = 65025;
          int * block_p = (int *) malloc(_len_block_p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_block_p0; _i0++) {
            block_p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          juggle(wrap_p,block_p,sub_len,sub_count);
          free(wrap_p);
          free(block_p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
