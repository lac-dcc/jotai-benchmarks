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
struct srp_target_port {int ch_count; TYPE_1__* ch; } ;
struct TYPE_2__ {scalar_t__ connected; } ;

/* Variables and functions */

__attribute__((used)) static int srp_connected_ch(struct srp_target_port *target)
{
	int i, c = 0;

	for (i = 0; i < target->ch_count; i++)
		c += target->ch[i].connected;

	return c;
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
          int _len_target0 = 1;
          struct srp_target_port * target = (struct srp_target_port *) malloc(_len_target0*sizeof(struct srp_target_port));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
            target[_i0].ch_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_target__i0__ch0 = 1;
          target[_i0].ch = (struct TYPE_2__ *) malloc(_len_target__i0__ch0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_target__i0__ch0; _j0++) {
            target[_i0].ch->connected = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = srp_connected_ch(target);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_target0; _aux++) {
          free(target[_aux].ch);
          }
          free(target);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
