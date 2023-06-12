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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  int mp_uint_t ;

/* Variables and functions */

void mp_hal_delay_ms(mp_uint_t ms) {
    // tuned for fixed CPU frequency
    for (int i = ms; i > 0; i--) {
        for (volatile int j = 0; j < 5000; j++) {
        }
    }
}

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
          int ms = 100;
        
          mp_hal_delay_ms(ms);
        
        break;
    }
    // big-arr
    case 1:
    {
          int ms = 255;
        
          mp_hal_delay_ms(ms);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ms = 10;
        
          mp_hal_delay_ms(ms);
        
        break;
    }
    // empty
    case 3:
    {
          int ms = ((-2 * (next_i()%2)) + 1) * next_i();
        
          mp_hal_delay_ms(ms);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
