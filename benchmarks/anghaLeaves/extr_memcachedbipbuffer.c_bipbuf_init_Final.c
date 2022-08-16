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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {unsigned int size; scalar_t__ b_inuse; scalar_t__ b_end; scalar_t__ a_end; scalar_t__ a_start; } ;
typedef  TYPE_1__ bipbuf_t ;

/* Variables and functions */

void bipbuf_init(bipbuf_t* me, const unsigned int size)
{
    me->a_start = me->a_end = me->b_end = 0;
    me->size = size;
    me->b_inuse = 0;
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
          const unsigned int size = 100;
          int _len_me0 = 1;
          struct TYPE_3__ * me = (struct TYPE_3__ *) malloc(_len_me0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_me0; _i0++) {
            me[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        me[_i0].b_inuse = ((-2 * (next_i()%2)) + 1) * next_i();
        me[_i0].b_end = ((-2 * (next_i()%2)) + 1) * next_i();
        me[_i0].a_end = ((-2 * (next_i()%2)) + 1) * next_i();
        me[_i0].a_start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bipbuf_init(me,size);
          free(me);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
