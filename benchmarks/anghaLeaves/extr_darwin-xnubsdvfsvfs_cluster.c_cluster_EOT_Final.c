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
typedef  TYPE_1__* buf_t ;
struct TYPE_4__ {int b_validend; int /*<<< orphan*/  b_flags; } ;

/* Variables and functions */
 int /*<<< orphan*/  B_EOT ; 

__attribute__((used)) static void
cluster_EOT(buf_t cbp_head, buf_t cbp_tail, int zero_offset)
{
        cbp_head->b_validend = zero_offset;
        cbp_tail->b_flags |= B_EOT;
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
          int zero_offset = 100;
          int _len_cbp_head0 = 1;
          struct TYPE_4__ * cbp_head = (struct TYPE_4__ *) malloc(_len_cbp_head0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_cbp_head0; _i0++) {
            cbp_head[_i0].b_validend = ((-2 * (next_i()%2)) + 1) * next_i();
        cbp_head[_i0].b_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cbp_tail0 = 1;
          struct TYPE_4__ * cbp_tail = (struct TYPE_4__ *) malloc(_len_cbp_tail0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_cbp_tail0; _i0++) {
            cbp_tail[_i0].b_validend = ((-2 * (next_i()%2)) + 1) * next_i();
        cbp_tail[_i0].b_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cluster_EOT(cbp_head,cbp_tail,zero_offset);
          free(cbp_head);
          free(cbp_tail);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
