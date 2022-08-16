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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u16 ;
struct TYPE_3__ {int /*<<< orphan*/  ox_id; int /*<<< orphan*/  rx_id; } ;
struct TYPE_4__ {TYPE_1__ ex_id; } ;
struct fcpio_tag {TYPE_2__ u; } ;

/* Variables and functions */

__attribute__((used)) static inline void
fcpio_tag_exid_dec(struct fcpio_tag *tag, u16 *ox_id, u16 *rx_id)
{
	*rx_id = tag->u.ex_id.rx_id;
	*ox_id = tag->u.ex_id.ox_id;
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
          int _len_tag0 = 1;
          struct fcpio_tag * tag = (struct fcpio_tag *) malloc(_len_tag0*sizeof(struct fcpio_tag));
          for(int _i0 = 0; _i0 < _len_tag0; _i0++) {
            tag[_i0].u.ex_id.ox_id = ((-2 * (next_i()%2)) + 1) * next_i();
        tag[_i0].u.ex_id.rx_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ox_id0 = 1;
          int * ox_id = (int *) malloc(_len_ox_id0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ox_id0; _i0++) {
            ox_id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rx_id0 = 1;
          int * rx_id = (int *) malloc(_len_rx_id0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rx_id0; _i0++) {
            rx_id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fcpio_tag_exid_dec(tag,ox_id,rx_id);
          free(tag);
          free(ox_id);
          free(rx_id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
