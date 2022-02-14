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
struct d_info_checkpoint {int /*<<< orphan*/  expansion; int /*<<< orphan*/  next_sub; int /*<<< orphan*/  next_comp; int /*<<< orphan*/  n; } ;
struct d_info {int /*<<< orphan*/  expansion; int /*<<< orphan*/  next_sub; int /*<<< orphan*/  next_comp; int /*<<< orphan*/  n; } ;

/* Variables and functions */

__attribute__((used)) static void
d_checkpoint (struct d_info *di, struct d_info_checkpoint *checkpoint)
{
  checkpoint->n = di->n;
  checkpoint->next_comp = di->next_comp;
  checkpoint->next_sub = di->next_sub;
  checkpoint->expansion = di->expansion;
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
          int _len_di0 = 1;
          struct d_info * di = (struct d_info *) malloc(_len_di0*sizeof(struct d_info));
          for(int _i0 = 0; _i0 < _len_di0; _i0++) {
            di->expansion = ((-2 * (next_i()%2)) + 1) * next_i();
        di->next_sub = ((-2 * (next_i()%2)) + 1) * next_i();
        di->next_comp = ((-2 * (next_i()%2)) + 1) * next_i();
        di->n = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_checkpoint0 = 1;
          struct d_info_checkpoint * checkpoint = (struct d_info_checkpoint *) malloc(_len_checkpoint0*sizeof(struct d_info_checkpoint));
          for(int _i0 = 0; _i0 < _len_checkpoint0; _i0++) {
            checkpoint->expansion = ((-2 * (next_i()%2)) + 1) * next_i();
        checkpoint->next_sub = ((-2 * (next_i()%2)) + 1) * next_i();
        checkpoint->next_comp = ((-2 * (next_i()%2)) + 1) * next_i();
        checkpoint->n = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          d_checkpoint(di,checkpoint);
          free(di);
          free(checkpoint);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
