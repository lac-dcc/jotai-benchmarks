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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ h; } ;
typedef  TYPE_1__ Bucket ;

/* Variables and functions */

__attribute__((used)) static int zend_jit_cmp_labels(Bucket *b1, Bucket *b2)
{
	return ((b1->h > b2->h) > 0) ? 1 : -1;
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
          int _len_b10 = 1;
          struct TYPE_4__ * b1 = (struct TYPE_4__ *) malloc(_len_b10*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_b10; _i0++) {
            b1[_i0].h = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b20 = 1;
          struct TYPE_4__ * b2 = (struct TYPE_4__ *) malloc(_len_b20*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_b20; _i0++) {
            b2[_i0].h = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = zend_jit_cmp_labels(b1,b2);
          printf("%d\n", benchRet); 
          free(b1);
          free(b2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
