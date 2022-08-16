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
typedef  int uint8_t ;

/* Variables and functions */

__attribute__((used)) static int extract_component(int yo0, int yo1, int code)
{
    int yo;

    if (yo0 == yo1) {
        yo = yo0;
    } else if (code == 0) {
        yo = yo0;
    } else if (code == 1) {
        yo = yo1;
    } else {
        if (yo0 > yo1) {
            yo = (uint8_t) (((8 - code) * yo0 +
                             (code - 1) * yo1) / 7);
        } else {
            if (code == 6) {
                yo = 0;
            } else if (code == 7) {
                yo = 255;
            } else {
                yo = (uint8_t) (((6 - code) * yo0 +
                                 (code - 1) * yo1) / 5);
            }
        }
    }

    return yo;
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
          int yo0 = 100;
          int yo1 = 100;
          int code = 100;
          int benchRet = extract_component(yo0,yo1,code);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int yo0 = 255;
          int yo1 = 255;
          int code = 255;
          int benchRet = extract_component(yo0,yo1,code);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int yo0 = 10;
          int yo1 = 10;
          int code = 10;
          int benchRet = extract_component(yo0,yo1,code);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
