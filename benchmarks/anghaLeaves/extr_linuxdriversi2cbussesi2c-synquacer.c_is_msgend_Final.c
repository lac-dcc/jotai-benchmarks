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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct synquacer_i2c {scalar_t__ msg_ptr; TYPE_1__* msg; } ;
struct TYPE_2__ {scalar_t__ len; } ;

/* Variables and functions */

__attribute__((used)) static inline int is_msgend(struct synquacer_i2c *i2c)
{
	return i2c->msg_ptr >= i2c->msg->len;
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
          int _len_i2c0 = 1;
          struct synquacer_i2c * i2c = (struct synquacer_i2c *) malloc(_len_i2c0*sizeof(struct synquacer_i2c));
          for(int _i0 = 0; _i0 < _len_i2c0; _i0++) {
            i2c[_i0].msg_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_i2c__i0__msg0 = 1;
          i2c[_i0].msg = (struct TYPE_2__ *) malloc(_len_i2c__i0__msg0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_i2c__i0__msg0; _j0++) {
            i2c[_i0].msg->len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = is_msgend(i2c);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_i2c0; _aux++) {
          free(i2c[_aux].msg);
          }
          free(i2c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
