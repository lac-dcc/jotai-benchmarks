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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct TYPE_3__ {unsigned long length; } ;
typedef  TYPE_1__ skiplist ;

/* Variables and functions */

unsigned long skiplistLength(skiplist *sl) {
    return sl->length;
}

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
          int _len_sl0 = 65025;
          struct TYPE_3__ * sl = (struct TYPE_3__ *) malloc(_len_sl0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_sl0; _i0++) {
              sl[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          unsigned long benchRet = skiplistLength(sl);
          printf("%lu\n", benchRet); 
          free(sl);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_sl0 = 100;
          struct TYPE_3__ * sl = (struct TYPE_3__ *) malloc(_len_sl0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_sl0; _i0++) {
              sl[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          unsigned long benchRet = skiplistLength(sl);
          printf("%lu\n", benchRet); 
          free(sl);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_sl0 = 1;
          struct TYPE_3__ * sl = (struct TYPE_3__ *) malloc(_len_sl0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_sl0; _i0++) {
              sl[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          unsigned long benchRet = skiplistLength(sl);
          printf("%lu\n", benchRet); 
          free(sl);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
