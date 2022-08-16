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
struct TYPE_3__ {int last_line_num; scalar_t__ allocated_len; scalar_t__ len; int /*<<< orphan*/ * str; } ;
typedef  TYPE_1__ TokenString ;

/* Variables and functions */

void tok_str_new(TokenString *s)
{
	s->str = NULL;
	s->len = 0;
	s->allocated_len = 0;
	s->last_line_num = -1;
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
          int _len_s0 = 1;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].last_line_num = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].allocated_len = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__str0 = 1;
          s[_i0].str = (int *) malloc(_len_s__i0__str0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__str0; _j0++) {
            s[_i0].str[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          tok_str_new(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].str);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
